#ifndef ORDER_HPP
#define ORDER_HPP

#include <iostream>
#include "Item.hpp"
#include "Customer.hpp"

class Customer;


class Order {
private:
    std::list <Item*> items;
    std::list <Order*> allOrders;
    const Customer* customer;
public:
    Order(std::list<Item*> items, Customer* customer);
    ~Order();

    std::list <Order*> getAllOrders();
    void addItem(Item& item);
    void removeItem(Item& item);
    const Customer* getCustomer();
    std::list<Item*>getItems();
};

#endif //ORDER_HPP



