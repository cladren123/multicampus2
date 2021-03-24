package com.example.adaoterview

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import android.widget.ArrayAdapter
import android.widget.ImageView
import android.widget.SimpleAdapter
import kotlinx.android.synthetic.main.list_view_test.*

class CustomRowTestActivity2 : AppCompatActivity() {

    var imageRes = intArrayOf(R.drawable.leemin,
        R.drawable.jjangkim,
        R.drawable.kimdong,
        R.drawable.chasoccer,
        R.drawable.kbr)
    var data1 = arrayOf("이민호","장동건","김어준","주진우","김서연")
    var data2 = arrayOf("멋져","아저씨","힘내라","이기자","예뻐")


    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.list_view_test)

        //SimpleAdapter 에 설정한 데이터 정의
        var datalist = ArrayList<HashMap<String, Any>>()

        for(i in imageRes.indices){
            val map = HashMap<String, Any>()
            map["img"] = imageRes[i]
            map["data1"] = data1[i]
            map["data2"] = data2[i]
            datalist.add(map)
        }

        // key와 연결된 리소스 id을 배열로 정의
        val keylist = arrayOf("img", "data1", "data2")
        val res_id_list = intArrayOf(R.id.myimg, R.id.txtcust1, R.id.txtcust2)

        // 어댑터 생성
        val adapter = SimpleAdapter(this, datalist, R.layout.custrow, keylist, res_id_list)
        listview1.adapter = adapter

        listview1.setOnItemClickListener { parent, view, position, id ->
            /*Log.d("test",  "자바 : " + parent.toString()+"=========="+view.toString())
            Log.d("test", "코틀린 : $parent==========$view")
            Log.d("test", "코틀린 : ${parent.toString()}==========${view.toString()}")*/
            listTxt.text = "${data1[position]}과 ${data2[position]}을 선택함"

        }

    }
}