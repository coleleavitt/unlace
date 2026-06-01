unsigned __int64 __fastcall sub_3CA710(__int64 *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r13
  __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rbx
  __m128i v10; // xmm0
  __int64 v11; // rax
  __m128i v12; // xmm1
  void *v14; // rax
  __int64 v15; // rax
  void *v16; // rax
  const void *v17; // rsi
  __int64 v18; // [rsp+10h] [rbp-88h]
  int v19; // [rsp+18h] [rbp-80h]
  void *v20; // [rsp+20h] [rbp-78h]
  __m128i v21; // [rsp+28h] [rbp-70h] BYREF
  __int64 v22; // [rsp+38h] [rbp-60h]
  __m128i v23; // [rsp+40h] [rbp-58h] BYREF
  __int64 v24; // [rsp+50h] [rbp-48h]
  __int64 v25; // [rsp+58h] [rbp-40h]
  __int64 v26; // [rsp+60h] [rbp-38h]
  unsigned __int64 v27; // [rsp+68h] [rbp-30h]

  v27 = __readfsqword(0x28u);
  v2 = (_QWORD *)a2;
  copy_argloc();
  v20 = nullptr;
  v21 = 0;
  v5 = *(_QWORD *)(a2 + 40);
  v18 = *(_QWORD *)(a2 + 16);
  v19 = *(_DWORD *)(a2 + 24);
  if ( v5 )
  {
    v14 = (void *)qalloc_or_throw(v5, a2, v3, v4);
    a2 = *(_QWORD *)(a2 + 32);
    v20 = v14;
    v21.m128i_i64[1] = v5;
    memcpy(v14, (const void *)a2, v5);
    v21.m128i_i64[0] = v5;
  }
  v6 = v2[8];
  v22 = 0;
  v23 = 0;
  if ( v6 )
  {
    v16 = (void *)qalloc_or_throw(v6, a2, v3, v4);
    v17 = (const void *)v2[7];
    v22 = (__int64)v16;
    v23.m128i_i64[1] = v6;
    memcpy(v16, v17, v6);
    v23.m128i_i64[0] = v6;
  }
  v24 = 0;
  copy_tinfo_t();
  v7 = a1[1];
  v8 = *a1;
  v25 = v2[11];
  v26 = v2[12];
  if ( a1[2] < (unsigned __int64)(v7 + 1) )
  {
    v15 = qvector_reserve((__int64)a1, v8, v7 + 1, 104);
    *a1 = v15;
    v7 = a1[1];
    v8 = v15;
  }
  v9 = v8 + 104 * v7;
  *(_DWORD *)v9 = 0;
  copy_argloc();
  *(_QWORD *)(v9 + 80) = 0;
  *(_QWORD *)(v9 + 16) = v18;
  *(_DWORD *)(v9 + 24) = v19;
  v10 = _mm_loadu_si128(&v21);
  *(_QWORD *)(v9 + 32) = v20;
  *(__m128i *)(v9 + 40) = v10;
  v11 = v22;
  v12 = _mm_load_si128(&v23);
  v22 = 0;
  *(_QWORD *)(v9 + 56) = v11;
  *(__m128i *)(v9 + 64) = v12;
  v21 = 0;
  v23 = 0;
  copy_tinfo_t();
  *(_QWORD *)(v9 + 88) = v25;
  *(_QWORD *)(v9 + 96) = v26;
  ++a1[1];
  clear_tinfo_t();
  if ( v22 )
  {
    v23.m128i_i64[0] = 0;
    qfree(v22);
  }
  cleanup_argloc();
  return v27 - __readfsqword(0x28u);
}

