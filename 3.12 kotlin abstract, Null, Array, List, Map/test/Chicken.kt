package kr.multicampus.kotlin.test

import kr.multicampus.kotlin.test.Animal
import kr.multicampus.kotlin.test.Cheatable

class Chicken(speed:Int):Animal(speed), Cheatable
{
    var check = speed;
    override fun fly()
    {
        speed = speed * 2;
    }

    override fun run(hours:Int)
    {
        distance = speed * hours * 1.0;
        if(speed == check) animal = "닭"
        else if(speed > check) animal = "날으는 닭";
    }

}