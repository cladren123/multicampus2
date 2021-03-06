package kr.multicampus.kotlin.basic

/*
    문자열
    String
        - 불변(원본이 변경되지 않는다.)
         => 메소드의 처리결과로 String 객체가 새로 만들어진다.
         => + 연산자를 이용해서 문자열을 연결하는 작업을 하면 String 객체가 갯수만큼 메모리에 생성

        - 배열로 관리
        - -0부터 index 발생

    StringBuffer
        - 문자열조작이 가능
        - 원본이 변경된다.

 */


fun main()
{
    var str = "hello"
    //str = str + "~~~";
    println("str[0]=>${str[0]}")
    println("str[1]=>${str[1]}")


    println("str.equals('HELLO')=>${str.equals("HELLO")}")
    println("str.equals('hello')=>${str.equals("hello")}")
    println("str.toUpperCase('hello')=>${str.toUpperCase()}")
    println("str=>${str}");

    val str2 = "python android c java kotlin";
    val strdata = str2.split(" "); // 하나의 문자열을 나눠 배열로 만들었다.
    println("strdata $strdata")

    println("strdata ${strdata[0]}")

    var sb1 = StringBuffer()
    sb1.append("java");
    sb1.append("kotrin");
    sb1.append("android");
    sb1.append("python");
    println("sb:$sb1");

    sb1.insert(2,"한글");
    println("sb:$sb1");



}