// Author : Akide Liu 
// Date : 30/8/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//
#include <iostream>
using namespace std;

class Base1 {
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};

class Son1 : public Base1 {
public:
    void func() {
        cout << m_A << endl;
        cout << m_B << endl;
        // cout << m_C << endl;
    }
};

void myClass() {
    Son1 s1;
    s1.m_A;
}

class Base2 {
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};

class Son2 : protected Base2 {
public:
    void func() {
        cout << m_A << endl;
        cout << m_B << endl;
        // cout << m_C << endl;
    }
};

void myClass2() {
    Son2 s;
}

class Base3 {
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};

class son3 : private Base3 {
public:
    void func() {
        cout << m_A << endl;
        cout << m_B << endl;
        // cout << m_C << endl;
    }
};

class GrandSon3 : public son3 {
public:
    void func() {
        // cout << m_A << endl;
        // cout << m_B << endl;
        // cout << m_C << endl;
    }
};




