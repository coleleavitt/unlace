_QWORD *__fastcall sub_53090(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  struct _Unwind_Exception *v4; // rbp

  v2 = (_QWORD *)operator new(0x18u);
  *v2 = &off_AA710;
  v2[1] = a1;
  v2[2] = a2;
  if ( !a1 || !*(_QWORD *)(a1 + 40) )
  {
    if ( !under_debugger )
    {
      v4 = (struct _Unwind_Exception *)interr(30550);
      operator delete(v2, 0x18u);
      _Unwind_Resume(v4);
    }
    BUG();
  }
  return v2;
}

