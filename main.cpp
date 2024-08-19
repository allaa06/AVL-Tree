#include <iostream>
#include "avl.h"

int main() {
    AVL<int> tree;
    tree.insert(50);
    tree.insert(30);
    tree.insert(70);
    tree.insert(20);
    tree.insert(40);
    tree.insert(60);
    tree.insert(80);

    std::cout << "In-order traversal: ";
    tree.print_in_order();

    std::cout << "Height of tree: " << tree.get_height() << std::endl;
    std::cout << "Minimum value: " << tree.get_min() << std::endl;
    std::cout << "Maximum value: " << tree.get_max() << std::endl;
    std::cout << "Predecessor of 70: " << tree.get_predecessor(70) << std::endl;
    std::cout << "Successor of 70: " << tree.get_successor(70) << std::endl;

    tree.remove(70);
    std::cout << "In-order traversal after removing 70: ";
    tree.print_in_order();
}
