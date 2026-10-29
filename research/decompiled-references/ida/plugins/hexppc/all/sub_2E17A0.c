unsigned __int64 __fastcall sub_2E17A0(__int64 a1, __int64 a2, __int64 a3, const __m128i *a4)
{
  __int64 v4; // r12
  __int64 v6; // r13
  const __m128i *v7; // r15
  unsigned __int64 v8; // r14
  unsigned __int64 i; // r13
  __m128i v10; // xmm4
  __int64 v11; // r15
  __int64 v12; // rdx
  __m128i v13; // xmm0
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __m128i v17; // xmm0
  __int64 v18; // rdx
  __m128i v19; // xmm0
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rax
  __m128i v23; // xmm5
  __int64 v24; // rax
  __m128i v25; // xmm0
  __int64 v26; // r13
  int v27; // r11d
  __m128i v28; // xmm0
  __m128i v29; // xmm2
  __int64 v30; // rcx
  int v31; // r15d
  __int64 v32; // rax
  __int16 v33; // r10
  char v34; // r9
  char v35; // r8
  __int64 v36; // r14
  __int64 v37; // rax
  __m128i v38; // xmm2
  const __m128i *v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rax
  __m128i v42; // xmm0
  __m128i v43; // xmm1
  __m128i v44; // xmm0
  __int64 v46; // r15
  __int64 v47; // [rsp+0h] [rbp-1B8h]
  int v48; // [rsp+0h] [rbp-1B8h]
  int v49; // [rsp+0h] [rbp-1B8h]
  int v50; // [rsp+Ch] [rbp-1ACh]
  char v51; // [rsp+Ch] [rbp-1ACh]
  char v52; // [rsp+Ch] [rbp-1ACh]
  __m128i v53; // [rsp+10h] [rbp-1A8h] BYREF
  __m128i v54; // [rsp+20h] [rbp-198h] BYREF
  __m128i v55; // [rsp+30h] [rbp-188h] BYREF
  __m128i v56; // [rsp+40h] [rbp-178h] BYREF
  __int64 v57; // [rsp+50h] [rbp-168h]
  const __m128i *v58; // [rsp+58h] [rbp-160h]
  __int64 v59; // [rsp+60h] [rbp-158h]
  const __m128i *v60; // [rsp+68h] [rbp-150h]
  __int64 (__fastcall **v61)(); // [rsp+70h] [rbp-148h]
  __m128i v62; // [rsp+78h] [rbp-140h] BYREF
  int v63; // [rsp+88h] [rbp-130h]
  __int16 v64; // [rsp+8Ch] [rbp-12Ch]
  char v65; // [rsp+8Eh] [rbp-12Ah]
  char v66; // [rsp+8Fh] [rbp-129h]
  __int64 v67; // [rsp+90h] [rbp-128h]
  __m128i v68; // [rsp+98h] [rbp-120h]
  __int64 v69; // [rsp+A8h] [rbp-110h]
  __m128i v70; // [rsp+B0h] [rbp-108h] BYREF
  int v71; // [rsp+C0h] [rbp-F8h]
  __int64 v72; // [rsp+C8h] [rbp-F0h]
  __int64 (__fastcall **v73)(); // [rsp+D0h] [rbp-E8h] BYREF
  __m128i v74; // [rsp+D8h] [rbp-E0h]
  int v75; // [rsp+E8h] [rbp-D0h]
  __int16 v76; // [rsp+ECh] [rbp-CCh]
  char v77; // [rsp+EEh] [rbp-CAh]
  char v78; // [rsp+EFh] [rbp-C9h]
  __int64 v79; // [rsp+F0h] [rbp-C8h]
  __m128i v80; // [rsp+F8h] [rbp-C0h]
  __int64 v81; // [rsp+108h] [rbp-B0h]
  __m128i v82; // [rsp+110h] [rbp-A8h]
  int v83; // [rsp+120h] [rbp-98h]
  __int64 v84; // [rsp+128h] [rbp-90h]
  char v85; // [rsp+130h] [rbp-88h] BYREF
  __m128i v86; // [rsp+150h] [rbp-68h] BYREF
  __int64 v87; // [rsp+160h] [rbp-58h]
  int (__fastcall *v88)(__m128i *, unsigned __int64, __int64); // [rsp+168h] [rbp-50h]
  unsigned __int64 v89; // [rsp+178h] [rbp-40h]

  v4 = a2;
  v59 = a3;
  v60 = a4;
  v89 = __readfsqword(0x28u);
  v58 = (const __m128i *)&v85;
  v6 = a2 - a1;
  if ( a2 - a1 > 1536 )
  {
    while ( 1 )
    {
      v7 = v58;
      if ( !v59 )
        break;
      sub_2CA2A0((__int64)v58, v60);
      sub_2CA2A0((__int64)&v86, v7);
      v8 = a1 + 96;
      sub_2E16C0(
        a1,
        a1 + 96,
        a1
      + 32
      * (((__int64)(0xAAAAAAAAAAAAAAABLL * (v6 >> 5)) >> 1) + ((0xAAAAAAAAAAAAAAABLL * (v6 >> 5)) & 0xFFFFFFFFFFFFFFFELL)),
        v4 - 96,
        (__int64)&v86);
      sub_63210((__int64)&v86);
      sub_2CA2A0((__int64)&v86, v7);
      for ( i = v4; ; *(_QWORD *)(i + 88) = v47 )
      {
        if ( !v87 )
LABEL_29:
          std::__throw_bad_function_call();
        while ( v88(&v86, v8, a1) < 0 )
        {
          v8 += 96LL;
          if ( !v87 )
            goto LABEL_29;
        }
        i -= 96LL;
        if ( !v87 )
LABEL_28:
          std::__throw_bad_function_call();
        while ( v88(&v86, a1, i) < 0 )
        {
          i -= 96LL;
          if ( !v87 )
            goto LABEL_28;
        }
        if ( v8 >= i )
          break;
        v10 = _mm_loadu_si128((const __m128i *)(v8 + 40));
        v11 = *(_QWORD *)(v8 + 32);
        *(_QWORD *)(v8 + 32) = 0;
        *(_OWORD *)(v8 + 40) = 0;
        v12 = *(_QWORD *)(i + 8);
        v13 = _mm_loadu_si128((const __m128i *)(v8 + 8));
        v14 = *(_QWORD *)(v8 + 24);
        v15 = *(_QWORD *)(v8 + 56);
        v53 = v10;
        *(_QWORD *)(v8 + 8) = v12;
        LODWORD(v12) = *(_DWORD *)(i + 16);
        v57 = v15;
        LODWORD(v15) = *(_DWORD *)(v8 + 80);
        *(_DWORD *)(v8 + 16) = v12;
        v50 = v15;
        v16 = *(_QWORD *)(v8 + 88);
        *(_DWORD *)(v8 + 24) = *(_DWORD *)(i + 24);
        LOBYTE(v12) = *(_BYTE *)(i + 28);
        v74 = v13;
        v17 = _mm_loadu_si128((const __m128i *)(v8 + 64));
        *(_BYTE *)(v8 + 28) = v12;
        v47 = v16;
        *(_BYTE *)(v8 + 29) = *(_BYTE *)(i + 29);
        LOBYTE(v12) = *(_BYTE *)(i + 30);
        v82 = v17;
        *(_BYTE *)(v8 + 30) = v12;
        *(_BYTE *)(v8 + 31) = *(_BYTE *)(i + 31);
        v18 = *(_QWORD *)(i + 32);
        *(_QWORD *)(i + 32) = 0;
        v19 = _mm_loadu_si128((const __m128i *)(i + 40));
        *(_OWORD *)(i + 40) = 0;
        if ( *(_QWORD *)(v8 + 32) )
        {
          *(_QWORD *)(v8 + 40) = 0;
          v56.m128i_i64[0] = v14;
          v55.m128i_i64[0] = v18;
          v54 = v19;
          qfree();
          v14 = v56.m128i_i64[0];
          v18 = v55.m128i_i64[0];
          v19 = _mm_load_si128(&v54);
        }
        *(_QWORD *)(v8 + 32) = v18;
        *(__m128i *)(v8 + 40) = v19;
        *(_QWORD *)(v8 + 56) = *(_QWORD *)(i + 56);
        *(_QWORD *)(v8 + 64) = *(_QWORD *)(i + 64);
        *(_DWORD *)(v8 + 72) = *(_DWORD *)(i + 72);
        *(_DWORD *)(v8 + 80) = *(_DWORD *)(i + 80);
        *(_QWORD *)(v8 + 88) = *(_QWORD *)(i + 88);
        v20 = v74.m128i_i64[0];
        v21 = *(_QWORD *)(i + 32);
        *(_QWORD *)(i + 24) = v14;
        *(_QWORD *)(i + 8) = v20;
        *(_DWORD *)(i + 16) = v74.m128i_i32[2];
        if ( v21 )
        {
          *(_QWORD *)(i + 40) = 0;
          qfree();
        }
        v22 = v57;
        v23 = _mm_load_si128(&v53);
        *(_QWORD *)(i + 32) = v11;
        v8 += 96LL;
        *(_QWORD *)(i + 56) = v22;
        v24 = v82.m128i_i64[0];
        *(__m128i *)(i + 40) = v23;
        *(_QWORD *)(i + 64) = v24;
        *(_DWORD *)(i + 72) = v82.m128i_i32[2];
        *(_DWORD *)(i + 80) = v50;
      }
      v46 = --v59;
      sub_63210((__int64)&v86);
      sub_63210((__int64)v58);
      sub_2CA2A0((__int64)&v86, v60);
      sub_2E17A0(v8, v4, v46, &v86);
      sub_63210((__int64)&v86);
      v6 = v8 - a1;
      if ( (__int64)(v8 - a1) <= 1536 )
        return v89 - __readfsqword(0x28u);
      v4 = v8;
    }
    sub_2CA2A0((__int64)v58, v60);
    sub_2CA2A0((__int64)&v86, v7);
    sub_2E1230(a1, v4, &v86);
    sub_63210((__int64)&v86);
    while ( v4 - a1 > 96 )
    {
      v25 = _mm_loadu_si128((const __m128i *)(v4 - 88));
      v26 = *(_QWORD *)(v4 - 64);
      v61 = off_4CFD08;
      v27 = *(_DWORD *)(v4 - 72);
      v4 -= 96;
      v62 = v25;
      v28 = _mm_loadu_si128((const __m128i *)(v4 + 40));
      v29 = _mm_loadu_si128((const __m128i *)(v4 + 64));
      *(_OWORD *)(v4 + 40) = 0;
      v30 = *(_QWORD *)(v4 + 56);
      v31 = *(_DWORD *)(v4 + 80);
      *(_QWORD *)(v4 + 32) = 0;
      v32 = *(_QWORD *)(a1 + 8);
      v33 = *(_WORD *)(v4 + 28);
      v34 = *(_BYTE *)(v4 + 30);
      v70 = v29;
      v35 = *(_BYTE *)(v4 + 31);
      *(_QWORD *)(v4 + 8) = v32;
      LODWORD(v32) = *(_DWORD *)(a1 + 16);
      v36 = *(_QWORD *)(v4 + 88);
      v63 = v27;
      v64 = v33;
      *(_DWORD *)(v4 + 16) = v32;
      LODWORD(v32) = *(_DWORD *)(a1 + 24);
      v65 = v34;
      *(_DWORD *)(v4 + 24) = v32;
      LOBYTE(v32) = *(_BYTE *)(a1 + 28);
      v66 = v35;
      v67 = v26;
      v69 = v30;
      v71 = v31;
      v72 = v36;
      v68 = v28;
      *(_BYTE *)(v4 + 28) = v32;
      *(_BYTE *)(v4 + 29) = *(_BYTE *)(a1 + 29);
      *(_BYTE *)(v4 + 30) = *(_BYTE *)(a1 + 30);
      *(_BYTE *)(v4 + 31) = *(_BYTE *)(a1 + 31);
      v37 = *(_QWORD *)(a1 + 32);
      v38 = _mm_loadu_si128((const __m128i *)(a1 + 40));
      *(_QWORD *)(a1 + 32) = 0;
      *(_OWORD *)(a1 + 40) = 0;
      if ( *(_QWORD *)(v4 + 32) )
      {
        *(_QWORD *)(v4 + 40) = 0;
        LOWORD(v59) = v33;
        v54.m128i_i64[0] = v37;
        v53.m128i_i64[0] = v30;
        LOBYTE(v57) = v35;
        v51 = v34;
        v48 = v27;
        v56 = v38;
        v55 = v28;
        qfree();
        v33 = v59;
        v38 = _mm_load_si128(&v56);
        v28 = _mm_load_si128(&v55);
        v37 = v54.m128i_i64[0];
        v30 = v53.m128i_i64[0];
        v35 = v57;
        v34 = v51;
        v27 = v48;
      }
      *(_QWORD *)(v4 + 32) = v37;
      v39 = v58;
      *(__m128i *)(v4 + 40) = v38;
      v40 = *(_QWORD *)(a1 + 56);
      v55.m128i_i16[0] = v33;
      *(_QWORD *)(v4 + 56) = v40;
      v41 = *(_QWORD *)(a1 + 64);
      v53.m128i_i64[0] = v30;
      *(_QWORD *)(v4 + 64) = v41;
      LODWORD(v41) = *(_DWORD *)(a1 + 72);
      LOBYTE(v57) = v35;
      *(_DWORD *)(v4 + 72) = v41;
      v52 = v34;
      *(_DWORD *)(v4 + 80) = *(_DWORD *)(a1 + 80);
      v49 = v27;
      *(_QWORD *)(v4 + 88) = *(_QWORD *)(a1 + 88);
      v54 = v28;
      sub_2CA2A0((__int64)&v86, v39);
      v42 = _mm_load_si128(&v54);
      v84 = v36;
      v73 = off_4CFD08;
      v43 = _mm_loadu_si128(&v62);
      v80 = v42;
      v79 = v26;
      v68 = 0;
      v44 = _mm_load_si128(&v70);
      v78 = v57;
      v81 = v53.m128i_i64[0];
      v75 = v49;
      v76 = v55.m128i_i16[0];
      v77 = v52;
      v67 = 0;
      v83 = v31;
      v74 = v43;
      v82 = v44;
      sub_2E0BB0(a1, 0, 0xAAAAAAAAAAAAAAABLL * ((v4 - a1) >> 5), (__int64)&v73, (__int64)&v86);
      if ( v79 )
        qfree();
      sub_63210((__int64)&v86);
    }
    sub_63210((__int64)v58);
  }
  return v89 - __readfsqword(0x28u);
}

