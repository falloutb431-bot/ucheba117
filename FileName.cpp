#include <iostream>


#define MODE 1


#ifndef MODE
#error "Необходимо определить константу MODE!"
#endif



#if MODE == 1
int add(int a, int b) {
    return a + b;
}
#endif

int main() {
  
    std::setlocale(LC_ALL, "");

    
#if MODE == 0
    std::cout << "Работаю в режиме тренировки\n";

#elif MODE == 1
    std::cout << "Работаю в боевом режиме\n";

    int num1, num2;
    std::cout << "Введите число 1: ";
    std::cin >> num1;
    std::cout << "Введите число 2: ";
    std::cin >> num2;

 
    int result = add(num1, num2);
    std::cout << "Результат сложения: " << result << "\n";

#else
    std::cout << "Неизвестный режим. Завершение работы\n";
#endif

    return 0;
}
