# Write your MySQL query statement below
select round(
    count(j.customer_id) * 100 /
    (select count(distinct customer_id)
    from delivery),
    2
) as immediate_percentage
from delivery d
join (
    (select customer_id, min(order_date) as first_order_date
    from delivery
    group by customer_id)
) j
on d.customer_id = j.customer_id
and j.first_order_date = d.customer_pref_delivery_date