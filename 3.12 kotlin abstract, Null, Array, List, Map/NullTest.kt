package kr.multicampus.kotlin.basic

fun main()
{
    // 1. !! 연산자

    var num1:Int = 100;
    var num2:Int ?= null;


    // num2 변수는 null이나 null이 아닌 값을 모두 저장할 수 있는 변수이므로 가능
    // num2 = num1; 이건 가능
    
    // Int 와 Int?  
    // null을 허용하지 않는 변수에 null을 허용하는 변수를 할당하는 것은 에러
    // !!연산자를 사용하면 컴파일 에러가 발생하지 않는다. 

    //num1 = num2!!;
    //test("오늘은 신나는 금요일")

    // !!연산자는 널을 허용하는 변수를 널을 허용하지 않는 변수의 타입으로 변경
    // null이 아닌 경우에는 잘 실행이 되는 null인 경우에는 이미 null값이 저장되어 있으므로 변경할 수 없고 Exception을 발생
    // null인 경우 안정성을 보장받지 못하고 오류가 발생한다.

    //test(null);
    println("***********************************************************************")

    //2 ?:연산자

    test2("오늘은 신나는 금요일");
    test2(null);


    // 3. ?.연산자
    // null인 경우 오류를 발생시키지 않고 null은 반환
    println("**********************************************************");
    test3("오늘은 신나는 금요일");
    test3(null);

}

fun test(str:String?) // 매개변수로 전달되는 str은 null을 허용
{
    val myVal:String = str!!;
    println("myVal:$myVal");

}

fun test2(str:String?) // 매개변수로 전달되는 str은 null을 허용
{
    val myVal:String = str ?:"나는 지금 작업중"
    println("myVal:$myVal");
}

fun test3(str:String?) // 매개변수로 전달되는 str은 null을 허용
{
    println("myVal:$str");
    // str은 Null을 허용하는 변수이므로 .이 아니라 ?. 연산자를 통해 접근
    println("str 문자열의 길이 : ${str?.length}")

}