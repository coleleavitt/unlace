__int64 *__fastcall sub_13640(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v8; // r10d
  __int64 v9; // rax
  __m128i v10; // xmm0
  size_t v11; // r12
  _OWORD *v13; // r13
  int v14; // r10d
  _QWORD *v15; // r12
  __int64 v16; // r14
  __int64 v17; // r13
  char *v18; // r15
  char *v19; // rax
  __int64 v20; // rdx
  const char *v21; // r13
  const char *v22; // rdi
  const char *v23; // rax
  __int64 v24; // rax
  _OWORD *v25; // rsi
  __int64 v26; // rax
  __m128i v27; // xmm0
  __int64 v28; // rax
  __m128i si128; // xmm0
  __int64 v30; // rdx
  const char *v31; // rdi
  __int64 v32; // rax
  const char *v33; // rax
  const char *v34; // r12
  size_t v35; // rax
  size_t v36; // r13
  void *v37; // rdi
  size_t v38; // r14
  __int64 v39; // r14
  char *v40; // rax
  size_t v41; // rax
  __int64 v42; // r13
  __int64 v43; // r15
  const char *v44; // rdi
  char *v45; // rax
  __int64 v46; // rax
  const char *v47; // [rsp+0h] [rbp-58h] BYREF
  __int128 v48; // [rsp+8h] [rbp-50h]
  unsigned __int64 v49; // [rsp+18h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  *a1 = 0;
  *(_OWORD *)(a1 + 1) = 0;
  v8 = *(_DWORD *)(a3 + 16);
  if ( v8 == 2 )
  {
    v28 = qvector_reserve(a1, 0, 18, 1, a5, a6);
    si128 = _mm_load_si128((const __m128i *)&xmmword_19150);
    *a1 = v28;
    a1[1] = 18;
    *(_BYTE *)(v28 + 16) = 82;
    *(__m128i *)v28 = si128;
    *(_BYTE *)(*a1 + 17) = 0;
    v11 = a1[1];
    goto LABEL_5;
  }
  if ( v8 > 2 )
  {
    v13 = nullptr;
    if ( v8 - 3 > 2 )
      goto LABEL_35;
    v15 = sub_9C60(*(_QWORD **)(a2 + 112), *(_QWORD *)a3);
    if ( v15 )
    {
      v47 = nullptr;
      v16 = 8;
      v17 = 7;
      v18 = "__stubs";
      v48 = 0;
      if ( v14 != 3 )
      {
        v16 = 6;
        v17 = 5;
        v18 = "__got";
        if ( v14 != 5 )
        {
          v16 = 4;
          v17 = 3;
          v18 = "GAP";
        }
      }
      v19 = (char *)qvector_reserve(&v47, 0, v16, 1, a5, a6);
      v47 = v19;
      v20 = (unsigned int)v17;
      *(_QWORD *)&v48 = v16;
      if ( (v17 & 4) != 0 )
      {
        *(_DWORD *)v19 = *(_DWORD *)v18;
        *(_DWORD *)&v19[(unsigned int)v17 - 4] = *(_DWORD *)&v18[(unsigned int)v17 - 4];
      }
      else
      {
        v20 = (unsigned __int8)*v18;
        *v19 = v20;
        if ( (v17 & 2) != 0 )
        {
          v20 = *(unsigned __int16 *)&v18[v17 - 2];
          *(_WORD *)&v19[v17 - 2] = v20;
        }
      }
      v47[v17] = 0;
      v21 = byte_190C8;
      if ( (_QWORD)v48 )
        v21 = v47;
      v22 = byte_190C8;
      if ( v15[105] )
        v22 = (const char *)v15[104];
      v23 = (const char *)qbasename(v22, 0, v20);
      sub_13580(a1, (__int64)"%s:%s", v23, v21);
      if ( v47 )
      {
        *(_QWORD *)&v48 = 0;
        qfree(v47);
      }
      v11 = a1[1];
      goto LABEL_5;
    }
LABEL_24:
    v25 = nullptr;
    goto LABEL_25;
  }
  if ( v8 )
  {
    v9 = qvector_reserve(a1, 0, 19, 1, a5, a6);
    v10 = _mm_load_si128((const __m128i *)&xmmword_19160);
    *a1 = v9;
    a1[1] = 19;
    *(_WORD *)(v9 + 16) = 25710;
    *(__m128i *)v9 = v10;
    *(_BYTE *)(*a1 + 18) = 0;
    v11 = a1[1];
    goto LABEL_5;
  }
  v24 = *(int *)(a3 + 24);
  if ( (int)v24 < 0 )
    goto LABEL_24;
  v30 = *(_QWORD *)(a2 + 112);
  if ( (int)v24 >= *(_DWORD *)(v30 + 560) )
    goto LABEL_24;
  v31 = byte_190C8;
  v32 = *(_QWORD *)(v30 + 600) + 24 * v24;
  if ( *(_QWORD *)(v32 + 8) )
    v31 = *(const char **)v32;
  v33 = (const char *)qbasename(v31, a2, v30);
  v34 = v33;
  if ( !v33 || (v35 = strlen(v33), (v36 = v35) == 0) )
  {
    a1[1] = 0;
    v13 = (_OWORD *)*a1;
    goto LABEL_35;
  }
  v37 = (void *)*a1;
  v38 = v35 + 1;
  if ( a1[2] < v35 + 1 )
  {
    v46 = qvector_reserve(a1, *a1, v35 + 1, 1, a5, a6);
    *a1 = v46;
    v37 = (void *)v46;
  }
  a1[1] = v38;
  memmove(v37, v34, v36);
  *(_BYTE *)(*a1 + v36) = 0;
  v11 = a1[1];
  v13 = (_OWORD *)*a1;
  if ( !v11 )
  {
LABEL_35:
    v25 = v13;
    if ( (unsigned __int64)a1[2] > 0x10 )
    {
LABEL_26:
      v27 = _mm_load_si128((const __m128i *)&xmmword_19170);
      a1[1] = 17;
      *v25 = v27;
      *(_BYTE *)(*a1 + 16) = 0;
      if ( *(_QWORD *)(a3 + 40) <= 1u )
        return a1;
LABEL_27:
      sub_12DF0(a1, (__int64)":%s", *(const char **)(a3 + 32));
      return a1;
    }
LABEL_25:
    v26 = qvector_reserve(a1, v25, 17, 1, a5, a6);
    *a1 = v26;
    v25 = (_OWORD *)v26;
    goto LABEL_26;
  }
  v39 = *a1;
  v40 = strrchr((const char *)*a1, 46);
  if ( v40 )
  {
    v41 = v40 - (char *)v13;
    if ( v41 != -1 )
    {
      --v11;
      v47 = nullptr;
      v48 = 0;
      if ( v11 > v41 )
        v11 = v41;
      if ( v11 )
      {
        v45 = (char *)qvector_reserve(&v47, 0, v11 + 1, 1, a5, a6);
        *(_QWORD *)&v48 = v11 + 1;
        v47 = v45;
        memmove(v45, v13, v11);
        v47[v11] = 0;
        v39 = *a1;
        v43 = (__int64)v47;
        v11 = v48;
        v47 = nullptr;
        v42 = *((_QWORD *)&v48 + 1);
        v48 = 0;
        if ( !v39 )
        {
          *a1 = v43;
          a1[1] = v11;
          a1[2] = v42;
          goto LABEL_5;
        }
      }
      else
      {
        if ( !v13 )
        {
          a1[1] = 0;
          a1[2] = 0;
          goto LABEL_35;
        }
        v42 = 0;
        v43 = 0;
      }
      a1[1] = 0;
      qfree(v39);
      v44 = v47;
      *a1 = v43;
      a1[1] = v11;
      a1[2] = v42;
      if ( v44 )
      {
        *(_QWORD *)&v48 = 0;
        qfree(v44);
        v11 = a1[1];
      }
    }
  }
LABEL_5:
  if ( v11 <= 1 )
  {
    v13 = (_OWORD *)*a1;
    goto LABEL_35;
  }
  if ( *(_QWORD *)(a3 + 40) > 1u )
    goto LABEL_27;
  return a1;
}
