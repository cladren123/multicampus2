// 각 멤버변수를 초기화할 수 있도록 Emp클래스 처럼 생성자 3개 정의

package kr.multicampus.kotlin.insa

class Staff {
    var name:String = "";
    var age:Int = 0;
    var dept:String = "";

    constructor(name:String)
    {
        this.name = name;
    }

    constructor(name:String, age:Int):this(name)
    {
        this.age = age;
    }

    constructor(name:String, age:Int, dept:String):this(name,age)
    {
        this.dept = dept;
    }

    fun print()
    {
        println("이름 : $name 나이 : $age 부서 : $dept");
    }


}