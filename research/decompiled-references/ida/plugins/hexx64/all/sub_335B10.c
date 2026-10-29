__int64 __fastcall sub_335B10(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        double a7,
        __m128 a8,
        int a9)
{
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __m128i v14; // xmm0
  __int64 v15; // rbp
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbx
  void *v27; // rax
  const void *v28; // rsi
  __int64 v29; // rax
  unsigned __int8 **v30; // r15
  unsigned __int8 *v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned __int64 v36; // rbx
  void *v37; // r12
  __int64 v38; // rdi
  __m128i v39; // xmm0
  __int64 v40; // rbx
  __int64 v41; // rax
  int v42; // eax
  __m128i v44; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v45; // [rsp+10h] [rbp-D8h]
  unsigned __int8 **v46; // [rsp+18h] [rbp-D0h]
  __int64 v47; // [rsp+20h] [rbp-C8h]
  __int64 v48; // [rsp+28h] [rbp-C0h]
  int v49; // [rsp+34h] [rbp-B4h]
  __int64 v50; // [rsp+38h] [rbp-B0h]
  int tinfo_size; // [rsp+4Ch] [rbp-9Ch] BYREF
  unsigned __int8 v52[16]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v53; // [rsp+60h] [rbp-88h]
  __int64 v54; // [rsp+68h] [rbp-80h]
  __int64 v55; // [rsp+70h] [rbp-78h]
  __m128i v56; // [rsp+78h] [rbp-70h] BYREF
  int v57; // [rsp+88h] [rbp-60h]
  int v58; // [rsp+98h] [rbp-50h]
  unsigned __int64 v59; // [rsp+A8h] [rbp-40h]

  v10 = a5;
  v50 = a1;
  v47 = a2;
  v48 = a3;
  v46 = (unsigned __int8 **)a4;
  v49 = a9;
  v59 = __readfsqword(0x28u);
  v11 = qalloc_or_throw(312, a2, a3, a4);
  v14.m128i_i64[0] = 0;
  *(_QWORD *)v11 = -1;
  v15 = v11;
  *(_QWORD *)(v11 + 8) = (unsigned int)v10;
  *(_QWORD *)(v11 + 16) = 0;
  *(_QWORD *)(v11 + 24) = 0;
  *(_QWORD *)(v11 + 48) = 0;
  *(_QWORD *)(v11 + 72) = 0;
  *(_QWORD *)(v11 + 80) = 0;
  *(_QWORD *)(v11 + 88) = 0;
  *(_QWORD *)(v11 + 96) = 0;
  *(_QWORD *)(v11 + 104) = 0;
  *(_QWORD *)(v11 + 112) = 0;
  *(_QWORD *)(v11 + 136) = 0;
  *(_QWORD *)(v11 + 144) = 0;
  *(_QWORD *)(v11 + 152) = 0;
  *(_QWORD *)(v11 + 176) = 0;
  *(_QWORD *)(v11 + 184) = 0;
  *(_QWORD *)(v11 + 192) = 0;
  *(_QWORD *)(v11 + 216) = 0;
  *(_QWORD *)(v11 + 240) = 0;
  *(_QWORD *)(v11 + 248) = 0;
  *(_QWORD *)(v11 + 256) = 0;
  *(_QWORD *)(v11 + 280) = 0;
  *(_QWORD *)(v11 + 288) = 0;
  *(_OWORD *)(v11 + 32) = 0;
  *(_OWORD *)(v11 + 56) = 0;
  *(_OWORD *)(v11 + 120) = 0;
  *(_OWORD *)(v11 + 160) = 0;
  *(_OWORD *)(v11 + 200) = 0;
  *(_OWORD *)(v11 + 224) = 0;
  *(_OWORD *)(v11 + 264) = 0;
  *(_OWORD *)(v11 + 296) = 0;
  if ( (int)v10 > 0 )
  {
    v44.m128i_i64[0] = a6 + 80 * v10;
    do
    {
      sub_123A40((__int64)v52, (unsigned __int8 *)a6, v12, v13);
      v23 = *(_QWORD *)(a6 + 16);
      v54 = 0;
      v53 = v23;
      copy_tinfo_t();
      v26 = *(_QWORD *)(a6 + 40);
      a8 = 0;
      v55 = 0;
      v56 = 0;
      if ( v26 )
      {
        v27 = (void *)qalloc_or_throw(v26, a6 + 24, v24, v25);
        v28 = *(const void **)(a6 + 32);
        v55 = (__int64)v27;
        v56.m128i_i64[1] = v26;
        memcpy(v27, v28, v26);
        v56.m128i_i64[0] = v26;
      }
      v57 = 0;
      copy_argloc();
      v58 = *(_DWORD *)(a6 + 72);
      v17 = *(_QWORD *)(v15 + 32);
      v18 = *(_QWORD *)(v15 + 24);
      if ( *(_QWORD *)(v15 + 40) < (unsigned __int64)(v17 + 1) )
      {
        v29 = qvector_reserve(v15 + 24, v18, v17 + 1, 80);
        *(_QWORD *)(v15 + 24) = v29;
        v17 = *(_QWORD *)(v15 + 32);
        v18 = v29;
      }
      v19 = 80 * v17;
      v20 = v18 + v19;
      sub_123A40(v18 + v19, v52, v19, v16);
      v21 = v53;
      *(_QWORD *)(v20 + 24) = 0;
      *(_QWORD *)(v20 + 16) = v21;
      v45 = v20 + 24;
      copy_tinfo_t();
      v22 = v55;
      v55 = 0;
      v14 = _mm_loadu_si128(&v56);
      *(_QWORD *)(v20 + 32) = v22;
      v56 = 0;
      *(_DWORD *)(v20 + 56) = 0;
      *(__m128i *)(v20 + 40) = v14;
      copy_argloc();
      *(_DWORD *)(v20 + 72) = v58;
      ++*(_QWORD *)(v15 + 32);
      cleanup_argloc();
      if ( v55 )
      {
        v56.m128i_i64[0] = 0;
        qfree(v55);
      }
      a6 += 80;
      clear_tinfo_t();
      sub_11CDA0((__int64)v52);
    }
    while ( v44.m128i_i64[0] != a6 );
  }
  v30 = v46;
  *(_DWORD *)(v15 + 20) = 112;
  tinfo_size = 0;
  if ( !*(_BYTE *)v30 )
  {
    *(_QWORD *)v52 = 1;
    v31 = v52;
    copy_tinfo_t();
    clear_tinfo_t();
    if ( !(_BYTE)v49 )
      goto LABEL_13;
    goto LABEL_24;
  }
  copy_tinfo_t();
  v31 = (unsigned __int8 *)&word_2;
  if ( (get_tinfo_property() & 0x3F) == 1 )
  {
    if ( !(_BYTE)v49 )
    {
LABEL_13:
      v32 = (unsigned int)tinfo_size;
      goto LABEL_25;
    }
    goto LABEL_24;
  }
  v31 = *v46;
  tinfo_size = get_tinfo_size();
  if ( tinfo_size <= 0 )
  {
    if ( !under_debugger )
      sub_383060(0xC3B2u, *(double *)v14.m128i_i64);
LABEL_32:
    BUG();
  }
  if ( (_BYTE)v49 )
  {
LABEL_24:
    *(_DWORD *)(v15 + 280) |= 1u;
    goto LABEL_25;
  }
  (*(void (__fastcall **)(unsigned __int8 *, _QWORD, int *, __int64))(**(_QWORD **)(v50 + 1504) + 104LL))(
    v52,
    *(_QWORD *)(v50 + 1504),
    &tinfo_size,
    v15 + 72);
  if ( !*(_DWORD *)v52 )
  {
    if ( !under_debugger )
      sub_383060(0xCA60u, *(double *)v14.m128i_i64);
    goto LABEL_32;
  }
  sub_1C31B0((__int64)v52, v15 + 96, tinfo_size, 0, 0, *(double *)v14.m128i_i64, a8);
  sub_648D0((__int64 *)(v15 + 136), (const void **)(v15 + 96), *(double *)v14.m128i_i64);
  v36 = *(_QWORD *)(v15 + 120);
  v37 = nullptr;
  if ( v36 )
  {
    v37 = (void *)qalloc_or_throw(16 * v36, v15 + 96, v34, v35);
    memcpy(v37, *(const void **)(v15 + 112), 16 * v36);
  }
  v38 = *(_QWORD *)(v15 + 152);
  v39 = _mm_unpacklo_epi64((__m128i)v36, (__m128i)v36);
  if ( v38 )
  {
    *(_QWORD *)(v15 + 160) = 0;
    v44 = v39;
    qfree(v38);
    v39 = _mm_load_si128(&v44);
  }
  *(_QWORD *)(v15 + 152) = v37;
  v31 = (unsigned __int8 *)v50;
  *(__m128i *)(v15 + 160) = v39;
  sub_330290(v15, (__int64)v31, *(double *)v39.m128i_i64);
  cleanup_argloc();
LABEL_25:
  v40 = qalloc_or_throw(80, (__int64)v31, v32, v33);
  *(_OWORD *)(v40 + 8) = 0;
  *(_QWORD *)(v40 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v40 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v40 + 64) = 0xFFFFFFFF00000000LL;
  v41 = v47;
  *(_QWORD *)(v40 + 40) = 0;
  *(_QWORD *)(v40 + 24) = v41;
  *(_QWORD *)(v40 + 56) = 0;
  *(_QWORD *)(v40 + 72) = 0;
  *(_QWORD *)v40 = 56;
  sub_11D4A0(v40 + 32);
  v42 = tinfo_size;
  *(_BYTE *)(v40 + 64) = 8;
  *(_QWORD *)(v40 + 72) = v15;
  *(_DWORD *)(v40 + 68) = v42;
  if ( (get_tinfo_property() & 0x2F) == 0xD )
    *(_BYTE *)(v40 + 65) |= 2u;
  return v40;
}

