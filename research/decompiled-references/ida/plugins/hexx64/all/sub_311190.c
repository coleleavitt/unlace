__int64 __fastcall sub_311190(_QWORD *a1)
{
  __int64 result; // rax
  _QWORD *i; // rbx
  __int64 v4; // rdi

  result = qfree(a1[3]);
  for ( i = (_QWORD *)*a1; a1 != i; --a1[2] )
  {
    v4 = (__int64)i;
    i = (_QWORD *)*i;
    **(_QWORD **)(v4 + 8) = i;
    i[1] = *(_QWORD *)(v4 + 8);
    result = qfree(v4);
  }
  return result;
}

