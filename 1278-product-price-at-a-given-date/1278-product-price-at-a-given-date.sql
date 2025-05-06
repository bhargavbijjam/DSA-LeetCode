# Write your MySQL query statement below
select distinct a.product_id,IFNULL(b.price,10) as price from products as a
LEFT JOIN 
(select product_id,new_price as price from products
where (product_id,change_date) IN (select product_id,max(change_date) from products 
where change_date<='2019-08-16'
group by product_id)) as b ON a.product_id = b.product_id