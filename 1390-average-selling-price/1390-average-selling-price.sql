# Write your MySQL query statement below
Select p.product_id,IFNULL(round(sum(price*units)/sum(units),2), 0)as average_price from Prices p 
left join UnitsSold u on p.product_id = u.product_id 
&& u.purchase_date between p.start_date and p.end_date
group by p.product_id;