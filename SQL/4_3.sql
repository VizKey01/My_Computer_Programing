select order_id, order_date
from ordert
group by order_id, order_date
Having customer_id = 10001;