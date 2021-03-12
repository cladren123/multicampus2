package kr.multicampus.kotlin.test

open abstract class Content(var title:String)
{
    var price:Int = 0;

    open abstract fun totlaPrice()

    fun show()
    {
        println("$title 비디오의 가격은 $price 원 입니다.");
    }
}