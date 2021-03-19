package com.example.basicview

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle

/*
    ImageView의 메소드
    1) setImageResource   - res 폴더에 있는 이미지 파일을 연결
    2) setImageBitmap
    3) setImageDrawable
        -> setImageBitmap 이나 setImageDrawable 은 주로 파일이나 네트워크로 받은 이미지를 제어
        -> setImageBitmap은 수정불가능,

 */

class imageTestActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.imagetest2)
    }
}