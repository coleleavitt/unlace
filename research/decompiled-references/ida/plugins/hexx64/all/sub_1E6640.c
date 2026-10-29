__int64 __fastcall sub_1E6640(__int64 a1, unsigned __int64 a2, const __m128i *a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // r12
  unsigned int v8; // r13d
  __int64 v9; // rax
  __int64 v10; // r15
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // r13
  unsigned __int64 i; // rax
  unsigned __int64 *v16; // rsi
  __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rsi
  __int64 v20; // rcx
  __m128i v21; // rax
  __int64 v23; // rbp
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rcx
  __m128i v27; // xmm1
  __m128i v28; // xmm2
  __m128i v29; // xmm0
  unsigned __int8 v30; // al
  __int64 v31; // rcx
  unsigned __int64 *v32; // rax
  unsigned __int64 v33; // rdi
  __m128i v34; // xmm1
  __m128i v35; // xmm1
  __m128i v36; // xmm2
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __m128i v41; // xmm1
  __m128i v42; // xmm0
  __m128i v43; // xmm2
  __int64 v44; // rcx
  __m128i v45; // kr00_16
  __m128i v46; // rax
  __int128 v47; // kr10_16
  __int128 v48; // kr20_16
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __m128i si128; // xmm1
  __m128i v54; // xmm0
  __m128i v55; // xmm2
  __int64 v56; // rdx
  __int64 v57; // r13
  __int64 v58; // r12
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // rcx
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // rax
  __m128i v63; // xmm1
  __m128i v64; // xmm0
  __m128i v65; // xmm2
  unsigned __int8 v66; // al
  __int64 v67; // rdx
  unsigned __int64 v68; // rdi
  unsigned __int64 v69; // rsi
  __int64 v70; // rcx
  __int64 v71; // rdi
  __int64 v72; // rsi
  __m128i v73; // kr90_16
  __m128i v74; // krA0_16
  __int64 v75; // rcx
  __m128i v76; // xmm0
  __int64 v77; // rax
  unsigned __int64 v78; // rsi
  __m128i v79; // xmm1
  __m128i v80; // xmm0
  __m128i v81; // xmm2
  __m128i v82; // xmm1
  __m128i v83; // xmm0
  __m128i v84; // xmm2
  __m128i v85; // xmm1
  __m128i v86; // xmm0
  __m128i v87; // xmm2
  unsigned __int64 v88; // rsi
  __int64 v89; // rdx
  unsigned __int64 v90; // rcx
  __m128i v91; // xmm1
  __m128i v92; // xmm2
  __m128i v93; // xmm1
  __m128i v94; // xmm0
  __m128i v95; // xmm2
  __int64 v96; // rcx
  __int64 v97; // rax
  __int64 v98; // rsi
  __m128i v99; // krB0_16
  __m128i v100; // rax
  __int128 v101; // krC0_16
  __int128 v102; // krD0_16
  unsigned __int8 v103; // bp
  __int64 v104; // rdx
  unsigned __int64 v105; // rax
  unsigned __int64 v106; // rax
  __m128i *v107; // [rsp+0h] [rbp-218h]
  unsigned __int8 v108; // [rsp+0h] [rbp-218h]
  int *v109; // [rsp+8h] [rbp-210h]
  char v110; // [rsp+10h] [rbp-208h]
  unsigned __int64 **v111; // [rsp+10h] [rbp-208h]
  unsigned __int64 **v112; // [rsp+10h] [rbp-208h]
  unsigned __int64 v114; // [rsp+18h] [rbp-200h]
  __int64 v115; // [rsp+20h] [rbp-1F8h]
  __int64 v116; // [rsp+28h] [rbp-1F0h]
  __int64 *v117; // [rsp+30h] [rbp-1E8h]
  __m128i *v118; // [rsp+30h] [rbp-1E8h]
  unsigned int v119; // [rsp+38h] [rbp-1E0h]
  unsigned __int8 v120; // [rsp+4Eh] [rbp-1CAh]
  unsigned __int8 v121; // [rsp+4Fh] [rbp-1C9h]
  __m256i v122; // [rsp+50h] [rbp-1C8h] BYREF
  __m128i v123; // [rsp+70h] [rbp-1A8h] BYREF
  __m128i v124; // [rsp+80h] [rbp-198h] BYREF
  __m128i v125; // [rsp+90h] [rbp-188h] BYREF
  __m128i v126; // [rsp+A0h] [rbp-178h] BYREF
  __m256i v127; // [rsp+B0h] [rbp-168h] BYREF
  __m128i v128; // [rsp+D0h] [rbp-148h] BYREF
  __m128i v129; // [rsp+E0h] [rbp-138h] BYREF
  __m256i v130; // [rsp+F0h] [rbp-128h] BYREF
  __m256i v131; // [rsp+110h] [rbp-108h] BYREF
  __m256i v132; // [rsp+130h] [rbp-E8h] BYREF
  __m256i v133; // [rsp+150h] [rbp-C8h] BYREF
  __m256i v134; // [rsp+170h] [rbp-A8h] BYREF
  __m256i v135; // [rsp+190h] [rbp-88h] BYREF
  __m128i v136; // [rsp+1B0h] [rbp-68h]
  __m128i v137; // [rsp+1C0h] [rbp-58h]
  unsigned __int64 v138; // [rsp+1D8h] [rbp-40h]

  v6 = *(int *)(a4 + 4);
  v7 = *(_QWORD *)(a2 + 24) + *(int *)(a2 + 44);
  v109 = (int *)a4;
  v8 = *(_DWORD *)(a4 + 4);
  v138 = __readfsqword(0x28u);
  v9 = a3->m128i_i64[0];
  v117 = (__int64 *)a2;
  v110 = 0;
  v10 = v6 + a3->m128i_i64[0];
  if ( a3->m128i_i8[8] == 5 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 1504LL) + 96LL);
    v110 = *(_BYTE *)(v6 + 145);
  }
  if ( *(_DWORD *)(a2 + 40) != 8 )
  {
    LOBYTE(v6) = v10 <= v7;
    LOBYTE(a4) = v10 <= v7 && v9 >= *(_QWORD *)(a2 + 24);
    v120 = a4;
    if ( (_BYTE)a4 )
    {
      if ( v110 )
      {
        if ( v9 <= *(_QWORD *)(a2 + 24) || v10 != v7 )
        {
          v118 = (__m128i *)(a2 + 40);
          goto LABEL_67;
        }
      }
      else
      {
        v118 = (__m128i *)(a2 + 40);
        if ( *(_QWORD *)(a2 + 24) != v9 || v10 >= v7 )
          goto LABEL_67;
      }
      v118 = (__m128i *)(a2 + 40);
      v66 = sub_3148F0((__m128i *)(a2 + 40), v109);
      if ( v66 )
      {
        if ( !*(_DWORD *)(a2 + 40) )
        {
          v108 = v66;
          sub_13FCB0((unsigned __int64 **)(a1 + 8));
          *(_BYTE *)(a1 + 24) = 1;
          return v108;
        }
        return v66;
      }
LABEL_67:
      sub_312C40((__int64)&v132, (__int64)v118, v6, a4);
      v38 = a3->m128i_i64[0];
      v133.m256i_i64[0] = 0x800000000LL;
      memset(&v133.m256i_u64[1], 0, 24);
      if ( *(_QWORD *)(a2 + 24) >= v38 )
        goto LABEL_68;
      v44 = *(_QWORD *)(a2 + 24);
      if ( v110 )
      {
        if ( (unsigned __int8)sub_314D00(
                                (__m128i *)&v132,
                                (__m128i *)&v133,
                                (unsigned int)(v132.m256i_i32[1] - v38 + v44),
                                v44) )
        {
          v46 = *(__m128i *)&v133.m256i_u64[2];
          v45 = *(__m128i *)v133.m256i_i8;
          v47 = *(_OWORD *)v132.m256i_i8;
          v48 = *(_OWORD *)&v132.m256i_u64[2];
          goto LABEL_89;
        }
      }
      else if ( (unsigned __int8)sub_314D00((__m128i *)&v132, (__m128i *)&v133, (unsigned int)(v38 - v44), v44) )
      {
        v45 = *(__m128i *)v132.m256i_i8;
        v46 = *(__m128i *)&v132.m256i_u64[2];
        v47 = *(_OWORD *)v133.m256i_i8;
        v48 = *(_OWORD *)&v133.m256i_u64[2];
LABEL_89:
        v136 = v45;
        v137 = v46;
        *(_OWORD *)v132.m256i_i8 = v47;
        *(_OWORD *)&v132.m256i_u64[2] = v48;
        *(__m128i *)v133.m256i_i8 = v45;
        *(__m128i *)&v133.m256i_u64[2] = v46;
LABEL_68:
        memset(&v134.m256i_u64[1], 0, 24);
        v134.m256i_i64[0] = 0x800000000LL;
        if ( v10 < v7 )
        {
          if ( v110 )
          {
            if ( !(unsigned __int8)sub_314D00((__m128i *)&v132, (__m128i *)&v134, v132.m256i_i32[1] - v8, v37) )
              goto LABEL_85;
            si128 = _mm_load_si128((const __m128i *)&v132);
            v54 = _mm_load_si128((const __m128i *)&v132.m256i_u64[2]);
            *(__m128i *)v132.m256i_i8 = _mm_load_si128((const __m128i *)&v134);
            v55 = _mm_load_si128((const __m128i *)&v134.m256i_u64[2]);
            v136 = si128;
            v137 = v54;
            *(__m128i *)&v132.m256i_u64[2] = v55;
            *(__m128i *)v134.m256i_i8 = si128;
            *(__m128i *)&v134.m256i_u64[2] = v54;
          }
          else if ( !(unsigned __int8)sub_314D00((__m128i *)&v132, (__m128i *)&v134, v8, v37) )
          {
            goto LABEL_85;
          }
        }
        if ( !(unsigned __int8)sub_3147B0((__int64)&v132, v109) )
        {
LABEL_76:
          sub_312B80((__int64)&v134);
LABEL_77:
          sub_312B80((__int64)&v133);
          sub_312B80((__int64)&v132);
          return v120;
        }
        if ( !v132.m256i_i32[0] )
        {
          sub_13FCB0((unsigned __int64 **)(a1 + 8));
          *(_BYTE *)(a1 + 24) = 1;
          goto LABEL_76;
        }
        if ( *(_QWORD *)(a2 + 24) < a3->m128i_i64[0] )
        {
          if ( v110 )
          {
            sub_312C40((__int64)&v135, (__int64)&v132, v39, v40);
            if ( !(unsigned __int8)sub_313C40((__int64)&v135, (unsigned int *)&v133) )
              goto LABEL_165;
            v85 = _mm_load_si128((const __m128i *)&v133);
            v86 = _mm_load_si128((const __m128i *)&v133.m256i_u64[2]);
            *(__m128i *)v133.m256i_i8 = _mm_load_si128((const __m128i *)&v135);
            v87 = _mm_load_si128((const __m128i *)&v135.m256i_u64[2]);
            v136 = v85;
            v137 = v86;
            *(__m128i *)&v133.m256i_u64[2] = v87;
            *(__m128i *)v135.m256i_i8 = v85;
            *(__m128i *)&v135.m256i_u64[2] = v86;
            sub_312B80((__int64)&v135);
          }
          else if ( !(unsigned __int8)sub_313C40((__int64)&v133, (unsigned int *)&v132) )
          {
            goto LABEL_85;
          }
          v63 = _mm_load_si128((const __m128i *)&v132);
          v64 = _mm_load_si128((const __m128i *)&v132.m256i_u64[2]);
          *(__m128i *)v132.m256i_i8 = _mm_load_si128((const __m128i *)&v133);
          v65 = _mm_load_si128((const __m128i *)&v133.m256i_u64[2]);
          v136 = v63;
          v137 = v64;
          *(__m128i *)&v132.m256i_u64[2] = v65;
          *(__m128i *)v133.m256i_i8 = v63;
          *(__m128i *)&v133.m256i_u64[2] = v64;
        }
        if ( v10 >= v7 )
        {
LABEL_75:
          sub_3147B0((__int64)&v132, v118->m128i_i32);
          v41 = _mm_loadu_si128((const __m128i *)(a2 + 40));
          v42 = _mm_loadu_si128(v118 + 1);
          *(__m128i *)(a2 + 40) = _mm_load_si128((const __m128i *)&v132);
          v43 = _mm_load_si128((const __m128i *)&v132.m256i_u64[2]);
          v136 = v41;
          v137 = v42;
          v118[1] = v43;
          *(__m128i *)v132.m256i_i8 = v41;
          *(__m128i *)&v132.m256i_u64[2] = v42;
          goto LABEL_76;
        }
        if ( !v110 )
        {
          if ( (unsigned __int8)sub_313C40((__int64)&v132, (unsigned int *)&v134) )
            goto LABEL_75;
LABEL_85:
          v120 = 0;
          goto LABEL_76;
        }
        sub_312C40((__int64)&v135, (__int64)&v134, v39, v40);
        if ( (unsigned __int8)sub_313C40((__int64)&v135, (unsigned int *)&v132) )
        {
          v79 = _mm_load_si128((const __m128i *)&v132);
          v80 = _mm_load_si128((const __m128i *)&v132.m256i_u64[2]);
          *(__m128i *)v132.m256i_i8 = _mm_load_si128((const __m128i *)&v135);
          v81 = _mm_load_si128((const __m128i *)&v135.m256i_u64[2]);
          v136 = v79;
          v137 = v80;
          *(__m128i *)&v132.m256i_u64[2] = v81;
          *(__m128i *)v135.m256i_i8 = v79;
          *(__m128i *)&v135.m256i_u64[2] = v80;
          sub_312B80((__int64)&v135);
          goto LABEL_75;
        }
LABEL_165:
        sub_312B80((__int64)&v135);
        goto LABEL_85;
      }
      v120 = 0;
      goto LABEL_77;
    }
  }
  v120 = sub_312AF0((__int64)v109, nullptr);
  if ( !v120 )
    return v120;
  memset(&v122.m256i_u64[1], 0, 24);
  v122.m256i_i64[0] = 0x800000000LL;
  if ( *(_QWORD *)(a2 + 24) > a3->m128i_i64[0] )
  {
    v16 = *(unsigned __int64 **)(a1 + 8);
    if ( (unsigned __int64 *)a2 != v16 )
    {
      v121 = 0;
      v14 = a2;
      goto LABEL_35;
    }
    memset(&v132.m256i_u64[1], 0, 24);
    v14 = a2;
    v132.m256i_i64[0] = 0x800000000LL;
    v107 = (__m128i *)&v132;
    goto LABEL_17;
  }
  if ( *(_DWORD *)(a2 + 40) != 8 )
  {
    v107 = &v123;
    sub_312C40((__int64)&v123, a2 + 40, v11, v12);
    v21.m128i_i64[1] = a3->m128i_i64[0];
    if ( *(_QWORD *)(a2 + 24) >= a3->m128i_i64[0] )
      goto LABEL_24;
    v70 = *(_QWORD *)(a2 + 24);
    if ( v110 )
    {
      if ( (unsigned __int8)sub_314D00(
                              &v123,
                              (__m128i *)&v122,
                              (unsigned int)(v123.m128i_i32[1] - v21.m128i_i32[2] + v70),
                              v70) )
      {
        v72 = v122.m256i_i64[0];
        v21 = *(__m128i *)&v122.m256i_u64[2];
        v71 = v122.m256i_i64[1];
        v73 = v123;
        v74 = v124;
        goto LABEL_130;
      }
    }
    else if ( (unsigned __int8)sub_314D00(&v123, (__m128i *)&v122, (unsigned int)(v21.m128i_i32[2] - v70), v70) )
    {
      v71 = v123.m128i_i64[1];
      v72 = v123.m128i_i64[0];
      v21 = v124;
      v73 = *(__m128i *)v122.m256i_i8;
      v74 = *(__m128i *)&v122.m256i_u64[2];
LABEL_130:
      v136.m128i_i64[0] = v72;
      v136.m128i_i64[1] = v71;
      v137 = v21;
      v123 = v73;
      v124 = v74;
      v122.m256i_i64[0] = v72;
      v122.m256i_i64[1] = v71;
      *(__m128i *)&v122.m256i_u64[2] = v21;
LABEL_24:
      if ( v10 <= v7 )
      {
        memset(&v135.m256i_u64[1], 0, 24);
        v135.m256i_i64[0] = 0x800000000LL;
        if ( v10 < v7 )
        {
          if ( v110 )
          {
            if ( !(unsigned __int8)sub_314D00(&v123, (__m128i *)&v135, v123.m128i_i32[1] - v8, v20) )
              goto LABEL_28;
            v82 = _mm_load_si128(&v123);
            v83 = _mm_load_si128(&v124);
            v123 = _mm_load_si128((const __m128i *)&v135);
            v84 = _mm_load_si128((const __m128i *)&v135.m256i_u64[2]);
            v136 = v82;
            v137 = v83;
            v124 = v84;
            *(__m128i *)v135.m256i_i8 = v82;
            *(__m128i *)&v135.m256i_u64[2] = v83;
          }
          else if ( !(unsigned __int8)sub_314D00(&v123, (__m128i *)&v135, v8, v20) )
          {
LABEL_28:
            v120 = 0;
LABEL_29:
            sub_312B80((__int64)&v135);
LABEL_30:
            sub_312B80((__int64)v107);
            goto LABEL_31;
          }
        }
        if ( (unsigned __int8)sub_3147B0((__int64)&v123, v109) && !v123.m128i_i32[0] )
        {
          sub_13FCB0((unsigned __int64 **)(a1 + 8));
          *(_BYTE *)(a1 + 24) = 1;
        }
        else
        {
          v56 = *(_QWORD *)a2;
          v57 = a3->m128i_i64[1];
          v58 = *(_QWORD *)(a2 + 24);
          v112 = (unsigned __int64 **)(a1 + 8);
          v59 = a2;
          if ( (*(_QWORD *)a2 & 2) == 0 )
          {
            v60 = *(_QWORD *)(a2 + 16);
            if ( (*(_BYTE *)v60 & 2) != 0 )
            {
              v88 = a2;
              v59 = v56 & 0xFFFFFFFFFFFFFFFCLL;
              v89 = *(_QWORD *)(v56 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v89 & 2) == 0 )
              {
                while ( 1 )
                {
                  if ( *(_QWORD *)(v59 + 16) != v88 )
                    goto LABEL_107;
                  v90 = v89 & 0xFFFFFFFFFFFFFFFCLL;
                  v89 = *(_QWORD *)(v89 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v89 & 2) != 0 )
                    break;
                  v88 = v59;
                  v59 = v90;
                }
                v59 = v90;
              }
            }
            else
            {
              do
              {
                v59 = v60;
                v60 = *(_QWORD *)(v60 + 8);
              }
              while ( (*(_BYTE *)v60 & 2) == 0 );
            }
          }
LABEL_107:
          v114 = v59;
          sub_1E3D90(v112, (__int64 *)a2);
          v61 = v114;
          if ( v122.m256i_i32[0] > 1u )
            v61 = sub_1E45A0((__m128i *)v112, v114, v58, v57, (__int64)&v122);
          v62 = sub_1E63F0((__m128i *)v112, v61, a3->m128i_i64[0], a3->m128i_i64[1], (__int64)v109);
          if ( v135.m256i_i32[0] > 1u )
            sub_1E45A0((__m128i *)v112, v62, v10, v57, (__int64)&v135);
        }
        goto LABEL_29;
      }
      sub_312C40((__int64)&v125, (__int64)v109, v21.m128i_i64[1], v20);
      v76.m128i_i64[0] = 0;
      memset(&v127.m256i_u64[1], 0, 24);
      v127.m256i_i64[0] = 0x800000000LL;
      if ( v110 )
      {
        if ( (unsigned __int8)sub_314D00(
                                &v125,
                                (__m128i *)&v127,
                                (unsigned int)(v125.m128i_i32[1] - v123.m128i_i32[1]),
                                v75) )
        {
          v91 = _mm_load_si128(&v125);
          v76 = _mm_load_si128(&v126);
          v125 = _mm_load_si128((const __m128i *)&v127);
          v92 = _mm_load_si128((const __m128i *)&v127.m256i_u64[2]);
          v136 = v91;
          v137 = v76;
          v126 = v92;
          *(__m128i *)v127.m256i_i8 = v91;
          *(__m128i *)&v127.m256i_u64[2] = v76;
          goto LABEL_134;
        }
      }
      else if ( (unsigned __int8)sub_314D00(&v125, (__m128i *)&v127, v123.m128i_u32[1], v75) )
      {
LABEL_134:
        v121 = sub_3147B0((__int64)&v125, v123.m128i_i32);
        if ( v121 )
        {
          if ( !v125.m128i_i32[0] )
          {
            sub_13FCB0((unsigned __int64 **)(a1 + 8));
            *(_BYTE *)(a1 + 24) = 1;
            sub_312B80((__int64)&v127);
            sub_312B80((__int64)&v125);
            v120 = v121;
            goto LABEL_30;
          }
          if ( !under_debugger )
            sub_383060(0xCD8Fu, *(double *)v76.m128i_i64);
          goto LABEL_197;
        }
        sub_312B80((__int64)&v127);
        sub_312B80((__int64)&v125);
        sub_312B80((__int64)&v123);
        goto LABEL_10;
      }
      if ( !under_debugger )
        sub_383060(0xCD8Eu, 0.0);
      goto LABEL_197;
    }
    v120 = 0;
    goto LABEL_30;
  }
  if ( v10 <= v7 )
  {
    v120 = 0;
    goto LABEL_31;
  }
  v121 = v120;
