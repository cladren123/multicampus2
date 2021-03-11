package kr.multicampus.kotlin.oop

// 오버라이딩

fun main()
{
    val obj1 = SubClassA(); // SubClassA 타입
    obj1.display();
}

// 코틀린에서 선언된 모든 클래스와 메소드는 자바코드로 변환될 때 final 키워드가 추가되어
// 상속도 오버라이딩도 불가능한게 기본 설정

open class SuperClassA // open을 추가해서 상속이 가능한 클래스로 변경
{
    open fun display() // open을 추가해서 오버라이딩이 가능하 메소드로 변경
    {
        println("SuperClassA의 display")
    }
}

class SubClassA:SuperClassA()
{
    override fun display() // override는 modifer를 추가해서 현재 이 메소드를 오버라이딩하고 있다고 알려줌
    {
        super.display();
        println("SubClassA의 display")
    }
    
}