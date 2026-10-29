__int64 __fastcall sub_9A5C0(__int64 a1, __m128i *a2, __int64 a3, unsigned __int64 a4, unsigned __int64 a5)
{
  __int64 v8; // r15
  __int64 v10; // r12
  __m128i v11; // xmm0
  int v12; // ebp
  __int64 v13; // rdx
  unsigned __int64 v14; // r14
  const __m128i *v15; // r13
  __m128i *v16; // rax
  __int64 v17; // rax
  __m128i v18; // xmm0
  __int64 v19; // rax
  __int64 v20; // rcx
  const __m128i *v21; // rdi
  __m128i v22; // xmm0
  __int64 v23; // rax
  __int64 v24; // rcx
  const __m128i *v25; // rdx
  __m128i v26; // xmm1
  __int64 v28; // rax
  __m128i v29; // [rsp+0h] [rbp-88h] BYREF
  __int64 v30; // [rsp+18h] [rbp-70h]
  __m128i v31; // [rsp+20h] [rbp-68h] BYREF
  __m128i v32; // [rsp+30h] [rbp-58h] BYREF
  int v33; // [rsp+40h] [rbp-48h]
  unsigned __int64 v34; // [rsp+48h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  v33 = 0;
  v31 = 0u;
  v32 = 0;
  if ( (unsigned __int8)sub_9A3B0(a1, &v31, a2) )
  {
    v10 = v31.m128i_i64[1];
    v8 = v31.m128i_i64[0];
    v11 = _mm_load_si128(&v32);
    v12 = v33;
  }
  else
  {
    if ( a4 == -1 || a5 == -1 )
      return 0;
    v8 = a2[14].m128i_i64[0];
    if ( (v8 & 0x7FFFFFFFFFFFFFFFLL) == 0 || v8 == -1 )
    {
      if ( !under_debugger )
      {
        interr(30478);
        return 0;
      }
LABEL_22:
      BUG();
    }
    if ( sub_84340(a1, a1 + 384, a2[14].m128i_i64) )
    {
      if ( !under_debugger )
        interr(30215);
      goto LABEL_22;
    }
    v18 = (__m128i)a4;
    v10 = a2[14].m128i_i64[1];
    v12 = 3;
    v11 = _mm_unpacklo_epi64(v18, (__m128i)a5);
  }
  v13 = *(_QWORD *)(a3 + 8);
  v14 = *(_QWORD *)(a3 + 16);
  if ( v14 < v13 + 1 )
  {
    v29 = v11;
    v19 = qvector_reserve(a3, 0, v13 + 1, 40);
    v20 = *(_QWORD *)(a3 + 8);
    v21 = *(const __m128i **)a3;
    v15 = (const __m128i *)v19;
    v22 = _mm_load_si128(&v29);
    v23 = *(_QWORD *)(a3 + 16);
    *(_QWORD *)(a3 + 16) = v14;
    v24 = v20 - 1;
    if ( v24 >= 0 )
    {
      v25 = v15;
      do
      {
        v26 = _mm_loadu_si128(v21);
        v25 = (const __m128i *)((char *)v25 + 40);
        v21 = (const __m128i *)((char *)v21 + 40);
        *(__m128i *)((char *)v25 - 40) = v26;
        *(const __m128i *)((char *)&v25[-2] + 8) = _mm_loadu_si128((const __m128i *)((char *)v21 - 24));
        v25[-1].m128i_i64[1] = v21[-1].m128i_i64[1];
      }
      while ( v24-- != 0 );
      v21 = *(const __m128i **)a3;
    }
    v30 = v23;
    v29 = v22;
    qfree(v21);
    v28 = v30;
    *(_QWORD *)a3 = v15;
    v13 = *(_QWORD *)(a3 + 8);
    v11 = _mm_load_si128(&v29);
    *(_QWORD *)(a3 + 16) = v28;
  }
  else
  {
    v15 = *(const __m128i **)a3;
  }
  v16 = (__m128i *)((char *)v15 + 40 * v13);
  v16->m128i_i64[0] = v8;
  v16->m128i_i64[1] = v10;
  v16[2].m128i_i32[0] = v12;
  v16[1] = v11;
  v17 = *(_QWORD *)(a3 + 8) + 1LL;
  *(_QWORD *)(a3 + 8) = v17;
  return *(_QWORD *)a3 + 40 * v17 - 40;
}

