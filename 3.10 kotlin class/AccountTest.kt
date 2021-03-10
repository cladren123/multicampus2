import kr.multicampus.kotlin.insa.Account
import java.util.Scanner;

fun main()
{
    var account:Account = Account("111-222-333", 1000000);


    print("""
        1. 입금하기
        2. 출금하기
        3. 잔액조회
        선택 :
    """.trimIndent())

    val key:Scanner = Scanner(System.`in`);

    val select:Int = key.nextInt();

    when(select)
    {
        1 -> {
            account.depositMoney(500000);
            account.printBalance()
        }
        2 -> {
            account.withdrawMoney(500000);
            account.printBalance()
        }
        3 -> account.printBalance()
    }




}