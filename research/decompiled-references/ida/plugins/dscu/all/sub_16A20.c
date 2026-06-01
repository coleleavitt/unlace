_QWORD *__fastcall sub_16A20(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  void (__fastcall *v4)(_QWORD *); // rax

  v2 = (_QWORD *)qalloc_or_throw(968);
  sub_C390((__int64)v2);
  if ( !(unsigned __int8)sub_164D0(v2) )
  {
    if ( v2 )
    {
      v4 = *(void (__fastcall **)(_QWORD *))(*v2 + 16LL);
      if ( (char *)v4 != (char *)sub_14D70 )
      {
        v4(v2);
        return nullptr;
      }
      sub_14BF0(v2, a2, (__int64)sub_14D70);
      qfree(v2);
    }
    return nullptr;
  }
  return v2;
}

