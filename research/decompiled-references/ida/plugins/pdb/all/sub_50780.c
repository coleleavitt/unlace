__int64 __fastcall sub_50780(_QWORD *a1, __int64 **a2, double a3, double a4, double a5)
{
  __int64 *v6; // rax
  __int64 (__fastcall *v7)(__int64, int *); // rax
  int *v8; // rax
  int v9; // eax
  __int64 *v10; // rax
  __int64 (__fastcall *v11)(__int64, __int64 *); // rax
  const char **v12; // rax
  const char *v13; // r13
  size_t v14; // rax
  size_t v15; // r12
  __int64 v16; // rdi
  const char *v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 *v20; // rbp
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rbx
  void *v24; // rax
  __m128i v25; // xmm0
  __m128i v26; // xmm1
  void *v28; // rdi
  __int64 v29; // r14
  __int64 v30; // rax
  int v31; // [rsp+Ch] [rbp-6Ch] BYREF
  void *dest; // [rsp+10h] [rbp-68h] BYREF
  __m128i v33; // [rsp+18h] [rbp-60h] BYREF
  __int64 v34; // [rsp+30h] [rbp-48h] BYREF
  __int64 v35; // [rsp+38h] [rbp-40h] BYREF
  __int64 v36; // [rsp+40h] [rbp-38h]
  unsigned __int64 v37; // [rsp+48h] [rbp-30h]

  v6 = *a2;
  v37 = __readfsqword(0x28u);
  v7 = (__int64 (__fastcall *)(__int64, int *))v6[9];
  if ( v7 == sub_2DCF0 )
  {
    v8 = (int *)sub_2CEC0(a2[2], 0x8000, 0x400u, 0x4000000);
    if ( !v8 )
      goto LABEL_5;
    v9 = *v8;
    v31 = v9;
  }
  else
  {
    if ( (unsigned int)v7((__int64)a2, &v31) )
      goto LABEL_5;
    v9 = v31;
  }
  if ( (unsigned int)(v9 - 3) > 1 )
    return 0;
LABEL_5:
  v10 = *a2;
  dest = nullptr;
  v33 = 0;
  v11 = (__int64 (__fastcall *)(__int64, __int64 *))v10[18];
  if ( v11 != sub_2D280 )
  {
    v11((__int64)a2, (__int64 *)&dest);
    goto LABEL_11;
  }
  v12 = (const char **)sub_2CEC0(a2[2], 0x10000000, 0x10000000u, 0x10000000);
  if ( !v12 )
  {
LABEL_11:
    v19 = v33.m128i_i64[0];
LABEL_12:
    v16 = a1[3];
    v18 = a1[1];
    v17 = src;
    v34 = 1;
    v35 = 0;
    v36 = 0;
    if ( v19 )
      v17 = (const char *)dest;
    goto LABEL_14;
  }
  v13 = *v12;
  if ( *v12 )
  {
    v14 = strlen(*v12);
    v15 = v14;
    if ( v14 )
    {
      v28 = dest;
      v29 = v14 + 1;
      if ( v33.m128i_i64[1] < v14 + 1 )
      {
        dest = (void *)qvector_reserve(&dest, dest, v29, 1);
        v28 = dest;
      }
      v33.m128i_i64[0] = v29;
      memmove(v28, v13, v15);
      *((_BYTE *)dest + v15) = 0;
      v19 = v33.m128i_i64[0];
      goto LABEL_12;
    }
  }
  v33.m128i_i64[0] = 0;
  v16 = a1[3];
  v17 = src;
  v34 = 1;
  v18 = a1[1];
  v35 = 0;
  v36 = 0;
LABEL_14:
  if ( (unsigned __int8)sub_4E7E0(v16, (__int64)&v34, v17, a2, v18, nullptr, 0.0, a4, a5) || BYTE4(v34) )
  {
    v20 = (__int64 *)a1[2];
    v21 = v20[1];
    v22 = *v20;
    if ( v20[2] < (unsigned __int64)(v21 + 1) )
    {
      v30 = qvector_reserve(v20, v22, v21 + 1, 80);
      *v20 = v30;
      v22 = v30;
      v21 = v20[1];
    }
    v23 = v22 + 80 * v21;
    *(_DWORD *)v23 = 0;
    *(_QWORD *)(v23 + 8) = 0;
    *(_QWORD *)(v23 + 16) = 0;
    *(_QWORD *)(v23 + 40) = 0;
    *(_QWORD *)(v23 + 64) = 0;
    *(_DWORD *)(v23 + 72) = 0;
    *(_OWORD *)(v23 + 24) = 0;
    *(_OWORD *)(v23 + 48) = 0;
    ++v20[1];
    copy_tinfo_t(v23 + 64, &v35);
    v24 = *(void **)(v23 + 16);
    v25 = _mm_loadu_si128((const __m128i *)(v23 + 24));
    *(_QWORD *)(v23 + 16) = dest;
    v26 = _mm_loadu_si128(&v33);
    dest = v24;
    *(__m128i *)(v23 + 24) = v26;
    v33 = v25;
  }
  clear_tinfo_t(&v35);
  if ( dest )
  {
    v33.m128i_i64[0] = 0;
    qfree(dest);
  }
  return 0;
}

