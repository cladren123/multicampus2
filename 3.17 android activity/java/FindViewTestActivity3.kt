package com.example.layout

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.View
import kotlinx.android.synthetic.main.activity_find_view_exam02.*


// 레이아웃 파일에서 뷰를 찾아서 코드를 연결 
// 동일한 이벤트를 발생시키는 위젯이 많은 경우 어떤 방법으로 처리해야 하는지
class FindViewTestActivity3 : AppCompatActivity(), View.OnClickListener {




    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_find_view_exam02)
        
        // 이벤트 연결 , 이벤트 발생시키는 객체들
        imgButton1.setOnClickListener(this);
        imgButton2.setOnClickListener(this);
        imgButton3.setOnClickListener(this);
        imgButton4.setOnClickListener(this);
        imgButton5.setOnClickListener(this);
        // 이벤트처리 - 매개변수로 view 타입의 변수를 정의하고 있따.

        //                              클릭이벤트를 발생시키는 위젯의 종류가 많고 이벤트가  발생하는 시점에 어떤 위젯이
        //                              이벤트를 발생시켰는지 알아야 하므로
    }



    override fun onClick(v: View?) {
        // 식별자를 이용해서 작업

        when(v?.id){
            R.id.imgButton1 -> {
                img1.setImageResource(R.drawable.beach)
            }
            R.id.imgButton2 -> {
                img1.setImageResource(R.drawable.dream01)
            }
            R.id.imgButton3 -> {
                img1.setImageResource(R.drawable.dream02)
            }
            R.id.imgButton4 -> {
                img1.setImageResource(R.drawable.ic_launcher_background)
            }
            R.id.imgButton5 -> {
                img1.setImageResource(R.drawable.beach)
            }
        }

    }
}