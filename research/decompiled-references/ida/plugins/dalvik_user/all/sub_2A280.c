unsigned __int64 __fastcall sub_2A280(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // r13
  __int64 v6; // r12
  __int64 v7; // rbp
  __int64 v8; // r15
  char v9; // cl
  __int64 v10; // rdi
  __int64 v11; // r10
  __int64 v12; // r9
  unsigned __int64 v13; // rsi
  char v14; // dl
  __m128i v15; // xmm3
  __m128i v16; // xmm2
  __m128i v17; // xmm1
  __m128i v18; // xmm0
  __int64 v19; // r11
  __int64 *v20; // rcx
  __m128i v21; // xmm7
  __int64 v22; // rax
  __m128i v23; // xmm6
  __m128i v24; // xmm0
  __m128i v25; // xmm7
  __int64 v26; // r12
  char v27; // r15
  __int64 v28; // rax
  __m128i v29; // xmm7
  __int64 v30; // rcx
  __m128i v31; // xmm6
  __int64 v32; // rcx
  __m128i si128; // xmm0
  __int64 v34; // rdi
  __int64 v35; // rcx
  __m128i v36; // xmm0
  __int64 v37; // rcx
  __m128i v38; // xmm0
  __int64 v39; // rax
  int v40; // ecx
  __m128i v41; // xmm3
  __int64 v42; // rax
  __m128i v43; // xmm6
  __m128i v44; // xmm7
  int v45; // ecx
  unsigned __int64 v46; // rax
  __int64 v47; // rdx
  __m128i v48; // xmm0
  __m128i v49; // xmm0
  __int64 v50; // rbp
  signed int v51; // ecx
  __m128i v53; // [rsp+0h] [rbp-1A8h] BYREF
  __int64 v54; // [rsp+10h] [rbp-198h]
  __int64 v55; // [rsp+18h] [rbp-190h]
  char v56; // [rsp+27h] [rbp-181h]
  unsigned __int64 v57; // [rsp+28h] [rbp-180h]
  __m128i v58; // [rsp+30h] [rbp-178h] BYREF
  __m128i v59; // [rsp+40h] [rbp-168h] BYREF
  unsigned __int64 v60; // [rsp+50h] [rbp-158h]
  __int64 v61; // [rsp+58h] [rbp-150h]
  __m128i v62[7]; // [rsp+60h] [rbp-148h] BYREF
  __m128i v63[2]; // [rsp+D0h] [rbp-D8h] BYREF
  __int64 v64; // [rsp+F0h] [rbp-B8h] BYREF
  __int64 v65; // [rsp+F8h] [rbp-B0h]
  __m128i v66; // [rsp+100h] [rbp-A8h]
  __int64 v67; // [rsp+110h] [rbp-98h]
  __m128i v68; // [rsp+118h] [rbp-90h]
  __int64 v69; // [rsp+128h] [rbp-80h]
  __m128i v70; // [rsp+130h] [rbp-78h]
  unsigned __int64 v71; // [rsp+140h] [rbp-68h]
  char v72; // [rsp+148h] [rbp-60h]
  __m128i v73; // [rsp+150h] [rbp-58h]
  char v74; // [rsp+160h] [rbp-48h]
  unsigned __int64 v75; // [rsp+168h] [rbp-40h]

  v4 = a2;
  v75 = __readfsqword(0x28u);
  v54 = a2 - a1;
  if ( (__int64)(a2 - a1) > 120 )
  {
    v53.m128i_i64[0] = (__int64)&v64;
    v6 = 0xEEEEEEEEEEEEEEEFLL * ((__int64)(a2 - a1) >> 3);
    v7 = (v6 - 2) / 2;
    v8 = a1 + 120 * v7;
    while ( 1 )
    {
      v9 = *(_BYTE *)(v8 + 88);
      v10 = *(_QWORD *)(v8 + 56);
      *(_QWORD *)(v8 + 56) = 0;
      v11 = *(_QWORD *)(v8 + 8);
      v12 = *(_QWORD *)(v8 + 32);
      *(_QWORD *)(v8 + 8) = 0;
      v13 = *(_QWORD *)(v8 + 80);
      v14 = *(_BYTE *)(v8 + 112);
      *(_QWORD *)(v8 + 32) = 0;
      v15 = _mm_loadu_si128((const __m128i *)(v8 + 16));
      v16 = _mm_loadu_si128((const __m128i *)(v8 + 40));
      v72 = v9;
      v17 = _mm_loadu_si128((const __m128i *)(v8 + 64));
      v18 = _mm_loadu_si128((const __m128i *)(v8 + 96));
      v69 = v10;
      v19 = *(_QWORD *)v8;
      v20 = (__int64 *)v53.m128i_i64[0];
      v71 = v13;
      v74 = v14;
      *(_OWORD *)(v8 + 16) = 0;
      *(_OWORD *)(v8 + 40) = 0;
      *(_OWORD *)(v8 + 64) = 0;
      v64 = v19;
      v65 = v11;
      v67 = v12;
      v63[0] = v18;
      v66 = v15;
      v68 = v16;
      v70 = v17;
      v73 = v18;
      sub_194D0(a1, v7, v6, v20);
      if ( v69 )
        qfree();
      if ( v67 )
        qfree();
      if ( v65 )
        qfree();
      v8 -= 120;
      if ( !v7 )
        break;
      --v7;
    }
  }
  if ( v4 < a3 )
  {
    v60 = 0xEEEEEEEEEEEEEEEFLL * (v54 >> 3);
    do
    {
      while ( 1 )
      {
        v50 = *(_QWORD *)v4;
        v51 = *(_DWORD *)(v4 + 84);
        if ( *(_QWORD *)v4 == *(_QWORD *)a1 )
          break;
        if ( *(_QWORD *)v4 < *(_QWORD *)a1 )
          goto LABEL_14;
LABEL_26:
        v4 += 120LL;
        if ( v4 >= a3 )
          return v75 - __readfsqword(0x28u);
      }
      if ( v51 < *(_DWORD *)(a1 + 84) )
      {
LABEL_14:
        v21 = _mm_loadu_si128((const __m128i *)(v4 + 16));
        v22 = *(_QWORD *)(v4 + 8);
        *(_QWORD *)(v4 + 8) = 0;
        v23 = _mm_loadu_si128((const __m128i *)(v4 + 64));
        *(_OWORD *)(v4 + 16) = 0;
        v24 = _mm_loadu_si128((const __m128i *)(v4 + 96));
        v59 = v21;
        v25 = _mm_loadu_si128((const __m128i *)(v4 + 40));
        v26 = *(_QWORD *)(v4 + 56);
        *(_OWORD *)(v4 + 40) = 0;
        v27 = *(_BYTE *)(v4 + 112);
        *(_QWORD *)(v4 + 56) = 0;
        *(_OWORD *)(v4 + 64) = 0;
        v54 = v22;
        v28 = *(_QWORD *)(v4 + 32);
        v58 = v25;
        v29 = _mm_cvtsi32_si128(v51);
        *(_QWORD *)(v4 + 32) = 0;
        v30 = *(_QWORD *)a1;
        v53 = v23;
        v31 = _mm_cvtsi32_si128(*(_DWORD *)(v4 + 80));
        *(_QWORD *)v4 = v30;
        v32 = *(_QWORD *)(a1 + 8);
        v55 = v28;
        LOBYTE(v28) = *(_BYTE *)(v4 + 88);
        *(_QWORD *)(a1 + 8) = 0;
        v63[0] = v24;
        si128 = _mm_loadu_si128((const __m128i *)(a1 + 16));
        *(_OWORD *)(a1 + 16) = 0;
        v34 = *(_QWORD *)(v4 + 8);
        v56 = v28;
        v57 = _mm_unpacklo_epi32(v31, v29).m128i_u64[0];
        if ( v34 )
        {
          *(_QWORD *)(v4 + 16) = 0;
          v61 = v32;
          v62[0] = si128;
          qfree();
          si128 = _mm_load_si128(v62);
          v32 = v61;
        }
        *(_QWORD *)(v4 + 8) = v32;
        *(__m128i *)(v4 + 16) = si128;
        v35 = *(_QWORD *)(a1 + 32);
        v36 = _mm_loadu_si128((const __m128i *)(a1 + 40));
        *(_QWORD *)(a1 + 32) = 0;
        *(_OWORD *)(a1 + 40) = 0;
        if ( *(_QWORD *)(v4 + 32) )
        {
          *(_QWORD *)(v4 + 40) = 0;
          v61 = v35;
          v62[0] = v36;
          qfree();
          v36 = _mm_load_si128(v62);
          v35 = v61;
        }
        *(_QWORD *)(v4 + 32) = v35;
        *(__m128i *)(v4 + 40) = v36;
        v37 = *(_QWORD *)(a1 + 56);
        v38 = _mm_loadu_si128((const __m128i *)(a1 + 64));
        *(_QWORD *)(a1 + 56) = 0;
        *(_OWORD *)(a1 + 64) = 0;
        if ( *(_QWORD *)(v4 + 56) )
        {
          *(_QWORD *)(v4 + 64) = 0;
          v61 = v37;
          v62[0] = v38;
          qfree();
          v38 = _mm_load_si128(v62);
          v37 = v61;
        }
        *(_QWORD *)(v4 + 56) = v37;
        v39 = v54;
        *(__m128i *)(v4 + 64) = v38;
        v40 = *(_DWORD *)(a1 + 80);
        v41 = _mm_load_si128(&v59);
        v65 = v39;
        v42 = v55;
        v43 = _mm_load_si128(&v58);
        v44 = _mm_load_si128(&v53);
        *(_DWORD *)(v4 + 80) = v40;
        v45 = *(_DWORD *)(a1 + 84);
        v67 = v42;
        v46 = v57;
        v47 = v60;
        v64 = v50;
        *(_DWORD *)(v4 + 84) = v45;
        LOBYTE(v45) = *(_BYTE *)(a1 + 88);
        v71 = v46;
        LOBYTE(v46) = v56;
        *(_BYTE *)(v4 + 88) = v45;
        v48 = _mm_loadu_si128((const __m128i *)(a1 + 96));
        v69 = v26;
        *(__m128i *)(v4 + 96) = v48;
        LOBYTE(v45) = *(_BYTE *)(a1 + 112);
        v49 = _mm_load_si128(v63);
        v72 = v46;
        *(_BYTE *)(v4 + 112) = v45;
        v74 = v27;
        v66 = v41;
        v68 = v43;
        v70 = v44;
        v73 = v49;
        sub_194D0(a1, 0, v47, &v64);
        if ( v69 )
          qfree();
        if ( v67 )
          qfree();
        if ( v65 )
          qfree();
        goto LABEL_26;
      }
      v4 += 120LL;
    }
    while ( v4 < a3 );
  }
  return v75 - __readfsqword(0x28u);
}

