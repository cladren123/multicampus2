// 클래식한 방법

package kr.multicampus.kotlin.insa

class Student {

    var name:String = "";
    var age:Int = 0;
    var id:String = "";

    constructor(name:String, age:Int, id:String)
    {
        this.name = name;
        this.age = age;
        this.id = id;
    }

    fun print()
    {
        println("이름 : $name 나이 : $age 학번 : $id")
    }
}