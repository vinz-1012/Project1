#include "library.h"
using namespace std;

int main() {
    char ghe[5][5];
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            ghe[i][j] = 'O';

    int chon = 0;
    while (chon != 3) {
        cout << "\nSo do ghe:\n";
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++)
                cout << ghe[i][j] << " ";
            cout << endl;
        }

        cout << "1. Dat ghe\n2. Huy ghe\n3. Thoat\nChon: ";
        cin >> chon;

        if (chon == 1 || chon == 2) {
            int hang, cot;
            cout << "Nhap hang (1-5): ";
            cin >> hang;
            cout << "Nhap cot (1-5): ";
            cin >> cot;
            hang--; cot--;

            if (hang < 0 || hang >= 5 || cot < 0 || cot >= 5) {
                cout << "Vi tri khong hop le!\n";
            }
            else if (chon == 1) {
                if (ghe[hang][cot] == 'X') cout << "Ghe da duoc dat!\n";
                else { ghe[hang][cot] = 'X'; cout << "Dat thanh cong!\n"; }
            }
            else {
                if (ghe[hang][cot] == 'O') cout << "Ghe dang trong!\n";
                else { ghe[hang][cot] = 'O'; cout << "Huy thanh cong!\n"; }
            }
        }
    }

    return 0;
}

