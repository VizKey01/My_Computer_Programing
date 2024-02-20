CREATE TABLE address_audit_log(customer_name VARCHAR, previous_addr VARCHAR, exec_time timestamp NOT null);

CREATE OR REPLACE FUNCTION log_address_history () 
	RETURNS trigger 
	LANGUAGE plpgsql
	AS
$$
BEGIN
    insert into address_audit_log
		values(old.customer_name, ols.customer_street, now());
	return new;
END;
$$

CREATE trigger updating_new_address
	before UPDATE
	on customer
	for each row
	execute procedure log_address_history();

select * from address_audit_log;