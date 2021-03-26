package com.example.intent

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.Toast
import kotlinx.android.synthetic.main.second.*

class SecondActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.second)


        // MainActivity가 공유한 데이터를 꺼내서 사용
        // SecondActivity가 실행되기 위해 사용된 인텐트를 꺼내오기
        var firstIntent = intent;

        // 인텐트객체에서 공유된 값을 꺼내기, 이름으로 부른다, 숫자는 디폴트값이 있다.
        val msg = firstIntent.getStringExtra("info")
        val data = firstIntent.getIntExtra("num", 0)

        Toast.makeText(this, "추출한 값 : $msg, $data", Toast.LENGTH_LONG).show()

        bt2.setOnClickListener{
            // 액티비티 종료하기
            finish()
        }



    }


}