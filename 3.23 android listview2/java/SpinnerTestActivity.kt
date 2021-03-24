package com.example.adaoterview

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.View
import android.widget.AdapterView
import android.widget.ArrayAdapter
import android.widget.TextView
import kotlinx.android.synthetic.main.activity_spinner_test.*
import org.w3c.dom.Text

class SpinnerTestActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_spinner_test)

        // 1. 데이터 준비 - 리소스파일 준비
        // 2. 어댑터 생성

        // spinner를 위한 어댑터
        val adapter = ArrayAdapter.createFromResource(this, R.array.mylist_data, android.R.layout.simple_spinner_item)
        // AutoCompleteTextView를 위한 어댑터
        val autoadapter = ArrayAdapter.createFromResource(this, R.array.mylist_data, android.R.layout.simple_spinner_item)

        // 버튼을 눌렀을 때 튀어나옴
        adapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item)

        // 3. 뷰에 어댑터 연결

        spinner.adapter = adapter
        autotext.setAdapter(autoadapter)
        
        // 이벤트 연결

        spinner.onItemSelectedListener = object:AdapterView.OnItemSelectedListener{
            override fun onNothingSelected(parent: AdapterView<*>?) {

            }

            override fun onItemSelected(parent: AdapterView<*>?, view: View?, position: Int, id: Long) {
               spinner_result.text = (view as TextView).text
            }

        }


    }
}