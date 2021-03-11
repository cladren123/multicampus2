import kr.multicampus.kotlin.insa.*

fun main()
{
    var student:Student = Student("홍길동", 20, "200201");
    var teacher:Teacher = Teacher("이순신", 30, "JAVA")
    var staff:Staff = Staff("유관순", 40, "교무관");

    student.print();
    teacher.print();
    staff.print();



}