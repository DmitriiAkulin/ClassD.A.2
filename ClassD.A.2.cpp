// ClassD.A.2
#include <Windows.h>
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

class Counter {
     private:
         int num;

     public:          
    
          Counter(int num){this -> num = num;}//конструктор с параметрами

          Counter(){num = 1;} //конструктор без параметров

            
    void SetNum(int value){num = value;}
    void Print(){cout << num << endl;}
    void Increment(){num++;}
    void Decrement(){ num--;}
};
int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    
    string init_request;
    cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    cin >> init_request;
    int i;
    
    Counter count;
    if (init_request == "да") {      
      cout << "Введите начальное значение счётчика: ";
      cin >> i;
      count.SetNum(i);
    }
     else if (init_request != "нет") {cout << "Вводи внимательнее! Перезапускай программу"; return 0;}

    char request;
    //бесконечный цикл
    for (;;) {
       cout << "Введите команду ('+', '-', '=' или 'x'): "; cin >> request;//x английская
       switch (request){
         case '=': count.Print();break;
         case '+': count.Increment(); break;
         case '-': count.Decrement();break;
         case 'x': {cout << "До свидания!\n"; return 0;}
         defoult: continue;
        }
    }
    return 0;
    }
   
