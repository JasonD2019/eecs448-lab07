// @file test.cpp
// @author Xingjian Ding
// @date 2019.4.19
// @brief A cpp file for the test

#include "test.h"
using namespace std;

void test::runTests()
{
  test1();
  test2();
  test3();
  test4();
  test5();
  test6();
  test7();
  test8();
  test9();
  test10();
  test11();
  test12();
  test13();
  test14();
}


void test::test1(){
  cout<<"Test1: LinkedListOfInts()  do not creat a empty list: ";
  m_Test = new LinkedListOfInts;
  if(m_Test->toVector().size()==0){
    cout<<"PASSED";
  }
  else{
    cout<<"FALSE";
  }
  delete m_Test;
  cout<<'\n';
}

void test::test2(){
  cout<<"Test2: ~LinkedListOfInts() do not delete each element or the linkedlist: ";
  m_Test = new LinkedListOfInts;
  delete m_Test;
  if(m_Test!= nullptr){ // Did not delete List
    cout<<"FALSE";
  }
  else{
    cout<<"PASSED";
  }
  cout<<'\n';
}

void test::test3(){
  cout<<"Test3: isEmpty() whem empty return 0 and not empty return 1: ";
  string test = "PASSED";
  m_Test = new LinkedListOfInts;
  if(m_Test->isEmpty()==0){ // Empty Return False
    test = "FALSE";
  }
  m_Test->addFront(1);
  m_Test->addBack(2);
  if(m_Test->isEmpty()==1){ // Nonempty Return True
    test = "FALSE";
  }
  cout<<test;
  delete m_Test;
  cout<<'\n';
}

void test::test4(){
  cout<<"Test4: size() not return the true value in list: ";
  m_Test = new LinkedListOfInts;
  string test = "PASSED";
  if(m_Test->toVector().size()!=0){ // Empty List Has Non Zero Size
    test = "FALSE";
  }
  for(int i = 0 ;i<100 ; i++){
    m_Test->addFront(i);
  }
  if(m_Test->toVector().size()!=100){ // Return Wrong Size
    test = "FALSE";
  }
  cout<<test;
  delete m_Test;
  cout<<'\n';
}

void test::test5(){
  cout<<"Test5: search() return false if the element in it: ";
  string test = "PASSED";
  m_Test = new LinkedListOfInts;
  for(int i = 0 ;i<10 ; i++){
    m_Test->addBack(i);
  }
  for(int i = 0 ;i<10 ; i++){ // Can not Search Element In List
    if(!m_Test->search(i))
      test = "FALSE";
  }
  cout<<test;
  delete m_Test;
  cout<<'\n';
}

void test::test6(){
  cout<<"Test6: search() retutn true if the element not in it: ";
  string test = "PASSED";
  m_Test = new LinkedListOfInts;
  for(int i = 0 ;i<10 ; i++)
  {
    m_Test->addBack(i);
  }
  if(m_Test->search(30)){ // Retrun True All The Time
    test = "FALSE";
  }
  cout<<test;
  delete m_Test;
  cout<<'\n';
}

void test::test7(){
  cout<<"Test7: addBack() do not add the element: ";
  string test = "PASSED";
  m_Test = new LinkedListOfInts;
  for(int i = 0; i < 10 ;i++){
    m_Test->addBack(i);
  }
  if(m_Test->toVector().size()!=10){ // Empty List Has Non Zero Size
    test = "FALSE";
  }
  cout<<test;
  cout<<'\n';
}

void test::test8(){
  cout<<"Test8: addBack() add the element to wrong place: ";
  string result = "PASSED";
  m_Test = new LinkedListOfInts;
  for(int i = 0; i < 10 ;i++){
    m_Test->addBack(i);
  }
  vector<int> m_vector = m_Test->toVector();
  for(int i =0; i<10;i++){
    int value = m_vector.at(i);
    if(value != i){ // Did Not Add To The Back
      result = "FALSE";
    }
  }
  cout<<result;
  cout<<'\n';
}

void test::test9(){
  cout<<"Test9: addFront() do not add the element: ";
  string result = "PASSED";
  m_Test = new LinkedListOfInts;
  for(int i = 0; i < 10 ;i++){
    m_Test->addFront(i);
  }
  if(m_Test->toVector().size()!=10){ // Empty List Has Non Zero Size
    result = "FALSE";
  }
  cout<<result;
  cout<<'\n';
}

void test::test10(){
  cout<<"Test10: addFront() add the element to wrong place: ";
  string result = "PASSED";
  m_Test = new LinkedListOfInts;
  for(int i = 0; i < 10 ;i++){
    m_Test->addFront(i);
  }
  vector<int> m_vector = m_Test->toVector();
  for(int i =0; i<10;i++){
    if(m_vector.at(i) != 9-i){ // Did Not Add To The Front
      result = "FALSE";
    }
  }
  cout<<result;
  cout<<'\n';
}

void test::test11(){
  cout<<"Test11: removeBack() do not remove the element from the back: ";
  string test = "PASSED";
  m_Test = new LinkedListOfInts;
  for(int i = 0; i < 10 ;i++){
    m_Test->addFront(i);
  }
   m_Test->removeBack();
  if(m_Test->toVector().size()!=9){ // The Size Did Not Change With List
    test = "FALSE";
  }
  cout<<test;
  cout<<'\n';
}

void test::test12(){
  cout<<"Test12: removeBack() always return false: ";
  string test = "PASSED";
  m_Test = new LinkedListOfInts;
  bool result1 = m_Test->removeBack();
  if (result1){ // Return False All The Time
    test = "FALSE";
  }
  for(int i = 0; i < 10 ;i++){
    m_Test->addFront(i);
  }
  bool result2 = m_Test->removeBack();
  if (!result2){ // Return False All The Time
    test = "FALSE";
  }
  cout<<test;
  cout<<'\n';
}

void test::test13(){
  cout<<"Test13: removeFront() do not remove the element from the Front: ";
  string test = "PASSED";
  m_Test = new LinkedListOfInts;
  for(int i = 0; i < 10 ;i++){
    m_Test->addFront(i);
  }
  if(m_Test->toVector().size()!=9){
    test = "FALSE";
  }
  cout<<test;
  cout<<'\n';
}

void test::test14(){
  cout<<"Test14: removeFront() always return false: ";
  string test = "PASSED";
  m_Test = new LinkedListOfInts;
  bool result1 = m_Test->removeFront();
  if (result1){ // Return False All The Time
    test = "FALSE";
  }
  for(int i = 0; i < 10 ;i++){
    m_Test->addFront(i);
  }
  bool result2 = m_Test->removeFront();
  if (!result2){ // Return False All The Time
    test = "FALSE";
  }
  cout<<test;
  cout<<'\n';
}
