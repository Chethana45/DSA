# Write your MySQL query statement below
select s.year ,s.price, p.product_name from Product p  join sales s on p.product_id=s.product_id;