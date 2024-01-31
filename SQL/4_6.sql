SELECT
    p.customer_id,
    p.customer_name
FROM
    customer p
JOIN
    ordert ol ON p.customer_id = ol.customer_id
GROUP BY
    p.customer_id, p.customer_name	
HAVING
    COUNT(ol.customer_id) = (
        SELECT
            MAX(order_count)
        FROM
            (SELECT
                COUNT(customer_id) AS order_count
            FROM
                ordert
            GROUP BY
                customer_id) AS subquery
    )
ORDER BY COUNT(ol.customer_id) DESC;