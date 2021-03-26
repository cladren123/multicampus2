package com.example.intent.exam

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import com.example.intent.R
import kotlinx.android.synthetic.main.activity_list_item_detail.*

class ListItemDetailActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_list_item_detail)

        // 안드로이드 OS에서 인텐트 꺼내오기
        var listIntent = intent

        var myobj = listIntent.getParcelableExtra<PersonValue>("myobj")

        listdetail_image.setImageResource(myobj!!.myImg)
        detail_name_editview.setText(myobj.name)
        detail_info_editview.setText(myobj.info)
        detail_date_editview.setText(myobj.date)

        btnback.setOnClickListener{
            finish()
        }

        btnupdate.setOnClickListener{
            var myobj = PersonValue()
            myobj.name = detail_name_editview.text.toString()
            myobj.date = detail_date_editview.text.toString()
            myobj.info = detail_info_editview.text.toString()

            listIntent.putExtra("myobj", myobj)
            listIntent.putExtra("check", detail_check.isChecked)
            setResult(111, listIntent)
            finish()
        }



//        var personIntent = intent
//        var obj = personIntent.getParcelableExtra<Person2>("myperson2")
//        if (obj != null) {
//            listdetail_image?.setImageResource(obj.myimage)
//            detail_name_editview.setText(obj?.myname)
//            detail_date_editview.setText(obj?.mydate)
//            detail_info_editview.setText(obj?.myinfo)
//        }
//
//        btnback.setOnClickListener{
//            finish()
//        }
//









    }
}