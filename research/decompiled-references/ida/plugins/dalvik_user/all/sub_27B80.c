_DWORD *__fastcall sub_27B80(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, int a6)
{
  unsigned __int64 v6; // rcx
  int v7; // edx
  __int64 v8; // rax
  _DWORD *result; // rax
  unsigned __int64 v10; // rcx
  int v11; // edx
  __int64 v12; // rax

  v6 = *(_QWORD *)(a1 + 1856);
  if ( !v6 )
    goto LABEL_7;
  v7 = 0;
  v8 = 0;
  while ( 1 )
  {
    result = (_DWORD *)(*(_QWORD *)(a1 + 1848) + 40 * v8);
    if ( a2 == *result )
      break;
    v8 = ++v7;
    if ( v7 >= v6 )
      goto LABEL_7;
  }
  if ( !result )
  {
LABEL_7:
    sub_58110(a1, (unsigned int)"update threads, tid=%d was missed\n", a2, v6, a5, a6);
    sub_27740(a1);
    v10 = *(_QWORD *)(a1 + 1856);
    if ( !v10 )
      goto LABEL_12;
    v11 = 0;
    v12 = 0;
    while ( 1 )
    {
      result = (_DWORD *)(*(_QWORD *)(a1 + 1848) + 40 * v12);
      if ( a2 == *result )
        break;
      v12 = ++v11;
      if ( v11 >= v10 )
        goto LABEL_12;
    }
    if ( !result )
    {
LABEL_12:
      if ( under_debugger )
        BUG();
      interr();
      return (_DWORD *)sub_27C60(1118);
    }
  }
  return result;
}

