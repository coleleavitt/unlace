__int64 __fastcall sub_3C6F80(_QWORD *a1, int a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // edx
  __int64 v11; // rdi
  const char **v12; // r8
  _DWORD **v13; // rcx
  __int64 v14; // rax
  _DWORD *v15; // rcx
  const char *v16; // rdx
  __int64 v17; // rax
  unsigned int v18; // edx
  _QWORD *v19; // rcx
  _QWORD *v20; // rbp
  void *v21; // r13
  __int64 v22; // r14
  unsigned __int64 v23; // rdx
  __m128i si128; // xmm0
  void *v25; // r13
  __int64 v26; // r14
  size_t v27; // r12
  __m128i v28; // xmm0
  void *v29; // r12
  __int64 v30; // r13
  unsigned __int64 v31; // rdx
  __m128i v32; // xmm0
  _DWORD *v33; // rdx
  _QWORD **v34; // rsi
  size_t v35; // r12
  size_t v36; // rbx
  __m128i v37[3]; // [rsp+0h] [rbp-38h] BYREF

  v3 = a3;
  if ( a2 == 11 )
  {
    v18 = *(_DWORD *)a3;
    if ( v18 > 0x2F )
    {
      v19 = *(_QWORD **)(v3 + 8);
      *(_QWORD *)(v3 + 8) = v19 + 1;
    }
    else
    {
      v19 = (_QWORD *)(*(_QWORD *)(v3 + 16) + v18);
      *(_DWORD *)v3 = v18 + 8;
    }
    v20 = (_QWORD *)*v19;
    if ( *v19 )
    {
      v21 = nullptr;
      sub_3C6B40(v20 + 22, (__int64 *)(*a1 + 176LL));
      sub_3C6B40(v20 + 25, (__int64 *)(*a1 + 200LL));
      v22 = *a1;
      v23 = *(_QWORD *)(*a1 + 232LL);
      si128 = _mm_unpacklo_epi64((__m128i)v23, (__m128i)v23);
      if ( v23 )
      {
        v37[0] = si128;
        v35 = 16 * v23;
        v21 = (void *)qalloc_or_throw();
        memcpy(v21, *(const void **)(v22 + 224), v35);
        si128 = _mm_load_si128(v37);
      }
      if ( v20[28] )
      {
        v20[29] = 0;
        v37[0] = si128;
        qfree();
        si128 = _mm_load_si128(v37);
      }
      v20[28] = v21;
      v25 = nullptr;
      *(__m128i *)(v20 + 29) = si128;
      sub_3C6EC0();
      v26 = *a1;
      v27 = *(_QWORD *)(*a1 + 112LL);
      v28 = _mm_unpacklo_epi64((__m128i)v27, (__m128i)v27);
      if ( v27 )
      {
        v37[0] = v28;
        v25 = (void *)qalloc_or_throw();
        memcpy(v25, *(const void **)(v26 + 104), v27);
        v28 = _mm_load_si128(v37);
      }
      if ( v20[13] )
      {
        v20[14] = 0;
        v37[0] = v28;
        qfree();
        v28 = _mm_load_si128(v37);
      }
      *((__m128i *)v20 + 7) = v28;
      v29 = nullptr;
      v20[13] = v25;
      v30 = *a1;
      v31 = *(_QWORD *)(*a1 + 88LL);
      v32 = _mm_unpacklo_epi64((__m128i)v31, (__m128i)v31);
      if ( v31 )
      {
        v36 = 4 * v31;
        v37[0] = v32;
        v29 = (void *)qalloc_or_throw();
        memcpy(v29, *(const void **)(v30 + 80), v36);
        v32 = _mm_load_si128(v37);
      }
      if ( v20[10] )
      {
        v20[11] = 0;
        v37[0] = v32;
        qfree();
        v32 = _mm_load_si128(v37);
      }
      v20[10] = v29;
      *(__m128i *)(v20 + 11) = v32;
      return 1;
    }
    if ( under_debugger )
      BUG();
    v3 = interr();
    goto LABEL_37;
  }
  if ( a2 != 13 )
    return 0;
  v6 = *(_DWORD *)a3;
  if ( *(_DWORD *)a3 > 0x2Fu )
  {
    v33 = (_DWORD *)(*(_QWORD *)(a3 + 8) + 8LL);
LABEL_32:
    v34 = (_QWORD **)(v33 + 2);
    *(_QWORD *)(v3 + 8) = v33 + 2;
    v10 = *v33;
LABEL_33:
    v13 = (_DWORD **)(v34 + 1);
    *(_QWORD *)(v3 + 8) = v34 + 1;
    v12 = (const char **)*v34;
LABEL_34:
    *(_QWORD *)(v3 + 8) = v13 + 1;
    goto LABEL_9;
  }
  v7 = v6 + 8;
  *(_DWORD *)v3 = v7;
  if ( (unsigned int)v7 > 0x2F )
  {
    v33 = *(_DWORD **)(v3 + 8);
    goto LABEL_32;
  }
  v8 = *(_QWORD *)(v3 + 16);
  v9 = v6 + 16;
  *(_DWORD *)v3 = v9;
  v10 = *(_DWORD *)(v8 + v7);
  if ( (unsigned int)v9 > 0x2F )
  {
    v34 = *(_QWORD ***)(v3 + 8);
    goto LABEL_33;
  }
  v11 = v6 + 24;
  *(_DWORD *)v3 = v11;
  v12 = *(const char ***)(v8 + v9);
  if ( (unsigned int)v11 > 0x2F )
  {
LABEL_37:
    v13 = *(_DWORD ***)(v3 + 8);
    goto LABEL_34;
  }
  v13 = (_DWORD **)(v11 + v8);
  *(_DWORD *)v3 = v6 + 32;
LABEL_9:
  v14 = v10;
  v15 = *v13;
  v16 = s1;
  v17 = a1[1] + 32 * v14;
  if ( *(_QWORD *)(v17 + 8) )
    v16 = *(const char **)v17;
  *v12 = v16;
  if ( v15 )
    *v15 = *(_DWORD *)(v17 + 24);
  return 1;
}

