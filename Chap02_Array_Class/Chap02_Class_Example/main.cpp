#include "Polynomial.h"
#include "Birthday.h"
#include "Rectangle.h"
#include "Smarthome.h"

void swap(int& x, int& y)
{
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
}

int main() {
/*
	Polynomial a, b, c;

	a.read();
	b.read();
	c.add(a, b);

	a.display("A = ");
	b.display("B = ");
	c.display("C = A + B = ");
*/
	// 71p ��ü �迭
	/*
	Student eei[10];
	strcpy_s(eei[2].name, "HyungGi Jo");
	eei[2].bDay.month = 2;
	eei[2].bDay.date = 15;
	printf("�̸��� : %s, %d�� %�� ���Դϴ�. \n", eei[2].name, eei[2].bDay.month, eei[2].bDay.date)

	// 72p������ �Ǵ� ���۷�����
	int a = 1, b = 2;
	printf("a = %d, b = %d\n", a, b);
	swap(a, b);
	printf("swap ȣ�� ��, a = %d, b = %d", a, b);
	return 0;
	*/

	/*Rectangle r1(4, 5);
	printf("rectangle 1 Area : %lf\n", r1.getArea());              //printf ���
	std::cout << "rectangle 1 Area : " << r1.getArea() << std::endl;               //iostream�� cout ���
	std::cout << "Is square?" << r1.isSquare() << std::endl;
	*/

	SmartHome myHome("ȫ�浿:", 23, 40, true);
	myHome.printStatus();
	myHome.setHumidity(60);
	myHome.setSecurity(false);

}