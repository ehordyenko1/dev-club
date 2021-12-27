#include "Order.hpp"

    Order::Order(std::list<Item*> items, Customer* customer) {
        this->customer = customer;
        this->items = items;
        allOrders.push_back(this);
        
    }

    Order::~Order() {}

    void Order::addItem(Item& item) {
        items.push_back(&item);
    }

    void Order::removeItem(Item& item) {
        items.remove(&item);
    }

    const Customer*  Order::getCustomer() {
        return customer;
    }

    std::list<Item *> Order::getItems() {
        return items;
    }

    std::list <Order*> Order::getAllOrders() {
        return allOrders;
    }
