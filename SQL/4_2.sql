select postal_code, Count(*) as customer_numbers
from customer
group by postal_code
Having Count(*) > 1
ORDER BY COUNT(*) DESC;
