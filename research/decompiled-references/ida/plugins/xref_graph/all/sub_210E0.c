unsigned __int64 __fastcall sub_210E0(__int64 ***a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rdx
  __int64 **v3; // r8
  __int64 v4; // rax
  _QWORD *v5; // r9
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v11; // rax
  _QWORD *v12; // r9
  _QWORD *v13; // rax
  _QWORD *v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rax
  _QWORD *v18; // r9
  _QWORD *v19; // rax
  _QWORD *v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rsi
  unsigned __int64 v23; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v24; // [rsp+8h] [rbp-10h]

  v2 = *a2;
  v24 = __readfsqword(0x28u);
  v3 = *a1;
  v23 = v2;
  v4 = **v3;
  if ( !v4 )
    goto LABEL_10;
  v5 = (_QWORD *)(v4 + 16);
  v6 = *(_QWORD **)(v4 + 24);
  if ( !v6 )
    goto LABEL_10;
  v7 = v5;
  do
  {
    while ( 1 )
    {
      v8 = v6[2];
      v9 = v6[3];
      if ( v6[4] >= v2 )
        break;
      v6 = (_QWORD *)v6[3];
      if ( !v9 )
        goto LABEL_7;
    }
    v7 = v6;
    v6 = (_QWORD *)v6[2];
  }
  while ( v8 );
LABEL_7:
  if ( v5 == v7 || v2 < v7[4] )
  {
LABEL_10:
    v11 = v3[1][8];
    if ( !v11 )
      goto LABEL_18;
    v12 = (_QWORD *)(v11 + 16);
    v13 = *(_QWORD **)(v11 + 24);
    if ( !v13 )
      goto LABEL_18;
    v14 = v12;
    do
    {
      while ( 1 )
      {
        v15 = v13[2];
        v16 = v13[3];
        if ( v13[4] >= v2 )
          break;
        v13 = (_QWORD *)v13[3];
        if ( !v16 )
          goto LABEL_16;
      }
      v14 = v13;
      v13 = (_QWORD *)v13[2];
    }
    while ( v15 );
LABEL_16:
    if ( v14 == v12 || v2 < v14[4] )
    {
LABEL_18:
      v17 = *(_QWORD *)*v3[2];
      if ( !v17 )
        goto LABEL_26;
      v18 = (_QWORD *)(v17 + 16);
      v19 = *(_QWORD **)(v17 + 24);
      if ( !v19 )
        goto LABEL_26;
      v20 = v18;
      do
      {
        while ( 1 )
        {
          v21 = v19[2];
          v22 = v19[3];
          if ( v19[4] >= v2 )
            break;
          v19 = (_QWORD *)v19[3];
          if ( !v22 )
            goto LABEL_24;
        }
        v20 = v19;
        v19 = (_QWORD *)v19[2];
      }
      while ( v21 );
LABEL_24:
      if ( v18 == v20 || v2 < v20[4] )
LABEL_26:
        sub_20DC0((volatile signed __int32 **)v3[3], &v23, (const double *)v3[4]);
    }
  }
  return v24 - __readfsqword(0x28u);
}

