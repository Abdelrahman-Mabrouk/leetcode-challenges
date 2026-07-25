# Write your MySQL query statement below
with o as  ( select *, lag(temperature,1) 
over(ORDER BY recordDate) as old ,
 lag(recordDate,1)over(ORDER BY recordDate) as d
  from Weather )
select id from o
where temperature >  old and DATEDIFF(recordDate ,d) = 1