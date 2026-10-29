__int64 __fastcall sub_1AE730(__int64 a1, __int64 *a2, unsigned __int64 a3, double a4)
{
  _QWORD **v4; // rax
  _QWORD *v6; // rsi
  __int64 v7; // r12
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  __int64 v11; // rbp

  v4 = *(_QWORD ***)(a1 + 16);
  if ( !v4 || !a3 )
    return -1;
  v6 = *v4;
  if ( !*v4 )
    return -1;
  v7 = 24;
  v8 = *v6 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v8 )
    goto LABEL_11;
  if ( (*(_BYTE *)(*v6 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    return -1;
  while ( 1 )
  {
    v9 = *(_QWORD *)(v8 + 24);
    v7 = v8 + 24;
    if ( a3 >= v9 )
      break;
    v8 = *(_QWORD *)(v8 + 8);
LABEL_8:
    if ( (*(_BYTE *)v8 & 2) != 0 )
      return -1;
  }
  if ( v9 < a3 )
  {
    v8 = *(_QWORD *)(v8 + 16);
    goto LABEL_8;
  }
  if ( (_QWORD *)v8 == v6 )
    return -1;
LABEL_11:
  v11 = *(_QWORD *)(v7 + 8);
  if ( v11 != -1 )
  {
    if ( ((unsigned __int8)v11 & 7u) > 2 )
      sub_1ADFD0(a4);
    sub_32AA00(a2, (v11 & 7) + 41);
    tag_addr();
  }
  return *(_QWORD *)(v7 + 8);
}

