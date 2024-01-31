SELECT
    p.customer_id,
    p.customer_name,
    COUNT(ol.customer_id) AS order_count
FROM
    customer p
JOIN
    ordert ol ON p.customer_id = ol.customer_id
GROUP BY
    p.customer_id, p.customer_name
ORDER BY order_count DESC
LIMIT 3;