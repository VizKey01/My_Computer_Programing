SELECT
    sum(p.standard_price * ol.ordered_quantity) as total_payment
FROM
    order_line ol
JOIN
    product p ON ol.product_id = p.product_id
where 
	ol.order_id = 3; 
;