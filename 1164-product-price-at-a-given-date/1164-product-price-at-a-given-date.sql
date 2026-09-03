# Write your MySQL query statement below
select p.product_id, p.new_price as price
from products p
join (
    select product_id, max(change_date) as latest_date
    from products
    where change_date <= '2019-08-16'
    group by product_id
) x
on p.product_id = x.product_id
and p.change_date = x.latest_date

union

select product_id, 10 as price
from products
group by product_id
having min(change_date) > '2019-08-16'