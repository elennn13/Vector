#include <iostream>
#include <vector> // подключение библиотеки, содержащей 
// в себе класс вектор и его агрегаторы.
#include <algorithm>



int main() {
    setlocale(LC_ALL, "ru");
    int n;



    // ВЕКТОР
    /*
    std::vector<int> vect1;
    vect1.push_back(7);// метод принимает одно значение
    vect1.push_back(42);
    vect1.push_back(105);
    vect1.push_back(777);
    vect1.push_back(777);
    vect1.push_back(777);
    vect1.push_back(777);
 //vect1.reserve(100);// число capacity

    std::cout << "Size: " << vect1.size() << std::endl;
    std::cout << "Capacity:  " << vect1.capacity() << std::endl;  //capacity это резерв

    vect1.shrink_to_fit(); // метод убираеь все зарезервиванные элементы, остаются только те элементы которые присутствуют
    vect1.resize(2);// resize позволяет поменять размер вектора как большую , так и в меньшую сторону

    std::cout << "Size: " << vect1.size() << std::endl;
    std::cout << "Capacity:  " << vect1.capacity() << std::endl;

    std::cout << "Max size :" << vect1.max_size() << std::endl;

    /*
    std::cout << vect1.size() << std::endl;
    if (!vect1.empty())
    vect1.pop_back();//удаляет последний элемент вектора 105

    std::cout << vect1.size() << std::endl;

std::cout << vect1.front() << std::endl;//дает значение первого  элемента ССЫЛКА НА ЭТИ ЭЛЕМЕНТЫ
    std::cout << vect1.back()<< std::endl;//дает значение последнего элемента ССЫЛКА НА ЭТИ ЭЛЕМЕНТЫ
    vect1.front() = 155;
    vect1.back() = 999;
std::cout << vect1[10]<< std::endl;
std::cout << vect1.at(10) << std::endl; // at действительное знаечение или ошибку исключение
  


    for (size_t i{}; i < vect1.size(); ++i)
        std::cout << vect1[i] << ' ';
    std::cout << std::endl;
    */


    // ИТЕРАТОРЫ 
    std::vector<int>vect2{ 10,20,30,40 };

    std::vector<int>::iterator iter = vect2.begin(); // указатель// begin итератор на тип int// первый элемент вектора iter
    std::cout << *iter << std::endl;
    *iter = 100; // первый элемент
    ++iter; // 20
    std::cout << *iter << std::endl;

    for (auto i = vect2.cbegin(); i !=vect2.cend(); ++i)
        std::cout << *i << ' ';
    std::cout << std::endl;// вывод 100 20 30 40

    int sum = 0;

    // Цикл foreach
    for (auto el : vect2)
        sum += el;

    std::cout << sum << std::endl;

   



    return 0;
}
