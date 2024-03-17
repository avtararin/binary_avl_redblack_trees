#include "binary_tree.h"

int main(){
    binary_tree new_tree = binary_tree(5);
    new_tree.print();
    new_tree.insert(10);
    new_tree.print();
    new_tree.insert(10);
    new_tree.print();
    new_tree.insert(1);
    new_tree.print();
    new_tree.insert(6);
    new_tree.print();
    new_tree.insert(7);
    new_tree.print();
    new_tree.insert(2);
    new_tree.print();
    new_tree.erase(10);
    new_tree.print();
    return 0;
}