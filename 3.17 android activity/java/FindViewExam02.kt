package com.example.layout

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.View
import android.widget.Button
import kotlinx.android.synthetic.main.activity_find_view_exam02.*

class FindViewExam02 : AppCompatActivity(), View.OnClickListener {

    var btn:Button?=null

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_find_view_exam02)

        // 1번
        btn = findViewById(R.id.imgButton1)
        btn?.setOnClickListener(this)


        // 2번
        imgButton2.setOnClickListener{
            img1.setImageResource(R.drawable.dream02)
        }

        // 3번
        imgButton3.setOnClickListener(object : View.OnClickListener{
            override fun onClick(v: View?) {
                img1.setImageResource(R.drawable.beach)
            }
        })

        // 4번
        var mylistener = object:View.OnClickListener{
            override fun onClick(v: View?) {
                img1.setImageResource(R.drawable.ic_launcher_background)
            }
        }
        imgButton4.setOnClickListener(mylistener)







    }

    override fun onClick(v: View?) {
        img1.setImageResource(R.drawable.dream01)
    }
}