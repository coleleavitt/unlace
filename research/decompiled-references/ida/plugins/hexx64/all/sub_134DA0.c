unsigned __int64 __fastcall sub_134DA0(_QWORD *a1, _QWORD *a2, double a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rax
  __int64 v7; // rdi

  result = a2[58];
  if ( (int)result > 0 )
  {
    v5 = 0;
    do
    {
      if ( v5 >= result || (v6 = *(int *)(a2[57] + 4 * v5), v6 >= a2[55]) )
      {
        if ( !under_debugger )
          sub_383060(0xC50Au, a3);
        BUG();
      }
      ++v5;
      sub_1C31B0(a2[54] + 104 * v6, (__int64)a1, *(_DWORD *)(a2[54] + 104 * v6 + 88), 0, 0);
      result = a2[58];
    }
    while ( (int)result > (int)v5 );
  }
  v7 = a1[2];
  if ( v7 )
  {
    a1[3] = 0;
    result = qfree(v7);
    a1[2] = 0;
    a1[4] = 0;
  }
  return result;
}

