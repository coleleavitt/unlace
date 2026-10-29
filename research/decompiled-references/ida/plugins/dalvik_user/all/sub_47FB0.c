__int64 __fastcall sub_47FB0(unsigned __int64 a1, const __m128i *a2)
{
  __m128i v2; // xmm0
  unsigned __int64 v3; // rax
  __m128i *v4; // rbx
  unsigned int v5; // ebp
  char v7; // bp
  int v8; // r14d
  __int64 v9; // rdx
  __int64 v10; // r14
  __int64 v11; // r13
  __int64 v12; // r12
  char v13; // dl
  char v14; // r15
  char v15; // al
  char v16; // al
  __m128i v17; // xmm0
  __m128i v18; // xmm0
  __m128i v19; // xmm0
  __m128i v20; // xmm0
  __m128i v21; // xmm0
  __int64 v22; // r12
  __m128i v23; // xmm0
  __int64 v24; // r11
  bool v25; // r10
  __int64 v26; // rax
  __int64 v27; // rcx
  __int32 v28; // esi
  char v29; // dl
  unsigned __int32 v30; // edi
  __int64 v31; // rax
  __m128i v32; // xmm0
  __int64 v33; // rsi
  __m128i v34; // xmm0
  __int64 v35; // rsi
  __m128i v36; // xmm0
  __m128i si128; // xmm0
  __int64 v38; // rsi
  __m128i v39; // xmm0
  __m128i v40; // xmm0
  int v41; // eax
  __int64 v42; // r14
  unsigned __int64 v43; // r15
  __int64 v44; // rsi
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // r11
  bool v48; // r10
  __int64 v49; // r14
  __int64 v50; // rbp
  __int64 v51; // r12
  __int64 v52; // rbx
  __m128i v53; // xmm0
  int v54; // ecx
  __m128i v55; // xmm0
  __int64 v56; // rcx
  __m128i v57; // xmm0
  __m128i v58; // xmm0
  __int64 v59; // rcx
  __m128i v60; // xmm0
  __int64 v61; // rcx
  __m128i v62; // xmm0
  __m128i v63; // xmm0
  __int64 v64; // rcx
  size_t v66; // r14
  char v67; // al
  __int64 v68; // r9
  __int64 v69; // rcx
  char v70; // al
  __int64 v71; // rax
  _QWORD *v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r12
  __int64 v75; // r14
  __int64 v76; // r15
  __int128 v77; // xmm1
  __m128i v78; // xmm0
  __int64 v79; // rax
  __int64 v80; // r12
  __int64 v81; // r13
  __m128i v82; // xmm0
  int v83; // eax
  __m128i v84; // xmm0
  __int64 v85; // rax
  __m128i v86; // xmm0
  __m128i v87; // xmm0
  __int64 v88; // rax
  __m128i v89; // xmm0
  size_t v90; // rdx
  void *v91; // rax
  void *v92; // [rsp+0h] [rbp-288h]
  size_t v93; // [rsp+0h] [rbp-288h]
  size_t v94; // [rsp+0h] [rbp-288h]
  __m128i v95; // [rsp+8h] [rbp-280h] BYREF
  __int64 v96; // [rsp+18h] [rbp-270h]
  __int64 v97; // [rsp+20h] [rbp-268h]
  __int64 v98; // [rsp+28h] [rbp-260h]
  unsigned __int64 v99; // [rsp+30h] [rbp-258h]
  __int64 v100; // [rsp+38h] [rbp-250h]
  __int64 v101; // [rsp+40h] [rbp-248h]
  __int64 v102; // [rsp+48h] [rbp-240h]
  __m128i *v103; // [rsp+50h] [rbp-238h]
  unsigned __int32 v104; // [rsp+58h] [rbp-230h]
  char v105; // [rsp+5Dh] [rbp-22Bh]
  bool v106; // [rsp+5Eh] [rbp-22Ah]
  unsigned __int8 v107; // [rsp+5Fh] [rbp-229h]
  int v108; // [rsp+6Ch] [rbp-21Ch] BYREF
  char v109[8]; // [rsp+70h] [rbp-218h] BYREF
  __int64 v110; // [rsp+78h] [rbp-210h]
  __int128 v111; // [rsp+80h] [rbp-208h]
  __m128i v112; // [rsp+90h] [rbp-1F8h] BYREF
  unsigned __int64 v113; // [rsp+A0h] [rbp-1E8h]
  int v114; // [rsp+A8h] [rbp-1E0h]
  __int64 v115; // [rsp+B0h] [rbp-1D8h] BYREF
  __int128 v116; // [rsp+B8h] [rbp-1D0h]
  char v117; // [rsp+C8h] [rbp-1C0h]
  char v118; // [rsp+D0h] [rbp-1B8h]
  __int32 v119; // [rsp+D4h] [rbp-1B4h] BYREF
  __int64 v120; // [rsp+D8h] [rbp-1B0h] BYREF
  __m128i v121; // [rsp+E0h] [rbp-1A8h] BYREF
  __m128i v122; // [rsp+F0h] [rbp-198h] BYREF
  __m128i v123; // [rsp+100h] [rbp-188h] BYREF
  __m128i v124; // [rsp+110h] [rbp-178h] BYREF
  __m128i v125; // [rsp+120h] [rbp-168h] BYREF
  char v126[8]; // [rsp+130h] [rbp-158h] BYREF
  __int64 v127; // [rsp+138h] [rbp-150h] BYREF
  void *src; // [rsp+140h] [rbp-148h] BYREF
  size_t n[2]; // [rsp+148h] [rbp-140h]
  unsigned __int32 v130; // [rsp+158h] [rbp-130h] BYREF
  __int64 v131; // [rsp+160h] [rbp-128h] BYREF
  __m128i v132; // [rsp+168h] [rbp-120h] BYREF
  __int64 v133; // [rsp+178h] [rbp-110h] BYREF
  bool v134; // [rsp+180h] [rbp-108h] BYREF
  __m128i v135; // [rsp+1A0h] [rbp-E8h] BYREF
  __m128i v136; // [rsp+1B0h] [rbp-D8h] BYREF
  __m128i v137; // [rsp+1C0h] [rbp-C8h] BYREF
  __m128i v138; // [rsp+1D0h] [rbp-B8h] BYREF
  __m128i v139[4]; // [rsp+1E0h] [rbp-A8h] BYREF
  __m128i v140[2]; // [rsp+228h] [rbp-60h] BYREF
  unsigned __int64 v141; // [rsp+248h] [rbp-40h]

  v2 = _mm_loadl_epi64(a2);
  v99 = a1;
  v141 = __readfsqword(0x28u);
  v3 = a2->m128i_u64[1];
  v112 = _mm_unpacklo_epi64((__m128i)a1, v2);
  v114 = 0;
  v115 = 0;
  v117 = byte_7FBE9;
  v116 = 0;
  v113 = v3;
  if ( !v3 )
  {
    v4 = &v112;
LABEL_3:
    v5 = 0;
    goto LABEL_4;
  }
  v4 = &v112;
  v7 = *(_BYTE *)v2.m128i_i64[0];
  v114 = 1;
  v107 = sub_46430((__int64)&v112, (unsigned __int32 *)&v108, 0);
  if ( !v107 )
    goto LABEL_3;
  if ( byte_7FBE9 )
  {
    sub_45120(&v115, v7);
    v8 = v108;
    sub_1FAD0(&v115);
  }
  else
  {
    v8 = v108;
  }
  v109[0] = v7;
  v110 = 0;
  v108 = v8 - 1;
  v111 = 0;
  if ( v8 > 0 )
  {
    while ( 1 )
    {
      v118 = 0;
      src = nullptr;
      *(_OWORD *)n = 0;
      if ( v114 >= v113 )
        goto LABEL_10;
      v13 = *(_BYTE *)(v112.m128i_i64[1] + v114++);
      v118 = v13;
      v5 = sub_46430((__int64)v4, (unsigned __int32 *)&v119, 0);
      if ( !(_BYTE)v5 )
        break;
      if ( byte_7FBE9 )
      {
        v42 = v116;
        v43 = 2;
        if ( (_QWORD)v116 )
        {
          v43 = v116 + 1;
          v42 = v116 - 1;
        }
        v44 = v115;
        if ( *((_QWORD *)&v116 + 1) < v43 )
        {
          v115 = qvector_reserve();
          v44 = v115;
        }
        *(_QWORD *)&v116 = v43;
        *(_BYTE *)(v44 + v42) = 123;
        *(_BYTE *)(v115 + v42 + 1) = 0;
        sub_44E10(&v115, v118);
        sub_1FAD0(&v115);
      }
      v14 = v118;
      switch ( v118 )
      {
        case 1:
        case 2:
        case 40:
        case 41:
          v15 = sub_46950((__int64)v4, *(_DWORD *)(v112.m128i_i64[0] + 8), &v120);
          goto LABEL_24;
        case 4:
          if ( !(unsigned __int8)sub_46950((__int64)v4, *(_DWORD *)(v112.m128i_i64[0] + 8), &v120)
            || !(unsigned __int8)sub_47060((unsigned __int8 *)v4, (__int64)&v121)
            || !(unsigned __int8)sub_473C0((__int64)v4, &v132) )
          {
            goto LABEL_21;
          }
          v16 = sub_47060((unsigned __int8 *)v4, (__int64)&v124);
          break;
        case 6:
        case 7:
        case 90:
          v16 = sub_46950((__int64)v4, *(_DWORD *)(v112.m128i_i64[0] + 8), &v120);
          break;
        case 8:
          if ( !(unsigned __int8)sub_46950((__int64)v4, *(_DWORD *)(v112.m128i_i64[0] + 8), &v120)
            || !(unsigned __int8)sub_46860((__int64)v4, v126, 1)
            || !(unsigned __int8)sub_46950((__int64)v4, *(_DWORD *)(v99 + 8), &v127)
            || !(unsigned __int8)sub_464A0((__int64)v4, (__int64 *)&src) )
          {
            goto LABEL_21;
          }
          v16 = sub_46430((__int64)v4, &v130, 1);
          break;
        case 9:
          if ( !(unsigned __int8)sub_46950((__int64)v4, *(_DWORD *)(v112.m128i_i64[0] + 8), &v120) )
            goto LABEL_21;
          v16 = sub_464A0((__int64)v4, (__int64 *)&src);
          break;
        case 20:
          if ( !(unsigned __int8)sub_46950((__int64)v4, *(_DWORD *)(v112.m128i_i64[0] + 8), &v120)
            || !(unsigned __int8)sub_47060((unsigned __int8 *)v4, (__int64)&v121)
            || !(unsigned __int8)sub_46860((__int64)v4, v126, 1)
            || !(unsigned __int8)sub_46950((__int64)v4, *(_DWORD *)(v99 + 8), &v127)
            || !(unsigned __int8)sub_46950((__int64)v4, *(_DWORD *)v99, &v131) )
          {
            goto LABEL_21;
          }
          v16 = sub_473C0((__int64)v4, &v132);
          break;
        case 21:
          if ( !(unsigned __int8)sub_46950((__int64)v4, *(_DWORD *)(v112.m128i_i64[0] + 8), &v120)
            || !(unsigned __int8)sub_47060((unsigned __int8 *)v4, (__int64)&v121)
            || !(unsigned __int8)sub_46860((__int64)v4, v126, 1)
            || !(unsigned __int8)sub_46950((__int64)v4, *(_DWORD *)(v99 + 8), &v127)
            || !(unsigned __int8)sub_46950((__int64)v4, *(_DWORD *)v99, &v131) )
          {
            goto LABEL_21;
          }
          v67 = sub_473C0((__int64)v4, &v132);
          goto LABEL_61;
        case 42:
          if ( !(unsigned __int8)sub_46950((__int64)v4, *(_DWORD *)(v112.m128i_i64[0] + 8), &v120) )
            goto LABEL_21;
          v67 = sub_47060((unsigned __int8 *)v4, (__int64)&v121);
LABEL_61:
          if ( !v67 )
            goto LABEL_21;
          v16 = sub_473C0((__int64)v4, &v123);
          break;
        case 43:
        case 44:
          if ( !(unsigned __int8)sub_46950((__int64)v4, *(_DWORD *)(v112.m128i_i64[0] + 8), &v120) )
            goto LABEL_21;
          v15 = sub_473C0((__int64)v4, &v132);
LABEL_24:
          if ( !v15 )
            goto LABEL_21;
          v16 = sub_47060((unsigned __int8 *)v4, (__int64)&v121);
          break;
        case 45:
          if ( !(unsigned __int8)sub_46950((__int64)v4, *(_DWORD *)(v112.m128i_i64[0] + 8), &v120)
            || !(unsigned __int8)sub_473C0((__int64)v4, &v132)
            || !(unsigned __int8)sub_47060((unsigned __int8 *)v4, (__int64)&v121) )
          {
            goto LABEL_21;
          }
          v16 = sub_468D0((__int64)v4, &v133, 1);
          break;
        case 46:
          if ( !(unsigned __int8)sub_46950((__int64)v4, *(_DWORD *)(v112.m128i_i64[0] + 8), &v120)
            || !(unsigned __int8)sub_473C0((__int64)v4, &v132)
            || !(unsigned __int8)sub_47060((unsigned __int8 *)v4, (__int64)&v121) )
          {
            goto LABEL_21;
          }
          v16 = sub_46B40((__int64)v4, &v134);
          break;
        case 99:
          goto LABEL_28;
        default:
          goto LABEL_21;
      }
      if ( !v16 )
        break;
      v14 = v118;
LABEL_28:
      v92 = nullptr;
      v17 = _mm_load_si128(&v121);
      v95.m128i_i32[2] = v119;
      v135 = v17;
      v18 = _mm_load_si128(&v122);
      v96 = v120;
      v136 = v18;
      v19 = _mm_load_si128(&v123);
      v105 = v126[0];
      v137 = v19;
      v20 = _mm_load_si128(&v124);
      v97 = v127;
      v138 = v20;
      v21 = _mm_load_si128(&v125);
      v95.m128i_i64[0] = n[0];
      v139[0] = v21;
      if ( n[0] )
      {
        v66 = n[0];
        v92 = (void *)qalloc_or_throw();
        memcpy(v92, src, v66);
      }
      v22 = *((_QWORD *)&v111 + 1);
      v23 = _mm_loadu_si128(&v132);
      v24 = v133;
      v25 = v134;
      v104 = v130;
      v140[0] = v23;
      v98 = v131;
      v26 = v111;
      if ( *((_QWORD *)&v111 + 1) < (unsigned __int64)(v111 + 1) )
      {
        v106 = v134;
        v101 = v133;
        v45 = qvector_reserve();
        v46 = *((_QWORD *)&v111 + 1);
        *((_QWORD *)&v111 + 1) = v22;
        v47 = v101;
        v100 = v46;
        v48 = v106;
        if ( (__int64)v111 - 1 >= 0 )
        {
          LOBYTE(v102) = v5;
          v49 = v45;
          v50 = v110;
          v51 = v45;
          v103 = v4;
          v52 = v111 - 1;
          do
          {
            v53 = _mm_loadu_si128((const __m128i *)(v50 + 16));
            *(_BYTE *)v51 = *(_BYTE *)v50;
            v54 = *(_DWORD *)(v50 + 4);
            *(__m128i *)(v51 + 16) = v53;
            v55 = _mm_loadu_si128((const __m128i *)(v50 + 32));
            *(_DWORD *)(v51 + 4) = v54;
            v56 = *(_QWORD *)(v50 + 8);
            *(__m128i *)(v51 + 32) = v55;
            v57 = _mm_loadu_si128((const __m128i *)(v50 + 48));
            *(_QWORD *)(v51 + 8) = v56;
            LOBYTE(v56) = *(_BYTE *)(v50 + 96);
            *(__m128i *)(v51 + 48) = v57;
            v58 = _mm_loadu_si128((const __m128i *)(v50 + 64));
            *(_BYTE *)(v51 + 96) = v56;
            v59 = *(_QWORD *)(v50 + 104);
            *(__m128i *)(v51 + 64) = v58;
            v60 = _mm_loadu_si128((const __m128i *)(v50 + 80));
            *(_QWORD *)(v51 + 104) = v59;
            *(__m128i *)(v51 + 80) = v60;
            v61 = *(_QWORD *)(v50 + 112);
            v62 = _mm_loadu_si128((const __m128i *)(v50 + 120));
            *(_QWORD *)(v50 + 112) = 0;
            *(_QWORD *)(v51 + 112) = v61;
            *(__m128i *)(v51 + 120) = v62;
            LODWORD(v61) = *(_DWORD *)(v50 + 136);
            v63 = _mm_loadu_si128((const __m128i *)(v50 + 152));
            *(_QWORD *)(v50 + 128) = 0;
            *(_DWORD *)(v51 + 136) = v61;
            v64 = *(_QWORD *)(v50 + 144);
            *(__m128i *)(v51 + 152) = v63;
            *(_QWORD *)(v51 + 144) = v64;
            *(_QWORD *)(v51 + 168) = *(_QWORD *)(v50 + 168);
            *(_BYTE *)(v51 + 176) = *(_BYTE *)(v50 + 176);
            if ( *(_QWORD *)(v50 + 112) )
            {
              *(_QWORD *)(v50 + 120) = 0;
              qfree();
            }
            v50 += 184;
            v51 += 184;
          }
          while ( v52-- != 0 );
          v47 = v101;
          v48 = v106;
          v45 = v49;
          v5 = (unsigned __int8)v102;
          v4 = v103;
        }
        v102 = v45;
        v106 = v48;
        v101 = v47;
        qfree();
        v27 = v102;
        v25 = v106;
        v24 = v101;
        *((_QWORD *)&v111 + 1) = v100;
        v26 = v111;
        v110 = v102;
      }
      else
      {
        v27 = v110;
      }
      v28 = v95.m128i_i32[2];
      v29 = v105;
      v30 = v104;
      v31 = v27 + 184 * v26;
      *(__m128i *)(v31 + 16) = _mm_load_si128(&v135);
      v32 = _mm_load_si128(&v136);
      *(_DWORD *)(v31 + 4) = v28;
      v33 = v96;
      *(__m128i *)(v31 + 32) = v32;
      v34 = _mm_load_si128(&v137);
      *(_QWORD *)(v31 + 8) = v33;
      v35 = v97;
      *(__m128i *)(v31 + 48) = v34;
      v36 = _mm_load_si128(&v138);
      *(_BYTE *)(v31 + 96) = v29;
      *(__m128i *)(v31 + 64) = v36;
      si128 = _mm_load_si128(v139);
      *(_QWORD *)(v31 + 104) = v35;
      v38 = v98;
      *(__m128i *)(v31 + 80) = si128;
      v39 = _mm_loadl_epi64(&v95);
      *(_BYTE *)v31 = v14;
      *(_QWORD *)(v31 + 112) = v92;
      *(__m128i *)(v31 + 120) = _mm_unpacklo_epi64(v39, v39);
      v40 = _mm_loadu_si128(v140);
      *(_DWORD *)(v31 + 136) = v30;
      *(_QWORD *)(v31 + 144) = v38;
      *(_QWORD *)(v31 + 168) = v24;
      *(_BYTE *)(v31 + 176) = v25;
      *(__m128i *)(v31 + 152) = v40;
      *(_QWORD *)&v111 = v111 + 1;
      if ( byte_7FBE9 )
      {
        sub_43C70(&v115, 44, 0);
        sub_43D60(&v115, "},");
      }
      if ( src )
      {
        n[0] = 0;
        qfree();
      }
      v41 = v108--;
      if ( v41 <= 0 )
      {
        if ( !(_QWORD)v111 )
        {
          if ( !v110 )
            goto LABEL_39;
LABEL_17:
          *(_QWORD *)&v111 = 0;
          qfree();
          goto LABEL_4;
        }
        v68 = *(_QWORD *)(v99 + 144);
        v69 = *(_QWORD *)(v68 + 48);
        if ( v69 == *(_QWORD *)(v68 + 64) - 32LL )
        {
          sub_47BB0(*(__int64 **)(v99 + 144), v109);
        }
        else
        {
          v70 = v109[0];
          *(_QWORD *)(v69 + 8) = 0;
          *(_OWORD *)(v69 + 16) = 0;
          *(_BYTE *)v69 = v70;
          if ( (_QWORD)v111 )
          {
            v95.m128i_i64[1] = v69;
            v95.m128i_i64[0] = v68;
            v93 = v111;
            v71 = qalloc_or_throw();
            v72 = (_QWORD *)v95.m128i_i64[1];
            v73 = v93;
            v74 = v71;
            v75 = 0;
            v68 = v95.m128i_i64[0];
            v76 = 0;
            v77 = 0;
            *(_QWORD *)(v95.m128i_i64[1] + 8) = v71;
            v72[3] = v93;
            while ( 1 )
            {
              v80 = v75 + v74;
              v81 = v75 + v110;
              v82 = _mm_loadu_si128((const __m128i *)(v75 + v110 + 16));
              *(_BYTE *)v80 = *(_BYTE *)(v75 + v110);
              v83 = *(_DWORD *)(v81 + 4);
              *(__m128i *)(v80 + 16) = v82;
              v84 = _mm_loadu_si128((const __m128i *)(v81 + 32));
              *(_DWORD *)(v80 + 4) = v83;
              v85 = *(_QWORD *)(v81 + 8);
              *(__m128i *)(v80 + 32) = v84;
              v86 = _mm_loadu_si128((const __m128i *)(v81 + 48));
              *(_QWORD *)(v80 + 8) = v85;
              LOBYTE(v85) = *(_BYTE *)(v81 + 96);
              *(__m128i *)(v80 + 48) = v86;
              v87 = _mm_loadu_si128((const __m128i *)(v81 + 64));
              *(_BYTE *)(v80 + 96) = v85;
              v88 = *(_QWORD *)(v81 + 104);
              *(__m128i *)(v80 + 64) = v87;
              v89 = _mm_loadu_si128((const __m128i *)(v81 + 80));
              *(_QWORD *)(v80 + 104) = v88;
              *(_QWORD *)(v80 + 112) = 0;
              *(__m128i *)(v80 + 80) = v89;
              *(_OWORD *)(v80 + 120) = v77;
              v90 = *(_QWORD *)(v81 + 120);
              if ( v90 )
              {
                v96 = v73;
                v95.m128i_i64[1] = (__int64)v72;
                v95.m128i_i64[0] = v68;
                v94 = v90;
                v91 = (void *)qalloc_or_throw();
                *(_QWORD *)(v80 + 112) = v91;
                *(_QWORD *)(v80 + 128) = v94;
                memcpy(v91, *(const void **)(v81 + 112), v94);
                v73 = v96;
                v77 = 0;
                v72 = (_QWORD *)v95.m128i_i64[1];
                v68 = v95.m128i_i64[0];
                *(_QWORD *)(v80 + 120) = v94;
              }
              ++v76;
              v78 = _mm_loadu_si128((const __m128i *)(v81 + 152));
              v75 += 184;
              *(_DWORD *)(v80 + 136) = *(_DWORD *)(v81 + 136);
              v79 = *(_QWORD *)(v81 + 144);
              *(__m128i *)(v80 + 152) = v78;
              *(_QWORD *)(v80 + 144) = v79;
              *(_QWORD *)(v80 + 168) = *(_QWORD *)(v81 + 168);
              *(_BYTE *)(v80 + 176) = *(_BYTE *)(v81 + 176);
              if ( v73 == v76 )
                break;
              v74 = v72[1];
            }
            v72[2] = v73;
          }
          *(_QWORD *)(v68 + 48) += 32LL;
        }
LABEL_11:
        v9 = v110;
        if ( !v110 )
          goto LABEL_4;
        v10 = v111;
        if ( (_QWORD)v111 )
        {
          v11 = 0;
          v12 = 0;
          do
          {
            if ( *(_QWORD *)(v9 + v11 + 112) )
            {
              *(_QWORD *)(v9 + v11 + 120) = 0;
              qfree();
              v9 = v110;
            }
            ++v12;
            v11 += 184;
          }
          while ( v10 != v12 );
        }
        goto LABEL_17;
      }
    }
LABEL_21:
    if ( src )
    {
      n[0] = 0;
      qfree();
    }
LABEL_10:
    v5 = 0;
    goto LABEL_11;
  }
LABEL_39:
  v5 = v107;
LABEL_4:
  sub_43EB0((__int64)v4);
  return v5;
}

