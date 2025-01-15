-- Write your PostgreSQL query statement below

SELECT
    pr.product_name,
    sa.year,
    sa.price
FROM
    Sales sa
JOIN
    Product pr ON sa.product_id = pr.product_id