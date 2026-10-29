__int64 __fastcall sub_332BE0(_DWORD *a1, __int64 a2, __int64 a3)
{
  size_t v3; // r14
  void *v5; // r12
  __int16 v6; // r8
  __int64 v7; // r15
  __m128i v8; // xmm0
  __int64 errdesc; // rbp
  __int64 v10; // rdx
  __int64 i; // rbx
  _QWORD *v12; // rax
  __int16 v14; // [rsp+4h] [rbp-ACh]
  __int64 v15; // [rsp+8h] [rbp-A8h]
  char v16; // [rsp+50h] [rbp-60h]
  __m128i v17; // [rsp+58h] [rbp-58h] BYREF
  unsigned __int64 v18; // [rsp+70h] [rbp-40h]

  v3 = *(_QWORD *)(a3 + 8);
  v18 = __readfsqword(0x28u);
  if ( v3 )
  {
    v5 = (void *)qalloc_or_throw();
    memcpy(v5, *(const void **)a3, v3);
    v6 = *(_WORD *)(a3 + 24);
    v7 = *(_QWORD *)(a3 + 32);
    v16 = *(_BYTE *)(a3 + 40);
    v17 = _mm_loadu_si128((const __m128i *)(a3 + 48));
  }
  else
  {
    v5 = nullptr;
    v6 = *(_WORD *)(a3 + 24);
    v7 = *(_QWORD *)(a3 + 32);
    v16 = *(_BYTE *)(a3 + 40);
    v17 = _mm_loadu_si128((const __m128i *)(a3 + 48));
  }
  v14 = v6;
  v15 = qvector_reserve();
  *(__m128i *)(v15 + 8) = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v3);
  v8 = _mm_load_si128(&v17);
  *(_QWORD *)v15 = v5;
  *(_WORD *)(v15 + 24) = v14;
  *(_QWORD *)(v15 + 32) = v7;
  *(_BYTE *)(v15 + 40) = v16;
  *(__m128i *)(v15 + 48) = v8;
  if ( (unsigned int)parse_json() )
    errdesc = get_errdesc();
  else
    errdesc = 2LL * (*a1 != 4);
  v10 = v15;
  if ( v15 )
  {
    for ( i = 0; i != 1; ++i )
    {
      v12 = (_QWORD *)(v10 + (i << 6));
      if ( *v12 )
      {
        v12[1] = 0;
        qfree();
        v10 = v15;
      }
    }
    qfree();
  }
  return errdesc;
}

