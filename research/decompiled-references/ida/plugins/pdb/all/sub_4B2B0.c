unsigned __int64 __fastcall sub_4B2B0(__int64 a1, __int64 *a2)
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
  int v13; // eax
  __m128i v14; // xmm0
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r13
  __m128i v18; // xmm0
  __int64 v19; // rdi
  __int64 v20; // r13
  __m128i v21; // xmm0
  __int64 v22; // rdi
  __m128i v23; // xmm0
  __int64 v24; // rdi
  __int64 v25; // rbp
  __m128i v26; // xmm0
  __int64 v27; // rdi
  __int64 v28; // rbp
  __m128i v29; // xmm0
  __m128i v30; // xmm0
  __int64 v31; // rax
  __m128i v32; // xmm0
  __m128i v33; // xmm0
  __m128i v35; // [rsp+0h] [rbp-D8h] BYREF
  __m128i v36; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v37; // [rsp+20h] [rbp-B8h]
  __m128i v38; // [rsp+28h] [rbp-B0h] BYREF
  __int64 v39; // [rsp+38h] [rbp-A0h]
  __m128i v40; // [rsp+40h] [rbp-98h] BYREF
  __int64 v41; // [rsp+50h] [rbp-88h] BYREF
  __m128i v42; // [rsp+58h] [rbp-80h] BYREF
  __m128i v43; // [rsp+68h] [rbp-70h] BYREF
  __m128i v44; // [rsp+78h] [rbp-60h] BYREF
  __int64 v45; // [rsp+88h] [rbp-50h]
  __int64 v46; // [rsp+90h] [rbp-48h]
  char v47; // [rsp+98h] [rbp-40h]
  int v48; // [rsp+9Ch] [rbp-3Ch]
  unsigned __int64 v49; // [rsp+A8h] [rbp-30h]

  v2 = a1 + 64;
  v4 = _mm_loadu_si128((const __m128i *)a1);
  v5 = *(_QWORD *)(a1 + 16);
  v49 = __readfsqword(0x28u);
  v6 = _mm_loadu_si128((const __m128i *)(a1 + 48));
  v36 = v4;
  v7 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  v37 = v5;
  v8 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  v38 = v7;
  *(_OWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  v39 = v8;
  v41 = 0;
  v40 = v6;
  copy_tinfo_t(&v41, a1 + 64);
  v9 = _mm_loadu_si128((const __m128i *)(a1 + 72));
  v10 = *(_QWORD *)(a1 + 128);
  v45 = *(_QWORD *)(a1 + 120);
  v11 = *(_BYTE *)(a1 + 136);
  v42 = v9;
  v12 = _mm_loadu_si128((const __m128i *)(a1 + 88));
  v47 = v11;
  v13 = *(_DWORD *)(a1 + 140);
  v43 = v12;
  v14 = _mm_loadu_si128((const __m128i *)(a1 + 104));
  v48 = v13;
  v15 = *a2;
  v44 = v14;
  *(_QWORD *)a1 = v15;
  v16 = a2[1];
  v46 = v10;
  *(_QWORD *)(a1 + 8) = v16;
  v17 = a2[2];
  v18 = _mm_loadu_si128((const __m128i *)(a2 + 3));
  a2[2] = 0;
  *(_OWORD *)(a2 + 3) = 0;
  v19 = *(_QWORD *)(a1 + 16);
  if ( v19 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    v35 = v18;
    qfree(v19);
    v18 = _mm_load_si128(&v35);
  }
  *(_QWORD *)(a1 + 16) = v17;
  *(__m128i *)(a1 + 24) = v18;
  v20 = a2[5];
  v21 = _mm_loadu_si128((const __m128i *)a2 + 3);
  a2[5] = 0;
  *((_OWORD *)a2 + 3) = 0;
  v22 = *(_QWORD *)(a1 + 40);
  if ( v22 )
  {
    *(_QWORD *)(a1 + 48) = 0;
    v35 = v21;
    qfree(v22);
    v21 = _mm_load_si128(&v35);
  }
  *(_QWORD *)(a1 + 40) = v20;
  *(__m128i *)(a1 + 48) = v21;
  copy_tinfo_t(v2, a2 + 8);
  *(__m128i *)(a1 + 72) = _mm_loadu_si128((const __m128i *)(a2 + 9));
  *(__m128i *)(a1 + 88) = _mm_loadu_si128((const __m128i *)(a2 + 11));
  *(__m128i *)(a1 + 104) = _mm_loadu_si128((const __m128i *)(a2 + 13));
  v23 = _mm_load_si128(&v36);
  *(_DWORD *)(a1 + 120) = *((_DWORD *)a2 + 30);
  *(_DWORD *)(a1 + 128) = *((_DWORD *)a2 + 32);
  *(_DWORD *)(a1 + 132) = *((_DWORD *)a2 + 33);
  *(_BYTE *)(a1 + 136) = *((_BYTE *)a2 + 136);
  *(_DWORD *)(a1 + 140) = *((_DWORD *)a2 + 35);
  v24 = a2[2];
  v25 = v37;
  *(__m128i *)a2 = v23;
  v26 = _mm_loadu_si128(&v38);
  v37 = 0;
  v38 = 0;
  if ( v24 )
  {
    a2[3] = 0;
    v35 = v26;
    qfree(v24);
    v26 = _mm_load_si128(&v35);
  }
  v27 = a2[5];
  a2[2] = v25;
  *(__m128i *)(a2 + 3) = v26;
  v28 = v39;
  v29 = _mm_load_si128(&v40);
  v39 = 0;
  v40 = 0;
  if ( v27 )
  {
    a2[6] = 0;
    v35 = v29;
    qfree(v27);
    v29 = _mm_load_si128(&v35);
  }
  a2[5] = v28;
  *((__m128i *)a2 + 3) = v29;
  copy_tinfo_t(a2 + 8, &v41);
  v30 = _mm_loadu_si128(&v42);
  *((_DWORD *)a2 + 30) = v45;
  v31 = v46;
  *(__m128i *)(a2 + 9) = v30;
  v32 = _mm_loadu_si128(&v43);
  a2[16] = v31;
  LOBYTE(v31) = v47;
  *(__m128i *)(a2 + 11) = v32;
  v33 = _mm_loadu_si128(&v44);
  *((_BYTE *)a2 + 136) = v31;
  LODWORD(v31) = v48;
  *(__m128i *)(a2 + 13) = v33;
  *((_DWORD *)a2 + 35) = v31;
  clear_tinfo_t(&v41);
  if ( v39 )
  {
    v40.m128i_i64[0] = 0;
    qfree(v39);
  }
  if ( v37 )
  {
    v38.m128i_i64[0] = 0;
    qfree(v37);
  }
  return v49 - __readfsqword(0x28u);
}

