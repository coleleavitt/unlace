unsigned __int64 __fastcall sub_305180(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  __m128i si128; // xmm0
  __int64 v9; // rax
  bool v10; // zf
  __int64 v11; // rdi
  __int64 v12; // r12
  __m128i v13; // xmm0
  __int64 v14; // rdi
  __int64 v15; // r12
  __m128i v16; // xmm0
  __int64 v17; // rax
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rdx
  __m128i v22; // [rsp+0h] [rbp-118h] BYREF
  __m128i v23; // [rsp+10h] [rbp-108h] BYREF
  __int64 v24; // [rsp+20h] [rbp-F8h]
  __int64 v25; // [rsp+28h] [rbp-F0h]
  __m128i v26; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v27; // [rsp+48h] [rbp-D0h]
  __m128i v28; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+60h] [rbp-B8h]
  int v30; // [rsp+68h] [rbp-B0h]
  __int64 v31; // [rsp+70h] [rbp-A8h] BYREF
  __m128i v32; // [rsp+78h] [rbp-A0h]
  __int64 v33; // [rsp+88h] [rbp-90h] BYREF
  __int128 v34; // [rsp+90h] [rbp-88h]
  __int64 v35; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v36; // [rsp+A8h] [rbp-70h] BYREF
  __int128 v37; // [rsp+B0h] [rbp-68h]
  __int64 v38; // [rsp+C0h] [rbp-58h]
  int v39; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v40; // [rsp+D8h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  copy_argloc();
  v7 = *(_QWORD *)(a2 + 24);
  si128 = _mm_load_si128((const __m128i *)&xmmword_41F900);
  LODWORD(v31) = 0;
  v33 = 0;
  *(_QWORD *)(a1 + 24) = v7;
  v9 = *(_QWORD *)(a2 + 32);
  v32 = si128;
  *(_QWORD *)(a1 + 32) = v9;
  LODWORD(v9) = *(_DWORD *)(a2 + 40);
  v35 = 0;
  *(_DWORD *)(a1 + 40) = v9;
  v10 = *(_BYTE *)(a2 + 96) == 0;
  v36 = 0;
  v38 = -1;
  v39 = 0;
  v34 = 0;
  v37 = 0;
  if ( v10 )
  {
    sub_2BD590((__int64)&v23, a2 + 48);
  }
  else
  {
    switch_dbctx();
    copy_argloc();
    v32.m128i_i64[1] = *(_QWORD *)(a2 + 64);
    sub_2B0EF0((__int64)&v33, a2 + 72);
    copy_tinfo_t();
    sub_2B0EF0((__int64)&v36, a2 + 104);
    v19 = *(_QWORD *)(a3 + 32);
    v20 = *(unsigned int *)(a3 + 12);
    v21 = *(unsigned int *)(a4 + 12);
    v38 = *(_QWORD *)(a2 + 128);
    v39 = *(_DWORD *)(a2 + 136);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64, __int64))(*(_QWORD *)v19 + 32LL))(
      v19,
      &v35,
      v21,
      v20,
      1);
    switch_dbctx();
    sub_2BD650(&v23, (const __m128i *)&v31);
  }
  sub_2B9D40(&v31);
  copy_argloc();
  v11 = *(_QWORD *)(a1 + 72);
  v12 = v25;
  v13 = _mm_load_si128(&v26);
  v26 = 0;
  *(_QWORD *)(a1 + 64) = v24;
  v25 = 0;
  if ( v11 )
  {
    *(_QWORD *)(a1 + 80) = 0;
    v22 = v13;
    qfree();
    v13 = _mm_load_si128(&v22);
  }
  *(_QWORD *)(a1 + 72) = v12;
  *(__m128i *)(a1 + 80) = v13;
  copy_tinfo_t();
  v14 = *(_QWORD *)(a1 + 104);
  v15 = v27;
  v27 = 0;
  v16 = _mm_load_si128(&v28);
  v28 = 0;
  if ( v14 )
  {
    *(_QWORD *)(a1 + 112) = 0;
    v22 = v16;
    qfree();
    v16 = _mm_load_si128(&v22);
  }
  v17 = v29;
  *(_QWORD *)(a1 + 104) = v15;
  *(__m128i *)(a1 + 112) = v16;
  *(_QWORD *)(a1 + 128) = v17;
  *(_DWORD *)(a1 + 136) = v30;
  sub_2B9D40(&v23);
  return v40 - __readfsqword(0x28u);
}

