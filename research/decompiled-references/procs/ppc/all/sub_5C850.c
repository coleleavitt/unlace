__int64 __fastcall sub_5C850(__int64 *a1, char *a2, __int64 a3)
{
  __int64 v4; // rsi
  _QWORD *v5; // rcx
  _QWORD *v7; // rdx
  _QWORD *v8; // r13
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // r14
  _QWORD *v12; // rax
  char v14; // al
  __int16 v15; // ax
  __int64 v16; // rax
  _QWORD v17[2]; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v18; // [rsp+10h] [rbp-D8h]
  __int128 v19; // [rsp+18h] [rbp-D0h]
  __int64 v20; // [rsp+28h] [rbp-C0h]
  __int128 v21; // [rsp+30h] [rbp-B8h]
  __int64 v22; // [rsp+40h] [rbp-A8h]
  __int128 v23; // [rsp+48h] [rbp-A0h]
  __int64 v24; // [rsp+58h] [rbp-90h]
  __int128 v25; // [rsp+60h] [rbp-88h]
  __int64 v26; // [rsp+70h] [rbp-78h]
  __int128 v27; // [rsp+78h] [rbp-70h]
  char v28; // [rsp+88h] [rbp-60h]
  __int64 v29; // [rsp+90h] [rbp-58h]
  char v30; // [rsp+98h] [rbp-50h]
  unsigned __int64 v31; // [rsp+A8h] [rbp-40h]

  v4 = *(_QWORD *)(a3 + 8);
  v5 = *(_QWORD **)a3;
  v31 = __readfsqword(0x28u);
  v7 = &v5[3 * v4];
  if ( v5 == v7 )
  {
LABEL_15:
    v14 = 1;
LABEL_16:
    *a2 = v14;
    return 1;
  }
  v8 = v5;
  v9 = v5;
  while ( (*((_BYTE *)v9 + 18) & 0x10) != 0 )
  {
    v9 += 3;
    if ( v7 == v9 )
      goto LABEL_15;
  }
  v10 = v5;
  while ( (*((_BYTE *)v10 + 18) & 0x20) != 0 )
  {
    v10 += 3;
    if ( v7 == v10 )
    {
LABEL_32:
      v14 = 0;
      goto LABEL_16;
    }
  }
  if ( (unsigned __int8)(*(_BYTE *)(a3 + 24) - 10) > 1u )
    return 0;
  v11 = *v5;
  if ( v4 != 1 )
  {
    v12 = v5 + 3;
    if ( 24 * v4 != 24 )
    {
      while ( v11 == *v12 )
      {
        v12 += 3;
        if ( v7 == v12 )
          goto LABEL_17;
      }
      return 0;
    }
  }
LABEL_17:
  while ( 1 )
  {
    v15 = *((_WORD *)v8 + 8);
    if ( v15 != 118 && v15 != 88 )
      break;
LABEL_31:
    v8 += 3;
    if ( v8 == &v5[3 * v4] )
      goto LABEL_32;
  }
  v16 = *a1;
  v17[1] = v11;
  v17[0] = v16;
  v18 = 0;
  v20 = 0;
  v22 = 0;
  v24 = 0;
  v26 = 0;
  v28 = 1;
  v29 = 0;
  v30 = 1;
  v19 = 0;
  v21 = 0;
  v23 = 0;
  v25 = 0;
  v27 = 0;
  if ( (unsigned __int8)sub_5D640(v17, v8, 6) )
  {
    if ( v26 )
    {
      *(_QWORD *)&v27 = 0;
      qfree(v26, (const char *)v8);
    }
    if ( v24 )
    {
      *(_QWORD *)&v25 = 0;
      qfree(v24, (const char *)v8);
    }
    if ( v22 )
    {
      *(_QWORD *)&v23 = 0;
      qfree(v22, (const char *)v8);
    }
    if ( v20 )
    {
      *(_QWORD *)&v21 = 0;
      qfree(v20, (const char *)v8);
    }
    if ( v18 )
    {
      *(_QWORD *)&v19 = 0;
      qfree(v18, (const char *)v8);
    }
    v5 = *(_QWORD **)a3;
    v4 = *(_QWORD *)(a3 + 8);
    goto LABEL_31;
  }
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree(v26, (const char *)v8);
  }
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(v24, (const char *)v8);
  }
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v22, (const char *)v8);
  }
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(v20, (const char *)v8);
  }
  if ( !v18 )
    return 0;
  *(_QWORD *)&v19 = 0;
  qfree(v18, (const char *)v8);
  return 0;
}
