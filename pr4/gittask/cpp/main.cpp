#iclude <stdio>

useing namespace std;

int main(){
    int kingX, kingY, rook1X, rook1Y, rook2X,  rook2Y, rook3X, int rook3Y;
    cout << "Введите координаты короля" << endl;
    cin >> kingX >> kingY;

    cout << "Введите координаты 1й ладьи" << endl;
    cin >> rook1X >> rook1Y;

    cout << "Введите координаты 2й ладьи" << endl;
    cin >> rook2X >> rook2Y;

    cout << "Введите координаты 3й ладьи" << endl;
    cin >> rook3X >> rook3Y;


    string result = "";

    if (rook1X == kingX || rook1Y == kingY) {
        result += 1;
    }

    if (rook2X == kingX || rook2Y == kingY) {
        result += " " +  2;
    }

    if (rook3X == kingX || rook3Y == kingY) {
        result += " " + 3;
    }
    if (result.length() != 0) {
        cout << result << endl
    }
    else{
        cout << "0" << endl;
    }
}