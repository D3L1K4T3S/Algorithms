//
//  Queue.cpp
//  Algorithms
//
//  Created by Egor Zhelagin on 05.09.2022.
//

#include "Queue.hpp"

/*
Enqueue //Поместить в очередь
Dequeue //Убрать из очереди

Q.head
Q.tail

Если Q.head == Q.tail - очередь пуста
Если Q.tail = Q.length и Q.head = 1 - очередь заполнена

//Передается ключ
List search(L,k) //O(n)
x = L.head
while x = nill x.key != key
x = x.next
return x


//Передается указатель также сжедать по ключу
List-Insert(L,x) //O(1)
x.next =  L.head
if L.head != nill
    L.head.prev = x
L.head = x
x.prev = Nil

//Передается указатель также сжедать по ключу
List-Delete(L,x) //O(1)
 x.prev.next = x.next
else
L.head = x.next
if x.next != Nil
 x.next.prev = x.prev

//Ограничитель Sentinel L.nil для циклического списка
List-Search(L,k)
x = L.nil.next
while x != L.nil and x.key != k
 x = x.next
return x

List delete
x.prev.next = x.next
x.next.prev = x.prev

List Insert
x.next = L.nil.next
L.nil.next.prev = x
L.nil.next = x
x.prev = L.nil

//Бинарные деревья

x.p - родитель если нилл 0 корень
T.root - указывает на корень дерева


Дерево с n потомками

x.left-child - если влево то опускаемся на один уровень ниже
x.rifht-sibling - если вправо то остаемя на том же уровне только двигаемся вправо
 */




