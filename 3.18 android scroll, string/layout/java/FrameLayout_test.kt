package com.example.layout

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import android.view.View
import kotlinx.android.synthetic.main.activity_frame_layout_test.*

class FrameLayout_test : AppCompatActivity(), View.OnClickListener {

    var index = 0; // 0 -> Lee.jpg , 1 -> Kim.jpg

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_frame_layout_test)
        //확장 기능을 이용해 findview를 안써도 바로 찾을 수 있다.
        btnchange.setOnClickListener(this)
    }

    override fun onClick(v: View?) {
        imageChange()
    }
    // 버튼을 선택할 때 마다 이미지가 교체되어 보이도록 처리

    fun imageChange()
    {
        if(index==0) // index가 0이라는 것은 버튼을 처음 눌렀다는 것을 의미
        {
            // 0번에 해당하는 이미지를 화면에 보이도록 설정
            img02?.visibility = View.VISIBLE
            // 1번에 해당하는 이미지를 화면에 보이지 않도록 설정
            img01?.visibility = View.INVISIBLE
            index = 1;
            Log.d("myvalue", "현재(if) index ==>$index")
        }
        else if(index==1)
        {
            img02?.visibility = View.INVISIBLE
            img01?.visibility = View.VISIBLE
            index = 0;
            Log.d("myvalue", "현재(else) index ==>$index")
        }
    }

}