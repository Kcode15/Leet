# Write your MySQL query statement below
Select w1.id from Weather as w1 ,Weather as w2 where (w1.temperature >w2.temperature && Datediff(w1.recordDate,w2.recordDate)=1);