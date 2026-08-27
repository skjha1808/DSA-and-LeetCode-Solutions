# Write your MySQL query statement below
select product_name, year, price
from sales
join product
on product.product_id = sales.product_id;