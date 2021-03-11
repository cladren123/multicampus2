// 각 멤버변수를 초기화할 수 있도록 Emp클래스 처럼 생성자 3개 정의

package kr.multicampus.kotlin.oop
import kr.multicampus.kotlin.oop.Person

class Staff(name:String, age:Int, var dept:String ):Person(name,age) {


    override fun print()
    {
        super.print();
        println(" 부서 : $dept");
    }


}