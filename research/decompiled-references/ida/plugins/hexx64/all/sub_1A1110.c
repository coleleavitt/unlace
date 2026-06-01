__int64 __fastcall sub_1A1110(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 24);
  if ( !v4 )
  {
    if ( !under_debugger )
      sub_383060(0xC8BAu, a4);
    BUG();
  }
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16 * v4 - 16) - *(_QWORD *)(a2 + 1440);
  result = 0;
  if ( v5 >= a3 )
    return (v5 + *(int *)(a1 + 60) - a3 - 1) / *(int *)(a1 + 60);
  return result;
}

