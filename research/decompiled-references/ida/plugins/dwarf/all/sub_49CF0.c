unsigned __int64 __fastcall sub_49CF0(__int64 a1, __int64 *a2)
{
  __int64 v2; // r14
  __m128i v4; // xmm0
  __int64 v5; // rax
  __m128i v6; // xmm1
  __m128i v7; // xmm0
  __int64 v8; // rax
  __m128i v9; // xmm0
  __int64 v10; // rdx
  char v11; // al
  __m128i v12; // xmm0
  __int64 v13; // rax
  __m128i v14; // xmm0
  __int64 v15; // rax
  __int64 v16; // r13
  __m128i v17; // xmm0
  __int64 v18; // rdi
  __int64 v19; // r13
  __m128i v20; // xmm0
  __int64 v21; // rdi
  __m128i v22; // xmm0
  __int64 v23; // rdi
  __int64 v24; // rbp
  __m128i v25; // xmm0
  __int64 v26; // rdi
  __int64 v27; // rbp
  __m128i v28; // xmm0
  __m128i v29; // xmm0
  __int64 v30; // rax
  __m128i v31; // xmm0
  __m128i v32; // xmm0
  __m128i v34; // [rsp+0h] [rbp-D8h] BYREF
  __m128i v35; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v36; // [rsp+20h] [rbp-B8h]
  __m128i v37; // [rsp+28h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+38h] [rbp-A0h]
  __m128i v39; // [rsp+40h] [rbp-98h] BYREF
  __int64 v40; // [rsp+50h] [rbp-88h] BYREF
  __m128i v41; // [rsp+58h] [rbp-80h] BYREF
  __m128i v42; // [rsp+68h] [rbp-70h] BYREF
  __m128i v43; // [rsp+78h] [rbp-60h] BYREF
  __int64 v44; // [rsp+88h] [rbp-50h]
  __int64 v45; // [rsp+90h] [rbp-48h]
  char v46; // [rsp+98h] [rbp-40h]
  unsigned __int64 v47; // [rsp+A8h] [rbp-30h]

  v2 = a1 + 64;
  v4 = _mm_loadu_si128((const __m128i *)a1);
  v5 = *(_QWORD *)(a1 + 16);
  v47 = __readfsqword(0x28u);
  v6 = _mm_loadu_si128((const __m128i *)(a1 + 48));
  v35 = v4;
  v7 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  v36 = v5;
  v8 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  v37 = v7;
  *(_OWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  v38 = v8;
  v40 = 0;
  v39 = v6;
  copy_tinfo_t(&v40, a1 + 64);
  v9 = _mm_loadu_si128((const __m128i *)(a1 + 72));
  v10 = *(_QWORD *)(a1 + 128);
  v44 = *(_QWORD *)(a1 + 120);
  v11 = *(_BYTE *)(a1 + 136);
  v41 = v9;
  v12 = _mm_loadu_si128((const __m128i *)(a1 + 88));
  v46 = v11;
  v13 = *a2;
  v42 = v12;
  v14 = _mm_loadu_si128((const __m128i *)(a1 + 104));
  *(_QWORD *)a1 = v13;
  v15 = a2[1];
  v43 = v14;
  *(_QWORD *)(a1 + 8) = v15;
  v16 = a2[2];
  v17 = _mm_loadu_si128((const __m128i *)(a2 + 3));
  a2[2] = 0;
  *(_OWORD *)(a2 + 3) = 0;
  v18 = *(_QWORD *)(a1 + 16);
  v45 = v10;
  if ( v18 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    v34 = v17;
    qfree(v18);
    v17 = _mm_load_si128(&v34);
  }
  *(_QWORD *)(a1 + 16) = v16;
  *(__m128i *)(a1 + 24) = v17;
  v19 = a2[5];
  v20 = _mm_loadu_si128((const __m128i *)a2 + 3);
  a2[5] = 0;
  *((_OWORD *)a2 + 3) = 0;
  v21 = *(_QWORD *)(a1 + 40);
  if ( v21 )
  {
    *(_QWORD *)(a1 + 48) = 0;
    v34 = v20;
    qfree(v21);
    v20 = _mm_load_si128(&v34);
  }
  *(_QWORD *)(a1 + 40) = v19;
  *(__m128i *)(a1 + 48) = v20;
  copy_tinfo_t(v2, a2 + 8);
  *(__m128i *)(a1 + 72) = _mm_loadu_si128((const __m128i *)(a2 + 9));
  *(__m128i *)(a1 + 88) = _mm_loadu_si128((const __m128i *)(a2 + 11));
  *(__m128i *)(a1 + 104) = _mm_loadu_si128((const __m128i *)(a2 + 13));
  v22 = _mm_load_si128(&v35);
  *(_DWORD *)(a1 + 120) = *((_DWORD *)a2 + 30);
  *(_DWORD *)(a1 + 128) = *((_DWORD *)a2 + 32);
  *(_DWORD *)(a1 + 132) = *((_DWORD *)a2 + 33);
  *(_BYTE *)(a1 + 136) = *((_BYTE *)a2 + 136);
  v23 = a2[2];
  v24 = v36;
  *(__m128i *)a2 = v22;
  v25 = _mm_loadu_si128(&v37);
  v36 = 0;
  v37 = 0;
  if ( v23 )
  {
    a2[3] = 0;
    v34 = v25;
    qfree(v23);
    v25 = _mm_load_si128(&v34);
  }
  v26 = a2[5];
  a2[2] = v24;
  *(__m128i *)(a2 + 3) = v25;
  v27 = v38;
  v28 = _mm_load_si128(&v39);
  v38 = 0;
  v39 = 0;
  if ( v26 )
  {
    a2[6] = 0;
    v34 = v28;
    qfree(v26);
    v28 = _mm_load_si128(&v34);
  }
  a2[5] = v27;
  *((__m128i *)a2 + 3) = v28;
  copy_tinfo_t(a2 + 8, &v40);
  v29 = _mm_loadu_si128(&v41);
  *((_DWORD *)a2 + 30) = v44;
  v30 = v45;
  *(__m128i *)(a2 + 9) = v29;
  v31 = _mm_loadu_si128(&v42);
  a2[16] = v30;
  LOBYTE(v30) = v46;
  *(__m128i *)(a2 + 11) = v31;
  v32 = _mm_loadu_si128(&v43);
  *((_BYTE *)a2 + 136) = v30;
  *(__m128i *)(a2 + 13) = v32;
  clear_tinfo_t(&v40);
  if ( v38 )
  {
    v39.m128i_i64[0] = 0;
    qfree(v38);
  }
  if ( v36 )
  {
    v37.m128i_i64[0] = 0;
    qfree(v36);
  }
  return v47 - __readfsqword(0x28u);
}