LABEL_10:
  v13 = *(_QWORD *)a2;
  v14 = a2;
  if ( (*(_QWORD *)a2 & 2) == 0 )
  {
    v14 = *(_QWORD *)(a2 + 16);
    if ( (*(_BYTE *)v14 & 2) != 0 )
    {
      v14 = v13 & 0xFFFFFFFFFFFFFFFCLL;
      v77 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v77 & 2) == 0 && *(_QWORD *)(v14 + 16) == a2 )
      {
        while ( 1 )
        {
          v11 = v77 & 0xFFFFFFFFFFFFFFFCLL;
          v77 = *(_QWORD *)(v77 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v77 & 2) != 0 )
            break;
          v78 = v14;
          v14 = v11;
          if ( *(_QWORD *)(v11 + 16) != v78 )
            goto LABEL_14;
        }
        v14 = v11;
      }
    }
    else
    {
      for ( i = *(_QWORD *)(v14 + 8); (*(_BYTE *)i & 2) == 0; i = *(_QWORD *)(i + 8) )
        v14 = i;
    }
  }
LABEL_14:
  v16 = *(unsigned __int64 **)(a1 + 8);
  if ( v16 == (unsigned __int64 *)v14 )
  {
LABEL_15:
    memset(&v132.m256i_u64[1], 0, 24);
    v132.m256i_i64[0] = 0x800000000LL;
    v107 = (__m128i *)&v132;
    goto LABEL_16;
  }
  while ( 1 )
  {
LABEL_35:
    if ( *(_BYTE *)(v14 + 32) != a3->m128i_i8[8]
      || (v119 = *(_DWORD *)(v14 + 44), v23 = *(_QWORD *)(v14 + 24) + (int)v119, v10 < v23) )
    {
      memset(&v132.m256i_u64[1], 0, 24);
      v132.m256i_i64[0] = 0x800000000LL;
      v107 = (__m128i *)&v132;
      if ( (unsigned __int64 *)v14 == v16 || *(_BYTE *)(v14 + 32) != a3->m128i_i8[8] || *(_QWORD *)(v14 + 24) >= v10 )
        goto LABEL_16;
      if ( *(_DWORD *)(v14 + 40) == 8 )
      {
LABEL_111:
        v120 = 0;
        goto LABEL_30;
      }
      sub_312C40((__int64)&v133, v14 + 40, v11, v12);
      v50 = *(_QWORD *)(v14 + 24);
      if ( v110 )
      {
        v107 = (__m128i *)&v132;
        if ( !(unsigned __int8)sub_314D00(
                                 (__m128i *)&v133,
                                 (__m128i *)&v132,
                                 (unsigned int)(v50 + v133.m256i_i32[1] - v10),
                                 v49) )
          goto LABEL_96;
        v93 = _mm_load_si128((const __m128i *)&v133);
        v94 = _mm_load_si128((const __m128i *)&v133.m256i_u64[2]);
        *(__m128i *)v133.m256i_i8 = _mm_load_si128((const __m128i *)&v132);
        v95 = _mm_load_si128((const __m128i *)&v132.m256i_u64[2]);
        v136 = v93;
        v137 = v94;
        *(__m128i *)&v133.m256i_u64[2] = v95;
        *(__m128i *)v132.m256i_i8 = v93;
        *(__m128i *)&v132.m256i_u64[2] = v94;
      }
      else
      {
        v107 = (__m128i *)&v132;
        if ( !(unsigned __int8)sub_314D00((__m128i *)&v133, (__m128i *)&v132, (unsigned int)(v10 - v50), v49) )
        {
LABEL_96:
          v120 = 0;
LABEL_97:
          sub_312B80((__int64)&v133);
          goto LABEL_30;
        }
      }
      sub_312C40((__int64)&v134, (__int64)v109, v51, v52);
      memset(&v135.m256i_u64[1], 0, 24);
      v135.m256i_i64[0] = 0x800000000LL;
      v97 = a3->m128i_i64[0];
      v98 = *(_QWORD *)(v14 + 24);
      if ( v110 )
      {
        if ( (unsigned __int8)sub_314D00(
                                (__m128i *)&v134,
                                (__m128i *)&v135,
                                (unsigned int)(v134.m256i_i32[1] + v97 - v98),
                                v96) )
        {
          v100 = *(__m128i *)&v135.m256i_u64[2];
          v99 = *(__m128i *)v135.m256i_i8;
          v101 = *(_OWORD *)v134.m256i_i8;
          v102 = *(_OWORD *)&v134.m256i_u64[2];
          goto LABEL_177;
        }
      }
      else if ( (unsigned __int8)sub_314D00((__m128i *)&v134, (__m128i *)&v135, (unsigned int)(v98 - v97), v96) )
      {
        v99 = *(__m128i *)v134.m256i_i8;
        v100 = *(__m128i *)&v134.m256i_u64[2];
        v101 = *(_OWORD *)v135.m256i_i8;
        v102 = *(_OWORD *)&v135.m256i_u64[2];
LABEL_177:
        v136 = v99;
        *(__m128i *)v135.m256i_i8 = v99;
        v137 = v100;
        *(_OWORD *)v134.m256i_i8 = v101;
        *(_OWORD *)&v134.m256i_u64[2] = v102;
        *(__m128i *)&v135.m256i_u64[2] = v100;
        v103 = sub_3147B0((__int64)&v134, v133.m256i_i32);
        if ( v103 )
        {
          if ( !v134.m256i_i32[0] )
          {
            sub_13FCB0((unsigned __int64 **)(a1 + 8));
            *(_BYTE *)(a1 + 24) = 1;
            sub_312B80((__int64)&v135);
            sub_312B80((__int64)&v134);
            v120 = v103;
            goto LABEL_97;
          }
          if ( !under_debugger )
            sub_383060(0xCD91u, 0.0);
LABEL_197:
          BUG();
        }
        v104 = *(_QWORD *)v14;
        if ( (*(_QWORD *)v14 & 2) == 0 )
        {
          v105 = *(_QWORD *)(v14 + 16);
          if ( (*(_BYTE *)v105 & 2) != 0 )
          {
            do
            {
              v106 = v14;
              v14 = v104 & 0xFFFFFFFFFFFFFFFCLL;
              v104 = *(_QWORD *)(v104 & 0xFFFFFFFFFFFFFFFCLL);
            }
            while ( (v104 & 2) == 0 && *(_QWORD *)(v14 + 16) == v106 );
          }
          else
          {
            do
            {
              v14 = v105;
              v105 = *(_QWORD *)(v105 + 8);
            }
            while ( (*(_BYTE *)v105 & 2) == 0 );
          }
        }
        sub_312B80((__int64)&v135);
        sub_312B80((__int64)&v134);
        sub_312B80((__int64)&v133);
LABEL_16:
        if ( !v121 )
        {
LABEL_17:
          v115 = *(_QWORD *)(a2 + 24);
          v116 = _mm_loadu_si128(a3).m128i_i64[1];
          v111 = (unsigned __int64 **)(a1 + 8);
          while ( v117 != (__int64 *)v14 )
          {
            v17 = *v117;
            v18 = (unsigned __int64)v117;
            if ( (*v117 & 2) == 0 )
            {
              v19 = v117[2];
              if ( (*(_BYTE *)v19 & 2) != 0 )
              {
                v18 = v17 & 0xFFFFFFFFFFFFFFFCLL;
                v67 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v67 & 2) == 0 )
                {
                  v68 = (unsigned __int64)v117;
                  do
                  {
                    if ( *(_QWORD *)(v18 + 16) != v68 )
                      break;
                    v68 = v18;
                    v69 = v67 & 0xFFFFFFFFFFFFFFFCLL;
                    v67 = *(_QWORD *)(v67 & 0xFFFFFFFFFFFFFFFCLL);
                    v18 = v69;
                  }
                  while ( (v67 & 2) == 0 );
                }
              }
              else
              {
                do
                {
                  v18 = v19;
                  v19 = *(_QWORD *)(v19 + 8);
                }
                while ( (*(_BYTE *)v19 & 2) == 0 );
              }
            }
            sub_1E3D90(v111, v117);
            v117 = (__int64 *)v18;
          }
          if ( v122.m256i_i32[0] > 1u )
            v117 = (__int64 *)sub_1E45A0((__m128i *)v111, (unsigned __int64)v117, v115, v116, (__int64)&v122);
          sub_1E63F0((__m128i *)v111, (unsigned __int64)v117, a3->m128i_i64[0], a3->m128i_i64[1], (__int64)v109);
          if ( v132.m256i_i32[0] > 1u )
            sub_1E45A0((__m128i *)v111, (unsigned __int64)v117, v10, v116, (__int64)&v132);
          goto LABEL_30;
        }
        goto LABEL_111;
      }
      if ( !under_debugger )
        sub_383060(0xCD90u, 0.0);
      goto LABEL_197;
    }
    if ( *(_DWORD *)(v14 + 40) == 8 )
    {
      v121 = v120;
      goto LABEL_44;
    }
    sub_312C40((__int64)&v128, (__int64)v109, v11, v12);
    memset(&v130.m256i_u64[1], 0, 24);
    v24 = a3->m128i_i64[0];
    v130.m256i_i64[0] = 0x800000000LL;
    v25 = *(_QWORD *)(v14 + 24);
    if ( v110 )
    {
      if ( !(unsigned __int8)sub_314D00(
                               &v128,
                               (__m128i *)&v130,
                               (unsigned int)(v128.m128i_i32[1] + v24 - v25),
                               0x800000000LL) )
      {
LABEL_51:
        if ( !under_debugger )
          sub_383060(0xCD89u, 0.0);
        goto LABEL_197;
      }
      v34 = _mm_load_si128((const __m128i *)&v130);
      v137 = _mm_load_si128((const __m128i *)&v130.m256i_u64[2]);
      v29.m128i_i64[0] = 0;
      v131.m256i_i64[0] = 0x800000000LL;
      v136 = v34;
      memset(&v131.m256i_u64[1], 0, 24);
      if ( v10 > v23 )
      {
        if ( !(unsigned __int8)sub_314D00(&v128, (__m128i *)&v131, v128.m128i_i32[1] - v119, v31) )
          goto LABEL_78;
        v35 = _mm_load_si128(&v128);
        v29 = _mm_load_si128(&v129);
        v128 = _mm_load_si128((const __m128i *)&v131);
        v36 = _mm_load_si128((const __m128i *)&v131.m256i_u64[2]);
        v136 = v35;
        v137 = v29;
        v129 = v36;
        *(__m128i *)v131.m256i_i8 = v35;
        *(__m128i *)&v131.m256i_u64[2] = v29;
      }
    }
    else
    {
      if ( !(unsigned __int8)sub_314D00(&v128, (__m128i *)&v130, (unsigned int)(v25 - v24), (__int64)&v130) )
        goto LABEL_51;
      v29 = _mm_load_si128(&v129);
      v27 = _mm_load_si128(&v128);
      v128 = _mm_load_si128((const __m128i *)&v130);
      v28 = _mm_load_si128((const __m128i *)&v130.m256i_u64[2]);
      v137 = v29;
      *(__m128i *)&v130.m256i_u64[2] = v29;
      v29.m128i_i64[0] = 0;
      v131.m256i_i64[0] = 0x800000000LL;
      v136 = v27;
      v129 = v28;
      *(__m128i *)v130.m256i_i8 = v27;
      memset(&v131.m256i_u64[1], 0, 24);
      if ( v10 > v23 && !(unsigned __int8)sub_314D00(&v128, (__m128i *)&v131, v119, v26) )
      {
LABEL_78:
        if ( !under_debugger )
          sub_383060(0xCD8Au, 0.0);
        goto LABEL_197;
      }
    }
    v30 = sub_3147B0((__int64)&v128, (int *)(v14 + 40));
    if ( v30 )
      break;
    sub_312B80((__int64)&v131);
    sub_312B80((__int64)&v130);
    sub_312B80((__int64)&v128);
    v16 = *(unsigned __int64 **)(a1 + 8);
