#include "library.h"
using namespace std;
struct IntList {
    int values[100] = {};
    int right = -1;

    int getValue(int ind) {
        return values[ind];
    }

    int getSize() {
        return right + 1;
    }

    void add(int v) {
        right++;
        values[right] = v;
    }

    void print() {
        for (int i = 0; i <= right; i++) {
            cout << values[i] << ", ";
        }
        cout << "\n";
    }

    void insert(int v, int ind) {
        for (int i = right + 1; i > ind; i--) {
            values[i] = values[i - 1];
        }
        values[ind] = v;
        right++;
    }

    void removeAt(int ind) {
        for (int i = ind; i < right; i++) {
            values[i] = values[i + 1];
        }
        right--;
    }
};
int main() {
    IntList list;
	 list.add(5);
	 
	
}