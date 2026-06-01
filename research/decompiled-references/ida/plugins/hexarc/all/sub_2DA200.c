unsigned __int64 __fastcall sub_2DA200(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 i; // r14
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // r14
  __int64 v12; // rdx
  __m128i v13; // xmm0
  __int64 v14; // rax
  char v15; // al
  __m128i v16; // xmm0
  __int64 v17; // r12
  int v18; // eax
  __m128i v19; // xmm0
  __int64 v20; // rax
  __m128i v21; // xmm1
  __int64 v22; // r13
  __int64 v23; // r15
  __m128i v24; // xmm0
  __int64 v25; // r14
  __int64 v26; // rbx
  __int64 v27; // xmm1_8
  __m128i v28; // xmm2
  __int64 v29; // rdi
  char v30; // al
  __int64 v31; // rdi
  __int64 v32; // xmm0_8
  __int64 v33; // xmm1_8
  int v34; // eax
  __m128i v35; // xmm0
  __int64 v36; // rax
  char v38; // al
  __m128i v39; // xmm0
  int v40; // eax
  __int64 v41; // rax
  __int64 v42; // r14
  __int64 v43; // r12
  __int64 v44; // rbx
  __int64 v45; // rax
  __m128i v46; // xmm0
  __m128i v47; // [rsp+0h] [rbp-108h] BYREF
  __int64 v48; // [rsp+18h] [rbp-F0h]
  __m128i v49; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v50; // [rsp+30h] [rbp-D8h]
  __int64 v51; // [rsp+38h] [rbp-D0h]
  __int64 (__fastcall **v52)(); // [rsp+40h] [rbp-C8h] BYREF
  __m128i v53; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v54; // [rsp+58h] [rbp-B0h]
  __m128i v55; // [rsp+60h] [rbp-A8h]
  char v56; // [rsp+70h] [rbp-98h]
  __m128i v57; // [rsp+78h] [rbp-90h] BYREF
  int v58; // [rsp+88h] [rbp-80h]
  __int64 v59; // [rsp+90h] [rbp-78h]
  _BYTE v60[16]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v61; // [rsp+B0h] [rbp-58h]
  int (__fastcall *v62)(__int64, __int64, __int64 (__fastcall ***)()); // [rsp+B8h] [rbp-50h]
  unsigned __int64 v63; // [rsp+C8h] [rbp-40h]

  v48 = a2;
  v51 = a3;
  v63 = __readfsqword(0x28u);
  v47.m128i_i64[0] = (a3 - 1) / 2;
  if ( a2 >= v47.m128i_i64[0] )
  {
    v8 = v48;
  }
  else
  {
    for ( i = a2; ; i = v8 )
    {
      v8 = 2 * (i + 1);
      v9 = 176 * (i + 1);
      v10 = a1 + v9;
      if ( !*(_QWORD *)(a5 + 16) )
        std::__throw_bad_function_call();
      if ( (*(int (__fastcall **)(__int64, __int64, __int64))(a5 + 24))(a5, a1 + v9, a1 + v9 - 88) < 0 )
      {
        --v8;
        v10 = a1 + 88 * v8;
      }
      v11 = a1 + 88 * i;
      *(__m128i *)(v11 + 8) = _mm_loadu_si128((const __m128i *)(v10 + 8));
      v12 = *(_QWORD *)(v10 + 24);
      v13 = _mm_loadu_si128((const __m128i *)(v10 + 32));
      *(_QWORD *)(v10 + 24) = 0;
      *(_OWORD *)(v10 + 32) = 0;
      if ( *(_QWORD *)(v11 + 24) )
      {
        *(_QWORD *)(v11 + 32) = 0;
        v50 = v12;
        v49 = v13;
        qfree();
        v12 = v50;
        v13 = _mm_load_si128(&v49);
      }
      *(_QWORD *)(v11 + 24) = v12;
      v14 = v47.m128i_i64[0];
      *(__m128i *)(v11 + 32) = v13;
      *(_BYTE *)(v11 + 48) = *(_BYTE *)(v10 + 48);
      *(__m128i *)(v11 + 56) = _mm_loadu_si128((const __m128i *)(v10 + 56));
      *(_DWORD *)(v11 + 72) = *(_DWORD *)(v10 + 72);
      *(_QWORD *)(v11 + 80) = *(_QWORD *)(v10 + 80);
      if ( v8 >= v14 )
        break;
    }
  }
  if ( (v51 & 1) == 0 && (v51 - 2) / 2 == v8 )
  {
    v42 = 2 * (v8 + 1);
    v43 = a1 + 176 * (v8 + 1) - 88;
    v44 = a1 + 88 * v8;
    *(__m128i *)(v44 + 8) = _mm_loadu_si128((const __m128i *)(v43 + 8));
    v45 = *(_QWORD *)(v43 + 24);
    v46 = _mm_loadu_si128((const __m128i *)(v43 + 32));
    *(_QWORD *)(v43 + 24) = 0;
    *(_OWORD *)(v43 + 32) = 0;
    if ( *(_QWORD *)(v44 + 24) )
    {
      *(_QWORD *)(v44 + 32) = 0;
      v49.m128i_i64[0] = v45;
      v47 = v46;
      qfree();
      v45 = v49.m128i_i64[0];
      v46 = _mm_load_si128(&v47);
    }
    *(_QWORD *)(v44 + 24) = v45;
    *(__m128i *)(v44 + 32) = v46;
    *(_BYTE *)(v44 + 48) = *(_BYTE *)(v43 + 48);
    *(__m128i *)(v44 + 56) = _mm_loadu_si128((const __m128i *)(v43 + 56));
    *(_DWORD *)(v44 + 72) = *(_DWORD *)(v43 + 72);
    *(_QWORD *)(v44 + 80) = *(_QWORD *)(v43 + 80);
    v8 = v42 - 1;
  }
  v47.m128i_i64[0] = (__int64)v60;
  sub_2C6880((__int64)v60, (const __m128i *)a5);
  v15 = *(_BYTE *)(a4 + 48);
  v16 = _mm_loadu_si128((const __m128i *)(a4 + 8));
  v17 = *(_QWORD *)(a4 + 24);
  *(_QWORD *)(a4 + 24) = 0;
  v56 = v15;
  v18 = *(_DWORD *)(a4 + 72);
  v53 = v16;
  v19 = _mm_loadu_si128((const __m128i *)(a4 + 32));
  v58 = v18;
  v52 = off_4AF3C0;
  v20 = *(_QWORD *)(a4 + 80);
  *(_OWORD *)(a4 + 32) = 0;
  v21 = _mm_loadu_si128((const __m128i *)(a4 + 56));
  v59 = v20;
  v54 = v17;
  v55 = v19;
  v57 = v21;
  v22 = (v8 - 1) / 2;
  if ( v8 <= v48 )
  {
    v27 = _mm_srli_si128(v19, 8).m128i_u64[0];
    v26 = a1 + 88 * v8;
  }
  else
  {
    while ( 1 )
    {
      v25 = a1 + 88 * v22;
      if ( !v61 )
        std::__throw_bad_function_call();
      v26 = a1 + 88 * v8;
      if ( v62(v47.m128i_i64[0], a1 + 88 * v22, &v52) >= 0 )
      {
        v17 = v54;
        v27 = v55.m128i_i64[1];
        v19.m128i_i64[0] = v55.m128i_i64[0];
        goto LABEL_21;
      }
      *(__m128i *)(v26 + 8) = _mm_loadu_si128((const __m128i *)(v25 + 8));
      v23 = *(_QWORD *)(v25 + 24);
      v24 = _mm_loadu_si128((const __m128i *)(v25 + 32));
      *(_QWORD *)(v25 + 24) = 0;
      *(_OWORD *)(v25 + 32) = 0;
      if ( *(_QWORD *)(v26 + 24) )
      {
        *(_QWORD *)(v26 + 32) = 0;
        v49 = v24;
        qfree();
        v24 = _mm_load_si128(&v49);
      }
      *(_QWORD *)(v26 + 24) = v23;
      *(__m128i *)(v26 + 32) = v24;
      *(_BYTE *)(v26 + 48) = *(_BYTE *)(v25 + 48);
      *(__m128i *)(v26 + 56) = _mm_loadu_si128((const __m128i *)(v25 + 56));
      *(_DWORD *)(v26 + 72) = *(_DWORD *)(v25 + 72);
      *(_QWORD *)(v26 + 80) = *(_QWORD *)(v25 + 80);
      v8 = v22;
      if ( v48 >= v22 )
        break;
      v22 = (v22 - 1) / 2;
    }
    v17 = v54;
    v19.m128i_i64[0] = v55.m128i_i64[0];
    v26 = a1 + 88 * v22;
    v27 = v55.m128i_i64[1];
  }
LABEL_21:
  v28 = _mm_loadu_si128(&v53);
  v29 = *(_QWORD *)(v26 + 24);
  v54 = 0;
  *(__m128i *)(v26 + 8) = v28;
  v55 = 0;
  if ( v29 )
  {
    *(_QWORD *)(v26 + 32) = 0;
    v49.m128i_i64[0] = v27;
    v48 = v19.m128i_i64[0];
    qfree();
    v30 = v56;
    v31 = v54;
    *(_QWORD *)(v26 + 24) = v17;
    v32 = v48;
    v33 = v49.m128i_i64[0];
    *(_BYTE *)(v26 + 48) = v30;
    v34 = v58;
    *(_QWORD *)(v26 + 32) = v32;
    v35 = _mm_loadu_si128(&v57);
    *(_DWORD *)(v26 + 72) = v34;
    v36 = v59;
    *(_QWORD *)(v26 + 40) = v33;
    *(_QWORD *)(v26 + 80) = v36;
    v52 = off_4ADA58;
    *(__m128i *)(v26 + 56) = v35;
    if ( v31 )
    {
      v55.m128i_i64[0] = 0;
      qfree();
    }
  }
  else
  {
    v38 = v56;
    *(_QWORD *)(v26 + 32) = v19.m128i_i64[0];
    v39 = _mm_loadu_si128(&v57);
    *(_QWORD *)(v26 + 24) = v17;
    *(_BYTE *)(v26 + 48) = v38;
    v40 = v58;
    *(_QWORD *)(v26 + 40) = v27;
    *(_DWORD *)(v26 + 72) = v40;
    v41 = v59;
    *(__m128i *)(v26 + 56) = v39;
    *(_QWORD *)(v26 + 80) = v41;
  }
  sub_606D0(v47.m128i_i64[0]);
  return v63 - __readfsqword(0x28u);
}

