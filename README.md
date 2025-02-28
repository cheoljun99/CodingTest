# CodingTest
CodingTest

## String Split
C++로 Split 구현하기 stringstream 사용
```
vector<string> splitString(string& str,char delimeter) {

	vector<string> result;
	stringstream ss(str);
	string token="";

	while (getline(ss, token, delimeter)) {
		result.push_back(token);
	}

	return result;
}
```
## String Find
string에서 원소찾기

시간복잡도: O(N)
```
#include<string>

int main(){
	string str = "ABC*DEF";
	int pos = str.find('*');//인덱스 반환
}

```

## 배열 원소 Count
배열 자료구조에서 특정 원소 개수 찾기 algorithm의 count(begin, end, value)이용

시간복잡도: O(N)
```
#include <algorithm>
...

int main(){

 vector<int> vec = {1,2,3,4,5};
 string str = "ABCDEF";
 int arr[5] = {6,7,8,9,10};
 int oneCount = count(vec.begin(),vec.end(),1);
 int ACount=count(vec.begin(),vec.end(),'A');
 int sixCount = count(arr,arr+5,2) //배열은 인자값이 포인터ㄴㄴ
 
}
```

## 배열 원소 Reverse
배열 자료구조 순서 뒤집기

시간복잡도: O(N)
```
#include <algorithm>
...

int main(){

 vector<int> vec = {1,2,3,4,5};
 string str = "ABCDEF";
 int arr[5] = {1,2,3,4,5};

 reverse(vec.begin(),vec.end()); //반환값은 void형
 reverse(str.begin(),str.end());
 reverse(arr,arr+5); //배열은 인자값이 포인터
 
}
```

## 배열 원소 Find
배열에서 원소 찾기

시간복잡도: O(N)

```
#include <algorithm>
...

int main(){

 vector<int> vec = {1,2,3,4,5};
 string str = "ABCDEF";
 int arr[5] = {1,2,3,4,5};
 
 vector<int>::iterator oneIter = find(vec.begin(),vec.end(),1);
 string::iterator AIter = find(vec.begin(),vec.end(),'A');
 int* onePointer = find(arr,arr+5,1); // 배열은 포인터 반환

}
```