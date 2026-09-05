# Write your MySQL query statement below
(select name as results
from users u
join movieRating m
on u.user_id = m.user_id
group by u.user_id
order by count(*) desc, u.name asc
limit 1)

union all

(select title as results
from movies m1
join movieRating m2
on m1.movie_id = m2.movie_id
where m2.created_at between '2020-02-01' and '2020-02-29'
group by m1.movie_id
order by avg(rating) desc, m1.title asc
limit 1);