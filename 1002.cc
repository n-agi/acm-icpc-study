#include <cmath>
#include <iostream>
using namespace std;
class Point{
    public:
        float x, y;
        Point(float px, float py) {
            x = px;
            y = py;
        }
        Point sub(Point p2) {
            return Point(x - p2.x, y - p2.y);
        }
        Point add(Point p2) {
            return Point(x + p2.x, y + p2.y);
        }
        float distance(Point p2) {
            return sqrt((x - p2.x)*(x - p2.x) + (y - p2.y)*(y - p2.y));
        }
        Point normal() {
            float length = sqrt(x*x + y*y);
            return Point(x/length, y/length);
        }
        Point scale(float s) {
            return Point(x*s, y*s);
        }
};

class Circle {
    public:
        float x, y, r, left;
        Circle(float cx, float cy, float cr) {
            x = cx;
            y = cy;
            r = cr;
            left = x - r;
        }
        pair<Point, Point> intersections(Circle c) {
            Point P0(x, y);
            Point P1(c.x, c.y);
            float d, a, h;
            d = P0.distance(P1);
            a = (r*r - c.r*c.r + d*d)/(2*d);
            h = sqrt(r*r - a*a);
            Point P2 = P1.sub(P0).scale(a/d).add(P0);
            float x3, y3, x4, y4;
            x3 = P2.x + h*(P1.y - P0.y)/d;
            y3 = P2.y - h*(P1.x - P0.x)/d;
            x4 = P2.x - h*(P1.y - P0.y)/d;
            y4 = P2.y + h*(P1.x - P0.x)/d;

            return pair<Point, Point>(Point(x3, y3), Point(x4, y4));
        }

};
int ans[1000];
int idx;
int main(){
	int n;
	int x1,x2,y1,y2,r1,r2;
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		if(x1 == x2 && y1 == y2 && r1 == r2){
			ans[idx++]=-1;
			continue;
		}
		Circle c1 = Circle((float)x1,(float)y1,(float)r1);
		Circle c2 = Circle((float)x2,(float)y2,(float)r2);
		pair<Point, Point> val = c1.intersections(c2);
		if(isnan(val.first.x) || isnan(val.first.y)){
			ans[idx++]=0;
		}
		else if(val.first.x != val.second.x || val.first.y != val.second.y){
			ans[idx++]=2;
		}
		else ans[idx++]=1;
	}
	for(int i = 0 ; i < idx ; i++){
		cout << ans[i] << endl;
	}
	return 0;
}
