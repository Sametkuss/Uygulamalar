#include <iostream>

int main() {
    std::cout << "Bir deger giriniz : ";
    char deger;
    std::cin >> deger;


    if (std::isalpha(deger)) {
        std::cout << "Girilen deger bir karakterdir." << std::endl;
    } 	
	else {
        std::cout << "Girilen deger bir karakter degildir." << std::endl;
    }
    }

