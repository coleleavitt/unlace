unsigned __int64 __fastcall sub_71FC0(int *a1, int *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // ebp
  int v8; // ebx
  unsigned __int64 v10; // rdx
  __m128i v11; // xmm0
  void *v12; // r15
  __int64 v13; // rax
  void *v14; // r15
  __int64 v15; // rax
  void *v16; // r15
  char *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r14
  void *v20; // r12
  void *v22; // rax
  const void *v23; // rsi
  void *v24; // rax
  const void *v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  int v30; // eax
  int **v31; // rax
  int *v32; // rsi
  int v33; // eax
  __int64 v34; // rax
  __int64 *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  int *n; // [rsp+0h] [rbp-C8h]
  int na; // [rsp+0h] [rbp-C8h]
  __int64 nb; // [rsp+0h] [rbp-C8h]
  int *v41; // [rsp+8h] [rbp-C0h]
  int v42; // [rsp+8h] [rbp-C0h]
  __int64 v43; // [rsp+8h] [rbp-C0h]
  __m128i v44; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v45; // [rsp+20h] [rbp-A8h]
  __int64 v46; // [rsp+28h] [rbp-A0h]
  __int64 v47; // [rsp+30h] [rbp-98h]
  void **v48; // [rsp+38h] [rbp-90h]
  __int64 v49; // [rsp+40h] [rbp-88h]
  size_t v50; // [rsp+48h] [rbp-80h]
  int v51; // [rsp+50h] [rbp-78h]
  __int64 v52; // [rsp+58h] [rbp-70h] BYREF
  __int64 v53; // [rsp+60h] [rbp-68h] BYREF
  __m128i v54; // [rsp+68h] [rbp-60h]
  __int64 v55; // [rsp+78h] [rbp-50h]
  __int64 v56; // [rsp+80h] [rbp-48h]
  unsigned __int64 v57; // [rsp+88h] [rbp-40h]

  v45 = a3;
  v57 = __readfsqword(0x28u);
  if ( !a4 )
    return v57 - __readfsqword(0x28u);
  v6 = a5;
  if ( !a5 )
    return v57 - __readfsqword(0x28u);
  v8 = a4;
  if ( a4 + a5 != 2 )
  {
    v10 = *(_QWORD *)(a6 + 8);
    v11 = _mm_unpacklo_epi64((__m128i)v10, (__m128i)v10);
    if ( a4 <= a5 )
    {
      v14 = nullptr;
      v47 = a5 / 2;
      n = &a2[a5 / 2];
      if ( v10 )
      {
        v44 = v11;
        v43 = 4 * v10;
        v14 = (void *)qalloc_or_throw(4 * v10);
        memcpy(v14, *(const void **)a6, v43);
        v11 = _mm_load_si128(&v44);
      }
      v15 = *(_QWORD *)(a6 + 24);
      v53 = (__int64)v14;
      v55 = v15;
      v48 = (void **)&v53;
      v54 = v11;
      v41 = sub_71AE0(a1, (__int64)a2, n, (__int64)&v53);
      if ( v14 )
        qfree(v14);
      v46 = v41 - a1;
    }
    else
    {
      v12 = nullptr;
      v46 = a4 / 2;
      v41 = &a1[a4 / 2];
      if ( v10 )
      {
        v44 = v11;
        nb = 4 * v10;
        v12 = (void *)qalloc_or_throw(4 * v10);
        memcpy(v12, *(const void **)a6, nb);
        v11 = _mm_load_si128(&v44);
      }
      v13 = *(_QWORD *)(a6 + 24);
      v53 = (__int64)v12;
      v54 = v11;
      v55 = v13;
      v48 = (void **)&v53;
      n = sub_71D50(a2, v45, v41, (__int64)&v53);
      if ( v12 )
        qfree(v12);
      v47 = n - a2;
    }
    v16 = nullptr;
    v17 = sub_710A0((char *)v41, (char *)a2, (char *)n);
    v18 = *(_QWORD *)(a6 + 8);
    v44.m128i_i64[0] = (__int64)v17;
    v54 = 0;
    if ( v18 )
    {
      v49 = v18;
      v50 = 4 * v18;
      v24 = (void *)qalloc_or_throw(4 * v18);
      v25 = *(const void **)a6;
      v16 = v24;
      v54.m128i_i64[1] = v49;
      memcpy(v24, v25, v50);
      v54.m128i_i64[0] = v49;
    }
    sub_71FC0(
      (_DWORD)a1,
      (_DWORD)v41,
      v44.m128i_i32[0],
      v46,
      v47,
      (_DWORD)v48,
      (_DWORD)n,
      (_DWORD)v41,
      v44.m128i_i32[0],
      v44.m128i_i32[2],
      v45,
      v46,
      v47,
      (_DWORD)v48,
      v49,
      v50,
      v51,
      v52,
      (_DWORD)v16,
      v54.m128i_i32[0],
      v54.m128i_i32[2],
      *(_QWORD *)(a6 + 24),
      v56);
    if ( v16 )
      qfree(v16);
    v19 = *(_QWORD *)(a6 + 8);
    v20 = nullptr;
    v54 = 0;
    if ( v19 )
    {
      v22 = (void *)qalloc_or_throw(4 * v19);
      v23 = *(const void **)a6;
      v54.m128i_i64[1] = v19;
      v20 = v22;
      memcpy(v22, v23, 4 * v19);
      v54.m128i_i64[0] = v19;
    }
    sub_71FC0(
      v44.m128i_i32[0],
      na,
      v45,
      v8 - v46,
      v6 - v47,
      (_DWORD)v48,
      na,
      v42,
      v44.m128i_i32[0],
      v44.m128i_i32[2],
      v45,
      v46,
      v47,
      (_DWORD)v48,
      v49,
      v50,
      v51,
      v52,
      (_DWORD)v20,
      v54.m128i_i32[0],
      v54.m128i_i32[2],
      *(_QWORD *)(a6 + 24),
      v56);
    if ( v20 )
      qfree(v20);
    return v57 - __readfsqword(0x28u);
  }
  v26 = **(_QWORD **)(a6 + 24);
  v27 = v26 + 80LL * *a2;
  v28 = 80LL * *a1 + v26;
  if ( *(_DWORD *)v27 == 1 )
  {
    v52 = *(_QWORD *)(v27 + 8);
  }
  else
  {
    if ( *(_DWORD *)v27 != 2 )
      goto LABEL_26;
    v31 = *(int ***)(v27 + 8);
    if ( !v31[1] )
      goto LABEL_26;
    v32 = *v31;
    v33 = **v31;
    if ( v33 == 1 )
    {
      v52 = *((_QWORD *)v32 + 1);
    }
    else
    {
      if ( v33 != 2 )
        goto LABEL_26;
      v34 = *((_QWORD *)v32 + 1);
      if ( !*(_QWORD *)(v34 + 8) || !(unsigned __int8)sub_6FB30(&v52, *(int **)v34) )
        goto LABEL_26;
    }
  }
  if ( *(_DWORD *)v28 == 1 )
  {
    v29 = *(_QWORD *)(v28 + 8);
    goto LABEL_42;
  }
  if ( *(_DWORD *)v28 != 2 )
    goto LABEL_26;
  v35 = *(__int64 **)(v28 + 8);
  if ( !v35[1] )
    goto LABEL_26;
  v36 = *v35;
  if ( *(_DWORD *)v36 == 1 )
  {
    v29 = *(_QWORD *)(v36 + 8);
    goto LABEL_42;
  }
  if ( *(_DWORD *)v36 != 2
    || (v37 = *(_QWORD *)(v36 + 8), !*(_QWORD *)(v37 + 8))
    || !(unsigned __int8)sub_6FB30(&v53, *(int **)v37) )
  {
LABEL_26:
    LODWORD(v29) = (unsigned int)compare_arglocs(v27, v28) >> 31;
    goto LABEL_27;
  }
  v29 = v53;
LABEL_42:
  LOBYTE(v29) = v52 < v29;
LABEL_27:
  if ( (_BYTE)v29 )
  {
    v30 = *a1;
    *a1 = *a2;
    *a2 = v30;
  }
  return v57 - __readfsqword(0x28u);
}

