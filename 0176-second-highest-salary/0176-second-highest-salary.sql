# Write your MySQL query statement below
-- select distinct salary as SecondHighestSalary
-- from employee 
-- order by salary desc
-- limit 1 offset 1;

select max(salary) as secondhighestsalary
from (
    select distinct salary
    from employee
    order by salary desc
    limit 1 offset 1
) as second_highest_salary