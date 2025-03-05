# Write your MySQL query statement below
select query_name,round((sum(rating/position)/count(rating)),2) as quality, round((sum(rating<3)/(count(*)))*100,2) as poor_query_percentage
from Queries
group by query_name;