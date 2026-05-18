unsigned __int64 __fastcall sub_42EC0(__int64 a1, __int64 *a2)
{
  _WORD *v3; // rax
  __int64 v4; // rax
  char *v5; // rsi
  unsigned __int64 v6; // rdi
  __m128i v7; // xmm0
  char *v8; // rax
  _BYTE *v9; // rax
  __int64 v10; // rax
  char *v11; // rsi
  unsigned __int64 v12; // rdi
  __m128i v13; // xmm0
  char *v14; // rax
  __int64 v15; // rax
  char *v16; // rdi
  unsigned __int64 v17; // rbx
  char *v18; // r15
  char *v19; // rax
  __int64 v20; // rdx
  char *v21; // rbp
  unsigned __int64 v22; // r12
  size_t v23; // r8
  __int64 v24; // r9
  _BYTE *v25; // rsi
  unsigned __int64 v26; // r12
  __int64 v27; // r8
  _BYTE *v28; // rsi
  unsigned __int64 v29; // rbx
  void *v30; // rax
  size_t v31; // r12
  __int64 v32; // rbp
  size_t v33; // r14
  __int64 v34; // rsi
  __int64 v35; // rbp
  __int64 v36; // rbx
  char *v37; // rdx
  void *v38; // rax
  const char *v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // rax
  void *v46; // rbx
  __m128i v47; // xmm0
  __m128i v48; // xmm1
  char *v49; // rax
  void *v50; // rbx
  __m128i v51; // xmm0
  __m128i v52; // xmm1
  char *v53; // rax
  __int64 v54; // rax
  __m128i v55; // [rsp+0h] [rbp-88h] BYREF
  void *v56; // [rsp+10h] [rbp-78h] BYREF
  __int128 v57; // [rsp+18h] [rbp-70h]
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __m128i v59; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v60; // [rsp+48h] [rbp-40h]

  v60 = __readfsqword(0x28u);
  sub_16EC00();
  sub_18E5A0(a2, &unk_236340, 1);
  if ( !(_BYTE)byte_241948 && __cxa_guard_acquire(&byte_241948) )
  {
    sub_31930((__int64)&qword_241950, "Drop & re-create schema, with user authentication being one of: ");
    __cxa_atexit((void (*)(void *))sub_2C8E0, &qword_241950, &lpdso_handle);
    __cxa_guard_release(&byte_241948);
  }
  v56 = nullptr;
  ptr = nullptr;
  v57 = 0;
  v59 = 0;
  v3 = (_WORD *)sub_1987B0(&ptr, 0, 7, 1);
  ptr = v3;
  v59.m128i_i64[0] = 7;
  *(_DWORD *)v3 = 1768781164;
  v3[2] = 24942;
  *((_BYTE *)ptr + 6) = 0;
  v4 = v57;
  v5 = (char *)v56;
  v6 = v57 + 1;
  if ( &ptr >= v56 && &ptr < (void **)((char *)v56 + 24 * *((_QWORD *)&v57 + 1)) )
  {
    v50 = ptr;
    v51 = _mm_loadl_epi64(&v59);
    ptr = nullptr;
    v52 = _mm_loadl_epi64((const __m128i *)&v59.m128i_u64[1]);
    v59 = 0;
    if ( *((_QWORD *)&v57 + 1) < v6 )
    {
      v55.m128i_i64[1] = v52.m128i_i64[0];
      v55.m128i_i64[0] = v51.m128i_i64[0];
      v56 = (void *)sub_1987B0(&v56, v56, v57 + 1, 24);
      v5 = (char *)v56;
      v52 = _mm_loadl_epi64((const __m128i *)&v55.m128i_u64[1]);
      v4 = v57;
      v51 = _mm_loadl_epi64(&v55);
    }
    v53 = &v5[24 * v4];
    *(_QWORD *)v53 = v50;
    *(__m128i *)(v53 + 8) = _mm_unpacklo_epi64(v51, v52);
    *(_QWORD *)&v57 = v57 + 1;
    if ( ptr )
    {
      v59.m128i_i64[0] = 0;
      j__free(ptr);
    }
  }
  else
  {
    if ( *((_QWORD *)&v57 + 1) < v6 )
    {
      v56 = (void *)sub_1987B0(&v56, v56, v57 + 1, 24);
      v5 = (char *)v56;
      v4 = v57;
    }
    v7 = _mm_loadu_si128(&v59);
    v8 = &v5[24 * v4];
    *(_QWORD *)v8 = ptr;
    *(__m128i *)(v8 + 8) = v7;
    *(_QWORD *)&v57 = v57 + 1;
  }
  v59 = 0;
  ptr = nullptr;
  v9 = (_BYTE *)sub_1987B0(&ptr, 0, 6, 1);
  ptr = v9;
  v59.m128i_i64[0] = 6;
  *(_DWORD *)v9 = 1819631990;
  v9[4] = 116;
  *((_BYTE *)ptr + 5) = 0;
  v10 = v57;
  v11 = (char *)v56;
  v12 = v57 + 1;
  if ( &ptr >= v56 && &ptr < (void **)((char *)v56 + 24 * *((_QWORD *)&v57 + 1)) )
  {
    v46 = ptr;
    v47 = _mm_loadl_epi64(&v59);
    ptr = nullptr;
    v48 = _mm_loadl_epi64((const __m128i *)&v59.m128i_u64[1]);
    v59 = 0;
    if ( *((_QWORD *)&v57 + 1) < v12 )
    {
      v55.m128i_i64[1] = v48.m128i_i64[0];
      v55.m128i_i64[0] = v47.m128i_i64[0];
      v56 = (void *)sub_1987B0(&v56, v56, v57 + 1, 24);
      v11 = (char *)v56;
      v48 = _mm_loadl_epi64((const __m128i *)&v55.m128i_u64[1]);
      v10 = v57;
      v47 = _mm_loadl_epi64(&v55);
    }
    v49 = &v11[24 * v10];
    *(_QWORD *)v49 = v46;
    *(__m128i *)(v49 + 8) = _mm_unpacklo_epi64(v47, v48);
    v15 = v57 + 1;
    *(_QWORD *)&v57 = v57 + 1;
    if ( ptr )
    {
      v59.m128i_i64[0] = 0;
      j__free(ptr);
      v15 = v57;
    }
  }
  else
  {
    if ( *((_QWORD *)&v57 + 1) < v12 )
    {
      v56 = (void *)sub_1987B0(&v56, v56, v57 + 1, 24);
      v11 = (char *)v56;
      v10 = v57;
    }
    v13 = _mm_loadu_si128(&v59);
    v14 = &v11[24 * v10];
    *(_QWORD *)v14 = ptr;
    *(__m128i *)(v14 + 8) = v13;
    v15 = v57 + 1;
    *(_QWORD *)&v57 = v57 + 1;
  }
  ptr = nullptr;
  v59 = 0;
  if ( !v15 )
    goto LABEL_43;
  v16 = (char *)v56;
  v17 = 2 * v15 - 2;
  v18 = (char *)v56 + 24 * v15;
  if ( v56 == v18 )
  {
    if ( 2 * v15 == 2 )
      goto LABEL_44;
LABEL_35:
    v30 = (void *)sub_1987B0(&ptr, 0, v17, 1);
    v16 = (char *)v56;
    v17 = v59.m128i_i64[0];
    ptr = v30;
    v18 = (char *)v56 + 24 * v57;
    if ( v56 == v18 )
      goto LABEL_36;
    goto LABEL_21;
  }
  v19 = (char *)v56;
  do
  {
    v20 = *((_QWORD *)v19 + 1);
    if ( v20 )
      v17 = v20 + v17 - 1;
    v19 += 24;
  }
  while ( v19 != v18 );
  if ( v17 )
    goto LABEL_35;
LABEL_21:
  v21 = v16;
  do
  {
    if ( v17 > 1 )
    {
      v26 = v17 - 1;
      v27 = v17 + 1;
      v28 = ptr;
      v29 = v17 + 2;
      if ( v59.m128i_i64[1] < v29 )
      {
        v55.m128i_i64[0] = v27;
        ptr = (void *)sub_1987B0(&ptr, ptr, v29, 1);
        v27 = v55.m128i_i64[0];
        v28 = ptr;
      }
      v59.m128i_i64[0] = v29;
      v28[v27] = 0;
      *(_WORD *)((char *)ptr + v26) = 8236;
      v17 = v59.m128i_i64[0];
    }
    v22 = *((_QWORD *)v21 + 1);
    if ( v22 )
    {
      v23 = v22 - 1;
      if ( v22 != 1 )
      {
        v24 = v22 - 1;
        if ( v17 )
        {
          --v17;
          v24 = v23 + v17;
          v22 += v17;
        }
        v25 = ptr;
        if ( v59.m128i_i64[1] < v22 )
        {
          v55.m128i_i64[1] = v24;
          v55.m128i_i64[0] = v23;
          ptr = (void *)sub_1987B0(&ptr, ptr, v22, 1);
          v24 = v55.m128i_i64[1];
          v25 = ptr;
          v23 = v55.m128i_i64[0];
        }
        v59.m128i_i64[0] = v22;
        v25[v24] = 0;
        memcpy((char *)ptr + v17, *(const void **)v21, v23);
        v17 = v59.m128i_i64[0];
      }
    }
    v21 += 24;
  }
  while ( v18 != v21 );
LABEL_36:
  if ( v17 )
  {
    v31 = v17 - 1;
    if ( v17 != 1 )
    {
      v32 = qword_241958;
      v33 = v17 - 1;
      if ( qword_241958 )
      {
        v32 = qword_241958 - 1;
        v34 = qword_241950;
        v33 = v31 + qword_241958 - 1;
        v17 += qword_241958 - 1;
        if ( qword_241960 >= v17 )
          goto LABEL_40;
      }
      else
      {
        v34 = qword_241950;
        if ( qword_241960 >= v17 )
        {
LABEL_40:
          qword_241958 = v17;
          *(_BYTE *)(v34 + v33) = 0;
          memcpy((void *)(v32 + qword_241950), ptr, v31);
          goto LABEL_41;
        }
      }
      qword_241950 = sub_1987B0(&qword_241950, v34, v17, 1);
      v34 = qword_241950;
      goto LABEL_40;
    }
  }
LABEL_41:
  if ( ptr )
  {
    v59.m128i_i64[0] = 0;
    j__free(ptr);
  }
LABEL_43:
  v16 = (char *)v56;
LABEL_44:
  if ( v16 )
  {
    v35 = v57;
    if ( (_QWORD)v57 )
    {
      v36 = 0;
      do
      {
        v37 = &v16[24 * v36];
        v38 = *(void **)v37;
        if ( *(_QWORD *)v37 )
        {
          *((_QWORD *)v37 + 1) = 0;
          j__free(v38);
          v16 = (char *)v56;
        }
        ++v36;
      }
      while ( v35 != v36 );
    }
    *(_QWORD *)&v57 = 0;
    j__free(v16);
  }
  v39 = s1;
  if ( qword_241958 )
    v39 = (const char *)qword_241950;
  v40 = a2[1];
  v41 = *a2;
  if ( a2[2] < (unsigned __int64)(v40 + 1) )
  {
    v54 = sub_1987B0(a2, v41, v40 + 1, 40);
    v40 = a2[1];
    *a2 = v54;
    v41 = v54;
  }
  v42 = v41 + 40 * v40;
  *(_QWORD *)(v42 + 8) = "recreate-schema";
  *(_BYTE *)v42 = 0;
  *(_QWORD *)(v42 + 16) = v39;
  *(_QWORD *)(v42 + 24) = sub_2F310;
  *(_DWORD *)(v42 + 32) = 0;
  v43 = *a2;
  v44 = a2[1] + 1;
  a2[1] = v44;
  *(_DWORD *)(v43 + 40 * v44 - 8) = 1;
  return v60 - __readfsqword(0x28u);
}
