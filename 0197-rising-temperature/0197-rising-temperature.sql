# Write your MySQL query statement below
select n.id from Weather  t join Weather n where 
n.temperature>(t.temperature) and DATE_SUB(n.recordDate, INTERVAL 1 DAY)=t.recordDate;
