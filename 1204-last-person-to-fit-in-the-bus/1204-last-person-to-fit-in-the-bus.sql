# Write your MySQL query statement below
select person_name
 from (
    select person_name, turn,
    sum(weight) over (order by turn) as running_total
    from queue
) q
where running_total <= 1000
order by turn desc limit 1;