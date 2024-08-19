#ifndef AVL_H
#define AVL_H

template <typename T>
struct Node {
      T val;
      Node* left;
      Node* right;
      Node();
      Node(T val);
};

template <typename T>
class AVL {
   private:
      Node<T>* root;
   public:
      AVL();
   private:
      Node<T>* insert(Node<T>* node, T val);
      int get_height(Node<T>* node);
      int balance_factor(Node<T>* node);
      Node<T>* right_rotate(Node<T>* node);
      Node<T>* left_rotate(Node<T>* node);
      Node<T>* get_min(Node<T>* node);
      Node<T>* get_max(Node<T>* node);
      Node<T>* remove(Node<T>* node, T val);
      Node<T>* get_predecessor(Node<T>* node, T val);
      Node<T>* get_successor(Node<T>* node, T val);
      void print_in_order(Node<T>* node);
     public:
      void insert(T val);
      void remove(T val);
      int get_height();
      T get_min();
      T get_max();
      T get_predecessor(T val);
      T get_successor(T val);
      void print_in_order();


};

#include "avl.cpp"

#endif

      
