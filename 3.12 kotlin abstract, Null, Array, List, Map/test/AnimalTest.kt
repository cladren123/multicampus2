package kr.multicampus.kotlin.test

import kr.multicampus.kotlin.oop.SubB
import kr.multicampus.kotlin.test.Animal
import kr.multicampus.kotlin.test.Dog
import kr.multicampus.kotlin.test.Chicken
import kr.multicampus.kotlin.test.Cheatable

fun main()
{
    var myarr = arrayOfNulls<Animal>(3) // 부모 타입을 신경쓰자.
    myarr[0] = Dog(8);
    myarr[1] = Chicken(3)

    var dog:Dog = Dog(8);
    var chicken:Chicken = Chicken(3)
    var cheatablechicken:Cheatable = Chicken(5);

    cheatablechicken as Chicken;
    cheatablechicken.fly();

    var hourRange = 1..3;
    for(i in hourRange)
    {
        println("$i 시간 후")
        dog.run(i);
        chicken.run(i);
        cheatablechicken.run(i);

        dog.getDistance();
        chicken.getDistance();
        cheatablechicken.getDistance();
        println();
    }
}