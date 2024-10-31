class Rectangle {
private:
	int length;
	int width;
public:
	Rectangle() {
		width = 30;
		length = 40;
	}
	~Rectangle() {}
	void setLength(int length) { this->length = length; }
	int getLength() { return this->length; }
	void setWidth(int width) { this->width = width; }
	int getWidth() { return width; }
};
// ���� ȸ�翡�� �̷��� ���� ����� ����

#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>

using namespace std;

class Circle {
public:
	int x, y, radius;	// ���� �߽����� ������
	string color;		// ���� ����
	void draw();
};

void Circle::draw()
{					// ���� ȭ�鿡 �׸��� �Լ�
	HDC hdc = GetWindowDC(GetForegroundWindow());
	Ellipse(hdc, x - radius, y - radius, x + radius, y + radius);
}
int main()
{
	int n;
	Circle* p;

	cout << "�� ���� ���� ������: ";
	cin >> n;
	p = new Circle[n];
	for (int i = 0; i < n; i++) {
		p[i].x = 100 + rand() % 300;
		p[i].y = 100 + rand() % 200;
		p[i].radius = rand() % 100;
		p[i].draw();
	}
	delete[] p;
	getch();
	return 0;
}
