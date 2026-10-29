__int64 __fastcall sub_30660(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // r12
  __int64 v6; // rbp
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 k; // rbx
  __int64 v11; // rax
  __int64 v12; // rdi
  __m128i v14; // xmm0
  __int64 v15; // rbx
  __m128i si128; // xmm1
  __m128i v17; // xmm0
  __m128i v18; // xmm1
  __m128i v19; // xmm0
  __m128i v20; // xmm0
  __int64 v21; // rax
  __int64 v22; // rbx
  __m128i v23; // xmm0
  __int64 v24; // rdi
  __m128i v25; // xmm2
  __int64 v26; // rbx
  __int64 v27; // r14
  __int64 v28; // rdx
  __int64 v29; // r12
  __int64 i; // r15
  __int64 v31; // rax
  __int64 v32; // rdi
  __m128i v33; // xmm3
  __int64 v34; // rbx
  __m128i v35; // xmm1
  __m128i v36; // xmm0
  __m128i v37; // xmm1
  __m128i v38; // xmm0
  __int64 v39; // rdi
  __int64 v40; // r12
  __int64 v41; // r14
  __int64 v42; // rdx
  __int64 v43; // r15
  __int64 j; // rbx
  __int64 v45; // rax
  __int64 v46; // rdi
  __m128i v47; // xmm0
  __m128i v48; // xmm0
  __m128i v49; // xmm0
  __m128i v50; // xmm0
  __m128i v51; // [rsp+0h] [rbp-248h] BYREF
  __int64 v52; // [rsp+18h] [rbp-230h]
  __m128i v53; // [rsp+20h] [rbp-228h] BYREF
  __m128i v54; // [rsp+30h] [rbp-218h] BYREF
  __int64 v55; // [rsp+40h] [rbp-208h]
  int v56; // [rsp+50h] [rbp-1F8h] BYREF
  __int16 v57; // [rsp+54h] [rbp-1F4h]
  __int64 v58; // [rsp+58h] [rbp-1F0h]
  _BYTE v59[24]; // [rsp+60h] [rbp-1E8h] BYREF
  __int64 v60; // [rsp+78h] [rbp-1D0h]
  __m128i v61; // [rsp+80h] [rbp-1C8h] BYREF
  __int64 v62; // [rsp+90h] [rbp-1B8h] BYREF
  __m128i v63; // [rsp+98h] [rbp-1B0h] BYREF
  char v64; // [rsp+A8h] [rbp-1A0h]
  __m128i v65[2]; // [rsp+B0h] [rbp-198h] BYREF
  __int64 v66; // [rsp+D0h] [rbp-178h]
  int v67; // [rsp+D8h] [rbp-170h]
  _OWORD v68[2]; // [rsp+E0h] [rbp-168h] BYREF
  int v69; // [rsp+100h] [rbp-148h]
  __int16 v70; // [rsp+104h] [rbp-144h]
  __int64 v71; // [rsp+108h] [rbp-140h]
  __m128i v72; // [rsp+110h] [rbp-138h]
  __m128i v73; // [rsp+120h] [rbp-128h]
  __m128i v74; // [rsp+130h] [rbp-118h]
  __m128i v75; // [rsp+140h] [rbp-108h]
  __m128i v76; // [rsp+150h] [rbp-F8h]
  __int64 v77; // [rsp+160h] [rbp-E8h]
  char v78[8]; // [rsp+168h] [rbp-E0h] BYREF
  __int64 v79; // [rsp+170h] [rbp-D8h]
  __int64 v80; // [rsp+178h] [rbp-D0h]
  __m128i v81; // [rsp+180h] [rbp-C8h]
  __int64 v82; // [rsp+190h] [rbp-B8h]
  __m128i v83; // [rsp+198h] [rbp-B0h]
  __int64 v84; // [rsp+1A8h] [rbp-A0h]
  __m128i v85; // [rsp+1B0h] [rbp-98h]
  char v86; // [rsp+1C0h] [rbp-88h]
  _BYTE v87[28]; // [rsp+1C8h] [rbp-80h]
  _BYTE v88[12]; // [rsp+1E8h] [rbp-60h]
  char v89; // [rsp+1F8h] [rbp-50h]
  unsigned __int64 v90; // [rsp+208h] [rbp-40h]

  v90 = __readfsqword(0x28u);
  memset(v68, 255, sizeof(v68));
  v69 = -1;
  v70 = -1;
  v71 = 0;
  v74.m128i_i8[8] = 0;
  v75.m128i_i8[8] = 0;
  v76.m128i_i8[8] = 0;
  v77 = 0;
  v78[0] = -1;
  v79 = -1;
  v80 = 0;
  v82 = 0;
  v72 = 0;
  v81 = 0;
  v83 = 0;
  v84 = 0;
  v86 = 0;
  *(_DWORD *)v87 = 0;
  v87[16] = 0;
  *(_DWORD *)&v87[24] = 0;
  v88[0] = 0;
  *(_QWORD *)&v88[4] = 0;
  v89 = -1;
  v85 = 0;
  v3 = sub_1EA70(a2);
  *(_QWORD *)&v68[0] = v3;
  if ( v3 == -1 )
    goto LABEL_2;
  sub_1EB40((__int64)&v54, v3);
  v14 = _mm_loadu_si128(&v54);
  *((_QWORD *)&v68[1] + 1) = v55;
  *(__m128i *)((char *)v68 + 8) = v14;
  if ( v14.m128i_i64[0] == -1 )
    goto LABEL_2;
  sub_1EC80((__int64)&v56, v55);
  v15 = v58;
  v58 = 0;
  si128 = _mm_load_si128((const __m128i *)v59);
  *(_OWORD *)v59 = 0;
  v69 = v56;
  v70 = v57;
  if ( v71 )
  {
    v51 = si128;
    v72.m128i_i64[0] = 0;
    qfree(v71);
    v17 = _mm_load_si128((const __m128i *)&v59[16]);
    v18 = _mm_load_si128(&v51);
    v71 = v15;
    v73 = v17;
    v19 = _mm_load_si128(&v61);
    v77 = v65[0].m128i_i64[0];
    v74 = v19;
    v20 = _mm_load_si128((const __m128i *)&v62);
    v72 = v18;
    v75 = v20;
    v76 = _mm_load_si128((const __m128i *)&v63.m128i_u64[1]);
    if ( v58 )
    {
      *(_QWORD *)v59 = 0;
      qfree(v58);
    }
  }
  else
  {
    v47 = _mm_load_si128((const __m128i *)&v59[16]);
    v71 = v15;
    v72 = si128;
    v73 = v47;
    v48 = _mm_load_si128(&v61);
    v77 = v65[0].m128i_i64[0];
    v74 = v48;
    v75 = _mm_load_si128((const __m128i *)&v62);
    v76 = _mm_load_si128((const __m128i *)&v63.m128i_u64[1]);
  }
  if ( (_BYTE)v69 == 0xFF )
    goto LABEL_2;
  v21 = sub_1EAA0(*(__int64 *)&v68[0]);
  if ( v21 == -1 )
    goto LABEL_2;
  sub_20470((__int64)&v56, v21);
  v22 = *(_QWORD *)v59;
  memset(v59, 0, sizeof(v59));
  v23 = _mm_loadu_si128((const __m128i *)&v59[8]);
  v78[0] = v56;
  v79 = v58;
  if ( v80 )
  {
    v51 = v23;
    v81.m128i_i64[0] = 0;
    qfree(v80);
    v23 = _mm_load_si128(&v51);
  }
  v24 = v82;
  v81 = v23;
  v25 = _mm_load_si128(&v61);
  v80 = v22;
  v52 = v60;
  v60 = 0;
  v53 = v25;
  v61 = 0;
  if ( v82 )
  {
    v51.m128i_i64[0] = v83.m128i_i64[0];
    if ( v83.m128i_i64[0] )
    {
      v26 = 0;
      do
      {
        v27 = v24 + 40 * v26;
        v28 = *(_QWORD *)(v27 + 16);
        if ( v28 )
        {
          v29 = *(_QWORD *)(v27 + 24);
          if ( v29 )
          {
            for ( i = 0; i != v29; ++i )
            {
              v31 = v28 + 72 * i;
              v32 = *(_QWORD *)(v31 + 32);
              if ( v32 )
              {
                *(_QWORD *)(v31 + 40) = 0;
                qfree(v32);
                v28 = *(_QWORD *)(v27 + 16);
              }
            }
          }
          *(_QWORD *)(v27 + 24) = 0;
          qfree(v28);
          v24 = v82;
        }
        ++v26;
      }
      while ( v51.m128i_i64[0] != v26 );
    }
    v83.m128i_i64[0] = 0;
    qfree(v24);
  }
  v33 = _mm_load_si128(&v53);
  v34 = v62;
  v62 = 0;
  v35 = _mm_loadu_si128(&v63);
  v82 = v52;
  v83 = v33;
  v63 = 0;
  if ( v84 )
  {
    v51 = v35;
    v85.m128i_i64[0] = 0;
    qfree(v84);
    v36 = _mm_load_si128(v65);
    v84 = v34;
    v37 = _mm_load_si128(&v51);
    v86 = v64;
    *(__m128i *)v87 = v36;
    v38 = _mm_loadu_si128((const __m128i *)((char *)&v65[0].m128i_u64[1] + 4));
    *(_QWORD *)v88 = v66;
    v85 = v37;
    *(_DWORD *)&v88[8] = v67;
    *(__m128i *)&v87[12] = v38;
    if ( v62 )
    {
      v63.m128i_i64[0] = 0;
      qfree(v62);
    }
  }
  else
  {
    v84 = v34;
    v49 = _mm_load_si128(v65);
    v85 = v35;
    v86 = v64;
    *(__m128i *)v87 = v49;
    v50 = _mm_loadu_si128((const __m128i *)((char *)&v65[0].m128i_u64[1] + 4));
    *(_QWORD *)v88 = v66;
    *(__m128i *)&v87[12] = v50;
    *(_DWORD *)&v88[8] = v67;
  }
  v39 = v60;
  if ( v60 )
  {
    v51.m128i_i64[0] = v61.m128i_i64[0];
    if ( v61.m128i_i64[0] )
    {
      v40 = 0;
      do
      {
        v41 = v39 + 40 * v40;
        v42 = *(_QWORD *)(v41 + 16);
        if ( v42 )
        {
          v43 = *(_QWORD *)(v41 + 24);
          if ( v43 )
          {
            for ( j = 0; j != v43; ++j )
            {
              v45 = v42 + 72 * j;
              v46 = *(_QWORD *)(v45 + 32);
              if ( v46 )
              {
                *(_QWORD *)(v45 + 40) = 0;
                qfree(v46);
                v42 = *(_QWORD *)(v41 + 16);
              }
            }
          }
          *(_QWORD *)(v41 + 24) = 0;
          qfree(v42);
          v39 = v60;
        }
        ++v40;
      }
      while ( v51.m128i_i64[0] != v40 );
    }
    v61.m128i_i64[0] = 0;
    qfree(v39);
  }
  if ( *(_QWORD *)v59 )
  {
    *(_QWORD *)&v59[8] = 0;
    qfree(*(_QWORD *)v59);
  }
  if ( v78[0] == -1 )
  {
LABEL_2:
    *(_BYTE *)(a1 + 288) = 0;
  }
  else
  {
    v89 = v78[0];
    sub_1E860((__int64)v78, a2);
    sub_30180(a1, (__int64)v68);
    *(_BYTE *)(a1 + 288) = 1;
  }
  if ( v84 )
  {
    v85.m128i_i64[0] = 0;
    qfree(v84);
  }
  v4 = v82;
  if ( v82 )
  {
    v5 = v83.m128i_i64[0];
    if ( v83.m128i_i64[0] )
    {
      v6 = 0;
      do
      {
        v7 = v4 + 40 * v6;
        v8 = *(_QWORD *)(v7 + 16);
        if ( v8 )
        {
          v9 = *(_QWORD *)(v7 + 24);
          if ( v9 )
          {
            for ( k = 0; k != v9; ++k )
            {
              v11 = v8 + 72 * k;
              v12 = *(_QWORD *)(v11 + 32);
              if ( v12 )
              {
                *(_QWORD *)(v11 + 40) = 0;
                qfree(v12);
                v8 = *(_QWORD *)(v7 + 16);
              }
            }
          }
          *(_QWORD *)(v7 + 24) = 0;
          qfree(v8);
          v4 = v82;
        }
        ++v6;
      }
      while ( v5 != v6 );
    }
    v83.m128i_i64[0] = 0;
    qfree(v4);
  }
  if ( v80 )
  {
    v81.m128i_i64[0] = 0;
    qfree(v80);
  }
  if ( v71 )
  {
    v72.m128i_i64[0] = 0;
    qfree(v71);
  }
  return a1;
}

