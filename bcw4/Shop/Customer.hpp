#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP

#include "Order.hpp"

class Order;

class Customer {
private:
    static std::list<Customer*> allCustomers;
    std::list<Order*> orders;
public:
    Customer();
    ~Customer();

    std::list <Order*> getOrders();
    static std::list <Customer*> getAllCustomer();
};

#endif //CUSTOMER_HPP