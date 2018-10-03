#include <iostream>
#include <string>

namespace a
{
	int n;

}

namespace b
{
	int n;
}

using namespace std;


int main() {

	a::n = 10;
	b::n = 20;
	//<<는 출력할 것을 분리해주는 역활을 한다.
	//printf("%d %d")처럼 출력할 데이터를 분리해주는 역활
	//namespace 이름 성 std는 성에 해당이 됨 구분을 해주기 위해서
	cout << "hello world!" << 10 << 'c' << endl;

	//endl  은 줄바꿈이다 '\n' 
	std::cout << a::n << std::endl;
	int a;
	int b;

	//cin >> a >> b;
	//cout << a << "+" << b << " = " << a + b;

	char str[] = "hello world";
	string mystr;

	mystr = "hello";
	cout << mystr << endl;

	//배열 형태가 아니닌깐 길이를 줄 필요가 없음
	// 마지막 장점은 string.h 를 해서 strcat 같은 것을 써야되고 string을 붙이고 이러는 것이 c에서는 되게 어려웠음

	string name;

	cout << "이름 입력";
	cin >> name;

	string message = "안녕하세요, " + name + "님.";
	cout << message << endl;

	system("pause");
}

