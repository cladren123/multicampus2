package kr.multicampus.kotlin.oop

// 상속관계에서 생성자 활용 super
// this  : 나, 현재 작업 중인 객체
// super : 부모클래스

fun main()
{
    var obj:ChildClass4 = ChildClass4(25,"인천", "김");
    println("객체의 값:${obj.getData()}");

    var obj2:ChildClass5 = ChildClass5(35, "서울", "이도도");
    println("객체의 값:${obj2.getData()}");
}

// 부모클래스에 주생성자가 정의되어 있는 경우 반드시 상속 받을 때 주생성자를 호출해야한다.
// 클래스에 주생성자를 정의하면 매개변수가 없는 생성잔ㄴ 자동으로 제공하지 않는다.

open class ParentClass(var name:String){
    var superVal = 100;
    constructor():this("");

    fun display(){
        println("부모클래스의 display");
    }

}

// 기본생성자를 정의해야한다.
class ChildClass1:ParentClass("차")
{
}

class ChildClass2:ParentClass
{
    constructor():super("차")
    {

    }
}

// 부모클래스에 정의된 생성자를 호출하면서 상속하기 , 정의된 생성자 중 아무거나 호출하면된다.
class ChildClass3:ParentClass()
{


}

class ChildClass4:ParentClass{
    var age:Int = 0;
    var addr:String = "";
    constructor(age:Int, addr:String, name:String):super(name) // super는 부모 생성자를 호출하면서 전달
    {
        this.age = age;
        this.addr = addr;
    }

    fun getData(): String {
        return "ChildClass4(age=$age, addr='$addr', name='$name')"
    }

    // 마우스 우클릭 Generate -> toString -> ok
    override fun toString(): String {
        return "ChildClass4(age=$age, addr='$addr')"
    }
}

// 처음 변수를 선언하면 var를 기입.
// ParentClass를 상속 - ParentClass의 주생성자를 호출
// ChildClass5를 정의할 때 Taxi클래스와 같은 유형으로 정의하기(코틀린언어에서 권고사항)
class ChildClass5(var age:Int, var addr:String, name:String):ParentClass(name)
{
    fun getData(): String {
        return "ChildClass4(age=$age, addr='$addr', name='$name')"
    }
}