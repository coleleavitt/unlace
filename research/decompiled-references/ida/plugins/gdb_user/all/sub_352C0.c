__int64 __fastcall sub_352C0(__int64 a1, __int64 *a2, __int64 *a3, int a4, int a5, int a6, double a7, __m128i a8)
{
  const char *v9; // rax
  const char *v10; // rbx
  size_t v11; // rax
  size_t v12; // rbp
  unsigned int v13; // r14d
  unsigned __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r13
  __int64 i; // rbx
  __int64 v19; // rax
  __m128i v20; // xmm2
  __int64 v21; // rax
  unsigned __int64 v22; // r8
  __int64 v23; // rcx
  __int128 v24; // xmm0
  __int64 v25; // r13
  __int64 v26; // r15
  int v27; // eax
  size_t v28; // r12
  void *v29; // rax
  void *v30; // rdi
  size_t v31; // r13
  __int64 v32; // rax
  __int64 v33; // [rsp+8h] [rbp-60h]
  __m128i v34; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v35; // [rsp+20h] [rbp-48h]
  __int64 v36; // [rsp+28h] [rbp-40h]

  if ( (unsigned int)sub_34EE0(a1, (__int64)a3, a7, a8, (__int64)a3, a4, a5, a6) == 1 )
  {
    v15 = *(_QWORD *)(a1 + 1344);
    v13 = 1;
    v33 = 0;
    v34 = _mm_unpacklo_epi64((__m128i)v15, (__m128i)v15);
    if ( v15 )
    {
      v35 = v15;
      v21 = qalloc_or_throw();
      v22 = v35;
      v23 = 0;
      v24 = 0;
      v33 = v21;
      v25 = v21;
      do
      {
        v26 = *(_QWORD *)(a1 + 1336) + 32 * v23;
        v27 = *(_DWORD *)v26;
        *(_QWORD *)(v25 + 8) = 0;
        *(_OWORD *)(v25 + 16) = v24;
        *(_DWORD *)v25 = v27;
        v28 = *(_QWORD *)(v26 + 16);
        if ( v28 )
        {
          v36 = v23;
          v35 = v22;
          v29 = (void *)qalloc_or_throw();
          *(_QWORD *)(v25 + 24) = v28;
          *(_QWORD *)(v25 + 8) = v29;
          memcpy(v29, *(const void **)(v26 + 8), v28);
          *(_QWORD *)(v25 + 16) = v28;
          v23 = v36;
          v24 = 0;
          v22 = v35;
        }
        ++v23;
        v25 += 32;
      }
      while ( v22 != v23 );
    }
    v16 = *a2;
    if ( *a2 )
    {
      v17 = a2[1];
      if ( v17 )
      {
        for ( i = 0; i != v17; ++i )
        {
          v19 = v16 + 32 * i;
          if ( *(_QWORD *)(v19 + 8) )
          {
            *(_QWORD *)(v19 + 16) = 0;
            qfree();
            v16 = *a2;
          }
        }
      }
      a2[1] = 0;
      qfree();
    }
    v20 = _mm_load_si128(&v34);
    *a2 = v33;
    *(__m128i *)(a2 + 1) = v20;
  }
  else
  {
    if ( a3 )
    {
      v9 = (const char *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 864) + 56LL))(*(_QWORD *)(a1 + 864));
      v10 = v9;
      if ( v9 && (v11 = strlen(v9), (v12 = v11) != 0) )
      {
        v30 = (void *)*a3;
        v31 = v11 + 1;
        if ( a3[2] < v11 + 1 )
        {
          v32 = qvector_reserve();
          *a3 = v32;
          v30 = (void *)v32;
        }
        a3[1] = v31;
        memmove(v30, v10, v12);
        *(_BYTE *)(*a3 + v12) = 0;
      }
      else
      {
        a3[1] = 0;
      }
    }
    return (unsigned int)-2;
  }
  return v13;
}

