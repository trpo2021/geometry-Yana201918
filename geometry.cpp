#include <iostream>

using namespace std;

int main()
{
    string c;
    float xc, yc; //���������� ��� ����������
  //  float x1, x2, x3; // �������� ��� ������������
  //  float y1, y2, y3; // �������� ������������
    float pi=3.1415;
    float R; // ������ ����������
    float perimeter, area;

 
  cin >> c;
   if(c=="circle") {
    cin >> xc >> yc >> R;
    perimeter = 2*pi*R;
    area = pi*R*R;
    cout << "perimeter = "<< perimeter<< '\n';
    cout << "area = "<< area;
}


    return 0;
}
