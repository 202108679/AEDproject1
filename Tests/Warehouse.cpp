#include "Warehouse.h"
#include <algorithm>

Warehouse::Warehouse() {}

list<Packer> Warehouse::getPackers(){
    return packers;
}

void Warehouse::addPacker(const Packer &p) {
    packers.push_back(p);
}

list<stack<Order *>> Warehouse::getOrders() const {
    return processedOrders;
}

void Warehouse::setOrders(list<stack<Order *> > so) {
    processedOrders = so;
}


//=============================================================================
//TODO:
void Warehouse::sortPackers() {
    packers.sort();
}

//TODO:
unsigned Warehouse::removePackers(unsigned nOrders) {
    unsigned result = 0;
    auto it = packers.begin();
    while (it != packers.end()) {
        if (it->getOrderNum() < nOrders) {
            result += it->getOrderNum();
            it = packers.erase(it);
        }
        else it++;
    }
    return result;
}

//TODO:
void Warehouse::addPacker(unsigned idPacker, string namePacker) {
}

//TODO:
bool Warehouse::addToShorterQueue(Order* o) {
    return true;
}

//TODO:
unsigned Warehouse::processOrderByDeliveryType(string deliveryType, unsigned n) {
    return 0;
}
