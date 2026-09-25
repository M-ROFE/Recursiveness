#include <iostream>

int a = 1, b = 1;

int Fact(int F) {
 //Нужно доработать код   
   
    if (F == 0 || F == 1)
    {
        std::cout << "Factorial = 1";
        return 1;
    }

    else if (F < 0) {
        std::cout << "Can't count factorial\n";
        return false;
    }
    
    if (a == F)
    {
        std::cout << "Finall Factiyial "<< F << "! = " << b;
        return F;
    }

    a++;
    b*=a;
    std::cout << "Factorial "<< a << "! = "<< b << "\n";

    return Fact(F);
}

int main() {

    char Q;

    int addF;

    std::cout << "Input a number to count factorial\n";

    std::cin >> addF;
    Fact(addF);

    std::cin.ignore();
    std::cin.get();
}