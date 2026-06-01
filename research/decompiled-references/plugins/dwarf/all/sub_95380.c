__int64 __fastcall sub_95380(const __m128i **a1, __int64 *a2, int a3, int a4)
{
  void *exception; // rbx
  __int64 v8; // r14
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // r15
  unsigned int v12; // r12d
  const __m128i *v13; // rax
  __int64 *m128i_i64; // rax
  const __m128i *v15; // rax
  __int64 v16; // rsi
  const __m128i *v17; // rax
  __int64 v18; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  const __m128i *v23; // rdx
  const __m128i *v24; // rsi
  const __m128i *v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __m128i v28; // xmm0
  const __m128i *v30; // [rsp+0h] [rbp-48h]
  __int64 v31; // [rsp+8h] [rbp-40h]

  v8 = *a2;
  v9 = (unsigned __int64)a1[1];
  if ( *a2 < 0 )
  {
    v10 = 0;
    if ( !v9 )
      goto LABEL_3;
  }
  else
  {
    v10 = 0;
    if ( (unsigned __int64)a1[3] >= v9 )
      goto LABEL_3;
  }
  v10 = (*a1)[v9 - 1].m128i_i64[0] & 0x7FFFFFFFFFFFFFFFLL;
LABEL_3:
  if ( v10 >= (v8 & 0x7FFFFFFFFFFFFFFFuLL) )
  {
    exception = __cxa_allocate_exception(0x18u);
    sub_94DC0((__int64)exception, (__int64)"Corrupted DWARF data (possibly overlapping DIE contents.)");
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'dwarf_file_t::failure_t, (void (*)(void *))sub_28140);
  }
  v11 = a2[1];
  v12 = (unsigned int)a1[1];
  if ( (unsigned __int64)a1[2] < v9 + 1 )
  {
    v30 = a1[2];
    v22 = qvector_reserve(a1, 0, v9 + 1, 16);
    v23 = a1[1];
    v24 = a1[2];
    v25 = *a1;
    a1[2] = v30;
    v26 = (__int64)&v23[-1].m128i_i64[1] + 7;
    if ( v26 >= 0 )
    {
      v27 = v22;
      do
      {
        v28 = _mm_loadu_si128(v25);
        v27 += 16;
        ++v25;
        *(__m128i *)(v27 - 16) = v28;
      }
      while ( v26-- != 0 );
      v25 = *a1;
    }
    v31 = v22;
    qfree(v25);
    v13 = (const __m128i *)v31;
    v9 = (unsigned __int64)a1[1];
    *a1 = (const __m128i *)v31;
    a1[2] = v24;
  }
  else
  {
    v13 = *a1;
  }
  m128i_i64 = v13[v9].m128i_i64;
  *m128i_i64 = v8;
  m128i_i64[1] = v11;
  v15 = a1[8];
  a1[1] = (const __m128i *)((char *)a1[1] + 1);
  v16 = (__int64)a1[7];
  if ( a1[9] < (const __m128i *)&v15->m128i_i8[1] )
  {
    v21 = qvector_reserve(a1 + 7, v16, &v15->m128i_i8[1], 4);
    a1[7] = (const __m128i *)v21;
    v16 = v21;
    v15 = a1[8];
  }
  *(_DWORD *)(v16 + 4LL * (_QWORD)v15) = a3;
  v17 = a1[5];
  a1[8] = (const __m128i *)((char *)a1[8] + 1);
  v18 = (__int64)a1[4];
  if ( a1[6] < (const __m128i *)&v17->m128i_i8[1] )
  {
    v20 = qvector_reserve(a1 + 4, v18, &v17->m128i_i8[1], 4);
    a1[4] = (const __m128i *)v20;
    v18 = v20;
    v17 = a1[5];
  }
  *(_DWORD *)(v18 + 4LL * (_QWORD)v17) = a4;
  a1[5] = (const __m128i *)((char *)a1[5] + 1);
  return v12;
}
