#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

class Counter {

public:
    int num;
    
    void add() {  num = num + 1; } 
        void subtract()  { num = num - 1; }
   
};

int main(){
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Counter number;
    int num;
    string  symbols;
    string answer;

    while (true){
        cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    cin >> answer;

    if (answer == "да") {
        cout << "Введите начальное значение счётчика: " << endl;
        cin >> num;
        break;
    }
    else if (answer == "нет") {
        num = 1;
        break;
    }
    else {
        cout << "Неверный ответ, поробуйте снова" << endl;
    };
}
    number.num = num;

    while (true) {
        
        cout << "Введите команду ('+', '-', '=' или 'x'): ";
        cin >> symbols;

        if (symbols == "+") {
            number.add();
        }
        else if (symbols == "-") {
            number.subtract();
        }
        else if (symbols == "=") {
            cout << number.num << endl;
        }
        else if (symbols == "х" ) {

            return true;
        }
        else {
            cout << "Неверный символ, попробуйте снова" << endl;
        }
    };
};