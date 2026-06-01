__int64 __fastcall sub_27AA0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rcx
  int v3; // edx
  __int64 v4; // rax
  __int64 result; // rax
  unsigned __int64 v6; // rcx
  int v7; // edx
  __int64 v8; // rax

  v2 = *(_QWORD *)(a1 + 1856);
  if ( !v2 )
    goto LABEL_7;
  v3 = 0;
  v4 = 0;
  while ( 1 )
  {
    result = *(_QWORD *)(a1 + 1848) + 40 * v4;
    if ( a2 == *(_QWORD *)(result + 8) )
      break;
    v4 = ++v3;
    if ( v3 >= v2 )
      goto LABEL_7;
  }
  if ( !result )
  {
LABEL_7:
    sub_27740(a1);
    v6 = *(_QWORD *)(a1 + 1856);
    if ( !v6 )
      goto LABEL_12;
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      result = *(_QWORD *)(a1 + 1848) + 40 * v8;
      if ( a2 == *(_QWORD *)(result + 8) )
        break;
      v8 = ++v7;
      if ( v7 >= v6 )
        goto LABEL_12;
    }
    if ( !result )
    {
LABEL_12:
      if ( under_debugger )
        BUG();
      interr();
      return sub_27B80(1117);
    }
  }
  return result;
}

