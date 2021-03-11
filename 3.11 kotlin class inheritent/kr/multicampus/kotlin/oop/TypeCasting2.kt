package kr.multicampus.kotlin.oop

fun main()
{
    val obj1:SubB = SubB();
    obj1.display();
    val obj2:SuperB = SuperB();
    obj2.display()
    // 부모타입 = 자식객체 O


    val obj3:SuperB = SubB();
    obj3.display();

    // obj3.show() 호출이 안된다.

    // 자식클래스타입 = 부모객체 X
    // val obj4:SubB = SuperB(); SubB 가 SuperB 보다 크다. SuperB로는 채울 수 가 없다.

    val obj4:SuperB = obj1;
    // obj4.show(); 불가능 타입이 부모이므로 부족하다.

    // as 라는 연산자
    // 객체참조변수를 as 뒤에 정의된 클래스 타입으로 변경하는 연산자
    // [형식]
    // 참조변수 as 클래스타입

    obj3 as SubB
    obj4 as SubB

    obj3.show();
    obj4.show();

    // obj2 as SubB; obj2는 SuperB (부모, 적은 범위)를 참조했으므로 변환이 안된다.
}

open class SuperB{
    fun test()
    {
        println("super의 test");
    }

    open fun display()
    {
        println("Super의 display");
    }
}

class SubB:SuperB()
{
    fun show()
    {
        println("Show");
    }

    override fun display()
    {
        println("Sub의 display");
    }
}