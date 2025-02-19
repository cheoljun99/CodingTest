-- 코드를 입력하세요
SELECT HOUR(DATETIME) AS hour, COUNT(*)  
FROM ANIMAL_OUTS  
GROUP BY hour  
HAVING hour >= 9 AND hour < 20  
ORDER BY hour;