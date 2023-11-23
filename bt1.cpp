#include <iostream>
#include <string>

std:: string ten; int namsinh;

int main() {

    std:: cout << "Ten = ";
    std:: getline(std:: cin, ten);
    std:: cout << "Nam sinh = ";
    std:: cin >> namsinh;
    if (namsinh<2023) {std:: cout << "Chao ban " << ten << ", nam nay ban " << 2023 - namsinh << " tuoi.";}
    else std:: cout << "Khong hop le";
    std:: cout << "Tin dep trai, ahihi."
}
