package com.example.helloworld

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import android.view.View
import android.widget.Toast

// Activity의  life cycle
/*
액티비티 실행 : onCreate -> onStart -> onResume
일시정지 : onPause -> onStop
일시정지에서 복귀 : onStart -> onResuem
앱이 종료될 때 : onPause -> onStop -> onDestroy
 */
class MainActivity : AppCompatActivity() {
    // Activity가 생성될 때 자동으로 호출되는 메소드 - (엑티비티 실행 -1)
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        Log.d("kim", "oncreate()호출")

        setContentView(R.layout.test_layout) //  리소스 파일을 찾아서 화면에 다 만들어준다.
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

    // 버튼을 클릭했을 때 실행할 메소드
    // 메소드 내부에서 실행할 버튼을 처리할 수 있도록 매개변수로 전달 받아야 한다. 매개변수로 전달 받는 경우 매개변수의 타입은 view 라는 상위 클래스의 타입을 명시
    //                                                                                                            ---------------------------------
    //                                                                                                             다형성
    fun btnClick(view:View)
    {
        Toast.makeText(this,"버튼이 눌려졌습니다.", Toast.LENGTH_LONG).show();
    }



}