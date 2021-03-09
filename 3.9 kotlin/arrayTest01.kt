

fun main()
{
    /*
        배열
        1. 다양한 타입의 데이터를 배열에 저장할 수 있다.
            -> 한 가지 타입으로 재현할 수 있다.
        2. 배열을 생성하는 방법
            - 함수를 선언과 생성과 초기화를 한번에 작업 : arrayOf
            - Array 객체로 관리
        3. 배열은 객체로 관리
        4. 배열을 사용하려면 배열을 생성해야 한다.
            - arrayOf 함수를 이용해 todtjd


     */


    val myarr1 = arrayOf(10,20,30,40,50);
    println("myarr1:$myarr1");

    // 연산식을 표현할 때 중괄호로 묶어야한다
    println("myarr1:${myarr1.contentToString()}");
    println("myarr1:${myarr1[0]}");
    println("myarr1:${myarr1[2]}");

    display(myarr1);

}

// 배열을 매개변수인 함수
fun display(myarr:Array<Int>) // for 사용가능
{
    println("display함수 => ${myarr.contentToString()}");

}