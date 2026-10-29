__int64 __fastcall sub_30FF80(__m128i *a1, __m128i *a2, __int32 a3)
{
  __int64 v6; // rax
  __int32 v7; // ecx
  __int64 *v8; // rdx
  __int32 v9; // ecx
  __int64 *v10; // rbp
  __int64 v11; // rsi
  __int64 v12; // r9
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r9
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r8
  __int64 v20; // rax
  unsigned __int64 v21; // r8
  char v22; // bp
  unsigned __int64 v23; // rdx
  __int64 v24; // rsi
  __int32 v25; // eax
  int *v26; // rbp
  __int64 v27; // rax
  int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  __m128i v31; // xmm1
  __m128i v32; // xmm0
  __m128i v33; // xmm2
  __m128i v34; // xmm1
  __m128i v35; // xmm2
  __m128i v36; // xmm0
  __m128i v37; // xmm2
  __int32 v38; // eax
  int *v39; // rbp
  __int64 v40; // rax
  int v41; // ecx
  int v42; // r8d
  int v43; // r9d
  __m128i v44; // xmm1
  char v45; // al
  __m128i v46; // xmm0
  __m128i v47; // xmm2
  __m128i v48; // xmm1
  __m128i v49; // xmm2
  __m128i v50; // xmm0
  __m128i v51; // xmm2
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  _QWORD *v55; // rax
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rdx
  __m128i v60; // xmm1
  char v61; // al
  __m128i v62; // xmm0
  __m128i si128; // xmm2
  __m128i v64; // xmm1
  __m128i v65; // xmm2
  __m128i v66; // xmm0
  __m128i v67; // xmm2
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rdx
  __int64 v73; // rax
  __int64 v74; // rdx
  char v75; // [rsp+0h] [rbp-188h]
  __m256i *v76; // [rsp+0h] [rbp-188h]
  __m256i *v77; // [rsp+0h] [rbp-188h]
  unsigned __int8 v78; // [rsp+0h] [rbp-188h]
  unsigned __int64 v79; // [rsp+8h] [rbp-180h]
  __m256i *v80; // [rsp+8h] [rbp-180h]
  __m256i *v81; // [rsp+8h] [rbp-180h]
  unsigned __int64 v82; // [rsp+8h] [rbp-180h]
  unsigned __int64 v83; // [rsp+10h] [rbp-178h]
  int *v84; // [rsp+10h] [rbp-178h]
  int *v85; // [rsp+10h] [rbp-178h]
  unsigned __int8 v86; // [rsp+10h] [rbp-178h]
  __int64 v87; // [rsp+10h] [rbp-178h]
  unsigned __int64 v88; // [rsp+10h] [rbp-178h]
  int v89; // [rsp+18h] [rbp-170h]
  __int64 *v90; // [rsp+18h] [rbp-170h]
  int v91; // [rsp+20h] [rbp-168h]
  unsigned __int64 v92; // [rsp+30h] [rbp-158h]
  unsigned __int64 v93; // [rsp+38h] [rbp-150h]
  _QWORD v94[2]; // [rsp+40h] [rbp-148h] BYREF
  _QWORD v95[2]; // [rsp+50h] [rbp-138h] BYREF
  _QWORD v96[2]; // [rsp+60h] [rbp-128h] BYREF
  _QWORD v97[2]; // [rsp+70h] [rbp-118h] BYREF
  _QWORD v98[2]; // [rsp+80h] [rbp-108h] BYREF
  _QWORD v99[2]; // [rsp+90h] [rbp-F8h] BYREF
  __m256i v100; // [rsp+A0h] [rbp-E8h] BYREF
  __m256i v101; // [rsp+C0h] [rbp-C8h] BYREF
  __m128i v102; // [rsp+E0h] [rbp-A8h] BYREF
  __m128i v103; // [rsp+F0h] [rbp-98h] BYREF
  __m256i v104; // [rsp+100h] [rbp-88h] BYREF
  __m128i v105; // [rsp+120h] [rbp-68h]
  __m128i v106; // [rsp+130h] [rbp-58h]
  unsigned __int64 v107; // [rsp+148h] [rbp-40h]

  v107 = __readfsqword(0x28u);
  switch ( a1->m128i_i32[0] & 0xF )
  {
    case 0:
    case 1:
    case 8:
      if ( a1 != a2 )
      {
        sub_30DE00((__int64)a2);
        sub_30DEC0((__int64)a2, a1->m128i_i32);
      }
      a2->m128i_i32[1] = a1->m128i_i32[1] - a3;
      a1->m128i_i32[1] = a3;
      return 1;
    case 2:
      v6 = a1[1].m128i_i64[0];
      v7 = a1->m128i_i32[1];
      v102.m128i_i32[1] = a3;
      v8 = (__int64 *)a1->m128i_i64[1];
      v102.m128i_i32[0] = 2;
      v9 = v7 - a3;
      v102.m128i_i64[1] = 0;
      v104.m256i_i32[1] = v9;
      v104.m256i_i32[0] = 2;
      memset(&v104.m256i_u64[1], 0, 24);
      v90 = &v8[2 * v6];
      v103 = 0;
      if ( v90 == v8 )
      {
        v55 = nullptr;
      }
      else
      {
        v10 = v8;
        v75 = 8 * a3;
        do
        {
          v20 = *v10;
          v21 = (unsigned __int64)*v10 >> v75;
          if ( a3 == 8 )
          {
            v12 = *v10;
            v11 = -1;
          }
          else
          {
            v11 = (1LL << (8 * (unsigned __int8)a3)) - 1;
            v12 = v20 & v11;
          }
          v13 = v10[1] + v20 - 1;
          v14 = v11 & v13;
          v15 = v13 >> v75;
          if ( v21 == v15 )
          {
            v87 = v12;
            v82 = v14;
            v94[0] = (unsigned __int64)*v10 >> v75;
            v94[1] = 1;
            sub_311E30(&v104.m256i_u64[1], v94, v15, v15, v21, v12);
            v95[0] = v87;
            v95[1] = v82 - v87 + 1;
            sub_311E30(&v102.m128i_u64[1], v95, v52, v53, v54, v87);
          }
          else
          {
            if ( v12 != 0 && v21 + 1 == v15 && v14 != v11 )
            {
              v93 = v14;
              v92 = v15;
              v88 = (unsigned __int64)*v10 >> v75;
              v96[0] = v12;
              v96[1] = v11 + 1 - v12;
              sub_311E30(&v102.m128i_u64[1], v96, v15, v15, v21, v12);
              v97[0] = 0;
              v97[1] = v93 + 1;
              sub_311E30(&v102.m128i_u64[1], v97, v68, v69, v70, v71);
              v19 = v88;
              v18 = v92;
            }
            else
            {
              v83 = v15;
              v79 = (unsigned __int64)*v10 >> v75;
              v98[0] = 0;
              v98[1] = v11 + 1;
              sub_311E30(&v102.m128i_u64[1], v98, v15, v15, v21, v12);
              v18 = v83;
              v19 = v79;
            }
            v99[0] = v19;
            v99[1] = v18 + 1 - v19;
            sub_311E30(&v104.m256i_u64[1], v99, v16, v18, v19, v17);
          }
          v10 += 2;
        }
        while ( v90 != v10 );
        v9 = v104.m256i_i32[1];
        v55 = (_QWORD *)v104.m256i_i64[1];
      }
      if ( *v55 )
        goto LABEL_39;
      v72 = v55[1];
      v73 = -1;
      v74 = v72 - 1;
      if ( v9 != 8 )
        v73 = (1LL << (8 * (unsigned __int8)v9)) - 1;
      if ( v74 != v73 )
      {
LABEL_39:
        v56 = v102.m128i_i64[1];
        if ( *(_QWORD *)v102.m128i_i64[1] )
          goto LABEL_43;
        goto LABEL_40;
      }
      sub_30DE00((__int64)&v104);
      v56 = v102.m128i_i64[1];
      v104.m256i_i32[0] = 1;
      if ( !*(_QWORD *)v102.m128i_i64[1] )
      {
LABEL_40:
        v57 = *(_QWORD *)(v56 + 8);
        v58 = -1;
        v59 = v57 - 1;
        if ( a3 != 8 )
          v58 = (1LL << (8 * (unsigned __int8)a3)) - 1;
        if ( v59 == v58 )
        {
          sub_30DE00((__int64)&v102);
          v102.m128i_i32[0] = 1;
          if ( v104.m256i_i32[0] == 1 )
          {
            v61 = 0;
            goto LABEL_45;
          }
          goto LABEL_44;
        }
LABEL_43:
        if ( v104.m256i_i32[0] == 1 )
          goto LABEL_51;
LABEL_44:
        v60 = _mm_loadu_si128(a2);
        v61 = 1;
        v62 = _mm_loadu_si128(a2 + 1);
        *a2 = _mm_load_si128((const __m128i *)&v104);
        si128 = _mm_load_si128((const __m128i *)&v104.m256i_u64[2]);
        *(__m128i *)v104.m256i_i8 = v60;
        a2[1] = si128;
        v64 = _mm_loadu_si128(a1);
        v65 = _mm_load_si128(&v102);
        *(__m128i *)&v104.m256i_u64[2] = v62;
        v66 = _mm_loadu_si128(a1 + 1);
        *a1 = v65;
        v67 = _mm_load_si128(&v103);
        v105 = v64;
        v106 = v66;
        a1[1] = v67;
        v102 = v64;
        v103 = v66;
        goto LABEL_45;
      }
LABEL_51:
      if ( v102.m128i_i32[0] != 1 )
        goto LABEL_44;
      v61 = 0;
LABEL_45:
      v78 = v61;
      sub_30DE00((__int64)&v104);
      sub_30DE00((__int64)&v102);
      return v78;
    case 5:
      v22 = 8 * a3;
      a2->m128i_i32[1] = a1->m128i_i32[1] - a3;
      sub_30EB90(
        (__int64)a2,
        (unsigned __int64)a1->m128i_i64[1] >> (8 * (unsigned __int8)a3),
        (unsigned __int64)a1[1].m128i_i64[0] >> (8 * (unsigned __int8)a3));
      a1->m128i_i32[1] = a3;
      v23 = a1[1].m128i_u64[0];
      v24 = -1;
      if ( a3 != 8 )
      {
        v24 = (1LL << v22) - 1;
        v23 &= v24;
      }
      sub_30EB90((__int64)a1, a1->m128i_i64[1] & v24, v23);
      return 1;
    case 6:
      v25 = a1->m128i_i32[1];
      v26 = (int *)a1->m128i_i64[1];
      v100.m256i_i32[1] = a3;
      v100.m256i_i32[0] = 1;
      v101.m256i_i32[1] = v25 - a3;
      v27 = a1[1].m128i_i64[0];
      memset(&v100.m256i_u64[1], 0, 24);
      memset(&v101.m256i_u64[1], 0, 24);
      v101.m256i_i32[0] = 1;
      v84 = &v26[8 * v27];
      if ( v84 == v26 )
      {
        v80 = &v101;
        v76 = &v100;
      }
      else
      {
        v80 = &v101;
        v76 = &v100;
        do
        {
          sub_30DEC0((__int64)&v102, v26);
          memset(&v104.m256i_u64[1], 0, 24);
          v104.m256i_i64[0] = 0x800000000LL;
          if ( (unsigned __int8)sub_30FF80(
                                  (unsigned int)&v102,
                                  (unsigned int)&v104,
                                  a3,
                                  v28,
                                  v29,
                                  v30,
                                  (__int64)v76,
                                  (_DWORD)v80,
                                  (_DWORD)v84,
                                  v89,
                                  v91) )
          {
            sub_30FA30((__int64)v76, v102.m128i_i32);
            sub_30FA30((__int64)v80, v104.m256i_i32);
          }
          sub_30DE00((__int64)&v104);
          sub_30DE00((__int64)&v102);
          v26 += 8;
        }
        while ( v84 != v26 );
      }
      v31 = _mm_loadu_si128(a2);
      v32 = _mm_loadu_si128(a2 + 1);
      *a2 = _mm_load_si128((const __m128i *)&v101);
      v33 = _mm_load_si128((const __m128i *)&v101.m256i_u64[2]);
      *(__m128i *)v101.m256i_i8 = v31;
      a2[1] = v33;
      v34 = _mm_loadu_si128(a1);
      v35 = _mm_load_si128((const __m128i *)&v100);
      *(__m128i *)&v101.m256i_u64[2] = v32;
      v36 = _mm_loadu_si128(a1 + 1);
      *a1 = v35;
      v37 = _mm_load_si128((const __m128i *)&v100.m256i_u64[2]);
      v105 = v34;
      a1[1] = v37;
      v106 = v36;
      *(__m128i *)v100.m256i_i8 = v34;
      *(__m128i *)&v100.m256i_u64[2] = v36;
      sub_30DE00((__int64)v80);
      sub_30DE00((__int64)v76);
      return 1;
    case 7:
      v38 = a1->m128i_i32[1];
      v39 = (int *)a1->m128i_i64[1];
      v100.m256i_i32[0] = 0;
      v100.m256i_i32[1] = a3;
      v101.m256i_i32[1] = v38 - a3;
      v40 = a1[1].m128i_i64[0];
      v101.m256i_i32[0] = 0;
      memset(&v100.m256i_u64[1], 0, 24);
      memset(&v101.m256i_u64[1], 0, 24);
      v85 = &v39[8 * v40];
      if ( v85 == v39 )
      {
        v81 = &v101;
        v77 = &v100;
LABEL_31:
        v44 = _mm_loadu_si128(a2);
        v45 = 1;
        v46 = _mm_loadu_si128(a2 + 1);
        *a2 = _mm_load_si128((const __m128i *)&v101);
        v47 = _mm_load_si128((const __m128i *)&v101.m256i_u64[2]);
        *(__m128i *)v101.m256i_i8 = v44;
        a2[1] = v47;
        v48 = _mm_loadu_si128(a1);
        v49 = _mm_load_si128((const __m128i *)&v100);
        *(__m128i *)&v101.m256i_u64[2] = v46;
        v50 = _mm_loadu_si128(a1 + 1);
        *a1 = v49;
        v51 = _mm_load_si128((const __m128i *)&v100.m256i_u64[2]);
        v105 = v48;
        v106 = v50;
        a1[1] = v51;
        *(__m128i *)v100.m256i_i8 = v48;
        *(__m128i *)&v100.m256i_u64[2] = v50;
        goto LABEL_32;
      }
      v81 = &v101;
      v77 = &v100;
      while ( 1 )
      {
        sub_30DEC0((__int64)&v102, v39);
        memset(&v104.m256i_u64[1], 0, 24);
        v104.m256i_i64[0] = 0x800000000LL;
        if ( !(unsigned __int8)sub_30FF80(
                                 (unsigned int)&v102,
                                 (unsigned int)&v104,
                                 a3,
                                 v41,
                                 v42,
                                 v43,
                                 (__int64)v77,
                                 (_DWORD)v81,
                                 (_DWORD)v85,
                                 v89,
                                 v91) )
          break;
        sub_30FE80(v77->m256i_i32, v102.m128i_i32);
        sub_30FE80(v81->m256i_i32, v104.m256i_i32);
        v39 += 8;
        sub_30DE00((__int64)&v104);
        sub_30DE00((__int64)&v102);
        if ( v85 == v39 )
          goto LABEL_31;
      }
      sub_30DE00((__int64)&v104);
      sub_30DE00((__int64)&v102);
      v45 = 0;
LABEL_32:
      v86 = v45;
      sub_30DE00((__int64)v81);
      sub_30DE00((__int64)v77);
      return v86;
    default:
      return 0;
  }
}

