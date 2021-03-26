package com.example.intent.exam

import android.app.Activity
import android.content.Intent
import android.os.Bundle
import android.util.Log
import android.view.View
import android.widget.AdapterView
import android.widget.Toast
import com.example.intent.R
import kotlinx.android.synthetic.main.activity_list_item_detail.*
import kotlinx.android.synthetic.main.select_exam_main.*
import java.util.*

const val BACK = 1000

class SelectView_ExamActivity : Activity() {

    var actorlist= ArrayList<Person>()
    var cuurentView:ViewHolder? = null

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.select_exam_main)
        var actorItem: Person
        actorItem = Person(R.drawable.ansoccer, "안정환", "2021/04/06", "멋져")
        actorlist.add(actorItem)
        actorItem = Person(R.drawable.chasoccer, "차범근", "2021/04/06", "아들~~")
        actorlist.add(actorItem)
        actorItem = Person(R.drawable.jjangkim, "김어준", "2021/04/06", "찐")
        actorlist.add(actorItem)
        actorItem = Person(R.drawable.kbr, "김범룡", "2021/04/06", "진짜가수")
        actorlist.add(actorItem)
        /* actorItem = new ActorItem(R.drawable.kim,"김서연","2020/04/06","이뻐");
        actorlist.add(actorItem)*/
        actorItem = Person(R.drawable.kimdong, "이민호", "2021/04/06", "멋져")
        actorlist.add(actorItem)
        actorItem = Person(R.drawable.leemin, "이민호", "2021/04/06", "멋져")
        actorlist.add(actorItem)
        actorItem = Person(R.drawable.parksoccer, "박지성", "2021/04/06", "멋져")
        actorlist.add(actorItem)
        actorItem = Person(R.drawable.ansoccer, "안정환", "2021/04/06", "멋져")
        actorlist.add(actorItem)
        actorItem = Person(R.drawable.chasoccer, "차범근", "2021/04/06", "아들~~")
        actorlist.add(actorItem)
        actorItem = Person(R.drawable.jjangkim, "김어준", "2021/04/06", "찐")
        actorlist.add(actorItem)
        actorItem = Person(R.drawable.kbr, "김범룡", "2021/04/06", "진짜가수")
        actorlist.add(actorItem)
        /* actorItem = new ActorItem(R.drawable.kim,"김서연","2020/04/06","이뻐");
        actorlist.add(actorItem);*/
        actorItem = Person(R.drawable.kimdong, "이민호", "2021/04/06", "멋져")
        actorlist.add(actorItem)
        actorItem = Person(R.drawable.leemin, "이민호", "2021/04/06", "멋져")
        actorlist.add(actorItem)
        actorItem = Person(R.drawable.parksoccer, "박지성", "2021/04/06", "멋져")
        actorlist.add(actorItem)

        val adapter = ExamAdapter(this, R.layout.select_exam_row, actorlist)

        listView1.adapter = adapter

        // Toast.makeText(this,"문자열", Toast.LENGTH_LONG).show()

        var mylistener = AdapterView.OnItemClickListener { parent, view, position, id ->

            var listIntent = Intent(this@SelectView_ExamActivity, ListItemDetailActivity::class.java )
            var myobj = PersonValue()
            myobj.myImg = actorlist[position].myImg
            myobj.name = actorlist[position].name
            myobj.date = actorlist[position].date
            myobj.info = actorlist[position].info

            listIntent.putExtra("myobj", myobj)

            cuurentView = view.getTag() as ViewHolder

            startActivityForResult(listIntent, 100)









//
//            var personIntent = Intent(this, ListItemDetailActivity::class.java )
//            var obj = Person2()
//
//            obj.myimage = actorlist[position].myImg
//            obj.myname = actorlist[position].name
//            obj.mydate = actorlist[position].date
//            obj.myinfo = actorlist[position].info
//
//            personIntent.putExtra("myperson2", obj)
//             //startActivity(personIntent)
//
//
//            startActivityForResult(personIntent, BACK)


            Log.d("test11","test11")

        }

        listView1.onItemClickListener = mylistener

    }

    override fun onActivityResult(requestCode: Int, resultCode: Int, data: Intent?) {
        super.onActivityResult(requestCode, resultCode, data)
        if(requestCode==100)
        {
            if(resultCode==111)
            {
               var myobj = data?.getParcelableExtra<PersonValue>("myobj")

                // 불린이나 인트는 디폴트 값이 필요하다
                val check = data?.getBooleanExtra("check", false)

                // chkVal는 ViewHolder에 있는 체크박스
                cuurentView?.chkVal?.isChecked = check!!

                cuurentView?.nameView?.text = myobj?.name
                cuurentView?.dateView?.text = myobj?.date
                cuurentView?.info?.text = myobj?.info

                // 데이터를 DB나 파일에서 가져왔을 때 데이터로 DB나 파일의 내용까지 변경하는 코드 추가




            }
        }


    }





}
