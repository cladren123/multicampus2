package com.example.fragment

import android.content.Context
import android.os.Bundle
import android.util.Log
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.fragment.app.Fragment

class FirstFragment : Fragment() {
    override fun onAttach(context: Context) {
        super.onAttach(context)
        Log.d("lifecycle", "Fragment::::onAttach()")
    }

    // fragment가 뷰를 만들때 호출되는 메소드
    // 액티비티에 배치될 때 호출된다. - 프레그먼트에 보여질 뷰를 그리기 위해서 호출하는 메소드
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        Log.d("lifecycle", "Fragment::::onCreate()")
    }

    override fun onCreateView(inflater: LayoutInflater, container: ViewGroup?, savedInstanceState: Bundle?): View? {


        Log.d("lifecycle", "Fragment::::onCreateView()")
        val view = inflater.inflate(R.layout.fragment_first2, container, false)

        // 뷰를 만들어서 리턴
       return view
    }

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)
        Log.d("lifecycle", "Fragment::::onViewCreated()")
    }

    override fun onActivityCreated(savedInstanceState: Bundle?) {
        super.onActivityCreated(savedInstanceState)
        Log.d("lifecycle", "Fragment::::onActivityCreated()")
    }

    override fun onStart() {
        super.onStart()
        Log.d("lifecycle", "Fragment::::onStart()")
    }

    override fun onResume() {
        super.onResume()
        Log.d("lifecycle", "Fragment::::onResume()")
    }

    override fun onPause() {
        super.onPause()
        Log.d("lifecycle", "Fragment::::onPause()")
    }

    override fun onStop() {
        super.onStop()
        Log.d("lifecycle", "Fragment::::onStop()")
    }

    override fun onDestroyView() {
        super.onDestroyView()
        Log.d("lifecycle", "Fragment::::onDestroyView()")
    }

    override fun onDestroy() {
        super.onDestroy()
        Log.d("lifecycle", "Fragment::::onDestroy()")
    }

    override fun onDetach() {
        super.onDetach()
        Log.d("lifecycle", "Fragment::::onDetach()")
    }


}