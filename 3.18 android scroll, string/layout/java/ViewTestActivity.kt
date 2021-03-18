package com.example.layout

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
/*
     화면에 xml을 파싱해서 만들어 놓은 모든 위젯을 초기화해서 액티비티에 배치
     */

// 버튼이 눌려졌을 때 처리 작업 수행
// 1. xml 문서 내부에 정의되어 있는 버튼을 찾아와야 한다.
// 2. 버튼이 눌려졌을 때 처리할 기능이 정의되어 있는 객체를 생성
// 3. 버튼과 2번에서 정의한 기능을 연결

// 뷰 테스트르 위한 엑티비티


class ViewTestActivity : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)


        setContentView(R.layout.scroll_exam)


    }
}