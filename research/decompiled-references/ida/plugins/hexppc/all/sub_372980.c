unsigned __int64 __fastcall sub_372980(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __m128i v3; // xmm1
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r14
  __m128i v7; // xmm0
  __int64 v8; // r14
  __m128i v9; // xmm0
  __int64 v10; // rdi
  __int64 v11; // rbp
  __m128i v12; // xmm0
  __int64 v13; // rdi
  __int64 v14; // rbp
  __m128i v15; // xmm0
  __m128i v17; // [rsp+0h] [rbp-B8h] BYREF
  int v18; // [rsp+10h] [rbp-A8h]
  __int64 v19; // [rsp+20h] [rbp-98h]
  int v20; // [rsp+28h] [rbp-90h]
  __int64 v21; // [rsp+30h] [rbp-88h]
  __m128i v22; // [rsp+38h] [rbp-80h] BYREF
  __int64 v23; // [rsp+48h] [rbp-70h]
  __m128i v24; // [rsp+50h] [rbp-68h] BYREF
  __int64 v25; // [rsp+60h] [rbp-58h]
  __int64 v26; // [rsp+68h] [rbp-50h]
  __int64 v27; // [rsp+70h] [rbp-48h]
  unsigned __int64 v28; // [rsp+78h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  v18 = 0;
  copy_argloc();
  v2 = *(_QWORD *)(a1 + 16);
  v3 = _mm_loadu_si128((const __m128i *)(a1 + 64));
  v25 = 0;
  v19 = v2;
  LODWORD(v2) = *(_DWORD *)(a1 + 24);
  v22 = _mm_loadu_si128((const __m128i *)(a1 + 40));
  v20 = v2;
  v4 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = 0;
  v21 = v4;
  v5 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  v23 = v5;
  v24 = v3;
  copy_tinfo_t();
  v26 = *(_QWORD *)(a1 + 88);
  v27 = *(_QWORD *)(a1 + 96);
  copy_argloc();
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
  v6 = *(_QWORD *)(a2 + 32);
  v7 = _mm_loadu_si128((const __m128i *)(a2 + 40));
  *(_QWORD *)(a2 + 32) = 0;
  *(_OWORD *)(a2 + 40) = 0;
  if ( *(_QWORD *)(a1 + 32) )
  {
    *(_QWORD *)(a1 + 40) = 0;
    v17 = v7;
    qfree();
    v7 = _mm_load_si128(&v17);
  }
  *(_QWORD *)(a1 + 32) = v6;
  *(__m128i *)(a1 + 40) = v7;
  v8 = *(_QWORD *)(a2 + 56);
  v9 = _mm_loadu_si128((const __m128i *)(a2 + 64));
  *(_QWORD *)(a2 + 56) = 0;
  *(_OWORD *)(a2 + 64) = 0;
  if ( *(_QWORD *)(a1 + 56) )
  {
    *(_QWORD *)(a1 + 64) = 0;
    v17 = v9;
    qfree();
    v9 = _mm_load_si128(&v17);
  }
  *(_QWORD *)(a1 + 56) = v8;
  *(__m128i *)(a1 + 64) = v9;
  copy_tinfo_t();
  *(_DWORD *)(a1 + 88) = *(_DWORD *)(a2 + 88);
  *(_DWORD *)(a1 + 92) = *(_DWORD *)(a2 + 92);
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 96);
  copy_argloc();
  v10 = *(_QWORD *)(a2 + 32);
  v11 = v21;
  v12 = _mm_loadu_si128(&v22);
  v22 = 0;
  *(_QWORD *)(a2 + 16) = v19;
  v21 = 0;
  *(_DWORD *)(a2 + 24) = v20;
  if ( v10 )
  {
    *(_QWORD *)(a2 + 40) = 0;
    v17 = v12;
    qfree();
    v12 = _mm_load_si128(&v17);
  }
  v13 = *(_QWORD *)(a2 + 56);
  *(_QWORD *)(a2 + 32) = v11;
  *(__m128i *)(a2 + 40) = v12;
  v14 = v23;
  v15 = _mm_load_si128(&v24);
  v23 = 0;
  v24 = 0;
  if ( v13 )
  {
    *(_QWORD *)(a2 + 64) = 0;
    v17 = v15;
    qfree();
    v15 = _mm_load_si128(&v17);
  }
  *(_QWORD *)(a2 + 56) = v14;
  *(__m128i *)(a2 + 64) = v15;
  copy_tinfo_t();
  *(_QWORD *)(a2 + 88) = v26;
  *(_QWORD *)(a2 + 96) = v27;
  clear_tinfo_t();
  if ( v23 )
  {
    v24.m128i_i64[0] = 0;
    qfree();
  }
  if ( v21 )
  {
    v22.m128i_i64[0] = 0;
    qfree();
  }
  cleanup_argloc();
  return v28 - __readfsqword(0x28u);
}

