package com.example.adaoterview

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.AdapterView
import android.widget.ArrayAdapter
import kotlinx.android.synthetic.main.list_view_test.*


class MainActivity : AppCompatActivity() {

    // 1. ListView에 출력할 데이터
    var datalist = arrayOf<String>("C", "Python", "oracle", "HTML", "CSS", "javascript", "java", "servlet" +
            "hadoop", "rasphberryPi", "android", "sqoop", "spark", "kotlin")

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.list_view_test)

        //2. Adapter 객체를 생성
        /*
            리스트뷰에 어떤 디자인으로 어떤 데이터를 출력할 것인지 명시
            Context -> 액티비티 (어떤 작업을 하기 위해서 필요한 정보들을 담고 있는 기본객체, 화면을 구성하기 위해서 필요한 화면정보부터 안드로이드의 많은 것들을 담고 있는 객체)
            layoutRes -> 한 row의 디자인 (simple_list_item_1 -> 안드로이드에서 제공하는 디자인 )
            datalist -> listView에 출력할 데이터 (배열, ArrayList, HashMap)
         */

        val adapter = ArrayAdapter(this, android.R.layout.simple_list_item_1, datalist)

        //3. ListView에 Adapter가 작업할 수 있도록 연결
        listview1.adapter = adapter

        // 이벤트 연결
        listview1.onItemClickListener = listener

    }

    var listener = AdapterView.OnItemClickListener{ parent, view, position, id ->  //메소드의 매개변수 : OnItemClickListener의 메소드가 한 개 이므로 람다표현이 가능
        listTxt.text = "선택한 항목:${datalist[position]}"
        
    }




}