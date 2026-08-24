# Write your MySQL query statement below
-- select max(num) as num
-- from mynumbers
-- group by num
-- having count(*)=1
-- order by num desc
-- limit 1;


SELECT MAX(num) AS num
FROM (
    SELECT num
    FROM MyNumbers
    GROUP BY num
    HAVING COUNT(*) = 1
) AS single_numbers;