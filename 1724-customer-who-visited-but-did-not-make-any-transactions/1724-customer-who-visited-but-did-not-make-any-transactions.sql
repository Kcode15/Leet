# Write your MySQL query statement below
Select customer_id, count(customer_id) as count_no_trans from Visits where 
visit_id not in (select visit_id from transactions) 
group by customer_id
order by count(customer_id);