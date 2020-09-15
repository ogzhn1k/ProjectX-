#include<iostream>
#include<string>
template<typename T>
void append(node<T>*&front, T item);
template<typename T>
void erase(node<T>*&front, const T&target);
template<typename T>
void writelist(node<T>*front);
template<typename T>
int length(node<T>*front);
template<typename T>
void deletemore(node<T>*&front, const T&target);
