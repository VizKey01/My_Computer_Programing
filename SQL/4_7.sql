SELECT
    p.product_id,
    p.product_description
FROM
    product p
JOIN
    order_line ol ON p.product_id = ol.product_id
GROUP BY
    p.product_id, p.product_description
HAVING
    COUNT(ol.order_id) = (
        SELECT
            MAX(order_count)
        FROM
            (SELECT
                COUNT(order_id) AS order_count,
			 	COUNT(ordered_quantity) AS order_q
            FROM
                order_line
            GROUP BY
                product_id) AS subquery
    )
	AND MAX(ol.ordered_quantity) = (
		SELECT
			MAX(ordered_quantity)
		From
		 order_line
	);
