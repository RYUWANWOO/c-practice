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
	//<<�� ����� ���� �и����ִ� ��Ȱ�� �Ѵ�.
	//printf("%d %d")ó�� ����� �����͸� �и����ִ� ��Ȱ
	//namespace �̸� �� std�� ���� �ش��� �� ������ ���ֱ� ���ؼ�
	cout << "hello world!" << 10 << 'c' << endl;

	//endl  �� �ٹٲ��̴� '\n' 
	std::cout << a::n << std::endl;
	int a;
	int b;

	//cin >> a >> b;
	//cout << a << "+" << b << " = " << a + b;

	char str[] = "hello world";
	string mystr;

	mystr = "hello";
	cout << mystr << endl;

	//�迭 ���°� �ƴϴѱ� ���̸� �� �ʿ䰡 ����
	// ������ ������ string.h �� �ؼ� strcat ���� ���� ��ߵǰ� string�� ���̰� �̷��� ���� c������ �ǰ� �������

	string name;

	cout << "�̸� �Է�";
	cin >> name;

	string message = "�ȳ��ϼ���, " + name + "��.";
	cout << message << endl;

	system("pause");
}

