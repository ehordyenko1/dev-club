#include "Customer.hpp"
#include <iostream>

int main() {
    Customer* customer1 = new Customer();

    Category* telephones = new Category();
    Item phone (telephones);
    Item iphone11 (telephones);
    Item iphone12 (telephones);

    Customer* customer2 = new Customer();
    Category* LapTops = new Category();
    Item acer11x3(LapTops);
    Item msiG130(LapTops);

    Customer* customer3 = new Customer();
    std::list<Item*> orders;
    Order order(orders, customer2);
    order.addItem(iphone11);
    order.addItem(iphone12);
    order.removeItem(iphone11);

    phone.getAllItems();
    telephones->getItem();

    



    




}