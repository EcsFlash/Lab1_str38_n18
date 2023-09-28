#include <iostream>
using namespace std;

class Point {
    public:
        float x, y;
};

class Side {
    public:
        
        Side(float x, float x2, float y, float y2) {
            length = sqrt(pow((x2 - x), 2) + pow((y2 - y), 2));
        };
        float length;
};

int main()
{
   
    float x, y;
    cout << "Enter point coords (x1 y1, x2 y2, x3 y3):";
    Point point1 = Point();
    Point point2 = Point();
    Point point3 = Point();
   
    for (int i = 1; i <= 3; i++) {
        cin >> x;
        cin >> y;
        switch (i) {
            case 1:
                point1.x = x;
                point1.y = y;
                break;
            case 2:
                point2.x = x;
                point2.y = y;
                break;
            case 3:
                point3.x = x;
                point3.y = y;
                break;
        }
    }
    Side side1 = Side(point1.x, point2.x, point1.y, point2.y);
    Side side2 = Side(point1.x, point3.x, point1.y, point3.y);
    Side side3 = Side(point2.x, point3.x, point2.y, point3.y);
    //if (((point1.x == point2.x) && (point2.x == point3.x) or ((point1.y == point2.y) && ((point2.y == point3.y))) == false)) {
    if (!((point1.x == point2.x and point1.x == point3.x and point2.x == point3.x) or (point1.y == point2.y and point1.y == point3.y and point2.y == point3.y))
        and (side1.length != 0) and (side2.length != 0) and (side3.length != 0)
        and ((side1.length + side2.length) != side3.length)
        and ((side2.length + side3.length) != side1.length)
        and ((side1.length + side3.length) != side2.length)){
            if (side1.length != side2.length != side3.length){
                if ((sqrt(pow(side1.length, 2) + pow(side2.length, 2)) > side3.length) and (sqrt(pow(side2.length, 2) + pow(side3.length, 2)) > side1.length) and (sqrt(pow(side1.length, 2) + pow(side3.length, 2)) > side2.length)) {
                    double p = (side1.length + side2.length + side3.length) / 2;
                    cout << sqrt(p * (p - side1.length) * (p - side2.length) * (p - side3.length)) << endl;
                }
                else {
                    cout << "Triangle not acute-angled";
                }

            }
            else {
                cout << "Triangle not versatile";
            }
    }
    
    else {
        cout << "Triangle does not exist";
    }
}
