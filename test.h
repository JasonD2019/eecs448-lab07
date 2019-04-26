// @file test.h
// @author Xingjian Ding
// @date 2019.4.19
// @brief A header file for the test

#ifndef TEST_H
#define TEST_H

#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <algorithm>
#include <math.h>
#include <random>
#include "Node.h"
#include "List.h"
#include "LinkedListOfInts.h"

class test{
public:
  test(){m_Test = nullptr;};
  ~test(){delete m_Test;};
  void runTests();

  void test1(); // test the constructot has a empty list created.
  void test2(); // test the destructor delete all nodes in the list.
  void test3(); // test isEmpty() return true if the list is empty, false otherwise.
  void test4(); // test size() the number of elements in the list.
  void test5(); // test search(int value) has the value is a valid T.
  void test6(); // test search(int value) return true if the value is in the list, false otherwise.
  void test7(); // test addBack(int value) has the value is a valid T.
  void test8(); // test addBack(int value) post One new element added to the end of the list.
  void test9(); // test addFront(int value) has the value is a valid T.
  void test10(); // test addFront(int value) One new element added to the front of the list.
  void test11(); // test removeBack() post One element is removed from the back of the list.
  void test12(); // test removeBack() return true if the back element was removed, false if the list is empty.
  void test13(); // test removeFront() post One element is removed from the front of the list.
  void test14(); // test removeFront() return true if the front element was removed, false if the list is empty.

private:
  LinkedListOfInts* m_Test;
};
#endif
