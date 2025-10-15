#include <iostream>
#include <vector>
using namespace std;
/*https://www.youtube.com/watch?v=zZpLRBHfY3Q&t=548s*/ 

class Point {
    public:
    int x;
    int y;
};

int main() {
    std::cout << "Hello World!" << std::endl;
// points are:
// (0,1)
// (2,2)
// (2,3)
// (3,4)
// (4,5)

    std::vector<Point> points = {Point{0,1}, Point{2,2}, Point{2,3}, Point{3,4}, Point{4,5}};

    std::cout << std::endl;
    

    for(const auto& point : points){
		std::cout << "(" << point.x << ", " << point.y << ")"
				  << std::endl;
	}

    for (int i=0;i<5;i++) {
        std::cout << "(" << points.at(i).x <<", " << points.at(i).y << ")" << std::endl; 
    }


    int x[5];  // array de 5 elementos do tipo inteiro
    int y[5];

    x[0] = 0;
    y[0] = 1;

    x[1] = 2;
    y[1] = 2;

    x[2] = 2;
    y[2] = 3;

    x[3] = 3;
    y[3] = 4;

    x[4] = 4;
    y[4] = 5;

    for (int i=0;i<5;i++) {
        std::cout << "(" << x[i] << " " << y[i] << ")" << std::endl;  // print point i
    }

    // create a point object

    Point p; // create object p of class Point
    p.x=5;
    p.y=10;

    std::cout << p.x << std::endl;
    std::cout << p.y << std::endl;


    return 0;
}