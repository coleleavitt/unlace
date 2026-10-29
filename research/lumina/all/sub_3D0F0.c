_QWORD *__fastcall sub_3D0F0(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r12
  _QWORD *v3; // r10
  unsigned __int64 v5; // rsi
  _QWORD *v6; // rbp
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // rdi
  __int64 v9; // rax
  unsigned __int8 v10; // dl
  unsigned __int8 v11; // cl
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rdi
  __int64 v14; // rax
  unsigned __int8 v15; // dl
  unsigned __int8 v16; // cl

  v2 = (_QWORD *)(a1 + 8);
  v3 = *(_QWORD **)(a1 + 16);
  if ( !v3 )
    return v2;
  v5 = a2[1];
  v6 = (_QWORD *)(a1 + 8);
  do
  {
    v7 = v3[5];
    v8 = v5;
    if ( v7 <= v5 )
      v8 = v3[5];
    if ( v8 )
    {
      v9 = 0;
      while ( 1 )
      {
        v10 = *(_BYTE *)(v3[4] + v9);
        v11 = *(_BYTE *)(*a2 + v9);
        if ( v10 < v11 )
          break;
        if ( v11 < v10 )
          goto LABEL_23;
        if ( v8 == ++v9 )
          goto LABEL_22;
      }
LABEL_10:
      v3 = (_QWORD *)v3[3];
      continue;
    }
LABEL_22:
    if ( v7 < v5 )
      goto LABEL_10;
LABEL_23:
    v6 = v3;
    v3 = (_QWORD *)v3[2];
  }
  while ( v3 );
  if ( v2 == v6 )
    return v6;
  v12 = v6[5];
  v13 = v12;
  if ( v5 <= v12 )
    v13 = v5;
  if ( v13 )
  {
    v14 = 0;
    while ( 1 )
    {
      v15 = *(_BYTE *)(*a2 + v14);
      v16 = *(_BYTE *)(v6[4] + v14);
      if ( v15 < v16 )
        return v2;
      if ( v16 < v15 )
        return v6;
      if ( v13 == ++v14 )
        goto LABEL_24;
    }
  }
  else
  {
LABEL_24:
    if ( v5 < v12 )
      return v2;
    return v6;
  }
}
