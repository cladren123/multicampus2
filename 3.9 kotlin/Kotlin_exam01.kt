
import java.util.Scanner;

fun main()
{
    println("계산기");
    println("1. 더하기");
    println("2. 뺄셈");
    println("3. 곱하기");
    println("4. 나누기");
    print("원하는 작업을 선택하세요. : ");

    val key:Scanner = Scanner(System.`in`);

    val opr:Int = key.nextInt();

    print("숫자 1 : ");
    val num1:Double = key.nextDouble();
    print("숫자 2 : ");
    val num2:Double = key.nextDouble();


    val result:Double = calc(opr, num1, num2);
    print("연산결과 : $result");


}

fun calc(opr:Int, num1:Double, num2:Double) : Double
{
    var result:Double = 0.0;
    when(opr)
    {
        1 -> result = num1 + num2;
        2 -> result = num1 - num2;
        3 -> result = num1 * num2;
        4 -> result = num1 / num2;
        else -> println("잘못된 값 입력");
    }

    return result;
}