#include <cmath>
#include <iostream>

using namespace std;

class Coord {
public:
    Coord() {
        this->x = 0;
        this->y = 0;
    }

    Coord(int xv, int yv) {
        this->x = xv;
        this->y = yv;
    }

    void setY(int yv) {
        this->y = yv;
    }
    void setX(int xv) {
        this->x = xv;
    }

    int getY() {
        return y;
    }


    int getX() {
        return x;
    }

  
    double getDistance(Coord point) {
        return sqrt(pow(x - point.getX(), 2) + pow(y - point.getY(), 2));
    }

    friend istream& operator>>(istream& input, Coord& coord) {
        input >> coord.x;
        input >> coord.y;
        return input;
    }

    friend ostream& operator<<(ostream& output, Coord& coord) {
        output << "(" << coord.x << ", " << coord.y << ")";
        return output;
    }

    bool operator!=(Coord coord) const {
        return (x != coord.getX()) || (y != coord.getY());
    }


    Coord& operator++() {
        x++;
        y++;
        return *this;
    }


private:
    int x;
    int y;
};


int main()
{
    Coord coord1{ 1, 2 };
    Coord coord2;

    cin >> coord2;

    cout << coord1 << endl;
    cout << coord2 << endl;
    cout << "Distance: " << coord1.getDistance(coord2) << endl;
    cout << "Equals: " << (coord1 != coord2) << endl;
}