#include <iostream>
using namespace std;


int main() {

    cout << "Введіть слово або речення : ";
    wstring str;
    std::getline (std::wcin, str);

    //Видаляємо прогалини
    wstring space = L" ";
    string::size_type found = str.find(space);
    while (found != std::string::npos){
        str.erase (found,1);
        found = str.find(space);
    }

    int size = str.length();
    int middle = size / 2;
    if(middle % 2 != 0){
        middle -= 1;
    }

    for(int i = 0, j = size - 2; i < middle; i++, j -= 3){
        if((str[i] == str[j]) && (str[++i] == str[++j]))
        {
            continue;
        }
        else{
            cout << "Рядок не є паліндромом !";
            return 0;
        }
    }


    cout << "Рядок є паліндромом !";

    return 0;
}
