__int64 __fastcall sub_7FCC0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // r14
  unsigned __int64 v5; // r12
  __int64 v6; // rsi
  unsigned __int64 v7; // rbp
  unsigned int v8; // r14d
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // r15
  unsigned __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rsi
  __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rbp
  unsigned __int64 v19; // r12
  __int64 v20; // r13
  __int64 v21; // rsi
  __int64 v22; // rbp
  unsigned __int64 v23; // r12
  __int64 v24; // r13
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // [rsp+0h] [rbp-48h]
  __int64 v29; // [rsp+8h] [rbp-40h]

  v3 = a1[1];
  if ( !v3 )
  {
    v6 = *a1;
    v5 = 15;
    v4 = 14;
    if ( (unsigned __int64)a1[2] >= 0xF )
      goto LABEL_3;
LABEL_7:
    v10 = sub_1987B0(a1, v6, v5, 1);
    *a1 = v10;
    v6 = v10;
    goto LABEL_3;
  }
  v4 = v3 + 13;
  v5 = v3 + 14;
  v6 = *a1;
  --v3;
  if ( a1[2] < v5 )
    goto LABEL_7;
LABEL_3:
  a1[1] = v5;
  *(_BYTE *)(v6 + v4) = 0;
  qmemcpy((void *)(*a1 + v3), "KILL_SESSIONS ", 14);
  sub_171F20(a1, 1);
  v7 = *(_QWORD *)(a2 + 24);
  if ( v7 > 0x7FFFFFFF )
    return 0;
  v8 = sub_171FB0(a1, (unsigned int)v7, 1);
  if ( !(_BYTE)v8 )
    return 0;
  v11 = 0;
  v12 = 4LL * (unsigned int)v7;
  if ( (_DWORD)v7 )
  {
    do
    {
      v16 = a1[1];
      if ( v16 )
      {
        v13 = v16 + 1;
        v14 = a1[1];
        v15 = *a1;
        --v16;
        if ( a1[2] < v13 )
          goto LABEL_16;
      }
      else
      {
        v15 = *a1;
        v14 = 1;
        v13 = 2;
        if ( (unsigned __int64)a1[2] < 2 )
        {
LABEL_16:
          v29 = v14;
          v28 = v13;
          v17 = sub_1987B0(a1, v15, v13, 1);
          v14 = v29;
          v13 = v28;
          *a1 = v17;
          v15 = v17;
        }
      }
      a1[1] = v13;
      *(_BYTE *)(v15 + v16) = 32;
      *(_BYTE *)(*a1 + v14) = 0;
      if ( !(unsigned __int8)sub_171FB0(a1, *(unsigned int *)(*(_QWORD *)(a2 + 16) + v11), 1) )
        return 0;
      v11 += 4;
    }
    while ( v12 != v11 );
  }
  v18 = a1[1];
  if ( v18 )
  {
    v20 = v18 + 11;
    v19 = v18 + 12;
    --v18;
  }
  else
  {
    v19 = 13;
    v20 = 12;
  }
  v21 = *a1;
  if ( a1[2] < v19 )
  {
    v27 = sub_1987B0(a1, v21, v19, 1);
    *a1 = v27;
    v21 = v27;
  }
  a1[1] = v19;
  *(_BYTE *)(v21 + v20) = 0;
  qmemcpy((void *)(*a1 + v18), " // sessions", 12);
  sub_171F20(a1, 1);
  v22 = a1[1];
  if ( v22 )
  {
    v23 = v22 + 1;
    v24 = a1[1];
    --v22;
  }
  else
  {
    v24 = 1;
    v23 = 2;
  }
  v25 = *a1;
  if ( a1[2] < v23 )
  {
    v26 = sub_1987B0(a1, v25, v23, 1);
    *a1 = v26;
    v25 = v26;
  }
  a1[1] = v23;
  *(_BYTE *)(v25 + v22) = 59;
  *(_BYTE *)(*a1 + v24) = 0;
  return v8;
}
