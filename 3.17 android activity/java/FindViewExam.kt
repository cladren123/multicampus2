package com.example.layout

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.TextureView
import android.view.View
import android.widget.Button
import android.widget.TextView
import android.widget.Toast

class FindViewExam : AppCompatActivity(), View.OnClickListener {

    var btn1:Button?=null;
    var text1:TextView?=null; // data
    var text2:TextView?=null; // result

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.findview_exam)



        text1 = findViewById(R.id.text1)
        text2 = findViewById(R.id.text2)
        btn1 = findViewById(R.id.buttonS)
        btn1?.setOnClickListener(this)

    }

    override fun onClick(v: View?) {
        // 1. data텍스트뷰 문자열을 읽어오기
        var str:String = text1?.text.toString();

        // 2. 문자열을 result에 세팅
        text2?.text = str
    }


}



