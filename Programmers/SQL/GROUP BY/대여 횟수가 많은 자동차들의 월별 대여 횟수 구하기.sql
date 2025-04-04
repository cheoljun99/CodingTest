-- 코드를 입력하세요

SELECT CASE 
WHEN SUBSTR(A.START_DATE,6,2) ='08' THEN 8
WHEN SUBSTR(A.START_DATE,6,2) ='09' THEN 9
WHEN SUBSTR(A.START_DATE,6,2) ='10' THEN 10
END AS MONTH, A.CAR_ID, COUNT(*) AS RECORDS
FROM (SELECT CAR_ID,START_DATE,END_DATE
FROM CAR_RENTAL_COMPANY_RENTAL_HISTORY 
WHERE SUBSTR(START_DATE,6,2) ='08' OR SUBSTR(START_DATE,6,2) ='09' OR SUBSTR(START_DATE,6,2) ='10') A
INNER JOIN (SELECT CAR_ID, COUNT(*) AS CARCOUNT
FROM CAR_RENTAL_COMPANY_RENTAL_HISTORY 
WHERE SUBSTR(START_DATE,6,2) ='08' OR SUBSTR(START_DATE,6,2) ='09' OR SUBSTR(START_DATE,6,2) ='10'
GROUP BY CAR_ID) B ON A.CAR_ID=B.CAR_ID
WHERE B.CARCOUNT >= 5
GROUP BY MONTH,A.CAR_ID
ORDER BY MONTH ASC, A.CAR_ID DESC