#ifndef _ZOOKEEPER_H_
#define _ZOOKEEPER_H_
#include "Enclosure.hpp"

class ZooKeeper
{
private:
    string name;
    int num_of_assigned_enclosure;
    Enclosure* assigned_enclosures;
public:
    ZooKeeper(string name = "none",int num = 0):
    name(name),num_of_assigned_enclosure(num){};
    //~ZooKeeper();
    string GetName(){return name;}
    void assigned_to_enclosures(Enclosure enclosure);
};


#endif