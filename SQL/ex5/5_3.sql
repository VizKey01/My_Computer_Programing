CREATE OR REPLACE FUNCTION get_branches_assets_greater_than(con NUMERIC) 
	RETURNS TABLE ( 
		branch_name VARCHAR,
		branch_city VARCHAR,
		assets NUMERIC
	)
	LANGUAGE plpgsql
	AS
$$
BEGIN
    RETURN QUERY
    SELECT b.branch_name, b.branch_city, b.assets
    FROM b branch
    WHERE b.assets > con;
END;
$$