__int64 __fastcall sub_3EFE0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __m128i v12; // xmm0
  __m128i v14; // kr00_16
  unsigned __int64 v15; // rdx
  __int64 v16; // r15
  __m128i v17; // xmm0
  __int64 v18; // rax
  __m128 v19; // xmm0
  __int32 v20; // edx
  __int16 v21; // cx
  __int8 v22; // r12
  __m128i v23; // xmm0
  __m128i v24; // xmm0
  __m128i v25; // xmm0
  __m128i v26; // xmm0
  unsigned __int64 v27; // r13
  __m128i v28; // xmm0
  __int128 v29; // kr10_16
  __m128i v30; // xmm0
  __int8 v31; // r13
  __int16 v32; // ax
  __m128i v33; // xmm0
  __m128i v34; // xmm0
  __m128i v35; // xmm0
  __int64 v36; // rsi
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  unsigned __int64 v40; // rdx
  __m128i v41; // xmm0
  __int64 v42; // rax
  __int64 v43; // rax
  __m128i v44; // xmm0
  __m128i v45; // [rsp+10h] [rbp-2C8h] BYREF
  unsigned __int64 v46; // [rsp+20h] [rbp-2B8h]
  __m128i v47; // [rsp+30h] [rbp-2A8h] BYREF
  __m128i si128; // [rsp+40h] [rbp-298h]
  __int64 v49; // [rsp+50h] [rbp-288h] BYREF
  __m128i v50; // [rsp+58h] [rbp-280h] BYREF
  char v51; // [rsp+68h] [rbp-270h]
  __m128i v52; // [rsp+70h] [rbp-268h] BYREF
  __m128i v53; // [rsp+80h] [rbp-258h]
  __int64 v54; // [rsp+90h] [rbp-248h]
  __m128i v55; // [rsp+A0h] [rbp-238h] BYREF
  __m128i v56; // [rsp+B0h] [rbp-228h] BYREF
  __int64 v57; // [rsp+C0h] [rbp-218h]
  char v58; // [rsp+C8h] [rbp-210h]
  __int32 v59; // [rsp+D0h] [rbp-208h] BYREF
  __int16 v60; // [rsp+D4h] [rbp-204h]
  __int64 v61; // [rsp+D8h] [rbp-200h]
  __m128 v62; // [rsp+E0h] [rbp-1F8h]
  __m128i v63; // [rsp+F0h] [rbp-1E8h] BYREF
  __m128i v64[3]; // [rsp+100h] [rbp-1D8h] BYREF
  __int64 v65; // [rsp+130h] [rbp-1A8h]
  int v66; // [rsp+140h] [rbp-198h] BYREF
  __int16 v67; // [rsp+144h] [rbp-194h]
  __int64 v68; // [rsp+148h] [rbp-190h]
  __m128 v69; // [rsp+150h] [rbp-188h]
  __m128i v70; // [rsp+160h] [rbp-178h] BYREF
  __m128i v71[3]; // [rsp+170h] [rbp-168h] BYREF
  __int64 v72; // [rsp+1A0h] [rbp-138h]
  __m128i v73; // [rsp+1B0h] [rbp-128h] BYREF
  __m128i v74; // [rsp+1C0h] [rbp-118h] BYREF
  __m128i v75; // [rsp+1D0h] [rbp-108h] BYREF
  __m128i v76; // [rsp+1E0h] [rbp-F8h] BYREF
  __m128i v77; // [rsp+1F0h] [rbp-E8h] BYREF
  __m128i v78; // [rsp+200h] [rbp-D8h] BYREF
  __int64 v79; // [rsp+210h] [rbp-C8h]
  char v80; // [rsp+218h] [rbp-C0h]
  __int64 v81; // [rsp+220h] [rbp-B8h] BYREF
  _BYTE v82[24]; // [rsp+228h] [rbp-B0h] BYREF
  __m128i v83; // [rsp+240h] [rbp-98h] BYREF
  __m128i v84; // [rsp+250h] [rbp-88h] BYREF
  __m128i v85; // [rsp+260h] [rbp-78h] BYREF
  __m128i v86; // [rsp+270h] [rbp-68h] BYREF
  __int64 v87; // [rsp+280h] [rbp-58h]
  char v88; // [rsp+288h] [rbp-50h]
  unsigned __int64 v89; // [rsp+298h] [rbp-40h]

  v89 = __readfsqword(0x28u);
  sub_3EEE0((__int64)&v55, (_QWORD *)a2, a3, a4, a5, a6);
  if ( v58 )
  {
    v11 = v55.m128i_i64[0];
    v12 = _mm_loadu_si128((const __m128i *)&v55.m128i_u64[1]);
    *(_BYTE *)(a1 + 24) = 1;
    *(_QWORD *)a1 = v11;
    *(__m128i *)(a1 + 8) = v12;
    return a1;
  }
  v52 = _mm_load_si128(&v55);
  v54 = v57;
  v53 = _mm_load_si128(&v56);
  if ( !(_BYTE)v57 )
  {
    *(_BYTE *)a1 = 0;
    *(_BYTE *)(a1 + 24) = 0;
    return a1;
  }
  v14 = v52;
  v15 = v53.m128i_u64[1];
  *(__m128i *)(a2 + 56) = v52;
  sub_3D580(&v73, *(__int64 (__fastcall *****)(__int64))(v14.m128i_i64[0] + 176), v15, v8, v9, v10);
  v16 = v73.m128i_i64[1];
  v17 = _mm_loadl_epi64(&v74);
  if ( v80 )
  {
    v18 = v73.m128i_i64[0];
    *(_BYTE *)(a1 + 24) = 1;
    *(_QWORD *)a1 = v18;
    *(__m128i *)(a1 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v16, v17);
    return a1;
  }
  v19 = _mm_loadh_ps((const double *)&v74.m128i_i64[1]);
  v20 = v73.m128i_i32[0];
  v21 = v73.m128i_i16[2];
  v73.m128i_i64[1] = 0;
  v22 = v76.m128i_i8[8];
  *(_QWORD *)(a2 + 208) = a3;
  v62 = v19;
  v74 = 0;
  v23 = _mm_load_si128(&v75);
  v59 = v20;
  v63 = v23;
  v24 = _mm_load_si128(&v76);
  v60 = v21;
  v64[0] = v24;
  v25 = _mm_load_si128(&v77);
  v65 = v79;
  v64[1] = v25;
  v26 = _mm_load_si128(&v78);
  *(_BYTE *)(a2 + 232) = 0;
  v64[2] = v26;
  if ( (_BYTE)v21 )
  {
    *(_BYTE *)(a2 + 224) = HIBYTE(v21);
    *(_QWORD *)(a2 + 216) = (unsigned __int8)v21;
    *(_BYTE *)(a2 + 232) = 1;
  }
  v27 = a3 - v14.m128i_i64[1];
  if ( v27 < BYTE2(v20) )
  {
    sub_3BA80();
    v61 = v16;
    v64[0].m128i_i8[8] = v22;
    sub_3D380((__int64)&v81, a2, v27, (__int64)&v59);
    if ( v82[16] )
      goto LABEL_25;
  }
  else
  {
    if ( !(unsigned __int8)sub_3C610(a2, (__int64)&v52.m128i_i64[1]) )
    {
      v61 = v16;
      v64[0].m128i_i8[8] = v22;
      sub_3D190((__int64)&v81, a2, (__int64)&v59);
      if ( v82[16] )
        goto LABEL_25;
    }
    sub_3BA80();
  }
  v28 = _mm_load_si128(&v63);
  v64[0].m128i_i8[8] = v22;
  v47 = v28;
  si128 = _mm_load_si128(v64);
  if ( !v22 )
  {
LABEL_35:
    *(_BYTE *)a1 = 1;
    *(_BYTE *)(a1 + 24) = 0;
    goto LABEL_26;
  }
  while ( 1 )
  {
    sub_3BA80();
    v36 = *(_QWORD *)(a2 + 56);
    v45 = _mm_load_si128(&v47);
    v46 = si128.m128i_i64[0];
    sub_3C8B0((__int64)&v81, v36, si128.m128i_i64[0], (__int64)&v45);
    v40 = v46;
    if ( v82[16] )
      break;
    *(_QWORD *)(a2 + 64) = v45.m128i_i64[0];
    sub_3D580((__m128i *)&v81, *(__int64 (__fastcall *****)(__int64))(*(_QWORD *)(a2 + 56) + 176LL), v40, v37, v38, v39);
    v29 = *(_OWORD *)v82;
    if ( v88 )
    {
      v42 = v81;
      *(_QWORD *)(a1 + 8) = *(_QWORD *)v82;
      *(_BYTE *)(a1 + 24) = 1;
      *(_QWORD *)a1 = v42;
      *(_QWORD *)(a1 + 16) = *((_QWORD *)&v29 + 1);
      goto LABEL_26;
    }
    v69 = _mm_loadh_ps((const double *)&v82[16]);
    v30 = _mm_load_si128(&v83);
    v31 = v84.m128i_i8[8];
    v66 = v81;
    v32 = WORD2(v81);
    v70 = v30;
    v33 = _mm_load_si128(&v84);
    v67 = WORD2(v81);
    v71[0] = v33;
    v34 = _mm_load_si128(&v85);
    v68 = *(_QWORD *)v82;
    v71[1] = v34;
    v35 = _mm_load_si128(&v86);
    *(_QWORD *)v82 = 0;
    v72 = v87;
    *(_BYTE *)(a2 + 232) = 0;
    *(_OWORD *)&v82[8] = 0;
    v71[2] = v35;
    if ( (_BYTE)v32 )
    {
      *(_BYTE *)(a2 + 224) = HIBYTE(v32);
      *(_QWORD *)(a2 + 216) = (unsigned __int8)v32;
      *(_BYTE *)(a2 + 232) = 1;
    }
    v71[0].m128i_i8[8] = v31;
    sub_3D190((__int64)&v49, a2, (__int64)&v66);
    if ( v51 )
    {
      v43 = v49;
      v44 = _mm_loadu_si128(&v50);
      *(_BYTE *)(a1 + 24) = 1;
      *(_QWORD *)a1 = v43;
      *(__m128i *)(a1 + 8) = v44;
      if ( (_QWORD)v29 )
        qfree();
      goto LABEL_26;
    }
    v47 = _mm_load_si128(&v70);
    si128 = _mm_load_si128(v71);
    if ( (_QWORD)v29 )
      qfree();
    if ( !v31 )
      goto LABEL_35;
  }
LABEL_25:
  *(_QWORD *)a1 = v81;
  v41 = _mm_loadu_si128((const __m128i *)v82);
  *(_BYTE *)(a1 + 24) = 1;
  *(__m128i *)(a1 + 8) = v41;
LABEL_26:
  if ( v16 )
    qfree();
  if ( v73.m128i_i64[1] )
    qfree();
  if ( v58 && v55.m128i_i64[0] )
    qfree();
  return a1;
}
