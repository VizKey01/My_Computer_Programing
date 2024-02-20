Select name, money
from trainer
where money > (Select avg(money) from trainer);