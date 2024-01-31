SELECT
    p.customer_id,
    p.customer_name
FROM
    customer p
-- LEFT JOIN
--     ordert ol ON p.customer_id = ol.customer_id
-- -- where 
-- -- 	order_id = null
Where not exists (
	Select 1
	from ordert ol
	where p.customer_id = ol.customer_id
)
GROUP BY
    p.customer_id, p.customer_name
order by p.customer_id;
;