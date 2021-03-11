package kr.multicampus.kotlin.oop

// 중복제거  -> 상속
// Car -> 상위, 부모, 슈퍼 클래스라 불린다.
// Bus, Truck -> 상속받은 클래스 / 하위, 자식, 서브 클래스라 불린다.

// 상속구조로 변경
// Car클래스에 종류 변수를 초기화하는 생성자를 주생성자로 정의
// 나머지 하위클래스가 생성자를 활용해서 작업할 수 있도록 변경

fun main()
{
    val car1:Bus = Bus("버스");
    car1.달린다();

    val car2:Truck = Truck("트럭");
    car2.달린다();

    val car3:Taxi = Taxi("택시");
    car3.달린다();
}


open class Car(var 종류:String)
{

    val 제조사 : String = "";
    val 색상 : String= "";

    constructor():this("");


    fun 달린다()
    {
        println("${종류}가 달린다.")
    }

    fun 속도올리기()
    {

    }

    fun 속도내리기()
    {

    }
}

class Bus:Car
{
    val 인원수 : Int = 0;

    constructor(종류:String):super(종류) // SubClass2의 객체가 생성되면 부모의 매개변수 없이 생성자를 먼저 호출
    {
    }

    fun 노선확인하기()
    {

    }
}

class Truck:Car
{
    val 무게 : Int = 0;

    constructor(종류:String):super(종류);


    fun 짐올리기()
    {

    }
}

//Taxi에는 주생성자로 종류변수에 값을 전달받을 수 있도록 생성자가 정의되어 있고
//Taxi가 생성될 때 부모클래스인 Car의 주생성자를 호출하며 전달
// kotlin이 제시하는 방법
class Taxi(종류:String):Car(종류)
{
    val 기본요금 : Int = 0;

    fun 손님태우기()
    {

    }
}