-- 코드를 입력하세요

SELECT CATEGORY,SUM(SUMSALES) AS SALES
FROM BOOK A
INNER JOIN (SELECT BOOK_ID, SUM(SALES) AS SUMSALES
FROM BOOK_SALES
WHERE SALES_DATE LIKE "2022-01%"
GROUP BY BOOK_ID) B ON A.BOOK_ID = B.BOOK_ID
GROUP BY CATEGORY
ORDER BY CATEGORY ASC
