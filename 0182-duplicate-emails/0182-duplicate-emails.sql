# Write your MySQL query statement below
SELECT email
FROM PERSON
GROUP BY EMAIL
HAVING COUNT(EMAIL)>1