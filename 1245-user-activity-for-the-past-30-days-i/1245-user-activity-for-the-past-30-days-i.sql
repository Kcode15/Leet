# Write your MySQL query statement below
Select activity_date as day,count(distinct user_id) as active_users 
from Activity
WHERE DATEDIFF('2019-07-27', activity_date) BETWEEN 0 AND 29
GROUP BY activity_date;