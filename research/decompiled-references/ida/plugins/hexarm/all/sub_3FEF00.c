__int64 *__fastcall sub_3FEF00(__int64 a1, __int64 *a2, double a3, __int64 a4, const char *a5, int a6, __int64 a7)
{
  size_t v11; // rax
  size_t v12; // r15
  size_t v13; // rbp
  unsigned __int64 v14; // rbp
  size_t v15; // r15
  __int64 v16; // r13
  size_t v17; // r8
  __int64 v18; // rsi
  unsigned __int64 v19; // rbp
  __int64 v20; // r13
  __int64 v21; // r8
  __int64 v22; // rsi
  __int64 v24; // rbp
  __int64 v25; // rsi
  __int64 v26; // r8
  unsigned __int64 v27; // r15
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // [rsp+8h] [rbp-60h]
  size_t v32; // [rsp+8h] [rbp-60h]
  __int64 v33; // [rsp+8h] [rbp-60h]
  void *src; // [rsp+10h] [rbp-58h]
  _BYTE *srca; // [rsp+10h] [rbp-58h]
  size_t v36; // [rsp+18h] [rbp-50h]

  sub_6B2B0(a2);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) != 8 && *(_QWORD *)(a7 + 8) == 2 * a6
    || (sub_3EE110(a1, a7, a3), (unsigned __int64)get_dtype_size() > 8) )
  {
    v24 = a2[1];
    if ( v24 )
    {
      v27 = v24 + 1;
      v26 = a2[1];
      v25 = *a2;
      --v24;
      if ( a2[2] >= v27 )
        goto LABEL_24;
    }
    else
    {
      v25 = *a2;
      v26 = 1;
      v27 = 2;
      if ( (unsigned __int64)a2[2] >= 2 )
      {
LABEL_24:
        a2[1] = v27;
        *(_BYTE *)(v25 + v24) = 113;
        *(_BYTE *)(*a2 + v26) = 0;
        goto LABEL_4;
      }
    }
    v31 = v26;
    v28 = qvector_reserve();
    v26 = v31;
    *a2 = v28;
    v25 = v28;
    goto LABEL_24;
  }
LABEL_4:
  if ( a5 )
  {
    a3 = 0.0;
    v11 = strlen(a5);
    v12 = v11 + 1;
    v13 = v11;
    src = (void *)qvector_reserve();
    v36 = v12;
    memmove(src, a5, v13);
    *((_BYTE *)src + v13) = 0;
    v14 = v12;
    if ( v12 )
    {
      v15 = v12 - 1;
      if ( v36 != 1 )
      {
        v16 = a2[1];
        v17 = v14 - 1;
        if ( v16 )
        {
          --v16;
          v17 = v15 + v16;
          v14 += v16;
        }
        v18 = *a2;
        if ( a2[2] < v14 )
        {
          v32 = v17;
          v29 = qvector_reserve();
          *a2 = v29;
          v17 = v32;
          v18 = v29;
        }
        a2[1] = v14;
        *(_BYTE *)(v18 + v17) = 0;
        memcpy((void *)(v16 + *a2), src, v15);
      }
    }
    if ( src )
      qfree();
  }
  if ( !(unsigned __int8)sub_3EE030(a1, a7) )
  {
    a3 = 0.0;
    srca = (_BYTE *)qvector_reserve();
    *(_DWORD *)srca = 1851878495;
    srca[4] = 101;
    srca[5] = 0;
    v19 = 6;
    v20 = a2[1];
    v21 = 5;
    if ( v20 )
    {
      v21 = --v20 + 5;
      v19 = v20 + 6;
    }
    v22 = *a2;
    if ( a2[2] < v19 )
    {
      v33 = v21;
      v30 = qvector_reserve();
      *a2 = v30;
      v21 = v33;
      v22 = v30;
    }
    a2[1] = v19;
    *(_BYTE *)(v22 + v21) = 0;
    memcpy((void *)(v20 + *a2), srca, 5u);
    if ( srca )
      qfree();
  }
  sub_3EE210(a1, a7, a3);
  return sub_FA510(a2);
}

