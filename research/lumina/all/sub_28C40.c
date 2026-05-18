__int64 *__fastcall sub_28C40(__int64 a1, __int64 *a2, __int64 *a3)
{
  size_t v5; // rbx
  __int64 v6; // r12
  __int64 v7; // r15
  const char *v8; // rsi
  const char *v9; // rdi
  void *v10; // r12
  __int64 v11; // rdx
  __int64 *result; // rax
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rbx
  size_t v15; // r13
  size_t v16; // r14
  __int64 v17; // r12
  __int64 v18; // rsi
  size_t v19; // r13
  unsigned __int64 v20; // r14
  __int64 v21; // r12
  __int64 v22; // rsi
  __int64 v23; // rbx
  __int64 *v24; // rax
  __int64 v25; // r13
  unsigned __int64 v26; // r12
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 *v29; // r14
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // [rsp+8h] [rbp-50h]
  __int64 v33; // [rsp+10h] [rbp-48h]

  v5 = *(_QWORD *)(a1 + 8);
  v33 = a3[1];
  v6 = *a3 + 24 * v33;
  v32 = *a3;
  v7 = *a3;
  if ( *a3 == v6 )
    goto LABEL_10;
  while ( 1 )
  {
    if ( *(_QWORD *)(v7 + 8) )
    {
      v8 = *(const char **)v7;
      v9 = s1;
      if ( !v5 )
        goto LABEL_4;
    }
    else
    {
      if ( !v5 )
      {
        if ( v6 == v7 )
        {
          v10 = nullptr;
          v11 = v33 + 1;
          if ( a3[2] < (unsigned __int64)(v33 + 1) )
            goto LABEL_24;
          goto LABEL_13;
        }
LABEL_35:
        if ( !unk_2439A0 )
          sub_198E10(2792);
        BUG();
      }
      v8 = s1;
    }
    v9 = *(const char **)a1;
LABEL_4:
    if ( !strcmp(v9, v8) )
      break;
    v7 += 24;
    if ( v6 == v7 )
      goto LABEL_10;
  }
  if ( v6 != v7 )
    goto LABEL_35;
LABEL_10:
  v10 = nullptr;
  if ( v5 )
  {
    v10 = (void *)sub_198760(v5);
    memcpy(v10, *(const void **)a1, v5);
    v33 = a3[1];
    v32 = *a3;
  }
  v11 = v33 + 1;
  if ( a3[2] < (unsigned __int64)(v33 + 1) )
  {
LABEL_24:
    v32 = sub_1987B0(a3, v32, v11, 24);
    *a3 = v32;
    v33 = a3[1];
  }
LABEL_13:
  result = (__int64 *)(v32 + 24 * v33);
  *result = (__int64)v10;
  *(__m128i *)(result + 1) = _mm_unpacklo_epi64((__m128i)v5, (__m128i)v5);
  ++a3[1];
  v13 = *(_QWORD *)(a1 + 56);
  if ( v13 > 1 )
  {
    v19 = v13 - 1;
    v20 = v13 - 1;
    v21 = a2[1];
    if ( v21 )
    {
      --v21;
      v20 = v19 + v21;
      v13 += v21;
    }
    v22 = *a2;
    if ( a2[2] < v13 )
    {
      v31 = sub_1987B0(a2, v22, v13, 1);
      *a2 = v31;
      v22 = v31;
    }
    a2[1] = v13;
    *(_BYTE *)(v22 + v20) = 0;
    memcpy((void *)(v21 + *a2), *(const void **)(a1 + 48), v19);
    v23 = a2[1];
    if ( v23 )
    {
      v24 = a2;
      v25 = v23 + 3;
      v26 = v23 + 4;
      --v23;
      v27 = *a2;
      if ( a2[2] >= v26 )
      {
LABEL_31:
        result = a2;
        a2[1] = v26;
        *(_BYTE *)(v27 + v25) = 0;
        *(_DWORD *)(*a2 + v23) = 542327072;
        goto LABEL_14;
      }
    }
    else
    {
      v24 = a2;
      v26 = 5;
      v25 = 4;
      v27 = *a2;
      if ( (unsigned __int64)a2[2] >= 5 )
        goto LABEL_31;
    }
    v29 = v24;
    v30 = sub_1987B0(v24, v27, v26, 1);
    *v29 = v30;
    v27 = v30;
    goto LABEL_31;
  }
LABEL_14:
  v14 = *(_QWORD *)(a1 + 8);
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( v14 != 1 )
    {
      v16 = v14 - 1;
      v17 = a2[1];
      if ( v17 )
      {
        --v17;
        v16 = v15 + v17;
        v14 += v17;
      }
      v18 = *a2;
      if ( a2[2] < v14 )
      {
        v28 = sub_1987B0(a2, v18, v14, 1);
        *a2 = v28;
        v18 = v28;
      }
      a2[1] = v14;
      *(_BYTE *)(v18 + v16) = 0;
      return (__int64 *)memcpy((void *)(v17 + *a2), *(const void **)a1, v15);
    }
  }
  return result;
}
