unsigned __int64 __fastcall sub_131360(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rax

  result = *(_QWORD *)(a2 + 464);
  if ( (int)result > 0 )
  {
    v7 = 0;
    do
    {
      if ( v7 >= result || (v8 = *(int *)(*(_QWORD *)(a2 + 456) + 4 * v7), v8 >= *(_QWORD *)(a2 + 440)) )
      {
        if ( !under_debugger )
          sub_37EEE0(50442);
        BUG();
      }
      ++v7;
      sub_1BF770(
        *(_DWORD *)(a2 + 432) + 104 * v8,
        (_DWORD)a1,
        *(_DWORD *)(*(_QWORD *)(a2 + 432) + 104 * v8 + 88),
        0,
        0,
        a6);
      result = *(_QWORD *)(a2 + 464);
    }
    while ( (int)result > (int)v7 );
  }
  if ( a1[2] )
  {
    a1[3] = 0;
    result = qfree();
    a1[2] = 0;
    a1[4] = 0;
  }
  return result;
}

