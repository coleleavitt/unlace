__int64 __fastcall sub_B8B50(__int64 *a1, __int64 a2, __int64 a3)
{
  __int16 v5; // ax
  __int16 v6; // ax
  __int64 v7; // r14
  char v8; // r13
  unsigned __int64 v9; // r15
  __int64 v10; // r8
  __int64 v11; // rsi
  int v12; // eax
  int v13; // edi
  const char *v14; // rax
  unsigned __int64 v16; // r13
  size_t v17; // r15
  __int64 v18; // r14
  size_t v19; // r8
  __int64 v20; // rsi
  __int64 v21; // rax
  __int16 v22; // ax
  __int64 v23; // rax
  __int64 v24; // [rsp+8h] [rbp-40h]
  size_t v25; // [rsp+8h] [rbp-40h]

  a1[1] = 0;
  while ( 1 )
  {
    v5 = *(_WORD *)(a3 + 24);
    if ( v5 == 4 )
    {
LABEL_13:
      v16 = *(_QWORD *)(a3 + 8);
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v16 != 1 )
        {
          v18 = a1[1];
          v19 = v16 - 1;
          if ( v18 )
          {
            --v18;
            v19 = v17 + v18;
            v16 += v18;
          }
          v20 = *a1;
          if ( a1[2] < v16 )
          {
            v25 = v19;
            v23 = sub_1987B0(a1, v20, v16, 1);
            v19 = v25;
            *a1 = v23;
            v20 = v23;
          }
          a1[1] = v16;
          *(_BYTE *)(v20 + v19) = 0;
          memcpy((void *)(v18 + *a1), *(const void **)a3, v17);
        }
      }
      goto LABEL_10;
    }
    if ( v5 == 2 )
      break;
    if ( !sub_B7D70(a2, a3) )
      goto LABEL_24;
LABEL_5:
    v6 = *(_WORD *)(a3 + 24);
    if ( v6 == 4 )
      goto LABEL_13;
    if ( v6 == 2 )
    {
      if ( *(_QWORD *)(sub_17E3E0(a2) + 8) > 1u )
        goto LABEL_13;
      v6 = *(_WORD *)(a3 + 24);
    }
    v7 = a1[1];
    v8 = v6;
    if ( v7 )
    {
      v9 = v7 + 1;
      v10 = a1[1];
      v11 = *a1;
      --v7;
      if ( a1[2] < v9 )
        goto LABEL_21;
    }
    else
    {
      v11 = *a1;
      v10 = 1;
      v9 = 2;
      if ( (unsigned __int64)a1[2] < 2 )
      {
LABEL_21:
        v24 = v10;
        v21 = sub_1987B0(a1, v11, v9, 1);
        v10 = v24;
        *a1 = v21;
        v11 = v21;
      }
    }
    a1[1] = v9;
    *(_BYTE *)(v11 + v7) = v8;
    *(_BYTE *)(*a1 + v10) = 0;
LABEL_10:
    v12 = sub_184A80(a2);
    if ( v12 )
    {
      v13 = v12;
LABEL_12:
      v14 = sub_2C700(v13);
      sub_B81F0(a2, (__int64)"%s", v14);
      return 0;
    }
  }
  if ( *(_QWORD *)(sub_17E3E0(a2) + 8) > 1u || sub_B7D70(a2, a3) )
    goto LABEL_5;
LABEL_24:
  v22 = *(_WORD *)(a3 + 24);
  if ( v22 != 59 )
  {
    if ( v22 != 1 )
      goto LABEL_26;
    if ( *(_QWORD *)(sub_17E3E0(a2) + 8) <= 1u )
    {
      v22 = *(_WORD *)(a3 + 24);
LABEL_26:
      if ( v22 != 2 )
      {
        v13 = 1362;
        goto LABEL_12;
      }
    }
  }
  return 1;
}
