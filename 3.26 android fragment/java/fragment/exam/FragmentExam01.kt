package com.example.fragment.exam

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.View
import com.example.fragment.R
import kotlinx.android.synthetic.main.activity_fragment_exam01.*

class FragmentExam01 : AppCompatActivity() {

    val viewFragment1 = ViewFragment1()
    val viewFragment2 = ViewFragment2()
    val viewFragment3 = ViewFragment3()

    var view1:ViewFragment1? = null
    var view2:ViewFragment2? = null
    var view3:ViewFragment3? = null

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_fragment_exam01)

        view1 = ViewFragment1()
        view2 = ViewFragment2()
        view3 = ViewFragment3()


//        fragmentExamBtn1.setOnClickListener{
//            setFragment("one")
//        }
//
//        fragmentExamBtn2.setOnClickListener{
//            setFragment("two")
//        }
//
//        fragmentExamBtn3.setOnClickListener{
//            setFragment("third")
//        }

    }

    fun btn_click(view:View)
    {
        setFragment(view.getTag().toString())
    }

    fun setFragment(tag:String)
    {
        var exam_manager = supportFragmentManager
        var transaction = exam_manager.beginTransaction()
        when(tag){
            "0" -> transaction.replace(R.id.exam_container, view1!!)
            "1" -> transaction.replace(R.id.exam_container, view2!!)
            "2" -> transaction.replace(R.id.exam_container, view3!!)

        }
        transaction.commit()
    }


//    fun setFragment(name:String){
//        var fragmentManger = supportFragmentManager
//        val transaction = fragmentManger.beginTransaction()
//
//        when(name)
//        {
//            "one" -> {
//                transaction.replace(R.id.fragmentExamContainer, viewFragment1)
//                transaction.addToBackStack("one")
//            }
//            "two" -> {
//                transaction.replace(R.id.fragmentExamContainer, viewFragment2)
//                transaction.addToBackStack("two")
//            }
//            "third"-> {
//                transaction.replace(R.id.fragmentExamContainer, viewFragment3)
//                transaction.addToBackStack("third")
//            }
//        }
//
//        transaction.commit()
//
//    }



}