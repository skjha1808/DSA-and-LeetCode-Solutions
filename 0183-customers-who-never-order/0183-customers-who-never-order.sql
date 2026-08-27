# Write your MySQL query statement below
select name as customers
from customers
left join orders
on orders.customerId = customers.id
where customerid is null;