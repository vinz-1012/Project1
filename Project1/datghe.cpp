#include "library.h"
using namespace std;

int main() {
    char ghe[5][5];
    map<pair<int, int>, string> maVe;
    int soVe = 0;

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

        if (chon == 1) {
            int n;
            cout << "Ban muon dat bao nhieu ghe? ";
            cin >> n;

            for (int k = 0; k < n; k++) {
                int hang, cot;
                cout << "\nDat ghe thu " << k + 1 << ":\n";
                cout << "Nhap hang (1-5): "; cin >> hang;
                cout << "Nhap cot (1-5): "; cin >> cot;
                hang--; cot--;

                if (hang < 0 || hang >= 5 || cot < 0 || cot >= 5) {
                    cout << "Vi tri khong hop le!\n";
                }
                else if (ghe[hang][cot] == 'X') {
                    cout << "Ghe da duoc dat!\n";
                }
                else {
                    ghe[hang][cot] = 'X';
                    soVe++;
                    string id = "VE" + to_string(1000 + soVe);
                    maVe[{hang, cot}] = id;
                    cout << "Dat thanh cong! Ma ve cua ban: " << id << endl;
                }
            }
        }
        else if (chon == 2) {
            int hang, cot;
            cout << "Nhap hang (1-5): "; cin >> hang;
            cout << "Nhap cot (1-4): "; cin >> cot;
            hang--; cot--;

            if (hang < 0 || hang >= 5 || cot < 0 || cot >= 5) {
                cout << "Vi tri khong hop le!\n";
            }
            else if (ghe[hang][cot] == 'O') {
                cout << "Ghe dang trong!\n";
            }
            else {
                cout << "Huy thanh cong! Ma ve da huy: " << maVe[{hang, cot}] << endl;
                ghe[hang][cot] = 'O';
                maVe.erase({ hang, cot });
            }
        }
    }

    return 0;
}


