package com.example.intent.exam

import android.util.Log
import android.view.View
import android.widget.CheckBox
import android.widget.ImageView
import android.widget.TextView
import com.example.intent.R

// viewHolder의 역할
// row의 여러 개체들을 하나로 관리한다.
// find를 통해 xml의 변수들을 가져와서 자기 변수에 담는다.


class ViewHolder {
    var myimg: ImageView? = null
    var nameView: TextView? = null
    var dateView: TextView? = null
    var info: TextView? = null
    var chkVal: CheckBox? = null

    constructor(parentView: View) {
        myimg = parentView.findViewById(R.id.imgprofile)
        nameView = parentView.findViewById(R.id.textname)
        dateView = parentView.findViewById(R.id.textdate)
        info = parentView.findViewById(R.id.textstate)
        chkVal = parentView.findViewById(R.id.checkstore)
    }
}