_BOOL8 __fastcall sub_3A8590(__int64 a1, __int64 *a2, __int64 *a3)
{
  bool v3; // zf
  __int64 v5; // rbx
  unsigned __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // r13
  __int64 i; // rbx
  _QWORD *v10; // rax
  __m128i v11; // xmm3
  _BOOL4 v12; // ebp
  __int64 v13; // rdx
  __int64 v14; // r13
  __int64 j; // r12
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r13
  __int64 k; // r12
  _QWORD *v20; // rax
  __m128i *v21; // rsi
  __m128i si128; // xmm0
  __int64 v24; // rsi
  __m128i v25; // xmm0
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // r15
  __int64 v29; // r8
  __int64 v30; // rcx
  size_t v31; // r14
  void *v32; // rax
  const void **v33; // rcx
  __int64 v34; // rax
  __m128i v35; // [rsp+0h] [rbp-68h] BYREF
  __int64 v36; // [rsp+10h] [rbp-58h]
  __int64 v37; // [rsp+18h] [rbp-50h]
  _QWORD v38[9]; // [rsp+20h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(a1 + 32) == 0;
  v38[1] = __readfsqword(0x28u);
  if ( !v3 && !get_func() )
  {
    if ( a3 )
    {
      v21 = (__m128i *)*a3;
      if ( (unsigned __int64)a3[2] <= 0x14 )
      {
        v27 = qvector_reserve();
        *a3 = v27;
        v21 = (__m128i *)v27;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_41FB40);
      a3[1] = 21;
      v21[1].m128i_i32[0] = 1684370017;
      *v21 = si128;
      *(_BYTE *)(*a3 + 20) = 0;
    }
    return 0;
  }
  sub_14C800(v38, *(_QWORD *)(a1 + 16), (_QWORD *)(a1 + 32), nullptr, 0);
  v5 = v38[0];
  if ( !v38[0] )
  {
    if ( a3 )
    {
      v24 = *a3;
      if ( (unsigned __int64)a3[2] <= 0x15 )
      {
        v34 = qvector_reserve();
        *a3 = v34;
        v5 = v38[0];
        v24 = v34;
      }
      v25 = _mm_load_si128((const __m128i *)&xmmword_41FB50);
      a3[1] = 22;
      *(__m128i *)v24 = v25;
      *(_QWORD *)(v24 + 13) = 0x6572756C69616620LL;
      v26 = *a3;
      v12 = 0;
      *(_BYTE *)(v26 + 21) = 0;
      goto LABEL_13;
    }
    return 0;
  }
  v36 = 0;
  v6 = *(_QWORD *)(v38[0] + 136LL);
  if ( v6 )
  {
    v36 = qalloc_or_throw();
    v28 = v36;
    v29 = 0;
    do
    {
      v30 = *(_QWORD *)(v5 + 128) + 32 * v29;
      *(_OWORD *)(v28 + 8) = 0;
      *(_QWORD *)v28 = 0;
      v31 = *(_QWORD *)(v30 + 8);
      if ( v31 )
      {
        v37 = v29;
        v35.m128i_i64[0] = v30;
        v32 = (void *)qalloc_or_throw();
        v33 = (const void **)v35.m128i_i64[0];
        *(_QWORD *)v28 = v32;
        *(_QWORD *)(v28 + 16) = v31;
        memcpy(v32, *v33, v31);
        *(_QWORD *)(v28 + 8) = v31;
        v29 = v37;
        v30 = v35.m128i_i64[0];
      }
      ++v29;
      v28 += 32;
      *(_BYTE *)(v28 - 8) = *(_BYTE *)(v30 + 24);
      *(_DWORD *)(v28 - 4) = *(_DWORD *)(v30 + 28);
    }
    while ( v6 != v29 );
  }
  v7 = *a2;
  v35 = _mm_unpacklo_epi64((__m128i)v6, (__m128i)v6);
  if ( v7 )
  {
    v8 = a2[1];
    if ( v8 )
    {
      for ( i = 0; i != v8; ++i )
      {
        v10 = (_QWORD *)(v7 + 32 * i);
        if ( *v10 )
        {
          v10[1] = 0;
          qfree();
          v7 = *a2;
        }
      }
    }
    a2[1] = 0;
    qfree();
  }
  v11 = _mm_load_si128(&v35);
  v5 = v38[0];
  *a2 = v36;
  *(__m128i *)(a2 + 1) = v11;
  v12 = *(_DWORD *)(v5 + 152) >= 0;
LABEL_13:
  if ( v5 )
  {
    v3 = (*(_DWORD *)(v5 + 104))-- == 1;
    if ( v3 )
    {
      sub_258D30((__int64 *)v5);
      v13 = *(_QWORD *)(v5 + 184);
      if ( v13 )
      {
        v14 = *(_QWORD *)(v5 + 192);
        if ( v14 )
        {
          for ( j = 0; j != v14; ++j )
          {
            v16 = (_QWORD *)(v13 + 24 * j);
            if ( *v16 )
            {
              v16[1] = 0;
              qfree();
              v13 = *(_QWORD *)(v5 + 184);
            }
          }
        }
        *(_QWORD *)(v5 + 192) = 0;
        qfree();
      }
      if ( *(_QWORD *)(v5 + 160) )
      {
        *(_QWORD *)(v5 + 168) = 0;
        qfree();
      }
      v17 = *(_QWORD *)(v5 + 128);
      if ( v17 )
      {
        v18 = *(_QWORD *)(v5 + 136);
        if ( v18 )
        {
          for ( k = 0; k != v18; ++k )
          {
            v20 = (_QWORD *)(v17 + 32 * k);
            if ( *v20 )
            {
              v20[1] = 0;
              qfree();
              v17 = *(_QWORD *)(v5 + 128);
            }
          }
        }
        *(_QWORD *)(v5 + 136) = 0;
        qfree();
      }
      sub_255410(v5 + 16);
      j__qfree();
    }
  }
  return v12;
}

