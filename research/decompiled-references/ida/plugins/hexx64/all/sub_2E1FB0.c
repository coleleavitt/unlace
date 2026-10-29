unsigned __int64 __fastcall sub_2E1FB0(__int64 a1, __int64 a2, __int64 a3, const __m128i *a4)
{
  __int64 v4; // r12
  __int64 v6; // r13
  const __m128i *v7; // r15
  unsigned __int64 v8; // r14
  unsigned __int64 i; // r13
  __m128i v10; // xmm0
  __int8 v11; // al
  __m128i v12; // xmm4
  __int64 v13; // r15
  __int32 v14; // eax
  __m128i v15; // xmm0
  __int64 v16; // rax
  __m128i v17; // xmm0
  __int64 v18; // rax
  __m128i v19; // xmm0
  __int64 v20; // rdi
  __m128i v21; // xmm0
  __int64 v22; // rdi
  __int8 v23; // al
  __m128i v24; // xmm5
  __m128i v25; // xmm0
  __int32 v26; // eax
  __int64 v27; // rax
  __m128i v28; // xmm0
  __m128i v29; // xmm2
  __int64 v30; // r8
  char v31; // r14
  int v32; // r15d
  __int64 v33; // r13
  __m128i v34; // xmm0
  __m128i v35; // xmm2
  __int64 v36; // rax
  __m128i v37; // xmm2
  __int64 v38; // rdi
  const __m128i *v39; // rsi
  char v40; // al
  __m128i v41; // xmm1
  __m128i v42; // xmm0
  __m128i v43; // xmm1
  __m128i v44; // xmm0
  __int64 v46; // r15
  __m128i v47; // [rsp+0h] [rbp-1B8h] BYREF
  __m128i v48; // [rsp+10h] [rbp-1A8h] BYREF
  __m128i v49; // [rsp+20h] [rbp-198h] BYREF
  __m128i v50; // [rsp+30h] [rbp-188h] BYREF
  __m128i v51; // [rsp+40h] [rbp-178h] BYREF
  __int64 v52; // [rsp+50h] [rbp-168h]
  const __m128i *v53; // [rsp+58h] [rbp-160h]
  __int64 v54; // [rsp+60h] [rbp-158h]
  const __m128i *v55; // [rsp+68h] [rbp-150h]
  __int64 (__fastcall **v56)(); // [rsp+70h] [rbp-148h]
  __m128i v57; // [rsp+78h] [rbp-140h] BYREF
  __int64 v58; // [rsp+88h] [rbp-130h]
  __m128i v59; // [rsp+90h] [rbp-128h]
  char v60; // [rsp+A0h] [rbp-118h]
  __m128i v61; // [rsp+A8h] [rbp-110h] BYREF
  int v62; // [rsp+B8h] [rbp-100h]
  __int64 v63; // [rsp+C0h] [rbp-F8h]
  __int64 (__fastcall **v64)(); // [rsp+D0h] [rbp-E8h] BYREF
  __m128i v65; // [rsp+D8h] [rbp-E0h] BYREF
  __int64 v66; // [rsp+E8h] [rbp-D0h]
  __m128i v67; // [rsp+F0h] [rbp-C8h]
  char v68; // [rsp+100h] [rbp-B8h]
  __m128i v69; // [rsp+108h] [rbp-B0h] BYREF
  int v70; // [rsp+118h] [rbp-A0h]
  __int64 v71; // [rsp+120h] [rbp-98h]
  char v72; // [rsp+130h] [rbp-88h] BYREF
  __m128i v73; // [rsp+150h] [rbp-68h] BYREF
  __int64 v74; // [rsp+160h] [rbp-58h]
  int (__fastcall *v75)(__m128i *, unsigned __int64, __int64); // [rsp+168h] [rbp-50h]
  unsigned __int64 v76; // [rsp+178h] [rbp-40h]

  v4 = a2;
  v54 = a3;
  v55 = a4;
  v76 = __readfsqword(0x28u);
  v53 = (const __m128i *)&v72;
  v6 = a2 - a1;
  if ( a2 - a1 > 1408 )
  {
    while ( 1 )
    {
      v7 = v53;
      if ( !v54 )
        break;
      sub_2CDC00((__int64)v53, v55);
      sub_2CDC00((__int64)&v73, v7);
      v8 = a1 + 88;
      sub_2E1ED0(a1, a1 + 88, a1 + 88 * ((0x2E8BA2E8BA2E8BA3LL * (v6 >> 3)) >> 1), v4 - 88, (__int64)&v73);
      sub_66C50((__int64)&v73);
      sub_2CDC00((__int64)&v73, v7);
      for ( i = v4; ; *(_QWORD *)(i + 80) = v27 )
      {
        if ( !v74 )
LABEL_29:
          std::__throw_bad_function_call();
        while ( v75(&v73, v8, a1) < 0 )
        {
          v8 += 88LL;
          if ( !v74 )
            goto LABEL_29;
        }
        i -= 88LL;
        if ( !v74 )
LABEL_28:
          std::__throw_bad_function_call();
        while ( v75(&v73, a1, i) < 0 )
        {
          i -= 88LL;
          if ( !v74 )
            goto LABEL_28;
        }
        if ( v8 >= i )
          break;
        v10 = _mm_loadu_si128((const __m128i *)(v8 + 8));
        v11 = *(_BYTE *)(v8 + 48);
        v12 = _mm_loadu_si128((const __m128i *)(v8 + 32));
        v13 = *(_QWORD *)(v8 + 24);
        *(_OWORD *)(v8 + 32) = 0;
        v49.m128i_i8[0] = v11;
        v14 = *(_DWORD *)(v8 + 72);
        v65 = v10;
        v15 = _mm_loadu_si128((const __m128i *)(v8 + 56));
        *(_QWORD *)(v8 + 24) = 0;
        v50.m128i_i32[0] = v14;
        v16 = *(_QWORD *)(v8 + 80);
        v69 = v15;
        v17 = _mm_loadu_si128((const __m128i *)(i + 8));
        v48.m128i_i64[0] = v16;
        *(__m128i *)(v8 + 8) = v17;
        v18 = *(_QWORD *)(i + 24);
        v19 = _mm_loadu_si128((const __m128i *)(i + 32));
        *(_QWORD *)(i + 24) = 0;
        *(_OWORD *)(i + 32) = 0;
        v20 = *(_QWORD *)(v8 + 24);
        v47 = v12;
        if ( v20 )
        {
          *(_QWORD *)(v8 + 32) = 0;
          v52 = v18;
          v51 = v19;
          qfree(v20);
          v19 = _mm_load_si128(&v51);
          v18 = v52;
        }
        *(_QWORD *)(v8 + 24) = v18;
        *(__m128i *)(v8 + 32) = v19;
        *(_BYTE *)(v8 + 48) = *(_BYTE *)(i + 48);
        *(__m128i *)(v8 + 56) = _mm_loadu_si128((const __m128i *)(i + 56));
        v21 = _mm_loadu_si128(&v65);
        *(_DWORD *)(v8 + 72) = *(_DWORD *)(i + 72);
        *(_QWORD *)(v8 + 80) = *(_QWORD *)(i + 80);
        v22 = *(_QWORD *)(i + 24);
        *(__m128i *)(i + 8) = v21;
        if ( v22 )
        {
          *(_QWORD *)(i + 32) = 0;
          qfree(v22);
        }
        v23 = v49.m128i_i8[0];
        v24 = _mm_load_si128(&v47);
        *(_QWORD *)(i + 24) = v13;
        v8 += 88LL;
        v25 = _mm_loadu_si128(&v69);
        *(_BYTE *)(i + 48) = v23;
        v26 = v50.m128i_i32[0];
        *(__m128i *)(i + 32) = v24;
        *(_DWORD *)(i + 72) = v26;
        v27 = v48.m128i_i64[0];
        *(__m128i *)(i + 56) = v25;
      }
      v46 = --v54;
      sub_66C50((__int64)&v73);
      sub_66C50((__int64)v53);
      sub_2CDC00((__int64)&v73, v55);
      sub_2E1FB0(v8, v4, v46, &v73);
      sub_66C50((__int64)&v73);
      v6 = v8 - a1;
      if ( (__int64)(v8 - a1) <= 1408 )
        return v76 - __readfsqword(0x28u);
      v4 = v8;
    }
    sub_2CDC00((__int64)v53, v55);
    sub_2CDC00((__int64)&v73, v7);
    sub_2E1B10(a1, v4, &v73);
    sub_66C50((__int64)&v73);
    while ( v4 - a1 > 88 )
    {
      v28 = _mm_loadu_si128((const __m128i *)(v4 - 80));
      v29 = _mm_loadu_si128((const __m128i *)(v4 - 32));
      v30 = *(_QWORD *)(v4 - 64);
      v31 = *(_BYTE *)(v4 - 40);
      v56 = off_4E2BC0;
      v4 -= 88;
      v57 = v28;
      v32 = *(_DWORD *)(v4 + 72);
      v33 = *(_QWORD *)(v4 + 80);
      *(_QWORD *)(v4 + 24) = 0;
      v34 = _mm_loadu_si128((const __m128i *)(v4 + 32));
      v61 = v29;
      *(_OWORD *)(v4 + 32) = 0;
      v35 = _mm_loadu_si128((const __m128i *)(a1 + 8));
      v58 = v30;
      *(__m128i *)(v4 + 8) = v35;
      v36 = *(_QWORD *)(a1 + 24);
      v37 = _mm_loadu_si128((const __m128i *)(a1 + 32));
      *(_QWORD *)(a1 + 24) = 0;
      *(_OWORD *)(a1 + 32) = 0;
      v38 = *(_QWORD *)(v4 + 24);
      v60 = v31;
      v62 = v32;
      v63 = v33;
      v59 = v34;
      if ( v38 )
      {
        *(_QWORD *)(v4 + 32) = 0;
        v48.m128i_i64[0] = v36;
        v47.m128i_i64[0] = v30;
        v50 = v34;
        v49 = v37;
        qfree(v38);
        v34 = _mm_load_si128(&v50);
        v37 = _mm_load_si128(&v49);
        v36 = v48.m128i_i64[0];
        v30 = v47.m128i_i64[0];
      }
      *(_QWORD *)(v4 + 24) = v36;
      v39 = v53;
      *(__m128i *)(v4 + 32) = v37;
      v40 = *(_BYTE *)(a1 + 48);
      v47.m128i_i64[0] = v30;
      *(_BYTE *)(v4 + 48) = v40;
      v41 = _mm_loadu_si128((const __m128i *)(a1 + 56));
      v48 = v34;
      *(__m128i *)(v4 + 56) = v41;
      *(_DWORD *)(v4 + 72) = *(_DWORD *)(a1 + 72);
      *(_QWORD *)(v4 + 80) = *(_QWORD *)(a1 + 80);
      sub_2CDC00((__int64)&v73, v39);
      v42 = _mm_load_si128(&v48);
      v71 = v33;
      v43 = _mm_loadu_si128(&v57);
      v64 = off_4E2BC0;
      v67 = v42;
      v70 = v32;
      v59 = 0;
      v44 = _mm_loadu_si128(&v61);
      v66 = v47.m128i_i64[0];
      v58 = 0;
      v68 = v31;
      v65 = v43;
      v69 = v44;
      sub_2E1580(a1, 0, 0x2E8BA2E8BA2E8BA3LL * ((v4 - a1) >> 3), (__int64)&v64, (__int64)&v73);
      if ( v66 )
        qfree(v66);
      sub_66C50((__int64)&v73);
    }
    sub_66C50((__int64)v53);
  }
  return v76 - __readfsqword(0x28u);
}

