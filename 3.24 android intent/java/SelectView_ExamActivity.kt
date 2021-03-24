package com.example.adaoterview


import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import com.example.adaoterview.exam.ExamAdapter
import com.example.adaoterview.exam.Person
import kotlinx.android.synthetic.main.list_view_test.*

class SelectView_ExamActivity : AppCompatActivity() {

    val actorlist = ArrayList<Person>()

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.select_exam_main)

        var actorItem:Person
            actorItem = Person(R.drawable.ansoccer, "안정환", "2021/04/06", "멋져")
            actorlist.add(actorItem)
            actorItem = Person(R.drawable.chasoccer, "차범근", "2021/04/06", "아들~~")
            actorlist.add(actorItem)
            actorItem = Person(R.drawable.jjangkim, "김어준", "2021/04/06", "찐")
            actorlist.add(actorItem)
            actorItem = Person(R.drawable.kbr, "김범룡", "2021/04/06", "진짜가수")
            actorlist.add(actorItem)
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
            actorItem = Person(R.drawable.kimdong, "이민호", "2021/04/06", "멋져")
            actorlist.add(actorItem)
            actorItem = Person(R.drawable.leemin, "이민호", "2021/04/06", "멋져")
            actorlist.add(actorItem)
            actorItem = Person(R.drawable.parksoccer, "박지성", "2021/04/06", "멋져")
            actorlist.add(actorItem)


        val adapter = ExamAdapter(this, R.layout.select_exam_row, actorlist)

        listview1.adapter = adapter



    }
}