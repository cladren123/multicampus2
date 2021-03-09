
fun main()
{
    /*
        1. 함수의 오버로딩
            - 매개변수의 갯수, 타입을 다르게 정의하여 같은 이름으로 함수를 여러 개 정의할 수 있다.



        2. 지역함수
            - 함수 내부에서 정의하는 함수
            - 함수를 정의한 함수 안에서만 호출(사용)이 가능

     */

    display();
    display(100);
    display(10,20);
    display(10.5);
    outerFunc();
    // innerFunc(); 함수내부에서 선언돈 함수라 호출할 수 없다.
}

fun outerFunc()
{
    println("outerFunc함수 - outer");
    fun innerFunc()
    {
        println("outerFunc함수의 innerFunc함수 호출");
    }
    innerFunc();
    println("***********************");

}

fun display()
{
    println("display - 매개변수 없는 함수");
    println("***********************");
}

fun display(num1:Int)
{
    println("display - int매개변수 1개 함수");
    println("***********************");
}

fun display(num1:Int, num2:Int)
{
    println("display - int매개변수 2개 함수");
    println("***********************");
}

fun display(num1:Double)
{
    println("display - double 매개변수 1개 함수");
    println("***********************");
}