LABEL_44:
    if ( (*(_QWORD *)v14 & 2) != 0 )
    {
LABEL_47:
      if ( v16 == (unsigned __int64 *)v14 )
        goto LABEL_15;
    }
    else
    {
      v11 = *(_QWORD *)(v14 + 16);
      if ( (*(_BYTE *)v11 & 2) == 0 )
      {
        do
        {
          v14 = v11;
          v11 = *(_QWORD *)(v11 + 8);
        }
        while ( (*(_BYTE *)v11 & 2) == 0 );
        goto LABEL_47;
      }
      v32 = (unsigned __int64 *)(*(_QWORD *)v14 & 0xFFFFFFFFFFFFFFFCLL);
      v11 = *v32;
      if ( (*v32 & 2) != 0 )
      {
LABEL_54:
        v14 = (unsigned __int64)v32;
        if ( v16 == v32 )
          goto LABEL_15;
      }
      else
      {
        while ( 1 )
        {
          if ( v32[2] != v14 )
            goto LABEL_54;
          v14 = (unsigned __int64)v32;
          v33 = v11 & 0xFFFFFFFFFFFFFFFCLL;
          v11 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v11 & 2) != 0 )
            break;
          v32 = (unsigned __int64 *)v33;
        }
        v14 = v33;
        if ( v16 == (unsigned __int64 *)v33 )
          goto LABEL_15;
      }
    }
  }
  if ( v128.m128i_i32[0] )
  {
    if ( !under_debugger )
      sub_383060(0xCD8Bu, *(double *)v29.m128i_i64);
    goto LABEL_197;
  }
  v120 = v30;
  sub_13FCB0((unsigned __int64 **)(a1 + 8));
  *(_BYTE *)(a1 + 24) = 1;
  sub_312B80((__int64)&v131);
  sub_312B80((__int64)&v130);
  sub_312B80((__int64)&v128);
LABEL_31:
  sub_312B80((__int64)&v122);
  return v120;
}

