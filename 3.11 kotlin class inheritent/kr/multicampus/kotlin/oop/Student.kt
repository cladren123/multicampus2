// 클래식한 방법

package kr.multicampus.kotlin.oop

class Student(name:String, age:Int, var id:String):Person(name, age) {


    override fun print()
    {
        super.print();
        println(" 학번 : $id")
    }
}