_UNKNOWN **__fastcall sub_69A00(__int64 a1)
{
  _UNKNOWN **result; // rax
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rdi

  result = &off_C88C0;
  *(_QWORD *)a1 = &off_C88C0;
  *(_OWORD *)(a1 + 16) = 0;
  v3 = *(_QWORD *)(a1 + 32);
  if ( v3 )
  {
    v4 = *(_QWORD *)(a1 + 40);
    if ( v4 )
    {
      v5 = 0;
      v6 = 0;
      do
      {
        v7 = v5 + v3;
        ++v6;
        v5 += 264;
        sub_1B750(v7);
        v3 = *(_QWORD *)(a1 + 32);
      }
      while ( v4 != v6 );
    }
    *(_QWORD *)(a1 + 40) = 0;
    return (_UNKNOWN **)qfree(v3);
  }
  return result;
}
