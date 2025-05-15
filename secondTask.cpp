#include <iostream>

using namespace std;

int main() 
{
    string user_input = "";
    cout << "Введите слово:" << endl;
    getline(cin, user_input);
    cout << "Вы ввели:" << endl;
    cout << user_input << endl;
}