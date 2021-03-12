package kr.multicampus.kotlin.test

import kr.multicampus.kotlin.test.Animal

class Dog(speed:Int):Animal(speed)
{
     override fun run(hours:Int)
    {
        distance =speed * hours * 0.5;
        animal = "개";
    }
}