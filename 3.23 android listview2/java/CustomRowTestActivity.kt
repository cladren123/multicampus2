package com.example.adaoterview

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import android.widget.ArrayAdapter
import kotlinx.android.synthetic.main.custrow.*
import kotlinx.android.synthetic.main.list_view_test.*

class CustomRowTestActivity : AppCompatActivity() {
    // 1. 리스트뷰에 출력할 데이터 정의 - 커스텀 row로 리스트뷰를 만드는 경우
    // 2. 데이터를 ArrayList로 정의

    var datalist = ArrayList<String>()

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.list_view_test)

        // 출력할 데이터 ArrayList에 추가

        datalist.add("김서연")
        datalist.add("주진우")
        datalist.add("김어준")
        datalist.add("장동건")
        datalist.add("이민호")

        // 2. Adapter 객체를 생성
        val myadapter = ArrayAdapter(this, R.layout.custrow, R.id.txtcust1, datalist)
        //                                       ---------------------------------------
        //                                         row의 디자인 - 사용자 정의 뷰 사용자정의 뷰에 포함된 TextView

        listview1.adapter = myadapter

        // 만들어 낼 수 있지만 제어할 수 없다. 제어하고 싶으면 직접 만들어아야한다. 


        btncust.setOnClickListener{
            Log.d("test", "반응있나요?")
        }




    }
}