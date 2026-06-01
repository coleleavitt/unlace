_QWORD *__fastcall sub_A3160(__int64 a1, _QWORD *a2, __int64 a3, double a4)
{
  int v4; // ecx
  __int64 v5; // rcx
  _QWORD *result; // rax
  __int64 v7; // rdx
  __int64 v8; // rsi

  v4 = *(_DWORD *)(a1 + 76);
  if ( v4 == 6 )
  {
    if ( !under_debugger )
      sub_383060(0xCA62u, a4);
LABEL_20:
    BUG();
  }
  if ( v4 == 1 )
  {
    if ( !under_debugger )
      sub_383060(0xCD60u, a4);
    goto LABEL_20;
  }
  a2[2] = a3;
  v5 = a2[3];
  result = a2;
  if ( a3 )
  {
    if ( v5 == -1 )
      a2[3] = *(_QWORD *)(a3 + 24);
    a2[1] = *(_QWORD *)(a3 + 8);
    *(_QWORD *)(a3 + 8) = a2;
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 48);
    if ( v5 == -1 && v8 )
    {
      result[3] = *(_QWORD *)(v8 + 24);
      v8 = *(_QWORD *)(a1 + 48);
    }
    result[1] = v8;
    *(_QWORD *)(a1 + 48) = result;
  }
  if ( *(_QWORD *)(a1 + 56) == a3 )
  {
    *(_QWORD *)(a1 + 56) = result;
  }
  else
  {
    v7 = result[1];
    if ( v7 )
      *(_QWORD *)(v7 + 16) = result;
  }
  return result;
}

