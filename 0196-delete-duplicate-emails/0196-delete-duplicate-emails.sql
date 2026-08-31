# Write your MySQL query statement below
delete e1
from person e1
join person e2
on e1.email = e2.email
where e1.id > e2.id