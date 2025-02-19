-- 코드를 작성해주세요
SELECT COUNT(*) AS FISH_COUNT,
CASE 
WHEN SUBSTR(TIME,6,2) ='01' THEN 1
WHEN SUBSTR(TIME,6,2) ='02' THEN 2
WHEN SUBSTR(TIME,6,2) ='03' THEN 3
WHEN SUBSTR(TIME,6,2) ='04' THEN 4
WHEN SUBSTR(TIME,6,2) ='05' THEN 5
WHEN SUBSTR(TIME,6,2) ='06' THEN 6
WHEN SUBSTR(TIME,6,2) ='07' THEN 7
WHEN SUBSTR(TIME,6,2) ='08' THEN 8
WHEN SUBSTR(TIME,6,2) ='09' THEN 9
WHEN SUBSTR(TIME,6,2) ='10' THEN 10
WHEN SUBSTR(TIME,6,2) ='11' THEN 11
WHEN SUBSTR(TIME,6,2) ='12' THEN 12
END AS MONTH 
FROM FISH_INFO
GROUP BY MONTH
ORDER BY MONTH ASC