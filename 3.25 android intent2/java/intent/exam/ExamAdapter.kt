package com.example.intent.exam

import android.content.Context
import android.util.Log
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ArrayAdapter
import android.widget.Toast
import com.example.intent.R
import java.util.*

class ExamAdapter(context: Context,  var resId: Int,var  datalist: ArrayList<Person>)
            : ArrayAdapter<Person>(context, resId, datalist) {
    var userStateValue = HashMap<Int, MyMemento>()

    override fun getView(position: Int, convertView: View?,parent: ViewGroup): View {

        // convertView는 readonly라 수정하기 위해서 다른 변수에 받는다.

        var rowView = convertView
        var holder : ViewHolder? = null
        if (rowView == null) {
            val inflater =
                context.getSystemService(Context.LAYOUT_INFLATER_SERVICE) as LayoutInflater
            rowView = inflater.inflate(resId, null)
            holder =   ViewHolder(rowView)
            rowView.tag = holder

        }else {
            holder = rowView?.tag as ViewHolder
        }
        val actorItem = datalist[position]


        if (actorItem != null) {

            // 객체에다가 데이터를 가져와서 담아준다. holder의 역할,
            // rowview의 세부항목의 데이터를 심어주는 역할, 재사용하지 않기 위해, 재사용하면 계속 만들어야 한다.

            val myimg = holder.myimg
            val nameView = holder.nameView
            val dateView = holder.dateView
            val info = holder.info
            val chkVal = holder.chkVal

            myimg?.setImageResource(actorItem.myImg)
            nameView?.text = actorItem.name
            dateView?.text = actorItem.date
            info?.text = actorItem.info
           
	        //여기에 checkbox값을 저장할 수 있도록 코드를 연결하세요


            // ====== 미리 설정되어 있는 체크값을 꺼내서 반영 =====
            // row를 구성하는 뷰를 만들면서 체크설장한 내용이 저장되어 있는지 확인하고 저장되어 있으면 저장된 값을
            // 체크박스에 셋팅하고 저장되어 있지 않으면 체크박스에 체크되지 않은 상태로 설정
            // hashmap에서 꺼내기
            var saveObj = userStateValue[position]
            if(saveObj == null){
                chkVal?.isChecked = false
            }
            else
            {
                chkVal?.isChecked = saveObj.check
            }

            // onCheckedChangeListener에 처리하지 말아야 하는 이유는 이 이벤트는 checkbox 값이 변경되면 호출되므로
            // true에서 false로 변경되면 호출
            // ========== 체크를 설정하면 설정한 값을 저장 ==========
            chkVal?.setOnClickListener{
                val data = chkVal?.isChecked
                val state = MyMemento()
                state.check = chkVal?.isChecked
                userStateValue[position] = state
                Toast.makeText(it.context, "체크박스가 선택됨", Toast.LENGTH_LONG).show()

            }


        }
        Log.d("setOnClickListener","총 저장갯수:${userStateValue.size}")
        // 리턴하면 rowview를 받아서 화면에 붙여주는 작업을 한다. getView에서 꼭 해줘야 하는 작업. rowView는 완성된 하나의 뷰
        return rowView!!
    }


}

