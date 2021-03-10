fun main()
{
    val obj1:Customer = Customer();
    val obj2:Customer = Customer(45, "0101111"); // int는 0부터 시작할 수 없다.
    val obj3:Customer2 = Customer2(20, "77777");
    obj2.print();
    println("Person의 age:${obj3.age}");
    println("Person의 telNum:${obj3.telNum}");

    val obj4:Customer3 = Customer3(10, "20");
    println("Person의 age:${obj4.age}");
    println("Person의 telNum:${obj4.telNum}");

    val obj5:Customer4 = Customer4(20, "이민호", 1111);
    println("Person의 age:${obj5.age}");
    println("Person의 telNum:${obj5.telNum}");
    println("Person의 name:${obj5.name}");

}

class Customer{
    var age:Int = 0;
    var telNum:String = "";
    var name = "";

    constructor()
    {
        println("매개변수가 없는 생성자");
    }

    constructor(age:Int, telNum:String)
    {
        this.age = age; // 변경하고싶을 때 this 라는 함수를 사용한다. 초기화 작업이 진행된다.
        this.telNum = telNum;
        // 명령로직직
    }

    constructor(age:Int, telNum:String, name:String)
    {
        this.age = age; // 변경하고싶을 때 this 라는 함수를 사용한다. 초기화 작업이 진행된다.
        this.telNum = telNum;
        this.name = name;
        // 명령로직직
    }

    init {
        println("객체가 생성될 때 자동으로 실행되는 블럭");
    }

    fun print()
    {
        println("print => age : $age, telNum : $telNum");
    }
}

// 생성자 정의하기 2번째 방법
class Customer2 constructor(var age:Int, var telNum:String)
{
}

// 클래스를 선언하며 생성자를 바로 정의하는 경우 constructor의 생략이 가능
class Customer3 (var age:Int, var telNum:String)
{
}

// 생성자 정의하기 -3번 방법  Teacher
// 2번방법 확장
// 기본생성자는 반드시 초기화해야 하는 변수를 정의
class Customer4 (var age:Int, var name:String)
{
    var telNum:Int=0;  // 보조생성자
    // 생성자 오버로딩이 가능하므로 여러 개를 정의하고 사용할 수 있다.
    // 주생성자(기본생성자) 이외의 생성자를 보조생성자라 부른다.
    // 주생성자(기본생성자)를 정의하는 경우 반드시 보조생성자를 정의할 때 기본생성자를 호출해서 값을 셋팅해줘야 한다.
    // 주생성자(기본생성자)를 호출하는 방법 :  constructor(...):this(...)
    constructor(age:Int, name:String,telNum:Int):this(age,name){
        this.telNum = telNum;
    }

}