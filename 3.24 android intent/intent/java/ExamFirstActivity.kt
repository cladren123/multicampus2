package com.example.intent

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import kotlinx.android.synthetic.main.firstexam.*

class ExamFirstActivity : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.firstexam)


        Button01.setOnClickListener{
            val secondIntent = Intent(this, ExamSecondActivitiy::class.java).apply {
                putExtra("name1", "${EditText01.text}")
                putExtra("telnum1", "${EditText02.text}")

//                putExtra("name1", EditText01.text.toString())
//                putExtra("telnum1", EditText02.text.toString())

            }
            startActivity(secondIntent)
        }

    }
}