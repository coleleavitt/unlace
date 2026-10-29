_DWORD *__fastcall sub_241550(_QWORD *a1, int a2, __int64 a3, double a4)
{
  _QWORD *v5; // rdx
  __int64 v6; // r13
  unsigned __int64 v7; // rax
  __int64 v8; // r12
  int v9; // eax

  v5 = (_QWORD *)a1[23];
  if ( !v5 )
    goto LABEL_4;
  v6 = 24;
  v7 = *v5 & 0xFFFFFFFFFFFFFFFCLL;
  if ( v7 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( (*(_BYTE *)v7 & 2) != 0 )
          goto LABEL_4;
        v6 = v7 + 24;
        if ( *(_DWORD *)(v7 + 24) <= a2 )
          break;
        v7 = *(_QWORD *)(v7 + 8);
      }
      if ( *(_DWORD *)(v7 + 24) >= a2 )
        break;
      v7 = *(_QWORD *)(v7 + 16);
    }
    if ( v5 == (_QWORD *)v7 )
    {
LABEL_4:
      if ( !under_debugger )
        sub_383060(0xC4C5u, a4);
      BUG();
    }
  }
  v8 = sub_2414F0(a1, *(_DWORD *)(v6 + 4), a4);
  v9 = sub_6FF40(a1, *(unsigned int *)(v6 + 8));
  return sub_241460((__int64)a1, a3, v9, v8, a4);
}

