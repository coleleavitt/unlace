__int64 (*__fastcall sub_30E3C0(_QWORD *a1, __int64 a2))()
{
  __int64 v3; // rdi
  __int64 (*result)(); // rax

  v3 = *(_QWORD *)(a2 + 112);
  result = *(__int64 (**)())(*(_QWORD *)v3 + 384LL);
  if ( result != sub_30DF10 )
  {
    result = (__int64 (*)())((__int64 (__fastcall *)(__int64, _QWORD *))result)(v3, a1 + 4);
    if ( (_BYTE)result )
      return (__int64 (*)())sub_30E250(a1, "runtime.duffcopy", a1[7]);
  }
  return result;
}

