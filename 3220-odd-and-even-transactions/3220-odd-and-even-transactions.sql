# Write your MySQL query statement below
select transaction_date, 
    sum((amount % 2 != 0) * amount) as odd_sum, 
    sum((amount % 2 = 0) * amount) as even_sum  
from transactions
group by transaction_date 
order by transaction_date 