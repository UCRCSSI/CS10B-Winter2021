// Following code is slightly lazy. Usually, you'd want this to be as universal as possible. How to make it work for more than just 9 coordinates?

#include <iostream>
#include <vector>

using namespace std;

struct Point {
    const int x;
    const int y;
    Point(int x = 0, int y = 0) : x(x), y(y) {}
};

class Graph {           // always implement class functions outside of class, I do it here because I don't want to create multiple files
private:
    vector<Point*> points;
public:
    Graph() : points(0) {}
    void add(Point* newPt) { points.push_back(newPt); }
    void reassign(int ind, Point* Pt) {
        this->points[ind - 1] = Pt;
    }
    void PrintGraph() {
        for (int i = 0; i < points.size(); i++) {
            cout << "(" << points[i]->x << " " << points[i]->y << ")" << " ";
        }
    }
    Point* GetPoint(int item) { return points.at(item - 1); }
    void erase(int index) {
        vector<Point*>::iterator it = points.begin();
        it = next(it, index - 1);
        points.erase(it);
    }
    void swap(int i, int j) {
        Point* temp = points[i];
        points[i] = points[j];
        points[j] = temp;
    }
    void sortx() {
        for (int i = 0; i < points.size(); i++) {
            int minIn = i;
            for (int j = i; j < points.size(); j++) {
                if (points[j]->x < points[minIn]->x) {
                    minIn = j;
                }
            }
            this->swap(i, minIn);
        }
    }
    void sorty() {
        for (int i = 0; i < points.size(); i++) {
            int minIn = i;
            for (int j = i; j < points.size(); j++) {
                if (points[j]->y < points[minIn]->y) {
                    minIn = j;
                }
            }
            this->swap(i, minIn);
        }
    }
};

void RemoveFrontBackX(Graph* graph) {
    graph->reassign(1, nullptr);
    graph->reassign(8, nullptr);
    graph->erase(1);
    graph->erase(7);    // really deletes last index
}
void RemoveFrontBackY(Graph* graph) {
    graph->erase(1);
    graph->erase(7);    // really deletes last index
}

int main() {
    Graph* graphx = new Graph();
    int x;
    int y;

    cout << "Enter 9 coordinates: " << endl;
    for (int i = 9; i > 0; i--) {
        cin >> x >> y;
        graphx->add(new Point(x, y));
    }

    Point* point = graphx->GetPoint(5);

    cout << "(" << point->x << " " << point->y << ")";
    cout << " was deleted." << endl;
    graphx->erase(5);
    graphx->PrintGraph(); cout << endl;

    Graph* graphy = new Graph();
    for (int i = 0; i < 8; i++) {
        point = graphx->GetPoint(i + 1);
        graphy->add(point);
    }

    graphx->sortx();
    graphy->sorty();
    RemoveFrontBackX(graphx);
    RemoveFrontBackY(graphy);

    graphx->PrintGraph(); cout << endl;
    graphy->PrintGraph(); cout << endl;
}