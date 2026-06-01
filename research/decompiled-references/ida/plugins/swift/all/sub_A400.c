__int64 *__fastcall sub_A400(__int64 *a1, __int64 a2, const char *a3)
{
  unsigned __int64 v5; // r13
  size_t v6; // r15
  __int64 v7; // r14
  size_t v8; // r8
  __int64 v9; // rsi
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r13
  size_t v12; // r14
  __int64 v14; // r12
  unsigned __int64 v15; // r15
  __int64 v16; // rsi
  unsigned __int64 v17; // r14
  size_t v18; // rax
  __int64 v19; // rsi
  size_t v20; // r8
  size_t v21; // r13
  unsigned __int64 v22; // r15
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  size_t v26; // [rsp+0h] [rbp-60h]
  size_t v27; // [rsp+0h] [rbp-60h]
  void *src; // [rsp+8h] [rbp-58h] BYREF
  unsigned __int64 v29; // [rsp+10h] [rbp-50h]
  unsigned __int64 v30; // [rsp+20h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  *a1 = 0;
  *(_OWORD *)(a1 + 1) = 0;
  if ( !*(_QWORD *)(a2 + 32) )
  {
LABEL_25:
    v11 = *(_QWORD *)(a2 + 16);
    goto LABEL_14;
  }
  sub_A400(&src);
  v5 = v29;
  if ( v29 )
  {
    v6 = v29 - 1;
    if ( v29 != 1 )
    {
      v7 = a1[1];
      v8 = v29 - 1;
      if ( v7 )
      {
        --v7;
        v8 = v6 + v7;
        v5 = v29 + v7;
      }
      v9 = *a1;
      if ( a1[2] < v5 )
      {
        v26 = v8;
        v24 = qvector_reserve(a1, v9, v5, 1);
        *a1 = v24;
        v8 = v26;
        v9 = v24;
      }
      a1[1] = v5;
      *(_BYTE *)(v9 + v8) = 0;
      memcpy((void *)(v7 + *a1), src, v6);
    }
  }
  if ( src )
  {
    v29 = 0;
    qfree(src);
  }
  v10 = a1[1];
  v11 = *(_QWORD *)(a2 + 16);
  if ( v10 > 1 && a3 && v11 > 1 )
  {
    v17 = v10 - 1;
    v18 = strlen(a3);
    v19 = *a1;
    v20 = v18 + v17;
    v21 = v18;
    v22 = v18 + v17 + 1;
    if ( a1[2] < v22 )
    {
      v27 = v18 + v17;
      v25 = qvector_reserve(a1, v19, v18 + v17 + 1, 1);
      *a1 = v25;
      v20 = v27;
      v19 = v25;
    }
    a1[1] = v22;
    *(_BYTE *)(v19 + v20) = 0;
    memmove((void *)(v17 + *a1), a3, v21);
    goto LABEL_25;
  }
LABEL_14:
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v11 != 1 )
    {
      v14 = a1[1];
      v15 = v11 - 1;
      if ( v14 )
      {
        --v14;
        v15 = v12 + v14;
        v11 += v14;
      }
      v16 = *a1;
      if ( a1[2] < v11 )
      {
        v23 = qvector_reserve(a1, v16, v11, 1);
        *a1 = v23;
        v16 = v23;
      }
      a1[1] = v11;
      *(_BYTE *)(v16 + v15) = 0;
      memcpy((void *)(v14 + *a1), *(const void **)(a2 + 8), v12);
    }
  }
  return a1;
}

