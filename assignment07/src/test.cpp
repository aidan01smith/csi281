//
//  test.cpp
//
//  Tests to prove your code works.
//  You SHOULD modify this file.
//
//  Copyright 2019 David Kopec
//
//  Permission is hereby granted, free of charge, to any person
//  obtaining a copy of this software and associated documentation files
//  (the "Software"), to deal in the Software without restriction,
//  including without limitation the rights to use, copy, modify, merge,
//  publish, distribute, sublicense, and/or sell copies of the Software,
//  and to permit persons to whom the Software is furnished to do so,
//  subject to the following conditions:
//
//  The above copyright notice and this permission notice
//  shall be included in all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
//  OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
//  THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR
//  OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
//  ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
//  OTHER DEALINGS IN THE SOFTWARE.

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
#define SECTION(name) DOCTEST_SUBCASE(name)
#undef TEST_CASE
#define TEST_CASE(name, tags) DOCTEST_TEST_CASE(tags " " name)
using doctest::Approx;

#include <string>

#include "Queue.h"
#include "Stack.h"

using namespace std;
using namespace csi281;

TEST_CASE("Queue Tests", "[queue]") {
  SECTION("Queue w/ int tests") {
    Queue<int> q1 = Queue<int>();
    // Ensure that push(), pop(), and peek()
    // work properly in concert with getCount()
    // and remove()

    q1.push(1);
    q1.push(2);
    q1.push(3);
    CHECK(q1.getCount() == 3);
    CHECK(q1.peek() == 1);
    CHECK(q1.pop() == 1);
    CHECK(q1.getCount() == 2);
    q1.remove(2);
    CHECK(q1.getCount() == 1);
    CHECK(q1.peek() == 3);
    CHECK(q1.pop() == 3);
    CHECK(q1.getCount() == 0);   
  }

  SECTION("Queue w/ string tests") {
    Queue<string> q2 = Queue<string>();
    // Ensure that push(), pop(), and peek()
    // work properly in concert with getCount()
    // and remove()
    
    q2.push("apple");
    q2.push("banana");
    q2.push("cherry");
    CHECK(q2.getCount() == 3);
    CHECK(q2.peek() == "apple");
    CHECK(q2.pop() == "apple");
    CHECK(q2.getCount() == 2);
    q2.remove("banana");
    CHECK(q2.getCount() == 1);
    CHECK(q2.peek() == "cherry");
    CHECK(q2.pop() == "cherry");
    CHECK(q2.getCount() == 0);
  }
}

TEST_CASE("Stack Tests", "[stack]") {
  SECTION("Stack w/ int tests") {
    Stack<int> s1 = Stack<int>();
    // Ensure that push(), pop(), and peek()
    // work properly in concert with getCount()
    // and remove()

    s1.push(10);
    s1.push(20);
    s1.push(30);
    CHECK(s1.getCount() == 3);
    CHECK(s1.peek() == 30);
    CHECK(s1.pop() == 30);
    CHECK(s1.getCount() == 2);
    s1.remove(10);
    CHECK(s1.getCount() == 1);
    CHECK(s1.peek() == 20);
    CHECK(s1.pop() == 20);
    CHECK(s1.getCount() == 0);
  }

  SECTION("Stack w/ string tests") {
    Stack<string> s2 = Stack<string>();
    // Ensure that push(), pop(), and peek()
    // work properly in concert with getCount()
    // and remove()

    s2.push("dog");
    s2.push("cat");
    s2.push("mouse");
    CHECK(s2.getCount() == 3);
    CHECK(s2.peek() == "mouse");
    CHECK(s2.pop() == "mouse");
    CHECK(s2.getCount() == 2);
    s2.remove("dog");
    CHECK(s2.getCount() == 1);
    CHECK(s2.peek() == "cat");
    CHECK(s2.pop() == "cat");
    CHECK(s2.getCount() == 0);
  }
}
