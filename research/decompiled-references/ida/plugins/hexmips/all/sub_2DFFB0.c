unsigned __int64 __fastcall sub_2DFFB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 i; // rbx
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // rbx
  __int64 v13; // rax
  __m128i v14; // xmm0
  int v15; // edi
  __m128i v16; // xmm0
  __int64 v17; // r13
  __int16 v18; // ax
  char v19; // si
  __int64 v20; // r8
  __m128i v21; // xmm0
  __int64 v22; // rcx
  __m128i v23; // xmm1
  char v24; // dl
  __int64 v25; // r8
  __int64 v26; // r15
  __int64 v27; // r14
  __m128i v28; // xmm0
  __int64 v29; // rbp
  __int64 v30; // rbx
  char v31; // r8
  __int64 v32; // xmm1_8
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // xmm0_8
  __int64 v38; // xmm1_8
  __int64 v39; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rbx
  __int64 v45; // r13
  __int64 v46; // r14
  __m128i v47; // xmm0
  __m128i v48; // [rsp+0h] [rbp-108h] BYREF
  __int64 v49; // [rsp+18h] [rbp-F0h]
  __m128i v50; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v51; // [rsp+30h] [rbp-D8h]
  __int64 v52; // [rsp+38h] [rbp-D0h]
  __int64 (__fastcall **v53)(); // [rsp+40h] [rbp-C8h] BYREF
  __m128i v54; // [rsp+48h] [rbp-C0h]
  __int64 v55; // [rsp+58h] [rbp-B0h]
  __int64 v56; // [rsp+60h] [rbp-A8h]
  __m128i v57; // [rsp+68h] [rbp-A0h]
  __int64 v58; // [rsp+78h] [rbp-90h]
  __m128i v59; // [rsp+80h] [rbp-88h]
  int v60; // [rsp+90h] [rbp-78h]
  __int64 v61; // [rsp+98h] [rbp-70h]
  _BYTE v62[16]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v63; // [rsp+B0h] [rbp-58h]
  int (__fastcall *v64)(__int64, __int64, __int64 (__fastcall ***)()); // [rsp+B8h] [rbp-50h]
  unsigned __int64 v65; // [rsp+C8h] [rbp-40h]

  v49 = a2;
  v52 = a3;
  v65 = __readfsqword(0x28u);
  v48.m128i_i64[0] = (a3 - 1) / 2;
  if ( a2 >= v48.m128i_i64[0] )
  {
    v9 = v49;
  }
  else
  {
    for ( i = a2; ; i = v9 )
    {
      v9 = 2 * (i + 1);
      v10 = 192 * (i + 1);
      v11 = a1 + v10;
      if ( !*(_QWORD *)(a5 + 16) )
        std::__throw_bad_function_call();
      if ( (*(int (__fastcall **)(__int64, __int64, __int64))(a5 + 24))(a5, a1 + v10, a1 + v10 - 96) < 0 )
      {
        --v9;
        v11 = a1 + 96 * v9;
      }
      v12 = a1 + 96 * i;
      *(_QWORD *)(v12 + 8) = *(_QWORD *)(v11 + 8);
      *(_DWORD *)(v12 + 16) = *(_DWORD *)(v11 + 16);
      *(_DWORD *)(v12 + 24) = *(_DWORD *)(v11 + 24);
      *(_BYTE *)(v12 + 28) = *(_BYTE *)(v11 + 28);
      *(_BYTE *)(v12 + 29) = *(_BYTE *)(v11 + 29);
      *(_BYTE *)(v12 + 30) = *(_BYTE *)(v11 + 30);
      *(_BYTE *)(v12 + 31) = *(_BYTE *)(v11 + 31);
      v13 = *(_QWORD *)(v11 + 32);
      v14 = _mm_loadu_si128((const __m128i *)(v11 + 40));
      *(_QWORD *)(v11 + 32) = 0;
      *(_OWORD *)(v11 + 40) = 0;
      if ( *(_QWORD *)(v12 + 32) )
      {
        *(_QWORD *)(v12 + 40) = 0;
        v51 = v13;
        v50 = v14;
        qfree();
        v13 = v51;
        v14 = _mm_load_si128(&v50);
      }
      *(_QWORD *)(v12 + 32) = v13;
      *(__m128i *)(v12 + 40) = v14;
      *(_QWORD *)(v12 + 56) = *(_QWORD *)(v11 + 56);
      *(_QWORD *)(v12 + 64) = *(_QWORD *)(v11 + 64);
      *(_DWORD *)(v12 + 72) = *(_DWORD *)(v11 + 72);
      *(_DWORD *)(v12 + 80) = *(_DWORD *)(v11 + 80);
      *(_QWORD *)(v12 + 88) = *(_QWORD *)(v11 + 88);
      if ( v9 >= v48.m128i_i64[0] )
        break;
    }
  }
  if ( (v52 & 1) == 0 && (v52 - 2) / 2 == v9 )
  {
    v43 = 2 * (v9 + 1);
    v44 = a1 + 96 * v9;
    v45 = a1 + 192 * (v9 + 1) - 96;
    *(_QWORD *)(v44 + 8) = *(_QWORD *)(v45 + 8);
    *(_DWORD *)(v44 + 16) = *(_DWORD *)(v45 + 16);
    *(_DWORD *)(v44 + 24) = *(_DWORD *)(v45 + 24);
    *(_BYTE *)(v44 + 28) = *(_BYTE *)(v45 + 28);
    *(_BYTE *)(v44 + 29) = *(_BYTE *)(v45 + 29);
    *(_BYTE *)(v44 + 30) = *(_BYTE *)(v45 + 30);
    *(_BYTE *)(v44 + 31) = *(_BYTE *)(v45 + 31);
    v46 = *(_QWORD *)(v45 + 32);
    v47 = _mm_loadu_si128((const __m128i *)(v45 + 40));
    *(_QWORD *)(v45 + 32) = 0;
    *(_OWORD *)(v45 + 40) = 0;
    if ( *(_QWORD *)(v44 + 32) )
    {
      *(_QWORD *)(v44 + 40) = 0;
      v50.m128i_i64[0] = v43;
      v48 = v47;
      qfree();
      v43 = v50.m128i_i64[0];
      v47 = _mm_load_si128(&v48);
    }
    *(_QWORD *)(v44 + 32) = v46;
    v9 = v43 - 1;
    *(__m128i *)(v44 + 40) = v47;
    *(_QWORD *)(v44 + 56) = *(_QWORD *)(v45 + 56);
    *(_QWORD *)(v44 + 64) = *(_QWORD *)(v45 + 64);
    *(_DWORD *)(v44 + 72) = *(_DWORD *)(v45 + 72);
    *(_DWORD *)(v44 + 80) = *(_DWORD *)(v45 + 80);
    *(_QWORD *)(v44 + 88) = *(_QWORD *)(v45 + 88);
  }
  v48.m128i_i64[0] = (__int64)v62;
  sub_2C96A0((__int64)v62, (const __m128i *)a5);
  v15 = *(_DWORD *)(a4 + 24);
  v16 = _mm_loadu_si128((const __m128i *)(a4 + 8));
  v17 = *(_QWORD *)(a4 + 32);
  v18 = *(_WORD *)(a4 + 28);
  v19 = *(_BYTE *)(a4 + 30);
  v55 = *(_QWORD *)(a4 + 24);
  v20 = *(_QWORD *)(a4 + 56);
  v54 = v16;
  v21 = _mm_loadu_si128((const __m128i *)(a4 + 40));
  v53 = off_4C3328;
  v22 = v49;
  v58 = v20;
  LODWORD(v20) = *(_DWORD *)(a4 + 80);
  *(_OWORD *)(a4 + 40) = 0;
  v23 = _mm_loadu_si128((const __m128i *)(a4 + 64));
  v24 = *(_BYTE *)(a4 + 31);
  v60 = v20;
  v25 = *(_QWORD *)(a4 + 88);
  v56 = v17;
  v61 = v25;
  *(_QWORD *)(a4 + 32) = 0;
  v57 = v21;
  v59 = v23;
  v26 = (v9 - 1) / 2;
  if ( v9 <= v22 )
  {
    v31 = HIBYTE(v18);
    v32 = _mm_srli_si128(v21, 8).m128i_u64[0];
    v30 = a1 + 96 * v9;
  }
  else
  {
    while ( 1 )
    {
      v29 = a1 + 96 * v26;
      if ( !v63 )
        std::__throw_bad_function_call();
      v30 = a1 + 96 * v9;
      if ( v64(v48.m128i_i64[0], a1 + 96 * v26, &v53) >= 0 )
      {
        v15 = v55;
        LOBYTE(v18) = BYTE4(v55);
        v31 = BYTE5(v55);
        v19 = BYTE6(v55);
        v24 = HIBYTE(v55);
        v17 = v56;
        v32 = v57.m128i_i64[1];
        v21.m128i_i64[0] = v57.m128i_i64[0];
        goto LABEL_21;
      }
      *(_QWORD *)(v30 + 8) = *(_QWORD *)(v29 + 8);
      *(_DWORD *)(v30 + 16) = *(_DWORD *)(v29 + 16);
      *(_DWORD *)(v30 + 24) = *(_DWORD *)(v29 + 24);
      *(_BYTE *)(v30 + 28) = *(_BYTE *)(v29 + 28);
      *(_BYTE *)(v30 + 29) = *(_BYTE *)(v29 + 29);
      *(_BYTE *)(v30 + 30) = *(_BYTE *)(v29 + 30);
      *(_BYTE *)(v30 + 31) = *(_BYTE *)(v29 + 31);
      v27 = *(_QWORD *)(v29 + 32);
      v28 = _mm_loadu_si128((const __m128i *)(v29 + 40));
      *(_QWORD *)(v29 + 32) = 0;
      *(_OWORD *)(v29 + 40) = 0;
      if ( *(_QWORD *)(v30 + 32) )
      {
        *(_QWORD *)(v30 + 40) = 0;
        v50 = v28;
        qfree();
        v28 = _mm_load_si128(&v50);
      }
      *(_QWORD *)(v30 + 32) = v27;
      v9 = v26;
      *(__m128i *)(v30 + 40) = v28;
      *(_QWORD *)(v30 + 56) = *(_QWORD *)(v29 + 56);
      *(_QWORD *)(v30 + 64) = *(_QWORD *)(v29 + 64);
      *(_DWORD *)(v30 + 72) = *(_DWORD *)(v29 + 72);
      *(_DWORD *)(v30 + 80) = *(_DWORD *)(v29 + 80);
      *(_QWORD *)(v30 + 88) = *(_QWORD *)(v29 + 88);
      if ( v49 >= v26 )
        break;
      v26 = (v26 - 1) / 2;
    }
    v15 = v55;
    LOBYTE(v18) = BYTE4(v55);
    v30 = a1 + 96 * v26;
    v31 = BYTE5(v55);
    v19 = BYTE6(v55);
    v24 = HIBYTE(v55);
    v17 = v56;
    v32 = v57.m128i_i64[1];
    v21.m128i_i64[0] = v57.m128i_i64[0];
  }
