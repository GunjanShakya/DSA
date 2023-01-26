# Write your MySQL query statement below
SELECT customer_number from Orders 
group by customer_number 
order by count(customer_number) DESC limit 1