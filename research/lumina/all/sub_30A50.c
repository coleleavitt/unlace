__int64 __fastcall sub_30A50(__int64 a1, const char *a2)
{
  unsigned __int64 v3; // r13
  size_t v4; // rax
  __int64 v5; // rsi
  size_t v6; // rbp
  unsigned __int64 v7; // rax
  size_t v8; // r8
  __int64 v9; // r14
  size_t v10; // r9
  size_t v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rsi
  unsigned __int64 v14; // rax
  __int64 v15; // r13
  size_t v16; // r12
  __int64 v17; // r15
  __int64 v19; // rax
  __int64 v20; // rax
  size_t v21; // [rsp+0h] [rbp-48h]
  size_t v22; // [rsp+8h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 24);
  v4 = strlen(a2);
  v5 = *(_QWORD *)(a1 + 16);
  v6 = v4;
  v7 = *(_QWORD *)(a1 + 32);
  if ( v3 )
  {
    v8 = v3 - 1;
    v9 = a1 + 16;
    v10 = v6 + v3 - 1;
    v11 = v6 + v3;
    if ( v7 >= v6 + v3 )
    {
      *(_QWORD *)(a1 + 24) = v11;
      *(_BYTE *)(v5 + v10) = 0;
      if ( v3 == 1 )
        goto LABEL_4;
      goto LABEL_12;
    }
  }
  else
  {
    v11 = v6 + 1;
    if ( v7 >= v6 + 1 )
    {
      *(_QWORD *)(a1 + 24) = v11;
      *(_BYTE *)(v5 + v6) = 0;
      memmove(*(void **)(a1 + 16), a2, v6);
      return 0xFFFFFFFFLL;
    }
    v9 = a1 + 16;
    v10 = v6;
    v8 = 0;
  }
  v22 = v10;
  v21 = v8;
  v19 = sub_1987B0(v9, v5, v11, 1);
  v8 = v21;
  *(_QWORD *)(a1 + 24) = v11;
  *(_QWORD *)(a1 + 16) = v19;
  *(_BYTE *)(v19 + v22) = 0;
  if ( v21 )
LABEL_12:
    memmove((void *)(*(_QWORD *)(a1 + 16) + v6), *(const void **)(a1 + 16), v8);
LABEL_4:
  memmove(*(void **)(a1 + 16), a2, v6);
  if ( v3 > 1 )
  {
    v12 = *(_QWORD *)(a1 + 24);
    v13 = *(_QWORD *)(a1 + 16);
    v14 = *(_QWORD *)(a1 + 32);
    if ( v12 )
    {
      v15 = v12 + 2;
      v16 = v12 - 1;
      v17 = v12 + 1;
      if ( v14 >= v12 + 2 )
      {
        *(_QWORD *)(a1 + 24) = v15;
        *(_BYTE *)(v13 + v17) = 0;
        if ( v6 >= v16 )
        {
LABEL_8:
          *(_WORD *)(*(_QWORD *)(a1 + 16) + v16) = 8250;
          return 0xFFFFFFFFLL;
        }
LABEL_18:
        memmove((void *)(v6 + *(_QWORD *)(a1 + 16) + 2), (const void *)(v6 + *(_QWORD *)(a1 + 16)), v16 - v6);
        *(_WORD *)(*(_QWORD *)(a1 + 16) + v6) = 8250;
        return 0xFFFFFFFFLL;
      }
    }
    else
    {
      if ( v14 > 2 )
      {
        *(_QWORD *)(a1 + 24) = 3;
        *(_BYTE *)(v13 + 2) = 0;
        **(_WORD **)(a1 + 16) = 8250;
        return 0xFFFFFFFFLL;
      }
      v16 = 0;
      v15 = 3;
      v17 = 2;
    }
    v20 = sub_1987B0(v9, v13, v15, 1);
    *(_QWORD *)(a1 + 24) = v15;
    *(_QWORD *)(a1 + 16) = v20;
    *(_BYTE *)(v20 + v17) = 0;
    if ( v6 >= v16 )
      goto LABEL_8;
    goto LABEL_18;
  }
  return 0xFFFFFFFFLL;
}
