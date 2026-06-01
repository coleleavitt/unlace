__int64 __fastcall sub_314D00(__m128i *a1, __m128i *a2, __int64 a3, __int64 a4, double a5, __m128 a6)
{
  unsigned int v6; // r12d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // rax
  __int32 v12; // ecx
  __m128i v13; // xmm0
  __int64 v14; // rdx
  __int32 v15; // ecx
  __int64 *v16; // rbp
  __int64 v17; // rsi
  __int64 v18; // r9
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  unsigned __int64 v25; // r8
  char v26; // bp
  unsigned __int64 v27; // rdx
  __int64 v28; // rsi
  __int32 v29; // eax
  __int64 v30; // rbp
  __int64 v31; // rax
  __int64 v32; // rcx
  __m128i v33; // xmm1
  __m128i v34; // xmm0
  __m128i v35; // xmm2
  __m128i v36; // xmm1
  __m128i v37; // xmm2
  __m128i v38; // xmm0
  __m128i v39; // xmm2
  __int32 v40; // eax
  __int64 v41; // rbp
  __int64 v42; // rax
  __m128i v43; // xmm0
  __int64 v44; // rcx
  __m128i v45; // xmm1
  char v46; // al
  __m128i v47; // xmm0
  __m128i v48; // xmm2
  __m128i v49; // xmm1
  __m128i v50; // xmm2
  __m128i v51; // xmm2
  _QWORD *v52; // rax
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rdx
  __m128i v57; // xmm1
  char v58; // al
  __m128i v59; // xmm0
  __m128i si128; // xmm2
  __m128i v61; // xmm1
  __m128i v62; // xmm2
  __m128i v63; // xmm2
  __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rdx
  char v67; // [rsp+0h] [rbp-188h]
  unsigned __int8 v68; // [rsp+0h] [rbp-188h]
  __int64 v69; // [rsp+8h] [rbp-180h]
  unsigned __int64 v70; // [rsp+8h] [rbp-180h]
  unsigned __int64 v71; // [rsp+10h] [rbp-178h]
  __int64 i; // [rsp+10h] [rbp-178h]
  __int64 v73; // [rsp+10h] [rbp-178h]
  unsigned __int8 v74; // [rsp+10h] [rbp-178h]
  __int64 v75; // [rsp+10h] [rbp-178h]
  __int64 v76; // [rsp+10h] [rbp-178h]
  __int64 *v77; // [rsp+18h] [rbp-170h]
  unsigned __int64 v78; // [rsp+30h] [rbp-158h]
  unsigned __int64 v79; // [rsp+38h] [rbp-150h]
  __m128i v80; // [rsp+40h] [rbp-148h] BYREF
  __m128i v81; // [rsp+50h] [rbp-138h] BYREF
  __m128i v82; // [rsp+60h] [rbp-128h] BYREF
  __m128i v83; // [rsp+70h] [rbp-118h] BYREF
  __m128i v84; // [rsp+80h] [rbp-108h] BYREF
  __m128i v85; // [rsp+90h] [rbp-F8h] BYREF
  __m256i v86; // [rsp+A0h] [rbp-E8h] BYREF
  __m256i v87; // [rsp+C0h] [rbp-C8h] BYREF
  __m128i v88; // [rsp+E0h] [rbp-A8h] BYREF
  __m128i v89; // [rsp+F0h] [rbp-98h] BYREF
  __m256i v90; // [rsp+100h] [rbp-88h] BYREF
  __m128i v91; // [rsp+120h] [rbp-68h]
  __m128i v92; // [rsp+130h] [rbp-58h]
  unsigned __int64 v93; // [rsp+148h] [rbp-40h]

  v93 = __readfsqword(0x28u);
  v6 = a3;
  switch ( a1->m128i_i32[0] & 0xF )
  {
    case 0:
    case 1:
    case 8:
      if ( a1 != a2 )
      {
        sub_312B80((__int64)a2, a5);
        sub_312C40((__int64)a2, (__int64)a1, v8, v9, a5);
      }
      a2->m128i_i32[1] = a1->m128i_i32[1] - v6;
      a1->m128i_i32[1] = v6;
      return 1;
    case 2:
      v11 = a1[1].m128i_i64[0];
      v12 = a1->m128i_i32[1];
      v13.m128i_i64[0] = 0;
      v88.m128i_i32[1] = a3;
      v14 = a1->m128i_i64[1];
      v88.m128i_i32[0] = 2;
      v15 = v12 - v6;
      v88.m128i_i64[1] = 0;
      v90.m256i_i32[1] = v15;
      v90.m256i_i32[0] = 2;
      memset(&v90.m256i_u64[1], 0, 24);
      v77 = (__int64 *)(v14 + 16 * v11);
      v89 = 0;
      if ( v77 == (__int64 *)v14 )
      {
        v52 = nullptr;
      }
      else
      {
        v16 = (__int64 *)v14;
        v67 = 8 * v6;
        do
        {
          v24 = *v16;
          v25 = (unsigned __int64)*v16 >> v67;
          if ( v6 == 8 )
          {
            v18 = *v16;
            v17 = -1;
          }
          else
          {
            v17 = (1LL << (8 * (unsigned __int8)v6)) - 1;
            v18 = v24 & v17;
          }
          v19 = v16[1] + v24 - 1;
          v20 = v17 & v19;
          v21 = v19 >> v67;
          if ( v25 == v21 )
          {
            v75 = v18;
            v70 = v20;
            v80.m128i_i64[0] = (unsigned __int64)*v16 >> v67;
            v80.m128i_i64[1] = 1;
            sub_316BB0(&v90.m256i_i64[1], &v80, 0.0, a6);
            v81.m128i_i64[0] = v75;
            v81.m128i_i64[1] = v70 - v75 + 1;
            sub_316BB0(&v88.m128i_i64[1], &v81, 0.0, a6);
          }
          else
          {
            if ( v18 != 0 && v25 + 1 == v21 && v20 != v17 )
            {
              v79 = v20;
              v78 = v21;
              v76 = (unsigned __int64)*v16 >> v67;
              v82.m128i_i64[0] = v18;
              v82.m128i_i64[1] = v17 + 1 - v18;
              sub_316BB0(&v88.m128i_i64[1], &v82, 0.0, a6);
              v83.m128i_i64[0] = 0;
              v83.m128i_i64[1] = v79 + 1;
              sub_316BB0(&v88.m128i_i64[1], &v83, 0.0, a6);
              v23 = v76;
              v22 = v78;
            }
            else
            {
              v71 = v21;
              v69 = (unsigned __int64)*v16 >> v67;
              v84.m128i_i64[0] = 0;
              v84.m128i_i64[1] = v17 + 1;
              sub_316BB0(&v88.m128i_i64[1], &v84, 0.0, a6);
              v22 = v71;
              v23 = v69;
            }
            v85.m128i_i64[0] = v23;
            v85.m128i_i64[1] = v22 + 1 - v23;
            sub_316BB0(&v90.m256i_i64[1], &v85, 0.0, a6);
          }
          v16 += 2;
        }
        while ( v77 != v16 );
        v15 = v90.m256i_i32[1];
        v52 = (_QWORD *)v90.m256i_i64[1];
      }
      if ( *v52 )
        goto LABEL_37;
      v64 = v52[1];
      v65 = -1;
      v66 = v64 - 1;
      if ( v15 != 8 )
        v65 = (1LL << (8 * (unsigned __int8)v15)) - 1;
      if ( v66 != v65 )
      {
LABEL_37:
        v53 = v88.m128i_i64[1];
        if ( *(_QWORD *)v88.m128i_i64[1] )
          goto LABEL_41;
        goto LABEL_38;
      }
      sub_312B80((__int64)&v90, 0.0);
      v53 = v88.m128i_i64[1];
      v90.m256i_i32[0] = 1;
      if ( !*(_QWORD *)v88.m128i_i64[1] )
      {
LABEL_38:
        v54 = *(_QWORD *)(v53 + 8);
        v55 = -1;
        v56 = v54 - 1;
        if ( v6 != 8 )
          v55 = (1LL << (8 * (unsigned __int8)v6)) - 1;
        if ( v56 == v55 )
        {
          sub_312B80((__int64)&v88, 0.0);
          v88.m128i_i32[0] = 1;
          if ( v90.m256i_i32[0] == 1 )
          {
            v58 = 0;
            goto LABEL_43;
          }
          goto LABEL_42;
        }
LABEL_41:
        if ( v90.m256i_i32[0] == 1 )
          goto LABEL_49;
LABEL_42:
        v57 = _mm_loadu_si128(a2);
        v58 = 1;
        v59 = _mm_loadu_si128(a2 + 1);
        *a2 = _mm_load_si128((const __m128i *)&v90);
        si128 = _mm_load_si128((const __m128i *)&v90.m256i_u64[2]);
        *(__m128i *)v90.m256i_i8 = v57;
        a2[1] = si128;
        v61 = _mm_loadu_si128(a1);
        v62 = _mm_load_si128(&v88);
        *(__m128i *)&v90.m256i_u64[2] = v59;
        v13 = _mm_loadu_si128(a1 + 1);
        *a1 = v62;
        v63 = _mm_load_si128(&v89);
        v91 = v61;
        v92 = v13;
        a1[1] = v63;
        v88 = v61;
        v89 = v13;
        goto LABEL_43;
      }
LABEL_49:
      if ( v88.m128i_i32[0] != 1 )
        goto LABEL_42;
      v58 = 0;
LABEL_43:
      v68 = v58;
      sub_312B80((__int64)&v90, *(double *)v13.m128i_i64);
      sub_312B80((__int64)&v88, *(double *)v13.m128i_i64);
      return v68;
    case 5:
      v26 = 8 * a3;
      a2->m128i_i32[1] = a1->m128i_i32[1] - a3;
      sub_313910(
        (__int64)a2,
        (unsigned __int64)a1->m128i_i64[1] >> (8 * (unsigned __int8)a3),
        (unsigned __int64)a1[1].m128i_i64[0] >> (8 * (unsigned __int8)a3),
        a5,
        a6);
      a1->m128i_i32[1] = v6;
      v27 = a1[1].m128i_u64[0];
      v28 = -1;
      if ( v6 != 8 )
      {
        v28 = (1LL << v26) - 1;
        v27 &= v28;
      }
      sub_313910((__int64)a1, a1->m128i_i64[1] & v28, v27, a5, a6);
      return 1;
    case 6:
      v29 = a1->m128i_i32[1];
      v30 = a1->m128i_i64[1];
      v86.m256i_i32[1] = a3;
      v86.m256i_i32[0] = 1;
      v87.m256i_i32[1] = v29 - a3;
      v31 = a1[1].m128i_i64[0];
      memset(&v86.m256i_u64[1], 0, 24);
      memset(&v87.m256i_u64[1], 0, 24);
      v87.m256i_i32[0] = 1;
      for ( i = v30 + 32 * v31; i != v30; v30 += 32 )
      {
        sub_312C40((__int64)&v88, v30, a3, a4, 0.0);
        memset(&v90.m256i_u64[1], 0, 24);
        v90.m256i_i64[0] = 0x800000000LL;
        if ( (unsigned __int8)sub_314D00(&v88, (__m128i *)&v90, v6, v32) )
        {
          sub_3147B0((__int64)&v86, v88.m128i_i32, 0.0);
          sub_3147B0((__int64)&v87, v90.m256i_i32, 0.0);
        }
        sub_312B80((__int64)&v90, 0.0);
        sub_312B80((__int64)&v88, 0.0);
      }
      v33 = _mm_loadu_si128(a2);
      v34 = _mm_loadu_si128(a2 + 1);
      *a2 = _mm_load_si128((const __m128i *)&v87);
      v35 = _mm_load_si128((const __m128i *)&v87.m256i_u64[2]);
      *(__m128i *)v87.m256i_i8 = v33;
      a2[1] = v35;
      v36 = _mm_loadu_si128(a1);
      v37 = _mm_load_si128((const __m128i *)&v86);
      *(__m128i *)&v87.m256i_u64[2] = v34;
      v38 = _mm_loadu_si128(a1 + 1);
      *a1 = v37;
      v39 = _mm_load_si128((const __m128i *)&v86.m256i_u64[2]);
      v91 = v36;
      a1[1] = v39;
      v92 = v38;
      *(__m128i *)v86.m256i_i8 = v36;
      *(__m128i *)&v86.m256i_u64[2] = v38;
      sub_312B80((__int64)&v87, *(double *)v38.m128i_i64);
      sub_312B80((__int64)&v86, *(double *)v38.m128i_i64);
      return 1;
    case 7:
      v40 = a1->m128i_i32[1];
      v41 = a1->m128i_i64[1];
      v86.m256i_i32[0] = 0;
      v86.m256i_i32[1] = a3;
      v87.m256i_i32[1] = v40 - a3;
      v42 = a1[1].m128i_i64[0];
      v87.m256i_i32[0] = 0;
      memset(&v86.m256i_u64[1], 0, 24);
      memset(&v87.m256i_u64[1], 0, 24);
      v73 = v41 + 32 * v42;
      if ( v73 == v41 )
        goto LABEL_29;
      while ( 1 )
      {
        sub_312C40((__int64)&v88, v41, a3, a4, 0.0);
        v43.m128i_i64[0] = 0;
        memset(&v90.m256i_u64[1], 0, 24);
        v90.m256i_i64[0] = 0x800000000LL;
        if ( !(unsigned __int8)sub_314D00(&v88, (__m128i *)&v90, v6, v44) )
          break;
        sub_314C00(v86.m256i_i32, v88.m128i_i32, 0.0);
        sub_314C00(v87.m256i_i32, v90.m256i_i32, 0.0);
        v41 += 32;
        sub_312B80((__int64)&v90, 0.0);
        sub_312B80((__int64)&v88, 0.0);
        if ( v73 == v41 )
        {
LABEL_29:
          v45 = _mm_loadu_si128(a2);
          v46 = 1;
          v47 = _mm_loadu_si128(a2 + 1);
          *a2 = _mm_load_si128((const __m128i *)&v87);
          v48 = _mm_load_si128((const __m128i *)&v87.m256i_u64[2]);
          *(__m128i *)v87.m256i_i8 = v45;
          a2[1] = v48;
          v49 = _mm_loadu_si128(a1);
          v50 = _mm_load_si128((const __m128i *)&v86);
          *(__m128i *)&v87.m256i_u64[2] = v47;
          v43 = _mm_loadu_si128(a1 + 1);
          *a1 = v50;
          v51 = _mm_load_si128((const __m128i *)&v86.m256i_u64[2]);
          v91 = v49;
          v92 = v43;
          a1[1] = v51;
          *(__m128i *)v86.m256i_i8 = v49;
          *(__m128i *)&v86.m256i_u64[2] = v43;
          goto LABEL_30;
        }
      }
      sub_312B80((__int64)&v90, 0.0);
      sub_312B80((__int64)&v88, 0.0);
      v46 = 0;
LABEL_30:
      v74 = v46;
      sub_312B80((__int64)&v87, *(double *)v43.m128i_i64);
      sub_312B80((__int64)&v86, *(double *)v43.m128i_i64);
      return v74;
    default:
      return 0;
  }
}

