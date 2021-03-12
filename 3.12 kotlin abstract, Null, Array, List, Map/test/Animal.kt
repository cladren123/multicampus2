package kr.multicampus.kotlin.test

open abstract class Animal(var speed:Int)
{
    var distance:Double = 0.0;
    var animal:String = "";

    open abstract fun run(hours:Int);

    fun getDistance()
    {
        println("$animal 의 이동거리:$distance");
    }
}