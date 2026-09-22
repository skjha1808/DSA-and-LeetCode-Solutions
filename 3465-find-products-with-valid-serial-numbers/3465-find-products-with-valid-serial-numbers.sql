# Write your MySQL query statement below
select product_id, product_name, description from products
where REGEXP_LIKE(description, '\\bSN[0-9]{4}-[0-9]{4}\\b', 'c')
order by product_id;