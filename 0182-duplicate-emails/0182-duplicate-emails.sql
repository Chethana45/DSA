# Write your MySQL query statement below
SELECT email
FROM person
GROUP BY Email
HAVING COUNT(*)>1;