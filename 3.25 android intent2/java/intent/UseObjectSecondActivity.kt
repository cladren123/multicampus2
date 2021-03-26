package com.example.intent

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.Button
import kotlinx.android.synthetic.main.exam_secondview.*
import kotlinx.android.synthetic.main.firstexam.*

class UseObjectSecondActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.exam_secondview)

        var objintent = intent

        var obj = objintent.getParcelableExtra<User>("myobj")
        gettext.text = "이름 : ${obj?.myname}, 전화번호 : ${obj?.telNum}"
        endbutton.text = "끝~~"
        endbutton.setOnClickListener{
            finish()
        }





    }
}