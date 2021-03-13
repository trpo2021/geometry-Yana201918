#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Russian");
    string c;
    float xc, yc; //координаты для окружности
  //  float x1, x2, x3; // абсциссы для треугольника
  //  float y1, y2, y3; // ординаты треугольника
    float pi=3.1415;
    float R; // радиус окружности
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
