package kr.multicampus.kotlin.oop.ploy

// 10가지 종류의 메소드 - 20

import kr.multicampus.kotlin.oop.poly.SNSSender
import java.util.*




fun main() {
    val key: Scanner = Scanner(System.`in`);
    println("""***************계산기******************
        |1. Email전송
        |2. SMS
        |3. SNS
    """.trimMargin());
    print("원하는 작업을 선택하세요:");
    val selectVal:Int = key.nextInt();

    var senderObj:Sender ?= null;
    val logic:SenderLogic = SenderLogic();


    when(selectVal){
        1 -> {
            senderObj = EmailSender("김서연", 10);


        }
        2 -> {
            senderObj =  SMSSender("김서연", 100);
        }
        3 -> {
            senderObj =  SNSSender("test",100);
        }

    }
    logic.run(senderObj);
}
