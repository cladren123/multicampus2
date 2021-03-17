package com.example.layout

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.View
import android.widget.Toast
import kotlinx.android.synthetic.main.activity_find_view_test.*

/*
    xml에 정의되어 있는 뷰에 코드를 연결
*/

class FindViewTestActivity2 : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_find_view_test)

        // 1. 직접 찾아와서 사용하기 ---------
        // 2. xml을 import해서 사용하기 - 코틀린에서 제공, 익명함수

        // btnClick.setOnClickListener(리스너를 구현한 객체)
        btnClick.setOnClickListener{
            // Toast 클래스의 makeText는 첫 번째 매개변수로 Context 객체가 필요
            // this 객체는 FindViewTestActivity2 객체로 Context를 상속하고 있으므로 매개변수로 전달하면 Context객체로 인식하므로 오류없이 해결
            Toast.makeText(this, "android start", Toast.LENGTH_LONG).show()
        }

        // 3. 익명함수 사용한 2번의 정식표현 - 정의된 곳에서만 사용하는 경우 주로 빠르게 작업하기 위해 사용
        btnClick2.setOnClickListener(object : View.OnClickListener{
            override fun onClick(v: View?) {
                // This는 View.OnClickListner를 상속하는 익명클래스이므로 Context의 하위가 아니라 오류
                // 따라서 Context객체를 구현할 수 있는 메소드인 getApplicationContext()를 호출하여 Context 객체를 생성하여 전달
                //                                          코틀린에서는 setter/getter를 직접적으로 호출해 사용하지 않으므로
                //                                          property를 전달하여 자바로 변환될 때 getter 메소드나 setter 메소드로 변환하여 호출하므로
                //                                          property를 사용하도록 권고

                Toast.makeText(applicationContext, "android start2", Toast.LENGTH_LONG).show()
            }



        })

        // 4. 3번 작업을 하면서 이름이 표한 경우 - 재사용해야하는 경우
        // View.OnClickListner 을 상속하여 클래스명 작성
        var mylistener = object:View.OnClickListener{
            override fun onClick(v: View?) {
                Toast.makeText(applicationContext, "android start3", Toast.LENGTH_LONG).show()
                myimg?.setImageResource(R.drawable.beach)
            }
        }
        btnClick3.setOnClickListener(mylistener)


    }
}