
fun main()
{
    // 사용자정의 클래스를 사용하는 방법
    val obj1:MyClass = MyClass(); // 인스턴스화, 생성, ew
    val obj2:MyClass = MyClass();
    println("obj1:$obj1");
    println("obj1:$obj2");

    val obj3:Person = Person(); // 참조형
    println("Person의 age:${obj3.age}");
    println("Person의 telNum:${obj3.telNum}");

    obj3.print();
}

// 클래스를 작성 방법 - 구성요소 없이 작성가능

class MyClass
{


}

// 클래스를 작성하는 방법 - value를 저장하는 객체, Value를 Object로 변환하기 위한 객체
//                                            -------
//                                              사용자가 입력한 값, DB에서 가져온 값

class Person
{
    // 멤버변수
    val age = 0;
    var telNum = 0;

    // 멤버메소드 - Peroson 이라는 객체가 갖고 있는 기능 : 함수와 동일한 방법으로 정의
    fun print()
    {
        println("print => age : $age, telnum : $telNum");
    }

}