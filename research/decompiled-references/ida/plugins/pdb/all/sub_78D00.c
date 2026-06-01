unsigned __int64 __fastcall sub_78D00(_QWORD *a1, const char *a2, const char *a3, unsigned int a4)
{
  unsigned __int64 result; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  __int64 v10; // rbx
  size_t v11; // rax
  size_t v12; // r14
  size_t v13; // rax
  size_t v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // r13
  __int64 *v18; // rbx
  __int64 v19; // r13
  __int64 v20; // r14
  __int64 v21; // rcx
  __m128i v22; // xmm0
  __int64 v23; // rcx
  __m128i v24; // xmm0
  __int64 v25; // rdi
  __int64 v26; // rdi
  void *v28; // rdi
  size_t v29; // r14
  void *v30; // rdi
  size_t v31; // r15
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v35; // [rsp+10h] [rbp-48h]

  result = sub_78990((__int64)a1, a2, 0);
  if ( a3 )
  {
    v8 = a1[4];
    v9 = a1[5];
    if ( v9 < v8 + 1 )
    {
      v15 = qvector_reserve(a1 + 3, 0, v8 + 1, 56);
      v16 = a1[5];
      v17 = a1[4];
      a1[5] = v9;
      v35 = v15;
      v18 = (__int64 *)a1[3];
      v19 = v17 - 1;
      if ( v19 >= 0 )
      {
        v20 = v15;
        do
        {
          v21 = *v18;
          v22 = _mm_loadu_si128((const __m128i *)(v18 + 1));
          *v18 = 0;
          *(_OWORD *)(v18 + 1) = 0;
          *(_QWORD *)v20 = v21;
          *(__m128i *)(v20 + 8) = v22;
          v23 = v18[3];
          v24 = _mm_loadu_si128((const __m128i *)v18 + 2);
          v18[3] = 0;
          *(_QWORD *)(v20 + 24) = v23;
          *(__m128i *)(v20 + 32) = v24;
          LODWORD(v23) = *((_DWORD *)v18 + 12);
          v18[5] = 0;
          *(_DWORD *)(v20 + 48) = v23;
          v25 = v18[3];
          if ( v25 )
          {
            v18[4] = 0;
            qfree(v25);
          }
          v26 = *v18;
          if ( *v18 )
          {
            v18[1] = 0;
            qfree(v26);
          }
          v18 += 7;
          v20 += 56;
        }
        while ( v19-- != 0 );
        v18 = (__int64 *)a1[3];
      }
      qfree(v18);
      a1[3] = v35;
      a1[5] = v16;
      v8 = a1[4];
    }
    else
    {
      v35 = a1[3];
    }
    v10 = v35 + 56 * v8;
    *(_QWORD *)v10 = 0;
    *(_QWORD *)(v10 + 24) = 0;
    *(_OWORD *)(v10 + 8) = 0;
    *(_OWORD *)(v10 + 32) = 0;
    ++a1[4];
    if ( a2 && (v11 = strlen(a2), (v12 = v11) != 0) )
    {
      v30 = *(void **)v10;
      v31 = v11 + 1;
      if ( *(_QWORD *)(v10 + 16) < v11 + 1 )
      {
        v33 = qvector_reserve(v10, *(_QWORD *)v10, v11 + 1, 1);
        *(_QWORD *)v10 = v33;
        v30 = (void *)v33;
      }
      *(_QWORD *)(v10 + 8) = v31;
      memmove(v30, a2, v12);
      *(_BYTE *)(*(_QWORD *)v10 + v12) = 0;
    }
    else
    {
      *(_QWORD *)(v10 + 8) = 0;
    }
    v13 = strlen(a3);
    v14 = v13;
    if ( v13 )
    {
      v28 = *(void **)(v10 + 24);
      v29 = v13 + 1;
      if ( *(_QWORD *)(v10 + 40) < v13 + 1 )
      {
        v32 = qvector_reserve(v10 + 24, *(_QWORD *)(v10 + 24), v29, 1);
        *(_QWORD *)(v10 + 24) = v32;
        v28 = (void *)v32;
      }
      *(_QWORD *)(v10 + 32) = v29;
      memmove(v28, a3, v14);
      *(_BYTE *)(*(_QWORD *)(v10 + 24) + v14) = 0;
    }
    else
    {
      *(_QWORD *)(v10 + 32) = 0;
    }
    result = a4;
    *(_DWORD *)(v10 + 48) = a4;
  }
  return result;
}

