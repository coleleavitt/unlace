_QWORD *__fastcall sub_74D30(__int64 a1, unsigned __int64 *a2)
{
  _QWORD *v2; // rdx
  _QWORD *v3; // rax
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdi
  _QWORD *v8; // rcx
  _QWORD *i; // rsi
  unsigned __int64 v10; // r9

  v2 = *(_QWORD **)(a1 + 16);
  v3 = (_QWORD *)(a1 + 8);
  if ( !v2 )
    return v3;
  v4 = *a2;
  while ( 1 )
  {
    v5 = v2[4];
    if ( v4 < v5 )
    {
LABEL_24:
      v3 = v2;
      v2 = (_QWORD *)v2[2];
      goto LABEL_21;
    }
    if ( v5 == v4 )
    {
      v6 = v2[5];
      v7 = a2[1];
      if ( v7 < v6 )
        goto LABEL_24;
      if ( v6 >= v7 )
        break;
    }
    v2 = (_QWORD *)v2[3];
LABEL_21:
    if ( !v2 )
      return v3;
  }
  v8 = (_QWORD *)v2[2];
  for ( i = (_QWORD *)v2[3]; i; i = (_QWORD *)i[2] )
  {
    while ( 1 )
    {
      v10 = i[4];
      if ( v10 >= v4 && (v4 != v10 || v7 < i[5]) )
        break;
      i = (_QWORD *)i[3];
      if ( !i )
        goto LABEL_13;
    }
  }
LABEL_13:
  while ( v8 )
  {
    if ( v4 < v8[4] || v4 == v8[4] && v8[5] >= v7 )
    {
      v2 = v8;
      v8 = (_QWORD *)v8[2];
    }
    else
    {
      v8 = (_QWORD *)v8[3];
    }
  }
  return v2;
}

