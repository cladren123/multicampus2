package kr.multicampus.kotlin.oop.poly

import kr.multicampus.kotlin.oop.ploy.Sender

class SNSSender(name:String ,length:Int): Sender(name){
    override fun send(){
        println("$name 에게 SNS 전송하기");
    }
}