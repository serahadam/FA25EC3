//
// Created by Manju Muralidharan on 11/22/25.
//

#ifndef FA25EC3_TREE_H
#define FA25EC3_TREE_H

#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

/*
   TEMPLATE TREE CLASS
   Multiple parents may point to the same child.
   Students must manage storage, pointers, and dynamic allocation.

   Requirements:
   1. Templated Tree class.
   2. Nodes stored dynamically.
   3. Each node has:
      - id
      - data
      - vector of children pointers
   4. Students must prevent memory leaks.
   5. Students must create createRoot, addNode, findNode, print functions, etc.

   DO NOT IMPLEMENT ANYTHING HERE.
   Only placeholders and TODO comments.
*/


template <typename U>
class Node {
public:
    string id;
    U data;
    vector<Node<U>*> children;

    // TODO: Write constructor
    Node(const string &nodeID, const U &value);
       : id(nodeID), data(value) {}
};

template <typename T>
class Tree {
private:
    Node<T>* root;
    vector <Node<T>*> allNodes; // free memory safely

public:
    Tree() : root(nullptr) {}
    // TODO: Initialize root pointer to nullptr

// TODO: Allocate memory, assign id, assign data, set as root
    void createRoot(const string &id, const T &value) { 
         if (root != nullptr) return; 
       
    root = new Node <T> ( id, value ) ;
    allNodes.push_back(root);
   } 
    

    void addNode(const string &parentID, const string &childID, const T &value){ 
       Node<T>* parent = findNode(parentID);
       if (!parent) return;

       Node<T>* child = findNode(childID);
       if (!child) {
          child = new Node,T>(childID, value);
          allNodes.push_back(child);
       }
       parent -> children.push_back(child);
    }
    // TODO: Find parent, create child, link parent to child

    // TODO: Support repeated children under multiple parents

    Node<T>* findNode(const string &id);
      if (!root) return nullptr;
         stack<Node<T>*> st;
         st.push(root);

   while (!st.empty()) {
      Node<T>* curr = st.top();
      st,pop();

      if (curr ->id == id)
         return curr; 
   for (Node<T>* c : curr -> children) 
      st.push(c);
    }
    return nullptr;
} 
   
    // TODO: Use DFS or BFS to search tree
// TODO: Print entire structure in readable form
    void printAll(){
    if (!root) return; 
       stack<Node<T>*> st;
       st.push(root); 
     while (!st.empty()) {
            Node<T>* curr = st.top();
            st.pop();

            cout << "Node " << curr->id << ": " << curr->data << "\n";

            if (curr->children.empty()) {
                cout << "  Child -> (none)\n\n";
            } else {
                for (Node<T>* c : curr->children) {
                    cout << "  Child -> " << c->id << "\n";
                }
                cout << "\n";
            }

      
            for (Node<T>* c : curr->children)
                st.push(c);
        }
    }

          
void playGame() {
        if (!root) {
            cout << "Tree is empty.\n";
            return;
        }

        Node<T>* curr = root;

        cout << "\n===== Begin Adventure =====\n\n";

        while (curr) {
            cout << curr->data << "\n";

            if (curr->children.empty()) {
                cout << "There are no further paths.\n";
                cout << "Your journey ends here.\n\n";
                cout << "===== Adventure Complete =====\n";
                return;
            }

            cout << "Choose your next action:\n";
            for (int i = 0; i < curr->children.size(); i++) {
                cout << (i + 1) << ". "
                     << curr->children[i]->data << "\n";
            }

            cout << "Selection: ";
            int choice;
            cin >> choice;

            if (choice < 1 || choice > curr->children.size()) {
                cout << "Invalid choice. Try again.\n\n";
                continue;
            }

            curr = curr->children[choice - 1];
            cout << "\n";
        }
    }

// TODO: Free all allocated memory
    ~Tree() { 
       for (Node<T>* node : allNodes)
          delete node;
    }

};

#endif //FA25EC3_TREE_H
