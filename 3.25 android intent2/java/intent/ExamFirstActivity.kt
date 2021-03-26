package com.example.intent

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import kotlinx.android.synthetic.main.firstexam.*

const val  CHECK_BUTTON = 11111

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
            startActivityForResult(secondIntent, CHECK_BUTTON)

        }



    }

    override fun onActivityResult(requestCode: Int, resultCode: Int, data: Intent?) {
        super.onActivityResult(requestCode, resultCode, data)

        if(requestCode == CHECK_BUTTON)
        {
            if(resultCode == 111)
            {
                val text1 = first_return.text
                var state = data?.getBooleanExtra("checkval", false)
                if(state == true)
                {
                    first_return.text =  "${text1} 우수회원설정"
                }
                else
                {
                    first_return.text = text1.toString() + "일반회원설정"
                }
            }

        }



//        when(requestCode)
//        {
//            CHECK_BUTTON ->  first_return.text = data?.getStringExtra("returndata")
//        }
    }
}