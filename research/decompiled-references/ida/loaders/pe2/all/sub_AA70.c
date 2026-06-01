__int64 __fastcall sub_AA70(__int64 a1, const char *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r12
  __int64 v7; // rax
  unsigned __int64 v8; // r13
  char *v9; // r14
  char *v10; // rax
  size_t v11; // r15
  size_t v12; // rax
  void *v13; // r8
  __int64 v14; // r15
  __int64 v15; // rbp
  void *v16; // rax
  __int64 v17; // rdi
  void *v18; // rax
  void *v19; // rdi
  const char *v20; // rdi
  __int64 v21; // rax
  __m128i si128; // xmm3
  char *v24; // rax
  void *v25; // rcx
  __int64 v26; // r13
  __int64 *v27; // r15
  __int64 v28; // r13
  char *v29; // r14
  __int64 v30; // rsi
  __m128i v31; // xmm0
  __int64 v32; // rsi
  __m128i v33; // xmm0
  __int64 v34; // rsi
  void *v36; // rdi
  void *v37; // rdx
  __int64 v38; // rbp
  size_t v39; // rbp
  void *v40; // r8
  __int64 v41; // rax
  void *src[2]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v43; // [rsp+10h] [rbp-68h]
  void *v44; // [rsp+18h] [rbp-60h]
  void *v45; // [rsp+20h] [rbp-58h]
  __int128 v46; // [rsp+28h] [rbp-50h]
  unsigned __int64 v47; // [rsp+38h] [rbp-40h]

  v43 = a4;
  v47 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 16LL) & a3;
  if ( !(unsigned __int8)is_loaded() )
  {
    sub_A980((__int64)"AUTOHIDE REGISTRY\n"
                      "Some imported modules will not be visible\n"
                      "because the IAT is located outside of memory range of the input file.");
    return 1;
  }
  v7 = *(_QWORD *)(a1 + 104);
  v8 = *(_QWORD *)(a1 + 112);
  if ( v8 < v7 + 1 )
  {
    v24 = (char *)qvector_reserve();
    v25 = *(void **)(a1 + 112);
    *(_QWORD *)(a1 + 112) = v8;
    v26 = *(_QWORD *)(a1 + 104);
    v27 = *(__int64 **)(a1 + 96);
    src[0] = v24;
    v44 = v25;
    v28 = v26 - 1;
    if ( v28 >= 0 )
    {
      v29 = v24;
      do
      {
        v30 = *v27;
        v31 = _mm_loadu_si128((const __m128i *)(v27 + 1));
        *v27 = 0;
        *(_OWORD *)(v27 + 1) = 0;
        *(_QWORD *)v29 = v30;
        *(__m128i *)(v29 + 8) = v31;
        v32 = v27[3];
        v33 = _mm_loadu_si128((const __m128i *)v27 + 2);
        v27[3] = 0;
        *((_QWORD *)v29 + 3) = v32;
        *((__m128i *)v29 + 2) = v33;
        v34 = v27[6];
        v27[5] = 0;
        *((_QWORD *)v29 + 6) = v34;
        v29[56] = *((_BYTE *)v27 + 56);
        if ( v27[3] )
        {
          v27[4] = 0;
          qfree();
        }
        if ( *v27 )
        {
          v27[1] = 0;
          qfree();
        }
        v27 += 8;
        v29 += 64;
      }
      while ( v28-- != 0 );
    }
    qfree();
    *(void **)(a1 + 96) = src[0];
    *(_QWORD *)(a1 + 112) = v44;
    v7 = *(_QWORD *)(a1 + 104);
  }
  else
  {
    src[0] = *(void **)(a1 + 96);
  }
  v9 = (char *)src[0] + 64 * v7;
  *(_QWORD *)v9 = 0;
  *((_QWORD *)v9 + 3) = 0;
  *((_QWORD *)v9 + 6) = -1;
  v9[56] = 0;
  *(_OWORD *)(v9 + 8) = 0;
  *((_OWORD *)v9 + 2) = 0;
  ++*(_QWORD *)(a1 + 104);
  netnode_check();
  if ( !byte_379E2 || (v10 = strrchr(a2, 91)) == nullptr )
  {
    v10 = strrchr(a2, 46);
    if ( !v10 )
      v10 = (char *)&a2[strlen(a2)];
  }
  v11 = v10 - a2;
  if ( a2 && (v12 = strlen(a2), (v13 = (void *)v12) != nullptr) )
  {
    v36 = *(void **)v9;
    v37 = (void *)(v12 + 1);
    if ( *((_QWORD *)v9 + 2) < v12 + 1 )
    {
      src[0] = (void *)(v12 + 1);
      v44 = (void *)v12;
      v41 = qvector_reserve();
      v13 = v44;
      v37 = src[0];
      *(_QWORD *)v9 = v41;
      v36 = (void *)v41;
    }
    *((_QWORD *)v9 + 1) = v37;
    src[0] = v13;
    memmove(v36, a2, (size_t)v13);
    *((_BYTE *)src[0] + *(_QWORD *)v9) = 0;
    v38 = *((_QWORD *)v9 + 1);
    if ( v38 )
    {
      v39 = v38 - 1;
      v40 = *(void **)v9;
      v45 = nullptr;
      v46 = 0;
      if ( v39 > v11 )
        v39 = v11;
      if ( v39 )
      {
        src[0] = v40;
        *(_QWORD *)&v46 = v39 + 1;
        v45 = (void *)qvector_reserve();
        memmove(v45, src[0], v39);
        *((_BYTE *)v45 + v39) = 0;
        v16 = v45;
        v14 = *((_QWORD *)&v46 + 1);
        v15 = v46;
        goto LABEL_10;
      }
    }
  }
  else
  {
    *((_QWORD *)v9 + 1) = 0;
  }
  v14 = 0;
  v15 = 0;
  v16 = nullptr;
LABEL_10:
  v17 = *((_QWORD *)v9 + 3);
  v45 = nullptr;
  v46 = 0;
  *(__m128i *)src = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v6, (__m128i)(unsigned __int64)v6);
  if ( v17 )
  {
    *((_QWORD *)v9 + 4) = 0;
    v44 = v16;
    qfree();
    v18 = v44;
    v19 = v45;
    *((_QWORD *)v9 + 4) = v15;
    *((_QWORD *)v9 + 5) = v14;
    *((_QWORD *)v9 + 3) = v18;
    if ( v19 )
    {
      *(_QWORD *)&v46 = 0;
      qfree();
      v15 = *((_QWORD *)v9 + 4);
    }
  }
  else
  {
    *((_QWORD *)v9 + 3) = v16;
    *((_QWORD *)v9 + 4) = v15;
    *((_QWORD *)v9 + 5) = v14;
  }
  v20 = s1;
  if ( v15 )
    v20 = *((const char **)v9 + 3);
  if ( !strcasecmp(v20, "euser") )
    byte_379E2 = 1;
  v21 = v43;
  si128 = _mm_load_si128((const __m128i *)src);
  *(_BYTE *)(a1 + 165) = 0;
  *(_QWORD *)(a1 + 152) = v21;
  *(__m128i *)(a1 + 136) = si128;
  return 0;
}

