package com.example.layout

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.View
import kotlinx.android.synthetic.main.activity_frame_layout_exam01.*

class FrameLayout_exam01 : AppCompatActivity() {

    var index = 0;

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.scroll_test01)

        // Framelayout 안에서 필요한 view를 선택해서 볼 수 있도록
//
//        layout_exam01_btn1.setOnClickListener(this)
//        layout_exam01_btn2.setOnClickListener(this)
//        layout_exam01_btn3.setOnClickListener(this)
//        layout_exam01_btn4.setOnClickListener(this)
//        layout_exam01_btn5.setOnClickListener(this)
    }

//    override fun onClick(v: View?) {
//        when(v?.id)
//        {
//            R.id.layout_exam01_btn1 -> {
//                layoutChange1()
//            }
//            R.id.layout_exam01_btn2 -> {
//                layoutChange2()
//            }
//            R.id.layout_exam01_btn3 -> {
//                layoutChange3()
//            }
//            R.id.layout_exam01_btn4 -> {
//                textChang1()
//            }
//            R.id.layout_exam01_btn5 -> {
//                textChang2()
//            }
//        }
//    }
    
    // FrameLayout안에서 필요한 view를 선택해 볼 수 있도록
    // visibility 속성의 값은 invisible과 gone은 보이지 않도록 설정
    // INVISIBLE은 보이진 않지만 영역을 차지하고 있다. GONE은 해제
    
    fun myclick(v:View)
    {
        if(v.id == R.id.layout_exam01_btn1)
        {
            layout_exam01_layout01.visibility = View.VISIBLE
            layout_exam01_layout02.visibility = View.INVISIBLE
            layout_exam01_layout03.visibility = View.GONE
        }
        else if(v.id == R.id.layout_exam01_btn2)
        {
            layout_exam01_layout01.visibility = View.INVISIBLE
            layout_exam01_layout02.visibility = View.VISIBLE
            layout_exam01_layout03.visibility = View.GONE
        }
        else if (v.id == R.id.layout_exam01_btn3)
        {
            layout_exam01_layout01.visibility = View.INVISIBLE
            layout_exam01_layout02.visibility = View.INVISIBLE
            layout_exam01_layout03.visibility = View.VISIBLE
        }
        else if(v.id ==  R.id.layout_exam01_btn5)
        {
            var result:String = layout_exam01_txt21.text.toString() + "\n" + layout_exam01_txt22.text.toString() + "\n" + layout_exam01_txt23.text.toString()
            layout_exam01_txt24.text = result
        }
    }

    fun layoutChange1()
    {
        layout_exam01_layout01.visibility = View.VISIBLE
        layout_exam01_layout02.visibility = View.INVISIBLE
        layout_exam01_layout03.visibility = View.INVISIBLE
    }

    fun layoutChange2()
    {
        layout_exam01_layout01.visibility = View.INVISIBLE
        layout_exam01_layout02.visibility = View.VISIBLE
        layout_exam01_layout03.visibility = View.INVISIBLE

    }
    fun layoutChange3()
    {
        layout_exam01_layout01.visibility = View.INVISIBLE
        layout_exam01_layout02.visibility = View.INVISIBLE
        layout_exam01_layout03.visibility = View.VISIBLE
    }

    fun textChang1()
    {
        var str1:String = layout_exam01_txt11?.text.toString()
        layout_exam01_txt13?.text = str1

        var str2:String = layout_exam01_txt12?.text.toString()
        layout_exam01_txt14?.text = str2
    }


    fun textChang2()
    {
        var str1:String = layout_exam01_txt21?.text.toString()
        layout_exam01_txt24?.text = str1

//        var str2:String = layout_exam01_txt22?.text.toString()
//        layout_exam01_txt25?.text = str2
//
//        var str3:String = layout_exam01_txt23?.text.toString()
//        layout_exam01_txt26?.text = str3

    }



}