__int64 __fastcall sub_335C70(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4, int a5, __int64 a6, int a7)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rax
  void *v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // rax
  size_t v18; // rbx
  void *v19; // rax
  const void *v20; // rsi
  __int64 v21; // rax
  _BYTE *v22; // r15
  unsigned __int64 v23; // rbx
  void *v24; // r12
  __m128i v25; // xmm0
  __int64 v26; // rsi
  __int64 v27; // rbx
  __int64 v28; // rax
  int v29; // eax
  __m128i v31; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v32; // [rsp+10h] [rbp-D8h]
  _BYTE *v33; // [rsp+18h] [rbp-D0h]
  __int64 v34; // [rsp+20h] [rbp-C8h]
  __int64 v35; // [rsp+28h] [rbp-C0h]
  int v36; // [rsp+34h] [rbp-B4h]
  __int64 v37; // [rsp+38h] [rbp-B0h]
  int tinfo_size; // [rsp+4Ch] [rbp-9Ch] BYREF
  unsigned __int8 v39[16]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v40; // [rsp+60h] [rbp-88h]
  __int64 v41; // [rsp+68h] [rbp-80h]
  void *v42; // [rsp+70h] [rbp-78h]
  __m128i v43; // [rsp+78h] [rbp-70h] BYREF
  int v44; // [rsp+88h] [rbp-60h]
  int v45; // [rsp+98h] [rbp-50h]
  unsigned __int64 v46; // [rsp+A8h] [rbp-40h]

  v8 = a5;
  v37 = a1;
  v34 = a2;
  v35 = a3;
  v33 = a4;
  v36 = a7;
  v46 = __readfsqword(0x28u);
  v9 = qalloc_or_throw();
  *(_QWORD *)v9 = -1;
  v10 = v9;
  *(_QWORD *)(v9 + 8) = (unsigned int)v8;
  *(_QWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 24) = 0;
  *(_QWORD *)(v9 + 48) = 0;
  *(_QWORD *)(v9 + 72) = 0;
  *(_QWORD *)(v9 + 80) = 0;
  *(_QWORD *)(v9 + 88) = 0;
  *(_QWORD *)(v9 + 96) = 0;
  *(_QWORD *)(v9 + 104) = 0;
  *(_QWORD *)(v9 + 112) = 0;
  *(_QWORD *)(v9 + 136) = 0;
  *(_QWORD *)(v9 + 144) = 0;
  *(_QWORD *)(v9 + 152) = 0;
  *(_QWORD *)(v9 + 176) = 0;
  *(_QWORD *)(v9 + 184) = 0;
  *(_QWORD *)(v9 + 192) = 0;
  *(_QWORD *)(v9 + 216) = 0;
  *(_QWORD *)(v9 + 240) = 0;
  *(_QWORD *)(v9 + 248) = 0;
  *(_QWORD *)(v9 + 256) = 0;
  *(_QWORD *)(v9 + 280) = 0;
  *(_QWORD *)(v9 + 288) = 0;
  *(_OWORD *)(v9 + 32) = 0;
  *(_OWORD *)(v9 + 56) = 0;
  *(_OWORD *)(v9 + 120) = 0;
  *(_OWORD *)(v9 + 160) = 0;
  *(_OWORD *)(v9 + 200) = 0;
  *(_OWORD *)(v9 + 224) = 0;
  *(_OWORD *)(v9 + 264) = 0;
  *(_OWORD *)(v9 + 296) = 0;
  if ( (int)v8 > 0 )
  {
    v31.m128i_i64[0] = a6 + 80 * v8;
    do
    {
      sub_123480((__int64)v39, (unsigned __int8 *)a6);
      v17 = *(_QWORD *)(a6 + 16);
      v41 = 0;
      v40 = v17;
      copy_tinfo_t();
      v18 = *(_QWORD *)(a6 + 40);
      v42 = nullptr;
      v43 = 0;
      if ( v18 )
      {
        v19 = (void *)qalloc_or_throw();
        v20 = *(const void **)(a6 + 32);
        v42 = v19;
        v43.m128i_i64[1] = v18;
        memcpy(v19, v20, v18);
        v43.m128i_i64[0] = v18;
      }
      v44 = 0;
      copy_argloc();
      v45 = *(_DWORD *)(a6 + 72);
      v11 = *(_QWORD *)(v10 + 32);
      v12 = *(_QWORD *)(v10 + 24);
      if ( *(_QWORD *)(v10 + 40) < (unsigned __int64)(v11 + 1) )
      {
        v21 = qvector_reserve();
        *(_QWORD *)(v10 + 24) = v21;
        v11 = *(_QWORD *)(v10 + 32);
        v12 = v21;
      }
      v13 = v12 + 80 * v11;
      sub_123480(v13, v39);
      v14 = v40;
      *(_QWORD *)(v13 + 24) = 0;
      *(_QWORD *)(v13 + 16) = v14;
      v32 = v13 + 24;
      copy_tinfo_t();
      v15 = v42;
      v42 = nullptr;
      v16 = _mm_loadu_si128(&v43);
      *(_QWORD *)(v13 + 32) = v15;
      v43 = 0;
      *(_DWORD *)(v13 + 56) = 0;
      *(__m128i *)(v13 + 40) = v16;
      copy_argloc();
      *(_DWORD *)(v13 + 72) = v45;
      ++*(_QWORD *)(v10 + 32);
      cleanup_argloc();
      if ( v42 )
      {
        v43.m128i_i64[0] = 0;
        qfree();
      }
      a6 += 80;
      clear_tinfo_t();
      sub_11C7E0((__int64)v39);
    }
    while ( v31.m128i_i64[0] != a6 );
  }
  v22 = v33;
  *(_DWORD *)(v10 + 20) = 112;
  tinfo_size = 0;
  if ( *v22 )
  {
    copy_tinfo_t();
    if ( (get_tinfo_property() & 0x3F) == 1 )
    {
      if ( !(_BYTE)v36 )
        goto LABEL_25;
LABEL_24:
      *(_DWORD *)(v10 + 280) |= 1u;
      goto LABEL_25;
    }
    tinfo_size = get_tinfo_size();
    if ( tinfo_size <= 0 )
    {
      if ( !under_debugger )
        sub_3835A0(50098);
    }
    else
    {
      if ( (_BYTE)v36 )
        goto LABEL_24;
      (*(void (__fastcall **)(unsigned __int8 *, _QWORD, int *, __int64))(**(_QWORD **)(v37 + 1504) + 104LL))(
        v39,
        *(_QWORD *)(v37 + 1504),
        &tinfo_size,
        v10 + 72);
      if ( *(_DWORD *)v39 )
      {
        sub_1C2BF0((__int64)v39, v10 + 96, tinfo_size, 0, 0);
        sub_642D0((__int64 *)(v10 + 136), (__int64 *)(v10 + 96));
        v23 = *(_QWORD *)(v10 + 120);
        v24 = nullptr;
        if ( v23 )
        {
          v24 = (void *)qalloc_or_throw();
          memcpy(v24, *(const void **)(v10 + 112), 16 * v23);
        }
        v25 = _mm_unpacklo_epi64((__m128i)v23, (__m128i)v23);
        if ( *(_QWORD *)(v10 + 152) )
        {
          *(_QWORD *)(v10 + 160) = 0;
          v31 = v25;
          qfree();
          v25 = _mm_load_si128(&v31);
        }
        *(_QWORD *)(v10 + 152) = v24;
        v26 = v37;
        *(__m128i *)(v10 + 160) = v25;
        sub_3305B0(v10, v26);
        cleanup_argloc();
        goto LABEL_25;
      }
      if ( !under_debugger )
        sub_3835A0(51808);
    }
    BUG();
  }
  *(_QWORD *)v39 = 1;
  copy_tinfo_t();
  clear_tinfo_t();
  if ( (_BYTE)v36 )
    goto LABEL_24;
LABEL_25:
  v27 = qalloc_or_throw();
  *(_OWORD *)(v27 + 8) = 0;
  *(_QWORD *)(v27 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v27 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v27 + 64) = 0xFFFFFFFF00000000LL;
  v28 = v34;
  *(_QWORD *)(v27 + 40) = 0;
  *(_QWORD *)(v27 + 24) = v28;
  *(_QWORD *)(v27 + 56) = 0;
  *(_QWORD *)(v27 + 72) = 0;
  *(_QWORD *)v27 = 56;
  sub_11CEE0(v27 + 32);
  v29 = tinfo_size;
  *(_BYTE *)(v27 + 64) = 8;
  *(_QWORD *)(v27 + 72) = v10;
  *(_DWORD *)(v27 + 68) = v29;
  if ( (get_tinfo_property() & 0x2F) == 0xD )
    *(_BYTE *)(v27 + 65) |= 2u;
  return v27;
}

