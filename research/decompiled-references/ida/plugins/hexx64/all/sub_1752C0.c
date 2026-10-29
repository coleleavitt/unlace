unsigned __int64 __fastcall sub_1752C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _BYTE *a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8,
        __int32 a9,
        char a10,
        __int64 a11)
{
  __int64 v15; // rdi
  __int8 v16; // r8
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rsi
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rdi
  __int64 v23; // r12
  __m128 si128; // xmm1
  __int64 v25; // rdi
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // rdi
  __m128i v29; // xmm0
  __int64 v30; // r15
  __m128 v31; // xmm1
  __int64 v32; // rdi
  int v33; // r8d
  int v34; // r9d
  __int64 v35; // rdx
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // r9d
  __int64 v41; // rdx
  __int64 v42; // rcx
  char v43; // al
  __int64 v45; // rax
  __int64 *v46; // rdi
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  int v50; // r9d
  _BYTE *v51; // rax
  __int64 v52; // rsi
  __m128 v53; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v54; // [rsp+10h] [rbp-A8h]
  __int64 v55; // [rsp+18h] [rbp-A0h]
  __int64 v56[2]; // [rsp+20h] [rbp-98h] BYREF
  __int64 *v57; // [rsp+30h] [rbp-88h] BYREF
  __int64 v58; // [rsp+38h] [rbp-80h]
  const void *v59[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v60; // [rsp+60h] [rbp-58h] BYREF
  __m128i v61; // [rsp+68h] [rbp-50h] BYREF
  unsigned __int64 v62; // [rsp+78h] [rbp-40h]

  v15 = a1 + 72;
  v54 = a11;
  v53.m128_i32[0] = a9;
  v62 = __readfsqword(0x28u);
  *(_QWORD *)(v15 - 72) = off_4DDE40;
  *(_QWORD *)(v15 - 64) = 0;
  *(_QWORD *)(v15 - 56) = 0;
  *(_QWORD *)(v15 - 48) = 0;
  *(_QWORD *)(v15 - 40) = 0;
  *(_BYTE *)(v15 - 32) = 0;
  *(_QWORD *)(v15 - 28) = 0;
  *(_QWORD *)(v15 - 16) = a3;
  *(_QWORD *)(v15 - 8) = a4;
  v55 = v15;
  *(_OWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 104) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(a1 + 144) = 0;
  sub_1253A0(v15, (__int64)a4);
  v16 = v53.m128_i8[0];
  *(_QWORD *)(a1 + 312) = a2;
  v17 = v55;
  *(_QWORD *)(a1 + 328) = a6;
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 272) = 0;
  *(_QWORD *)(a1 + 280) = 0;
  *(_QWORD *)(a1 + 288) = 0;
  *(_QWORD *)(a1 + 320) = a5;
  *(_QWORD *)(a1 + 336) = 0;
  *(_DWORD *)(a1 + 344) = 0;
  *(_BYTE *)(a1 + 348) = 0;
  *(_WORD *)(a1 + 349) = 0;
  *(_BYTE *)(a1 + 351) = v16;
  *(_BYTE *)(a1 + 352) = a10;
  *(_WORD *)(a1 + 354) = 256;
  *(_OWORD *)(a1 + 176) = 0;
  *(_OWORD *)(a1 + 216) = 0;
  *(_OWORD *)(a1 + 256) = 0;
  *(_OWORD *)(a1 + 296) = 0;
  sub_11D890(v17, (__int64)a4);
  v18 = *(_QWORD *)(a1 + 56);
  v19 = *(_QWORD *)(a1 + 320);
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(*(_QWORD *)(a1 + 328) + 64LL);
  sub_127A20((__int64)v59, v19, v18, 0, v20, v21, 0.0, a8);
  sub_648D0((__int64 *)(a1 + 232), v59, 0.0);
  v22 = *(_QWORD *)(a1 + 248);
  v23 = v60;
  v60 = 0;
  si128 = (__m128)_mm_loadu_si128(&v61);
  v61 = 0;
  if ( v22 )
  {
    *(_QWORD *)(a1 + 256) = 0;
    v53 = si128;
    qfree(v22);
    si128 = (__m128)_mm_load_si128((const __m128i *)&v53);
    v25 = v60;
    *(_QWORD *)(a1 + 248) = v23;
    *(__m128 *)(a1 + 256) = si128;
    if ( v25 )
    {
      v61.m128i_i64[0] = 0;
      qfree(v25);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 248) = v23;
    *(__m128 *)(a1 + 256) = si128;
  }
  qfree((__int64)v59[0]);
  sub_127A20((__int64)v59, *(_QWORD *)(a1 + 320), *(_QWORD *)(a1 + 56), 256, v26, v27, 0.0, si128);
  sub_648D0((__int64 *)(a1 + 272), v59, 0.0);
  v28 = *(_QWORD *)(a1 + 288);
  v29.m128i_i64[0] = 0;
  v30 = v60;
  v60 = 0;
  v31 = (__m128)_mm_loadu_si128(&v61);
  v61 = 0;
  if ( v28 )
  {
    *(_QWORD *)(a1 + 296) = 0;
    v53 = v31;
    qfree(v28);
    v31 = (__m128)_mm_load_si128((const __m128i *)&v53);
    v32 = v60;
    *(_QWORD *)(a1 + 288) = v30;
    *(__m128 *)(a1 + 296) = v31;
    if ( v32 )
    {
      v61.m128i_i64[0] = 0;
      qfree(v32);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 288) = v30;
    *(__m128 *)(a1 + 296) = v31;
  }
  qfree((__int64)v59[0]);
  if ( sub_120380(*(_BYTE **)(a1 + 56), 1) )
  {
    v35 = *(_QWORD *)(a1 + 56);
    v36 = *(_QWORD *)(a1 + 320);
    v53.m128_u64[0] = (unsigned __int64)v56;
    sub_127A20((__int64)v56, v36, v35, 1, v33, v34, 0.0, v31);
    if ( v58 && sub_120380(*(_BYTE **)(a1 + 56), 0) )
    {
      v59[0] = nullptr;
      v59[1] = nullptr;
      v60 = 0;
      v61 = 0;
      v45 = qvector_reserve((__int64)&v60, 0, 1, 16);
      v29 = _mm_load_si128((const __m128i *)&xmmword_424800);
      v60 = v45;
      v46 = (__int64 *)v53.m128_u64[0];
      v47 = 16 * v61.m128i_i64[0];
      *(__m128i *)(v45 + v47) = v29;
      ++v61.m128i_i64[0];
      sub_64640(v46, (__int64 *)v59, v47, v48, v49, v50);
      sub_317C60((__int64 *)&v57, (__int64)&v60);
      if ( v60 )
      {
        v61.m128i_i64[0] = 0;
        qfree(v60);
      }
      qfree((__int64)v59[0]);
    }
    sub_64640((__int64 *)v53.m128_u64[0], (__int64 *)(a1 + 272), v37, v38, v39, v40);
    sub_317C60((__int64 *)&v57, a1 + 288);
    sub_64280((__int64 *)(a1 + 192), (__int64 *)v53.m128_u64[0], *(double *)v29.m128i_i64);
    sub_316CB0((__int64 *)(a1 + 208), &v57, v41, v42);
    if ( v57 )
    {
      v58 = 0;
      qfree((__int64)v57);
    }
    qfree(v56[0]);
  }
  if ( !*(_QWORD *)(v54 + 24) )
    goto LABEL_13;
  v51 = sub_120380(a4, 1);
  if ( !v51 )
    goto LABEL_13;
  if ( v51[64] != 8 )
  {
    v43 = 0;
    goto LABEL_14;
  }
  v52 = *((_QWORD *)v51 + 9);
  if ( (*(_BYTE *)(v52 + 280) & 0x10) == 0 )
    v43 = sub_318470((unsigned __int64 **)(v54 + 16), v52 + 152) ^ 1;
  else
LABEL_13:
    v43 = 1;
LABEL_14:
  *(_BYTE *)(a1 + 353) = v43;
  return v62 - __readfsqword(0x28u);
}

