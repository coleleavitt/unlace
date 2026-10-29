__int64 __fastcall sub_66740(__int64 a1, __int64 a2, const char *a3, __m128i a4)
{
  int v7; // r12d
  __int64 v8; // rcx
  __int64 v9; // r13
  __int64 *v10; // r14
  __m128i *v11; // rsi
  __int64 (__fastcall ***v12)(); // rdi
  __m128i v13; // xmm0
  void (__fastcall *hexdsp)(__int64, _BYTE *); // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __m128 v17; // xmm1
  const __m128i *v18; // rax
  __m128i v19; // xmm1
  char v20; // dl
  __m128 v21; // xmm0
  char v22; // dl
  __m128i v23; // xmm0
  __int64 v24; // rax
  __m128i v25; // xmm0
  _BYTE v27[8]; // [rsp+30h] [rbp-5C0h] BYREF
  __int64 v28; // [rsp+38h] [rbp-5B8h]
  __int64 v29; // [rsp+40h] [rbp-5B0h] BYREF
  __m128i v30; // [rsp+48h] [rbp-5A8h] BYREF
  char v31; // [rsp+58h] [rbp-598h]
  __int64 v32; // [rsp+60h] [rbp-590h] BYREF
  int v33; // [rsp+68h] [rbp-588h] BYREF
  void *v34; // [rsp+70h] [rbp-580h]
  int *v35; // [rsp+78h] [rbp-578h]
  int *v36; // [rsp+80h] [rbp-570h]
  __int64 v37; // [rsp+88h] [rbp-568h]
  __m128i v38; // [rsp+90h] [rbp-560h] BYREF
  __m128 v39; // [rsp+A0h] [rbp-550h]
  char v40; // [rsp+B0h] [rbp-540h]
  __int128 v41; // [rsp+B8h] [rbp-538h]
  __int128 v42; // [rsp+C8h] [rbp-528h]
  int v43; // [rsp+D8h] [rbp-518h]
  int v44; // [rsp+E8h] [rbp-508h] BYREF
  __int64 v45; // [rsp+F0h] [rbp-500h]
  int *v46; // [rsp+F8h] [rbp-4F8h]
  int *v47; // [rsp+100h] [rbp-4F0h]
  __int64 v48; // [rsp+108h] [rbp-4E8h]
  int v49; // [rsp+118h] [rbp-4D8h] BYREF
  __int64 v50; // [rsp+120h] [rbp-4D0h]
  int *v51; // [rsp+128h] [rbp-4C8h]
  int *v52; // [rsp+130h] [rbp-4C0h]
  __int64 v53; // [rsp+138h] [rbp-4B8h]
  int v54; // [rsp+148h] [rbp-4A8h] BYREF
  __int64 v55; // [rsp+150h] [rbp-4A0h]
  int *v56; // [rsp+158h] [rbp-498h]
  int *v57; // [rsp+160h] [rbp-490h]
  __int64 v58; // [rsp+168h] [rbp-488h]
  __int64 v59; // [rsp+170h] [rbp-480h]
  __int128 v60; // [rsp+178h] [rbp-478h]
  __int64 v61; // [rsp+188h] [rbp-468h]
  __int128 v62; // [rsp+190h] [rbp-460h]
  __int64 v63; // [rsp+1A0h] [rbp-450h]
  __int64 v64; // [rsp+1A8h] [rbp-448h]
  __int64 v65; // [rsp+1B0h] [rbp-440h]
  __int64 v66; // [rsp+1B8h] [rbp-438h]
  __int64 v67; // [rsp+1C0h] [rbp-430h]
  __int64 v68; // [rsp+1C8h] [rbp-428h]
  __int64 v69; // [rsp+1D0h] [rbp-420h]
  __int64 v70; // [rsp+1D8h] [rbp-418h]
  __int64 v71; // [rsp+1E0h] [rbp-410h]
  __int64 v72; // [rsp+1E8h] [rbp-408h]
  __int64 v73; // [rsp+1F0h] [rbp-400h]
  __int64 v74; // [rsp+1F8h] [rbp-3F8h]
  __int64 v75; // [rsp+200h] [rbp-3F0h]
  __int64 v76; // [rsp+208h] [rbp-3E8h]
  __int64 v77; // [rsp+210h] [rbp-3E0h]
  __int64 v78; // [rsp+218h] [rbp-3D8h]
  __int64 v79; // [rsp+220h] [rbp-3D0h]
  __int64 v80; // [rsp+228h] [rbp-3C8h]
  __int64 v81; // [rsp+230h] [rbp-3C0h]
  __int64 v82; // [rsp+238h] [rbp-3B8h]
  __int64 v83; // [rsp+240h] [rbp-3B0h]
  __int64 v84; // [rsp+248h] [rbp-3A8h]
  __int64 v85; // [rsp+250h] [rbp-3A0h]
  __int64 v86; // [rsp+258h] [rbp-398h]
  char v87; // [rsp+260h] [rbp-390h]
  int v88; // [rsp+270h] [rbp-380h] BYREF
  __int64 v89; // [rsp+278h] [rbp-378h]
  int *v90; // [rsp+280h] [rbp-370h]
  int *v91; // [rsp+288h] [rbp-368h]
  __int64 v92; // [rsp+290h] [rbp-360h]
  __int64 v93; // [rsp+298h] [rbp-358h]
  __int128 v94; // [rsp+2A0h] [rbp-350h]
  __int64 (__fastcall **v95)(); // [rsp+2B0h] [rbp-340h] BYREF
  _BYTE v96[24]; // [rsp+2B8h] [rbp-338h] BYREF
  char v97; // [rsp+2D0h] [rbp-320h]
  unsigned __int64 v98; // [rsp+2D4h] [rbp-31Ch]
  __int64 v99; // [rsp+2E0h] [rbp-310h]
  __int128 v100; // [rsp+2E8h] [rbp-308h]
  __int64 v101; // [rsp+2F8h] [rbp-2F8h]
  __int128 v102; // [rsp+300h] [rbp-2F0h]
  __int64 v103; // [rsp+310h] [rbp-2E0h]
  __int128 v104; // [rsp+318h] [rbp-2D8h]
  __int64 v105; // [rsp+328h] [rbp-2C8h]
  __int128 v106; // [rsp+330h] [rbp-2C0h]
  int v107; // [rsp+340h] [rbp-2B0h]
  __int64 v108; // [rsp+348h] [rbp-2A8h]
  __int128 v109; // [rsp+350h] [rbp-2A0h]
  __m128 v110; // [rsp+360h] [rbp-290h]
  __int64 v111; // [rsp+370h] [rbp-280h]
  __int128 v112; // [rsp+378h] [rbp-278h]
  __int64 v113; // [rsp+388h] [rbp-268h]
  __int64 v114; // [rsp+390h] [rbp-260h]
  __int64 v115; // [rsp+398h] [rbp-258h]
  __int64 v116; // [rsp+3A0h] [rbp-250h]
  __int64 v117; // [rsp+3A8h] [rbp-248h]
  __int64 v118; // [rsp+3B0h] [rbp-240h]
  char v119; // [rsp+3BCh] [rbp-234h]
  int v120; // [rsp+3C0h] [rbp-230h]
  __int64 v121; // [rsp+3C8h] [rbp-228h]
  __int128 v122; // [rsp+3D0h] [rbp-220h]
  int v123; // [rsp+3E8h] [rbp-208h] BYREF
  __int64 v124; // [rsp+3F0h] [rbp-200h]
  int *v125; // [rsp+3F8h] [rbp-1F8h]
  int *v126; // [rsp+400h] [rbp-1F0h]
  __int64 v127; // [rsp+408h] [rbp-1E8h]
  int v128; // [rsp+418h] [rbp-1D8h] BYREF
  __int64 v129; // [rsp+420h] [rbp-1D0h]
  int *v130; // [rsp+428h] [rbp-1C8h]
  int *v131; // [rsp+430h] [rbp-1C0h]
  __int64 v132; // [rsp+438h] [rbp-1B8h]
  int v133; // [rsp+448h] [rbp-1A8h] BYREF
  __int64 v134; // [rsp+450h] [rbp-1A0h]
  int *v135; // [rsp+458h] [rbp-198h]
  int *v136; // [rsp+460h] [rbp-190h]
  __int64 v137; // [rsp+468h] [rbp-188h]
  __int64 v138; // [rsp+470h] [rbp-180h]
  __int64 v139; // [rsp+478h] [rbp-178h]
  int v140; // [rsp+480h] [rbp-170h]
  char v141; // [rsp+484h] [rbp-16Ch]
  __int64 v142; // [rsp+488h] [rbp-168h]
  int v143; // [rsp+498h] [rbp-158h] BYREF
  __int64 v144; // [rsp+4A0h] [rbp-150h]
  int *v145; // [rsp+4A8h] [rbp-148h]
  int *v146; // [rsp+4B0h] [rbp-140h]
  __int64 v147; // [rsp+4B8h] [rbp-138h]
  int v148; // [rsp+4C0h] [rbp-130h]
  __int64 v149; // [rsp+4C8h] [rbp-128h]
  __int128 v150; // [rsp+4D0h] [rbp-120h]
  __int64 v151; // [rsp+4E0h] [rbp-110h]
  __int128 v152; // [rsp+4E8h] [rbp-108h]
  __int64 v153; // [rsp+4F8h] [rbp-F8h]
  __int128 v154; // [rsp+500h] [rbp-F0h]
  __int64 v155; // [rsp+510h] [rbp-E0h]
  __int128 v156; // [rsp+518h] [rbp-D8h]
  __int128 v157; // [rsp+528h] [rbp-C8h]
  int v158; // [rsp+538h] [rbp-B8h]
  char v159; // [rsp+550h] [rbp-A0h]
  __int64 v160; // [rsp+558h] [rbp-98h]
  __int64 v161; // [rsp+560h] [rbp-90h]
  __int64 v162; // [rsp+568h] [rbp-88h]
  __int128 v163; // [rsp+570h] [rbp-80h]
  __int64 v164; // [rsp+580h] [rbp-70h]
  __int64 v165; // [rsp+588h] [rbp-68h]
  __int64 v166; // [rsp+590h] [rbp-60h]
  __int128 v167; // [rsp+598h] [rbp-58h]
  __m128 si128; // [rsp+5A8h] [rbp-48h]
  unsigned __int64 v169; // [rsp+5B8h] [rbp-38h]

  v169 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a2 + 488) )
  {
    sub_6E070(v27, a3, *(_QWORD *)(**(_QWORD **)(a2 + 480) + 136LL));
    if ( *(__int64 *)(v28 + 8) < 0 )
    {
      v11 = *(__m128i **)(a2 + 32);
      v12 = &v95;
      sub_64B50((__int64)&v95, (unsigned __int8 *)v11, (__int64)"microcode: stack_mop.s->off < 0");
LABEL_10:
      *(_QWORD *)a1 = v95;
      v13 = _mm_loadu_si128((const __m128i *)v96);
      *(_BYTE *)(a1 + 24) = 1;
      *(__m128i *)(a1 + 8) = v13;
    }
    else
    {
      sub_60880((_QWORD *)a2, (__int64)a3);
      nullsub_42(a3, "c:\\temp\\microcode_before.txt");
      v7 = *(_DWORD *)(a2 + 488) - 1;
      if ( v7 < 0 )
      {
LABEL_24:
        nullsub_42(a3, "c:\\temp\\microcode_after.txt");
        v11 = (__m128i *)a3;
        v12 = (__int64 (__fastcall ***)())a2;
        sub_5FFB0(a2, a3);
        *(_BYTE *)(a1 + 24) = 0;
      }
      else
      {
        v8 = *(_QWORD *)(a2 + 480);
        v9 = 88LL * v7;
        while ( 1 )
        {
          while ( 1 )
          {
            v10 = (__int64 *)(v8 + v9);
            if ( *(_QWORD *)(*(_QWORD *)(v8 + v9) + 400LL) )
              break;
            if ( !v7 )
            {
              v11 = *(__m128i **)(a2 + 32);
              v12 = &v95;
              sub_64B50(
                (__int64)&v95,
                (unsigned __int8 *)v11,
                (__int64)"microcode(%a): should not have empty states for the root function",
                *(double *)a4.m128i_i64);
              goto LABEL_10;
            }
            --v7;
            v9 -= 88;
          }
          v34 = nullptr;
          v35 = &v33;
          v36 = &v33;
          v15 = *(_QWORD *)(a2 + 32);
          v37 = 0;
          v33 = 0;
          v16 = *v10;
          v98 = 0xFFFFFFFF00000000LL;
          v97 = 0;
          memset(v96, 0, sizeof(v96));
          v99 = 0;
          v101 = 0;
          v103 = 0;
          v105 = 0;
          v107 = 0;
          v108 = 0;
          v100 = 0;
          v102 = 0;
          v104 = 0;
          v106 = 0;
          v109 = 0;
          v17 = _mm_loadh_ps((const double *)(v15 + 16));
          v111 = v16 + 296;
          v110 = v17;
          v112 = -1;
          v113 = 0;
          v114 = 0;
          v115 = 0;
          v116 = 0;
          v117 = 0;
          v118 = 0;
          v125 = &v123;
          v126 = &v123;
          v130 = &v128;
          v131 = &v128;
          v135 = &v133;
          v136 = &v133;
          v95 = off_8B858;
          v145 = &v143;
          v146 = &v143;
          v122 = 0;
          v119 = 0;
          v120 = -1;
          v121 = 0;
          v123 = 0;
          v124 = 0;
          v127 = 0;
          v128 = 0;
          v129 = 0;
          v132 = 0;
          v133 = 0;
          v134 = 0;
          v137 = 0;
          v138 = 0;
          v139 = 0;
          v140 = 0;
          v141 = 1;
          v142 = -2;
          v143 = 0;
          v144 = 0;
          v147 = 0;
          v148 = 0;
          v149 = 0;
          v150 = 0;
          v152 = 0;
          v154 = 0;
          v156 = 0;
          v163 = 0;
          v167 = 0;
          v151 = 0;
          v153 = 0;
          v155 = 0;
          v158 = 0;
          v159 = 0;
          v160 = 0;
          v161 = 0;
          v162 = 0;
          v164 = 0;
          v165 = 0;
          v166 = 0;
          v157 = 0;
          si128 = (__m128)_mm_load_si128(xmmword_786A0);
          v11 = (__m128i *)&v95;
          sub_2BCC0(
            (__int64)&v38,
            (__int64)&v95,
            (__int64)a3,
            *((_DWORD *)v10 + 4),
            *((_DWORD *)v10 + 5),
            *((_DWORD *)v10 + 6) - 1,
            si128,
            (__int64)(v10 + 1),
            1);
          if ( v39.m128_i8[8] )
            goto LABEL_25;
          if ( v7 )
          {
            sub_29140(&v38, &v95, (__int64)a3, *(_DWORD *)(a2 + 56));
            if ( v38.m128i_i64[0] )
            {
              v38.m128i_i64[1] = 0;
              qfree(v38.m128i_i64[0]);
            }
          }
          v11 = (__m128i *)&v95;
          sub_387E0((__int64)&v38, (unsigned __int64)&v95, (_QWORD *)(a2 + 192), &v32);
          if ( v39.m128_i8[8] )
          {
LABEL_25:
            *(_QWORD *)a1 = v38.m128i_i64[0];
            v23 = _mm_loadu_si128((const __m128i *)&v38.m128i_u64[1]);
            *(_BYTE *)(a1 + 24) = 1;
            *(__m128i *)(a1 + 8) = v23;
            goto LABEL_26;
          }
          v18 = *(const __m128i **)(a2 + 32);
          v41 = 0;
          v19 = _mm_loadl_epi64(v18 + 1);
          v46 = &v44;
          v47 = &v44;
          v51 = &v49;
          v52 = &v49;
          v56 = &v54;
          v57 = &v54;
          v42 = 0;
          v60 = 0;
          v62 = 0;
          v40 = 0;
          v43 = 0;
          v44 = 0;
          v45 = 0;
          v48 = 0;
          v49 = 0;
          v50 = 0;
          v53 = 0;
          v54 = 0;
          v55 = 0;
          v58 = 0;
          v59 = 0;
          v61 = 0;
          v63 = 0;
          v64 = 0;
          v65 = 0;
          v66 = 0;
          v67 = 0;
          v68 = 0;
          v69 = 0;
          v70 = 0;
          v90 = &v88;
          v11 = &v38;
          v91 = &v88;
          v94 = 0;
          v20 = *(_BYTE *)(a2 + 138);
          v21 = _mm_loadh_ps((const double *)(a2 + 32));
          v71 = 0;
          v38 = (__m128i)v21;
          a4 = _mm_unpacklo_epi64(v19, (__m128i)(unsigned __int64)(v10 + 4));
          v72 = 0;
          v73 = 0;
          v74 = 0;
          v75 = 0;
          v76 = 0;
          v77 = 0;
          v78 = 0;
          v79 = 0;
          v80 = 0;
          v81 = 0;
          v82 = 0;
          v83 = 0;
          v84 = 0;
          v85 = 0;
          v86 = 0;
          v87 = 0;
          v88 = 0;
          v89 = 0;
          v92 = 0;
          v93 = 0;
          v39 = (__m128)a4;
          sub_49A90((__int64)&v29, &v38, (__int64)&v32, (v20 & 3) == 1, (__int64)v27, *((_DWORD *)v10 + 20));
          if ( v31 )
            break;
          sub_47C00(v38.m128i_i64, (__int64)a3);
          sub_48100((__int64)&v38, *(_DWORD **)(a2 + 128));
          v22 = *(_BYTE *)(a2 + 300);
          if ( !v22 )
            v22 = v87;
          *(_BYTE *)(a2 + 300) = v22;
          --v7;
          v9 -= 88;
          sub_EEF0((__int64)&v38);
          sub_DF30(&v95);
          sub_64E40(v34);
          if ( v7 == -1 )
            goto LABEL_24;
          v8 = *(_QWORD *)(a2 + 480);
        }
        v24 = v29;
        v25 = _mm_loadu_si128(&v30);
        *(_BYTE *)(a1 + 24) = 1;
        *(_QWORD *)a1 = v24;
        *(__m128i *)(a1 + 8) = v25;
        sub_EEF0((__int64)&v38);
LABEL_26:
        sub_DF30(&v95);
        v12 = (__int64 (__fastcall ***)())v34;
        sub_64E40(v34);
      }
    }
    hexdsp = (void (__fastcall *)(__int64, _BYTE *))get_hexdsp(v12, v11->m128i_i8);
    hexdsp(276, v27);
  }
  else
  {
    *(_BYTE *)(a1 + 24) = 0;
  }
  return a1;
}

