unsigned __int64 __fastcall sub_3E360(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4)
{
  size_t v7; // r13
  const char *v8; // rax
  const char *v9; // r13
  size_t v10; // r15
  void *v11; // rax
  __m128i v12; // xmm0
  __m128i v13; // xmm1
  __int64 v14; // r13
  __int64 v15; // rdx
  __int64 v16; // rax
  __m128 v17; // xmm0
  __int64 *v18; // rdx
  void *v20; // rax
  const void *v21; // rsi
  __int64 v22; // [rsp+8h] [rbp-88h] BYREF
  __int64 v23; // [rsp+10h] [rbp-80h] BYREF
  __int64 v24; // [rsp+18h] [rbp-78h]
  __int64 *v25; // [rsp+20h] [rbp-70h] BYREF
  __int64 *v26; // [rsp+28h] [rbp-68h]
  __int64 v27; // [rsp+30h] [rbp-60h]
  __m128i v28; // [rsp+38h] [rbp-58h] BYREF
  unsigned __int64 v29; // [rsp+50h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v7 = *(_QWORD *)(a2 + 8);
  if ( v7 )
  {
    v20 = (void *)qalloc_or_throw();
    *(_QWORD *)(a1 + 16) = v7;
    v21 = *(const void **)a2;
    *(_QWORD *)a1 = v20;
    memcpy(v20, v21, v7);
    *(_QWORD *)(a1 + 8) = v7;
  }
  v8 = (const char *)qbasename();
  *(_QWORD *)(a1 + 24) = 0;
  v9 = v8;
  *(_OWORD *)(a1 + 32) = 0;
  if ( v8 )
  {
    v10 = strlen(v8);
    v11 = (void *)qvector_reserve();
    *(_QWORD *)(a1 + 24) = v11;
    *(_QWORD *)(a1 + 32) = v10 + 1;
    memmove(v11, v9, v10);
    *(_BYTE *)(*(_QWORD *)(a1 + 24) + v10) = 0;
  }
  v12 = _mm_loadu_si128((const __m128i *)(a2 + 24));
  v13 = _mm_loadu_si128(a3);
  LODWORD(v23) = 0;
  *(__m128i *)(a1 + 64) = v13;
  v14 = v12.m128i_i64[0];
  *(__m128i *)(a1 + 48) = v12;
  v25 = &v23;
  v24 = 0;
  v26 = &v23;
  v27 = 0;
  v28 = _mm_unpacklo_epi64((__m128i)v12.m128i_u64[0], _mm_add_epi64(v12, _mm_srli_si128(v12, 8)));
  sub_3E220(&v22, &v23, (unsigned __int64 *)&v28);
  if ( !v15 )
  {
    *(_QWORD *)(a1 + 88) = a4;
    goto LABEL_10;
  }
  *(__m128i *)(operator new(0x30u) + 32) = _mm_load_si128(&v28);
  std::_Rb_tree_insert_and_rebalance();
  v16 = v24;
  ++v27;
  *(_QWORD *)(a1 + 80) = off_16C2E0;
  *(_QWORD *)(a1 + 88) = a4;
  if ( !v16 )
  {
LABEL_10:
    *(_DWORD *)(a1 + 104) = 0;
    *(_QWORD *)(a1 + 112) = 0;
    *(_QWORD *)(a1 + 120) = a1 + 104;
    *(_QWORD *)(a1 + 128) = a1 + 104;
    *(_QWORD *)(a1 + 136) = 0;
    goto LABEL_8;
  }
  v17 = _mm_loadh_ps((const double *)&v25);
  *(_DWORD *)(a1 + 104) = v23;
  v18 = v26;
  *(__m128 *)(a1 + 112) = v17;
  *(_QWORD *)(a1 + 128) = v18;
  *(_QWORD *)(v16 + 8) = a1 + 104;
  *(_QWORD *)(a1 + 136) = v27;
LABEL_8:
  *(_QWORD *)(a1 + 144) = v14;
  *(_QWORD *)(a1 + 80) = off_16C320;
  *(_QWORD *)(a1 + 152) = a1 + 80;
  *(_QWORD *)(a1 + 176) = a1 + 152;
  *(_OWORD *)(a1 + 160) = -1;
  return v29 - __readfsqword(0x28u);
}
