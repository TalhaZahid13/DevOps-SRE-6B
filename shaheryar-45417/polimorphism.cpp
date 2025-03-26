#include<iostream>
using namespace std;
 class Animal:
    def __init__(self, name):
        self.name = name

    def speak(self):
        print("I am an animal!")

class Dog(Animal):
    def speak(self):
        print("Woof!")

class Cat(Animal):
    def speak(self):
        print("Meow!")

def make_noise(animal):
    animal.speak()

d = Dog("Fido")
c = Cat("Simba")

make_noise(d)
make_noise(c)
