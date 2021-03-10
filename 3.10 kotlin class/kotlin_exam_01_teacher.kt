import java.util.Scanner;

fun main()
{
    val key:Scanner = Scanner(System.`in`);

    println("""
        ***************계산기********************
        1. 더하기
        2. 빼기
        3. 곱하기
        4. 나누기
    """);

    print("원하는 작업을 선택하세요 : ");
    val selectVal:Int = key.nextInt();

    print("숫자1 : ");
    val num1:Int = key.nextInt();
    print("숫자2 : ");
    val num2:Int = key.nextInt();

    println("결과:${calc(num1,num2,selectVal)}");



}

fun calc(num1:Int, num2:Int, opr:Int) : Int
{
    var result = 0;

    when(opr)
    {
        1 -> result = num1 + num2;
        2 -> result = num1 - num2;
        3 -> result = num1 * num2;
        4 -> result = num1 / num2;//toDouble();
//        형 변환은 함수로 한다. ex) num2.toDouble();
    }
    return result;
}


// println("결과 : ${10/3.toDouble()}"); 형변환이 이루어진다.