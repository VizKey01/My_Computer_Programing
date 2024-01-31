SELECT
    p.customer_id,
    p.customer_name
FROM
    customer p
JOIN
    ordert ol ON p.customer_id = ol.customer_id
where 
	order_date between '2020-01-10 00:00:00' and '2020-01-15 23:59:59' 
GROUP BY
    p.customer_id, p.customer_name
;