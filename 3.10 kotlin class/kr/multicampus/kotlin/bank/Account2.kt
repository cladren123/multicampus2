package kr.multicampus.kotlin.bank

class Account2 {

    var accid:String = "";
    var balance:Int = 0;

    constructor(accid:String, balance:Int)
    {
        this.accid = accid;
        this.balance = balance;
    }

    fun deposit(money:Int)
    {
        balance = balance + money;
    }

    fun withdraw(money:Int)
    {
        if(balance >= money)
        {
            balance = balance - money;
        }
        else
        {
            println("출금할 수 없습니다.")
        }
    }

    fun print()
    {
        println("잔액 : $balance");
    }
}