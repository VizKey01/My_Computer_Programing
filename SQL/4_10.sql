SELECT
    product_id,
    product_description,
    product_finish
FROM
    product
WHERE 
    product_finish::text ILIKE '%White%'
ORDER BY 
    product_id;
