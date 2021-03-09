
import java.util.Scanner;

fun main()
{

    val result1 = display('b');
    val result2 = display('D');
    val result3 = display('2');

    println("result1 : $result1");
    println("result2 : $result2");
    println("result3 : $result3");

    var key:Scanner = Scanner(System.`in`);

    print("숫자 1 입력 : ")
    val num1:Int = key.nextInt();
    print("숫자 2 입력 : ")
    val num2:Int = key.nextInt();

    printdata(num1..num2)

    var myarr1 = arrayOf(10,11,12,13,14,15);

    printSumArray(myarr1);

}

fun display(text:Char) : String
{
    var result:String ="";

    when(text)
    {
        in '0'..'9' -> result = "숫자입니다.";
        in 'a'..'z', in 'A'..'Z'-> result = "문자입니다.";
        else -> result = "판단할 수 없습니다.";
    }
    return result;
}

fun printdata(array1:IntRange)
{
    for(i in array1)
    {
        if(i % 3 == 0)
        {
            print("$i ");
        }

    }
    println();
}

fun printSumArray(myarr:Array<Int>)
{
    var sum1:Double = 0.0;
    var avg1:Double = 0.0;
    var count1:Int = 0;
    for(i in myarr)
    {
        sum1 += i;
        count1 += 1;
    }

    avg1 = sum1 / count1;

    println("합 : $sum1");
    println("평균 : $avg1");

}
