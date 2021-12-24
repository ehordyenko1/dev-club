#include "Customer.hpp"

    Customer::Customer() {
        std::list <Customer*> orders;
        allCustomers.push_back(this);
    }

    Customer::~Customer() {}

    std::list <Order*> Customer::getOrders() {
        return orders;
    }

    std::list <Customer*> Customer::getAllCustomer() {
        return allCustomers;
    }

    std::list<Customer*> Customer::allCustomers;