# Write your MySQL query statement below
Select p.product_name,s.year,s.price 
from Product p JOIN 
Sales s on s.product_id = p.product_id