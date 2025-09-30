# Write your MySQL query statement below
Select contest_id,round(count(Distinct User_id)*100/(select count(user_id) from Users),2) as percentage from 
Register group by contest_id
order by percentage desc,contest_id;