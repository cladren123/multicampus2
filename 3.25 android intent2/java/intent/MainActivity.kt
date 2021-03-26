package com.example.intent

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import kotlinx.android.synthetic.main.activity_main.*

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        Log.d("kim", "onCreate()호출")

        button.setOnClickListener{
            // SecondActivity를 실행하도록 의뢰하기 위해 인텐트를 생성

            // 인텐트 다섯번째 사용 클래스 이름 명시(자바에서)
            // 코틀린에서는 자바로 바꿔주는 형식으로 집어넣는다.
            // , 안드로이드 os에서 통신하기 위해서는 context가 필요

            // Context -> android os 내부에서 필요한 정보, 통신을 위한 기본내용 방법 등을 담고 있는 객체
            // 실행할 엑티비티 클래스 파일명(코틀린으로 만들어진 클래스를 자바로 변환하고 컴파일까지 해서 만들어진 파일명)
            // 리플렉션(Reflection)에서 사용하는 연산자 :: -> ::class객체를 참조하라는 의미, 리플렉션 기호

            // apply 인텐트 객체가 계속 유지
            val firstIntent = Intent(this, SecondActivity::class.java).apply {
                // {}안의 scope가 intent 객체에서 작업하는 것과 동일하다
                putExtra("info", "첫 번째 액티비티가 넘기는 메시지")
                putExtra("num", 10000)
            }

            // 2. 데이터 공유하기 - 두 가지 방법 --- 자바답게 코드 구현
//            firstIntent.putExtra("info", "첫 번째 액티비티가 넘기는 메시지")
//            firstIntent.putExtra("num", 10000)





            // 액티비티를 실행하기 위해서 android OS에 의뢰
            startActivity(firstIntent) // 새로운 액티비티를 실행할 수 있다.

        }

    }

    // onCreate 다음에 호출되는 메소드(액티비티실행 -2)
    override fun onStart() {
        super.onStart()
        Log.d("kim", "onStart()호출")
    }

    // onStart 다음에 호출되는 메소드(액티비티실행 -3)
    override fun onResume() {
        super.onResume()
        Log.d("kim", "onResume()호출")
    }

    // 일시정지 상태로 바뀔 때 호출되는 메소드
    override fun onPause() {
        super.onPause()
        Log.d("kim", "onPause()호출")
    }

    // 일시정지나 종료 상태로 바뀔대 onPause 다음으로 실행되는 메소드
    override fun onStop() {
        super.onStop()
        Log.d("kim", "onStop()호출")
    }

    // 앱이 종료될 때 호출되는 메소드
    override fun onDestroy() {
        super.onDestroy()
        Log.d("kim", "onDestroy()호출")
    }

}