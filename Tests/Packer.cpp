#include "Packer.h"

Packer::Packer(unsigned idPacker, string namePacker) : idPacker(idPacker), namePacker(namePacker) {}

unsigned Packer::getIdPacker() const {
    return idPacker;
}

string Packer::getNamePacker() const {
    return namePacker;
}

void Packer::addOrder(Order *o) {
    myOrderQueue.push(o);
}

void Packer::removeOrder() {
    myOrderQueue.pop();
}

queue<Order *> Packer::getOrderQueue() const {
    return myOrderQueue;
}

bool Packer::operator<(const Packer &other) const{
    if (myOrderQueue.size() > other.myOrderQueue.size()) return true;
    else if (myOrderQueue.size() == other.myOrderQueue.size()){
        if (namePacker < other.namePacker) return true;
        else if (namePacker == other.namePacker){
            return idPacker < other.idPacker;
        }
    }
    return false;
}

unsigned Packer::getOrderNum() const {
    return myOrderQueue.size();
}




