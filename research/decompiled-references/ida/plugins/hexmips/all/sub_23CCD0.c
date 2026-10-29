_DWORD *__fastcall sub_23CCD0(_QWORD *a1, int a2, __int64 a3)
{
  _QWORD *v4; // rdx
  __int64 v5; // r13
  unsigned __int64 v6; // rax
  __int64 v7; // r12
  int v8; // eax

  v4 = (_QWORD *)a1[23];
  if ( !v4 )
    goto LABEL_4;
  v5 = 24;
  v6 = *v4 & 0xFFFFFFFFFFFFFFFCLL;
  if ( v6 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( (*(_BYTE *)v6 & 2) != 0 )
          goto LABEL_4;
        v5 = v6 + 24;
        if ( *(_DWORD *)(v6 + 24) <= a2 )
          break;
        v6 = *(_QWORD *)(v6 + 8);
      }
      if ( *(_DWORD *)(v6 + 24) >= a2 )
        break;
      v6 = *(_QWORD *)(v6 + 16);
    }
    if ( v4 == (_QWORD *)v6 )
    {
LABEL_4:
      if ( !under_debugger )
        sub_37E160(50373);
      BUG();
    }
  }
  v7 = sub_23CC70((__int64)a1);
  v8 = sub_6BD40(a1, *(unsigned int *)(v5 + 8));
  return sub_23CBE0((__int64)a1, a3, v8, v7);
}

