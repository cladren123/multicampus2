package com.example.intent

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import kotlinx.android.synthetic.main.exam_secondview.*

class ExamSecondActivitiy : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.exam_secondview)

        var secondIntent = intent;

        val name1 = secondIntent.getStringExtra("name1")
        val telnum1 = secondIntent.getStringExtra("telnum1")

        gettext.text = "입력한 id : $name1, 입력한 pass : $telnum1"

        endbutton.setOnClickListener{

            secondIntent.putExtra("checkval", checkmember.isChecked)
            setResult(111, secondIntent)

            finish()
        }





//        checkmember.setOnClickListener(){
//            secondIntent.putExtra("returndata", "우수회원설정")
//            setResult(1, secondIntent)
//        }
    }

}