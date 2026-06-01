__m128 *__fastcall sub_F110(__int64 a1, __int64 a2, __m128 *a3)
{
  __int64 v6; // rdx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  __m128 *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r14
  __int64 v13; // r15
  int v14; // r13d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __m128 v17; // xmm1
  __m128 *v18; // rdi
  unsigned __int64 v19; // rax
  __m128i v20; // xmm0
  void (__fastcall *hexdsp)(__int64, char *); // rax
  __m128i v23; // xmm0
  __m128i v24; // xmm1
  char v25; // al
  __m128i v26; // xmm0
  __m128 *v27; // r14
  __int64 v28; // r15
  __int64 v29; // [rsp+8h] [rbp-3C8h] BYREF
  char *v30; // [rsp+10h] [rbp-3C0h]
  __m128 *v31; // [rsp+18h] [rbp-3B8h]
  __m128 *v32; // [rsp+20h] [rbp-3B0h]
  __int64 v33; // [rsp+28h] [rbp-3A8h]
  char v34[8]; // [rsp+30h] [rbp-3A0h] BYREF
  __int64 v35; // [rsp+38h] [rbp-398h]
  unsigned __int64 v36; // [rsp+40h] [rbp-390h] BYREF
  __m128i v37; // [rsp+48h] [rbp-388h] BYREF
  char v38; // [rsp+58h] [rbp-378h]
  char v39[8]; // [rsp+60h] [rbp-370h] BYREF
  int v40; // [rsp+68h] [rbp-368h] BYREF
  void *v41; // [rsp+70h] [rbp-360h]
  int *v42; // [rsp+78h] [rbp-358h]
  int *v43; // [rsp+80h] [rbp-350h]
  __int64 v44; // [rsp+88h] [rbp-348h]
  __m128 v45; // [rsp+90h] [rbp-340h] BYREF
  __m128i v46; // [rsp+A0h] [rbp-330h]
  char v47; // [rsp+B0h] [rbp-320h]
  _BYTE v48[20]; // [rsp+B4h] [rbp-31Ch]
  __int128 v49; // [rsp+C8h] [rbp-308h]
  __int64 v50; // [rsp+D8h] [rbp-2F8h]
  __int128 v51; // [rsp+E0h] [rbp-2F0h] BYREF
  __int64 v52; // [rsp+F0h] [rbp-2E0h]
  __int128 v53; // [rsp+F8h] [rbp-2D8h]
  __int64 v54; // [rsp+108h] [rbp-2C8h]
  __int128 v55; // [rsp+110h] [rbp-2C0h] BYREF
  __int64 v56; // [rsp+120h] [rbp-2B0h]
  char *v57; // [rsp+128h] [rbp-2A8h]
  __int128 v58; // [rsp+130h] [rbp-2A0h]
  __m128 v59; // [rsp+140h] [rbp-290h] BYREF
  __int64 v60; // [rsp+150h] [rbp-280h]
  __int128 v61; // [rsp+158h] [rbp-278h]
  __int64 v62; // [rsp+168h] [rbp-268h]
  __int64 v63; // [rsp+170h] [rbp-260h]
  __int128 v64; // [rsp+178h] [rbp-258h]
  __int64 v65; // [rsp+188h] [rbp-248h]
  __int128 v66; // [rsp+190h] [rbp-240h]
  __int64 v67; // [rsp+1A0h] [rbp-230h]
  __int64 v68; // [rsp+1A8h] [rbp-228h]
  __int128 v69; // [rsp+1B0h] [rbp-220h]
  __int64 v70; // [rsp+1C0h] [rbp-210h]
  __int64 v71; // [rsp+1C8h] [rbp-208h] BYREF
  __int64 v72; // [rsp+1D0h] [rbp-200h]
  __int64 *v73; // [rsp+1D8h] [rbp-1F8h]
  __int64 *v74; // [rsp+1E0h] [rbp-1F0h]
  __int64 v75; // [rsp+1E8h] [rbp-1E8h]
  __int64 v76; // [rsp+1F0h] [rbp-1E0h]
  __int64 v77; // [rsp+1F8h] [rbp-1D8h] BYREF
  __int64 v78; // [rsp+200h] [rbp-1D0h]
  __int64 *v79; // [rsp+208h] [rbp-1C8h]
  __int64 *v80; // [rsp+210h] [rbp-1C0h]
  __int64 v81; // [rsp+218h] [rbp-1B8h]
  __int64 v82; // [rsp+220h] [rbp-1B0h]
  __int64 v83; // [rsp+228h] [rbp-1A8h] BYREF
  __int64 v84; // [rsp+230h] [rbp-1A0h]
  __int64 *v85; // [rsp+238h] [rbp-198h]
  __int64 *v86; // [rsp+240h] [rbp-190h]
  __int64 v87; // [rsp+248h] [rbp-188h]
  __int64 v88; // [rsp+250h] [rbp-180h]
  __int64 v89; // [rsp+258h] [rbp-178h]
  int v90; // [rsp+260h] [rbp-170h]
  char v91; // [rsp+264h] [rbp-16Ch]
  __int64 v92; // [rsp+268h] [rbp-168h]
  int v93; // [rsp+270h] [rbp-160h] BYREF
  __int64 v94; // [rsp+278h] [rbp-158h] BYREF
  int *v95; // [rsp+280h] [rbp-150h]
  __int64 *v96; // [rsp+288h] [rbp-148h]
  __int64 *v97; // [rsp+290h] [rbp-140h]
  __int64 v98; // [rsp+298h] [rbp-138h]
  __int128 v99; // [rsp+2A0h] [rbp-130h]
  __int128 v100; // [rsp+2B0h] [rbp-120h]
  __int64 v101; // [rsp+2C0h] [rbp-110h]
  __int128 v102; // [rsp+2C8h] [rbp-108h]
  __int64 v103; // [rsp+2D8h] [rbp-F8h]
  __int128 v104; // [rsp+2E0h] [rbp-F0h]
  __int64 v105; // [rsp+2F0h] [rbp-E0h]
  __int128 v106; // [rsp+2F8h] [rbp-D8h]
  __int128 v107; // [rsp+308h] [rbp-C8h]
  int v108; // [rsp+318h] [rbp-B8h]
  char v109; // [rsp+330h] [rbp-A0h]
  __int64 v110; // [rsp+338h] [rbp-98h]
  __int64 v111; // [rsp+340h] [rbp-90h]
  __int64 v112; // [rsp+348h] [rbp-88h]
  __int128 v113; // [rsp+350h] [rbp-80h]
  __int64 v114; // [rsp+360h] [rbp-70h]
  __int64 v115; // [rsp+368h] [rbp-68h]
  __int64 v116; // [rsp+370h] [rbp-60h]
  __int128 v117; // [rsp+378h] [rbp-58h]
  __m128i si128; // [rsp+388h] [rbp-48h]
  unsigned __int64 v119; // [rsp+398h] [rbp-38h]

  v33 = a2;
  v32 = a3;
  v6 = *(_QWORD *)(a2 + 432);
  v31 = (__m128 *)a1;
  v119 = __readfsqword(0x28u);
  v30 = v34;
  sub_6E070(v34, a3, v6);
  if ( *(__int64 *)(v35 + 8) < 0 )
  {
    v10 = *(__m128 **)(a2 + 32);
    v18 = &v45;
    sub_64B50((unsigned int)&v45, (_DWORD)v10, (unsigned int)"microcode: stack_mop.s->off < 0", v7, v8, v9);
    v19 = v45.m128_u64[0];
    v20 = _mm_loadu_si128((const __m128i *)&v45.m128_u16[4]);
    *(_BYTE *)(a1 + 24) = 1;
    *(_QWORD *)a1 = v19;
    *(__m128i *)(a1 + 8) = v20;
  }
  else
  {
    sub_60880(v33, v32);
    v10 = (__m128 *)"c:\\temp\\microcode_before.txt";
    nullsub_42(v32, "c:\\temp\\microcode_before.txt");
    v11 = *(_QWORD *)(v33 + 1088);
    v12 = *(_QWORD *)(v33 + 1080);
    v40 = 0;
    v41 = nullptr;
    v42 = &v40;
    v13 = v12 + 40 * v11;
    v43 = &v40;
    v44 = 0;
    if ( v12 == v13 )
    {
      v18 = nullptr;
LABEL_14:
      v31[1].m128_i8[8] = 0;
    }
    else
    {
      v14 = 0;
      do
      {
        v15 = *(_QWORD *)(v12 + 32);
        if ( *(_QWORD *)(v15 + 104) )
        {
          v45.m128_u64[1] = 0;
          v47 = 0;
          ++v14;
          v16 = *(_QWORD *)(v33 + 32);
          *(_QWORD *)&v48[12] = 0;
          v50 = 0;
          *(_QWORD *)v48 = 0xFFFFFFFF00000000LL;
          v52 = 0;
          v54 = 0;
          LODWORD(v56) = 0;
          v57 = nullptr;
          v46 = 0;
          v49 = 0;
          v51 = 0;
          v53 = 0;
          v55 = 0;
          v58 = 0;
          v17 = _mm_loadh_ps((const double *)(v16 + 16));
          v60 = v15;
          v59 = v17;
          v62 = 0;
          v63 = 0;
          v64 = 0u;
          v65 = 0;
          *(_QWORD *)&v66 = 0;
          BYTE12(v66) = 0;
          LODWORD(v67) = -1;
          v68 = 0;
          v61 = -1;
          v69 = 0;
          LODWORD(v71) = 0;
          v73 = &v71;
          v74 = &v71;
          v79 = &v77;
          v80 = &v77;
          v45.m128_u64[0] = (unsigned __int64)off_8B858;
          v85 = &v83;
          v86 = &v83;
          v96 = &v94;
          v97 = &v94;
          v72 = 0;
          v75 = 0;
          LODWORD(v77) = 0;
          v78 = 0;
          v81 = 0;
          LODWORD(v83) = 0;
          v84 = 0;
          v87 = 0;
          v88 = 0;
          v89 = 0;
          v90 = 0;
          v91 = 1;
          v92 = -2;
          LODWORD(v94) = 0;
          v95 = nullptr;
          v98 = 0;
          LODWORD(v99) = 0;
          *((_QWORD *)&v99 + 1) = 0;
          v101 = 0;
          v103 = 0;
          v100 = 0;
          v102 = 0;
          v104 = 0;
          v105 = 0;
          v108 = 0;
          v109 = 0;
          v110 = 0;
          v111 = 0;
          v112 = 0;
          v114 = 0;
          v115 = 0;
          v116 = 0;
          v106 = 0;
          v107 = 0;
          v113 = 0;
          v117 = 0;
          si128 = _mm_load_si128(xmmword_786A0);
          sub_2BCC0(
            &v36,
            &v45,
            v32,
            *(unsigned int *)(v12 + 16),
            *(unsigned int *)(v12 + 20),
            (unsigned int)(*(_DWORD *)(v12 + 24) - 1),
            v12 + 8,
            1);
          if ( v38 )
            goto LABEL_17;
          if ( v14 != 1 )
          {
            sub_29140(&v36, &v45, v32, *(unsigned int *)(v33 + 56));
            if ( v36 )
            {
              v37.m128i_i64[0] = 0;
              qfree(v36);
            }
          }
          v10 = &v45;
          sub_387E0(&v36, &v45, v33 + 192, v39);
          if ( v38 )
          {
LABEL_17:
            v10 = v31;
            v31->m128_u64[0] = v36;
            v23 = _mm_loadu_si128(&v37);
            v10[1].m128_i8[8] = 1;
            *(__m128i *)((char *)v10 + 8) = v23;
            sub_DF30(&v45);
            v18 = (__m128 *)v41;
            goto LABEL_18;
          }
          sub_DF30(&v45);
        }
        v12 += 40;
      }
      while ( v13 != v12 );
      if ( !v14 )
      {
        v18 = (__m128 *)v41;
        goto LABEL_14;
      }
      v47 = 0;
      *(_OWORD *)&v48[4] = 0;
      v24 = _mm_loadl_epi64((const __m128i *)(*(_QWORD *)(v33 + 32) + 16LL));
      v29 = *(_QWORD *)(v33 + 32);
      *(_QWORD *)&v53 = (char *)&v51 + 8;
      *((_QWORD *)&v53 + 1) = (char *)&v51 + 8;
      v57 = (char *)&v55 + 8;
      v58 = (unsigned __int64)&v55 + 8;
      *(_QWORD *)&v61 = &v59.m128_u64[1];
      *((_QWORD *)&v61 + 1) = &v59.m128_u64[1];
      v49 = 0;
      v64 = 0;
      v66 = 0;
      LODWORD(v50) = 0;
      DWORD2(v51) = 0;
      v52 = 0;
      v54 = 0;
      DWORD2(v55) = 0;
      v56 = 0;
      v59.m128_i32[2] = 0;
      v60 = 0;
      v62 = 0;
      v63 = 0;
      v65 = 0;
      v67 = 0;
      v68 = 0;
      v69 = 0u;
      v70 = 0;
      v71 = 0;
      v95 = &v93;
      v96 = (__int64 *)&v93;
      v99 = 0;
      v25 = *(_BYTE *)(v33 + 138);
      v45 = _mm_loadh_ps((const double *)&v29);
      LOBYTE(v29) = v25;
      v72 = 0;
      v73 = nullptr;
      v74 = nullptr;
      v75 = 0;
      v76 = 0;
      v77 = 0;
      v78 = 0;
      v79 = nullptr;
      v80 = nullptr;
      v81 = 0;
      v82 = 0;
      v83 = 0;
      v84 = 0;
      v85 = nullptr;
      v86 = nullptr;
      v87 = 0;
      v88 = 0;
      v89 = 0;
      LOBYTE(v90) = 0;
      v93 = 0;
      v94 = 0;
      v97 = nullptr;
      v98 = 0;
      v46 = _mm_unpacklo_epi64(v24, (__m128i)(unsigned __int64)(v33 + 1032));
      sub_49A90(&v36, &v45, v39, (v25 & 3) == 1, v30, 0);
      if ( v38 )
      {
        v10 = v31;
        v26 = _mm_loadu_si128(&v37);
        v31->m128_u64[0] = v36;
        v10[1].m128_i8[8] = 1;
        *(__m128i *)((char *)v10 + 8) = v26;
      }
      else
      {
        v27 = v32;
        sub_47C00(&v45, v32);
        v28 = v33;
        sub_48100(&v45, *(_QWORD *)(v33 + 128));
        *(_BYTE *)(v28 + 300) = v90;
        nullsub_42(v27, "c:\\temp\\microcode_after.txt");
        v10 = v27;
        sub_5FFB0(v28, v27);
        v31[1].m128_i8[8] = 0;
      }
      sub_EEF0((__int64)&v45);
      v18 = (__m128 *)v41;
    }
LABEL_18:
    sub_C990(v18);
  }
  hexdsp = (void (__fastcall *)(__int64, char *))get_hexdsp(v18, v10);
  hexdsp(276, v30);
  return v31;
}