LABEL_21:
  v33 = v54.m128i_i64[0];
  *(_DWORD *)(v30 + 24) = v15;
  v34 = *(_QWORD *)(v30 + 32);
  *(_BYTE *)(v30 + 28) = v18;
  *(_QWORD *)(v30 + 8) = v33;
  LODWORD(v33) = v54.m128i_i32[2];
  *(_BYTE *)(v30 + 29) = v31;
  *(_DWORD *)(v30 + 16) = v33;
  *(_BYTE *)(v30 + 30) = v19;
  *(_BYTE *)(v30 + 31) = v24;
  v56 = 0;
  v57 = 0;
  if ( v34 )
  {
    *(_QWORD *)(v30 + 40) = 0;
    v50.m128i_i64[0] = v32;
    v49 = v21.m128i_i64[0];
    qfree();
    v35 = v58;
    v36 = v56;
    *(_QWORD *)(v30 + 32) = v17;
    v37 = v49;
    v38 = v50.m128i_i64[0];
    *(_QWORD *)(v30 + 56) = v35;
    v39 = v59.m128i_i64[0];
    *(_QWORD *)(v30 + 40) = v37;
    *(_QWORD *)(v30 + 64) = v39;
    LODWORD(v39) = v59.m128i_i32[2];
    *(_QWORD *)(v30 + 48) = v38;
    *(_DWORD *)(v30 + 72) = v39;
    *(_DWORD *)(v30 + 80) = v60;
    *(_QWORD *)(v30 + 88) = v61;
    v53 = off_4C19E8;
    if ( v36 )
    {
      v57.m128i_i64[0] = 0;
      qfree();
    }
  }
  else
  {
    v41 = v58;
    *(_QWORD *)(v30 + 32) = v17;
    *(_QWORD *)(v30 + 40) = v21.m128i_i64[0];
    *(_QWORD *)(v30 + 56) = v41;
    v42 = v59.m128i_i64[0];
    *(_QWORD *)(v30 + 48) = v32;
    *(_QWORD *)(v30 + 64) = v42;
    *(_DWORD *)(v30 + 72) = v59.m128i_i32[2];
    *(_DWORD *)(v30 + 80) = v60;
    *(_QWORD *)(v30 + 88) = v61;
  }
  sub_62A50(v48.m128i_i64[0]);
  return v65 - __readfsqword(0x28u);
}

