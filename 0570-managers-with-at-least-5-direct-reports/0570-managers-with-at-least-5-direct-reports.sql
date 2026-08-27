# Write your MySQL query statement below
select e.name
from employee e
inner join employee m
on e.id = m.managerid
group by m.managerid
having count(*) >= 5;