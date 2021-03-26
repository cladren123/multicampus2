package com.example.intent

import android.app.Activity
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import kotlinx.android.synthetic.main.returndata_third.*

class ReturnDataThirdActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.returndata_third)

        // intent 공유할 게 없으면 첫번째 거 사용 setResult의 첫번째 상수
        btn_resultvalue1.setOnClickListener{
            setResult(Activity.RESULT_OK)
            finish()
        }

        btn_resultvalue2.setOnClickListener{
            setResult(Activity.RESULT_CANCELED)
            finish()
        }

        btn_resultvalue3.setOnClickListener{
            setResult(Activity.RESULT_FIRST_USER)
            finish()
        }

        btn_resultvalue4.setOnClickListener{
            setResult(Activity.RESULT_OK+10)
            finish()
        }




    }
}