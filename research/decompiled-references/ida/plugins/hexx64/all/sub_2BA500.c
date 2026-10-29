unsigned __int64 __fastcall sub_2BA500(__int64 a1, unsigned __int64 a2, double a3)
{
  __int64 v4; // rdi
  bool (__fastcall *v5)(__int64); // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  __m128i si128; // xmm0
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r12
  __m128i v12; // xmm0
  __int64 v13; // rdi
  __int64 v14; // r12
  __m128i v15; // xmm0
  __int64 v16; // rax
  __m128i v18; // [rsp+0h] [rbp-98h] BYREF
  __int64 v19; // [rsp+10h] [rbp-88h] BYREF
  __m128i v20; // [rsp+18h] [rbp-80h]
  __int64 v21; // [rsp+28h] [rbp-70h]
  __m128i v22; // [rsp+30h] [rbp-68h] BYREF
  __int64 v23; // [rsp+40h] [rbp-58h]
  __int64 v24; // [rsp+48h] [rbp-50h]
  __m128i v25; // [rsp+50h] [rbp-48h] BYREF
  __int64 v26; // [rsp+60h] [rbp-38h]
  __int64 v27; // [rsp+68h] [rbp-30h]
  unsigned __int64 v28; // [rsp+78h] [rbp-20h]

  v28 = __readfsqword(0x28u);
  if ( a2 >= *(_QWORD *)(a1 + 48) )
    goto LABEL_10;
  v4 = 192 * a2 + *(_QWORD *)(a1 + 40);
  v5 = **(bool (__fastcall ***)(__int64))v4;
  if ( v5 == sub_2AD0C0 )
  {
    if ( *(_DWORD *)(v4 + 40) == 1 )
      goto LABEL_4;
LABEL_10:
    sub_2ADE80(a3);
  }
  if ( !((unsigned __int8 (*)(void))v5)() )
    goto LABEL_10;
LABEL_4:
  switch_dbctx();
  v6 = *(_QWORD *)(a1 + 40) + 192 * a2;
  copy_argloc();
  v7 = *(_QWORD *)(v6 + 160);
  si128 = _mm_load_si128((const __m128i *)&xmmword_424800);
  LODWORD(v19) = 0;
  *(_QWORD *)(v6 + 24) = v7;
  v9 = *(_QWORD *)(v6 + 168);
  v20 = si128;
  *(_QWORD *)(v6 + 32) = v9;
  LODWORD(v9) = *(_DWORD *)(v6 + 176);
  v21 = 0;
  *(_DWORD *)(v6 + 40) = v9;
  v27 = 0;
  v23 = 0;
  v24 = 0;
  v26 = -1;
  v22 = 0;
  v25 = 0;
  copy_argloc();
  v10 = *(_QWORD *)(v6 + 72);
  v11 = v21;
  v12 = _mm_load_si128(&v22);
  v22 = 0;
  *(_QWORD *)(v6 + 64) = v20.m128i_i64[1];
  v21 = 0;
  if ( v10 )
  {
    *(_QWORD *)(v6 + 80) = 0;
    v18 = v12;
    qfree(v10);
    v12 = _mm_load_si128(&v18);
  }
  *(_QWORD *)(v6 + 72) = v11;
  *(__m128i *)(v6 + 80) = v12;
  copy_tinfo_t();
  v13 = *(_QWORD *)(v6 + 104);
  v14 = v24;
  v24 = 0;
  v15 = _mm_load_si128(&v25);
  v25 = 0;
  if ( v13 )
  {
    *(_QWORD *)(v6 + 112) = 0;
    v18 = v15;
    qfree(v13);
    v15 = _mm_load_si128(&v18);
  }
  v16 = v26;
  *(_QWORD *)(v6 + 104) = v14;
  *(__m128i *)(v6 + 112) = v15;
  *(_QWORD *)(v6 + 128) = v16;
  *(_DWORD *)(v6 + 136) = v27;
  sub_2B9980(&v19);
  *(_DWORD *)(v6 + 184) = -2;
  return v28 - __readfsqword(0x28u);
}

