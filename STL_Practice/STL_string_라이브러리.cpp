#include<iostream>
#include<string>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string str1 = "";
	string str2;

	if (str1 == "") {
		cout << "str1은 \"\"로 초기화 했음" << endl;
	}
	if (str2 == "") {
		cout << "str2는 초기화 안했지만 \"\"잘 들어감" << endl;
	}
	cout << "str1의 사이즈 : " << str1.size() << endl;
	cout << "str2의 사이즈 : " << str1.size() << endl;
	
	cout << "stoi 실험" << endl;

	std::string str3 = "45";
	std::string str4 = "3.14159";
	std::string str5 = "31337 with words";
	std::string str6 = "words and 2";
	std::string str7 = "3000000000000000";

	int myint1 = std::stoi(str3);
	int myint2 = std::stoi(str4);

	// 이 경우 해석할 수 있는 문자 위치 까지 읽어들인다.
	int myint3 = std::stoi(str5);

	// 아래의 경우 std::invalid_argument 를 던짐
    int myint4;
    try {
        myint4 = std::stoi(str6);
    } catch (const std::invalid_argument& e) {
        std::cerr << "Invalid argument: " << e.what() << std::endl;
     
    }
	catch (const std::out_of_range& e) {
		std::cerr << "out_of_range: " << e.what() << std::endl;

	}

	int myint5;
	try {
		myint5 = std::stoi(str7);
	}
	catch (const std::invalid_argument& e) {
		std::cerr << "Invalid argument: " << e.what() << std::endl;

	}
	catch (const std::out_of_range& e) {
		std::cerr << "out_of_range: " << e.what() << std::endl;

	}

	std::cout << "std::stoi(\"" << str3 << "\") is " << myint1 << '\n';
	std::cout << "std::stoi(\"" << str4 << "\") is " << myint2 << '\n';
	std::cout << "std::stoi(\"" << str5 << "\") is " << myint3 << '\n';


	
}