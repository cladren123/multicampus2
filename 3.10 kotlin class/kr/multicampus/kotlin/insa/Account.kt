package kr.multicampus.kotlin.insa

class Account (var accid:String, var balance:Int)
{

    fun depositMoney(depositmoney:Int)
    {
        balance = balance + depositmoney;
    }

    fun withdrawMoney(withdrawmoney:Int)
    {
        if(balance >= withdrawmoney)
        {
            balance = balance - withdrawmoney;
        }
        else
        {
            println("잔액 부족");
        }

    }

    fun printBalance()
    {
        println("잔액 : $balance");
    }
}