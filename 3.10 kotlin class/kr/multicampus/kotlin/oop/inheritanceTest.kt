package kr.multicampus.kotlin.oop

// 중복제거  -> 상속
// Car -> 상위, 부모, 슈퍼 클래스라 불린다.
// Bus, Truck -> 상속받은 클래스 / 하위, 자식, 서브 클래스라 불린다.


fun main()
{

}


class Car
{
    val 제조사 : String = "";
    val 색상 : String= "";

    fun 달린다()
    {

    }

    fun 속도올리기()
    {

    }

    fun 속도내리기()
    {

    }

}

class Bus
{
    val 무게 : Int = 0;
    val 인원수 : Int = 0;

    fun 노선확인하기()
    {

    }
}


class Truck
{
    val 무게 : Int = 0;

    fun 짐올리기()
    {

    }
}