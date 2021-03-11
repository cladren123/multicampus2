import kr.multicampus.kotlin.oop.*
import kr.multicampus.kotlin.oop.Person //  * 말고 정확하게 명시해주자.. 왜 그런지 모르겠다
fun main()
{
    var student:Student = Student("홍길동", 20, "200201");
    var teacher:Teacher = Teacher("이순신", 30, "JAVA")
    var staff:Staff = Staff("유관순", 40, "교무관");

    student.print();
    teacher.print();
    staff.print();

    var obj1:Person = Student("홍길동", 20, "200201");
    var obj2:Person = Teacher("홍길동", 20, "200201");
    var obj3:Person = Staff("홍길동", 20, "200201");
}