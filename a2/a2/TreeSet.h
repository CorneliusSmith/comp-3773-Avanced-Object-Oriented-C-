//
//  TreeSet.h
//  a2
//
//  Created by Cornelius Smith on 2019-02-05.
//  Copyright © 2019 Cornelius Smith. All rights reserved.
//

#ifndef TreeSet_h
#define TreeSet_h

#include <iostream>
#include <string>

using namespace std;
//Forward declares TreeNode
class TreeNode;

//sets up class TreeSet
class TreeSet {
public:

    TreeSet();
    TreeSet(string sa[], int sa_size);
    ~TreeSet();
    bool add(const string &s);
    void clear();
    bool contains(const string &s);
    bool isEmpty();
    bool remove(const string &s);
    int toArray(string sa[]);
    int size();
    string set_[0];
    int set_size;
    
private:
  TreeNode * root;
};
#endif /* TreeSet_h */
