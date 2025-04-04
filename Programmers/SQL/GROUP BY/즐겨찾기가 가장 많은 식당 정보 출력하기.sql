-- 코드를 입력하세요
SELECT A.FOOD_TYPE,A.REST_ID,A.REST_NAME,A.FAVORITES
FROM REST_INFO A

WHERE (A.FOOD_TYPE, A.FAVORITES) IN (SELECT FOOD_TYPE,MAX(FAVORITES) AS FAVORITES
FROM REST_INFO
GROUP BY FOOD_TYPE)
ORDER BY A.FOOD_TYPE DESC