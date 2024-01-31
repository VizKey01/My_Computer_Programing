select postal_code, Count(*) as customer_numbers
from customer
group by postal_code
ORDER BY COUNT(*) DESC;
