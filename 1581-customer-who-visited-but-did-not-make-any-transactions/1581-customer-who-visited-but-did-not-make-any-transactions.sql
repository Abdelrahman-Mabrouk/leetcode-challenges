# Write your MySQL query statement below
select  distinct customer_id , count( customer_id) as count_no_trans from visits v
where  v.visit_id not in (select  visit_id from Transactions ) 
GROUP BY
    v.customer_id;