unsigned __int64 __fastcall sub_160D80(__int64 a1, double a2, __int64 a3, __int64 *a4, int a5, int a6, int a7)
{
  __int64 *v8; // rbx
  __int64 v9; // r12
  unsigned __int8 *v10; // r15
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  unsigned __int8 *v19; // r13
  int v20; // ebp
  __int64 v21; // rdx
  int v22; // ecx
  int v23; // r8d
  int v24; // r9d
  int v25; // r8d
  unsigned __int8 *v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rax
  bool v33; // zf
  int v34; // eax
  unsigned int v35; // eax
  __int64 v36; // r8
  __int64 v37; // r9
  const __m128i *v38; // rsi
  __m128i v39; // xmm0
  __int128 *v40; // rcx
  __int64 v41; // r8
  char v42; // al
  __int64 v43; // rcx
  _QWORD *v44; // rdx
  _QWORD *v45; // rax
  __int64 v46; // rbp
  __int64 v47; // rbx
  __int64 v48; // rbp
  __int64 v49; // rbx
  __int64 v50; // rbp
  __int64 v51; // rax
  __int64 v52; // rbp
  int v53; // edx
  _DWORD *v54; // rcx
  __int64 v55; // rsi
  unsigned __int8 *v56; // rbp
  int v57; // r11d
  int v58; // r9d
  __int64 v59; // r8
  int i; // r10d
  _DWORD *v61; // rax
  _BYTE *v62; // rdi
  __int64 v63; // rax
  __int64 v64; // rbx
  _QWORD *v65; // rdx
  __int64 v66; // rdx
  unsigned __int8 *v67; // rbx
  _QWORD *v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rbp
  __int64 v71; // rsi
  __int64 v72; // rdx
  __int64 v73; // rbp
  __int64 *v74; // rax
  __int64 v75; // r9
  _QWORD *v76; // rbp
  __int64 v77; // rbx
  unsigned __int8 *v78; // rdx
  __int64 v79; // rax
  _QWORD *v80; // rdx
  _QWORD *v81; // rdx
  _QWORD *v82; // rdx
  _QWORD *v83; // rdx
  _QWORD *v84; // rcx
  __int64 v85; // rcx
  _QWORD *v86; // rdx
  _QWORD *v87; // rax
  __int64 v88; // rax
  _QWORD *v89; // rax
  _QWORD *v90; // rdx
  __int64 v91; // rax
  _QWORD *v92; // rdx
  _QWORD *v93; // rcx
  _QWORD *v94; // rcx
  __int64 v95; // [rsp-8h] [rbp-290h]
  const char *v96; // [rsp+0h] [rbp-288h]
  unsigned __int8 *v97; // [rsp+8h] [rbp-280h]
  int v98; // [rsp+8h] [rbp-280h]
  __int64 *v99; // [rsp+8h] [rbp-280h]
  int v100; // [rsp+10h] [rbp-278h]
  int v101; // [rsp+18h] [rbp-270h]
  __int64 v102; // [rsp+18h] [rbp-270h]
  __int64 *v103; // [rsp+18h] [rbp-270h]
  int v104; // [rsp+20h] [rbp-268h]
  int v105; // [rsp+20h] [rbp-268h]
  __int64 v106; // [rsp+28h] [rbp-260h]
  __m128i v107; // [rsp+30h] [rbp-258h] BYREF
  __int64 v108; // [rsp+40h] [rbp-248h]
  _QWORD *v109; // [rsp+48h] [rbp-240h]
  unsigned __int8 *v110; // [rsp+50h] [rbp-238h]
  __int64 v111; // [rsp+58h] [rbp-230h]
  __int128 v112; // [rsp+60h] [rbp-228h] BYREF
  __int128 v113; // [rsp+70h] [rbp-218h]
  _QWORD v114[2]; // [rsp+80h] [rbp-208h] BYREF
  __int64 (__fastcall *v115)(__int64, __int64); // [rsp+90h] [rbp-1F8h]
  __m128i v116; // [rsp+98h] [rbp-1F0h]
  __int128 *v117; // [rsp+A8h] [rbp-1E0h]
  __int64 v118; // [rsp+B0h] [rbp-1D8h] BYREF
  __int64 v119; // [rsp+B8h] [rbp-1D0h] BYREF
  unsigned int v120; // [rsp+C8h] [rbp-1C0h]
  __int64 v121; // [rsp+158h] [rbp-130h]
  __int64 v122; // [rsp+200h] [rbp-88h]
  __int64 v123; // [rsp+208h] [rbp-80h]
  __int64 *v124; // [rsp+210h] [rbp-78h]
  _QWORD *v125; // [rsp+240h] [rbp-48h] BYREF
  unsigned __int64 v126; // [rsp+248h] [rbp-40h]

  v8 = a4;
  v126 = __readfsqword(0x28u);
  v9 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
  v10 = (unsigned __int8 *)sub_D9DB0(*a4, 1u, a2, (__int64)a4, a5, a6, a7);
  v97 = (unsigned __int8 *)sub_D9DB0(v8[3], 1u, a2, v11, v12, v13, v14);
  v19 = (unsigned __int8 *)sub_D9DB0(v8[4], 1u, a2, v15, v16, v17, v18);
  v20 = sub_CD0F0((char **)v8[5]);
  v101 = v20;
  v96 = (const char *)sub_D9DB0(v8[6], 1u, a2, v21, v22, v23, v24);
  v100 = sub_CD0F0((char **)v8[7]);
  v25 = sub_CD0F0((char **)v8[8]);
  if ( v96 == nullptr || v10 == nullptr || v19 == nullptr || v20 < 0 )
    return __readfsqword(0x28u) ^ v126;
  v106 = *(_QWORD *)(v9 + 496);
  if ( !*(_BYTE *)(v9 + 111) )
  {
    v105 = v25;
    sub_CC760(v9);
    v25 = v105;
  }
  v27 = v19;
  v104 = v25;
  v28 = sub_CA640(v9, v19, v97);
  v30 = v28;
  if ( v28 && *(__int16 *)(v28 + 54) > v20 )
  {
    v111 = 16LL * v20;
    v31 = *(_QWORD *)(v28 + 8);
    v107 = 0;
    v108 = v30;
    v32 = *(_QWORD *)(v31 + v111);
    v112 = 0;
    v113 = 0;
    v110 = (unsigned __int8 *)v32;
    LODWORD(v32) = *(__int16 *)(v30 + 52);
    *(_QWORD *)(v9 + 496) = 0;
    v33 = (_DWORD)v32 == v20;
    v34 = -1;
    if ( !v33 )
      v34 = v20;
    HIDWORD(v112) = v34;
    v35 = sub_15FC20((__int64)&v118, v97, v9, v10, v104);
    v37 = v108;
    v38 = (const __m128i *)v114;
    v39 = _mm_load_si128(&v107);
    v109 = v114;
    v114[0] = &v118;
    *(_QWORD *)&v113 = v108;
    v116 = v39;
    v114[1] = sub_C45E0;
    v115 = sub_DE400;
    v40 = &v112;
    v107.m128i_i64[0] = (__int64)&v112;
    v117 = &v112;
    if ( !v35 )
    {
      v41 = v122;
      if ( v122 )
      {
        v42 = *(_BYTE *)(v122 + 63);
        if ( v42 != 2 )
        {
          if ( !v42 )
          {
            if ( *(_QWORD *)v122 )
            {
              v98 = sub_CA2B0(v19, *(unsigned __int8 **)v122);
              *(_QWORD *)&v113 = v41;
              if ( !v98 )
              {
                if ( *(__int16 *)(v41 + 54) > v20 )
                {
                  v43 = *(_QWORD *)(*(_QWORD *)(v41 + 8) + v111);
                  if ( v43 )
                  {
                    v44 = v125;
                    if ( v125 )
                    {
                      if ( v43 == *v125 )
                      {
                        v94 = &v125;
LABEL_120:
                        *v94 = v44[3];
                        v91 = v112;
                        ++DWORD2(v112);
                        *(_QWORD *)&v112 = v44;
                        v44[3] = v91;
                        v41 = v122;
                      }
                      else
                      {
                        while ( 1 )
                        {
                          v45 = (_QWORD *)v44[3];
                          if ( !v45 )
                            break;
                          if ( v43 == *v45 )
                          {
                            v94 = v44 + 3;
                            v44 = (_QWORD *)v44[3];
                            goto LABEL_120;
                          }
                          v44 = (_QWORD *)v44[3];
                        }
                      }
                    }
                  }
                }
                if ( v112 < 0 )
                {
                  v85 = v41 + 52;
                  if ( v41 != -52 )
                  {
                    v86 = v125;
                    if ( v125 )
                    {
                      if ( v85 == *v125 )
                      {
                        v93 = &v125;
LABEL_115:
                        *v93 = v86[3];
                        v88 = v112;
                        ++DWORD2(v112);
                        *(_QWORD *)&v112 = v86;
                        v86[3] = v88;
                        v41 = v122;
                      }
                      else
                      {
                        while ( 1 )
                        {
                          v87 = (_QWORD *)v86[3];
                          if ( !v87 )
                            break;
                          if ( v85 == *v87 )
                          {
                            v93 = v86 + 3;
                            v86 = (_QWORD *)v86[3];
                            goto LABEL_115;
                          }
                          v86 = (_QWORD *)v86[3];
                        }
                      }
                    }
                  }
                }
                sub_CDDC0((__int64)v109, *(int **)(v41 + 32));
                v46 = *(_QWORD *)(v122 + 16);
                if ( v46 )
                {
                  v108 = (__int64)v8;
                  v47 = v46;
                  v48 = (__int64)v109;
                  do
                  {
                    sub_CDDC0(v48, *(int **)(v47 + 80));
                    v47 = *(_QWORD *)(v47 + 40);
                  }
                  while ( v47 );
                  v8 = (__int64 *)v108;
                }
                if ( v123 )
                {
                  v108 = (__int64)v8;
                  v49 = v123;
                  v50 = (__int64)v109;
                  do
                  {
                    sub_CDDC0(v50, *(int **)(v49 + 80));
                    v49 = *(_QWORD *)(v49 + 40);
                  }
                  while ( v49 );
                  v8 = (__int64 *)v108;
                }
                v51 = v122;
                v41 = v122;
                if ( *(__int16 *)(v122 + 54) > 0 )
                {
                  v52 = 0;
                  do
                  {
                    v53 = *(unsigned __int16 *)(*(_QWORD *)(v51 + 8) + 16 * v52 + 12);
                    if ( (_WORD)v53 )
                    {
                      if ( !*(_BYTE *)(v51 + 63) )
                      {
                        v54 = *(_DWORD **)(v51 + 80);
                        if ( v54 )
                        {
                          if ( *v54 >= v53 )
                          {
                            v55 = *(_QWORD *)&v54[6 * v53 - 4];
                            if ( v55 )
                            {
                              sub_CDCD0((__int64)v109, v55);
                              v51 = v122;
                            }
                          }
                        }
                      }
                    }
                    ++v52;
                    v41 = v51;
                  }
                  while ( *(__int16 *)(v51 + 54) > (int)v52 );
                }
              }
            }
            else
            {
              *(_QWORD *)&v113 = v122;
              v98 = 1;
            }
            if ( *(_QWORD *)(v41 + 72) )
            {
              v56 = v110;
              v57 = v101;
              v58 = v98;
              v59 = *(_QWORD *)(v41 + 72);
              v99 = v8;
              do
              {
                for ( i = 0; *(_DWORD *)(v59 + 40) > i; ++i )
                {
                  if ( !v58 )
                  {
                    v61 = (_DWORD *)(v59 + 16 * (i + 4LL));
                    if ( *v61 == v57 )
                    {
                      v68 = v125;
                      if ( v125 )
                      {
                        if ( v61 == (_DWORD *)*v125 )
                        {
                          v83 = v125;
                          v84 = &v125;
LABEL_77:
                          *v84 = v83[3];
                          v69 = v112;
                          ++DWORD2(v112);
                          *(_QWORD *)&v112 = v83;
                          v83[3] = v69;
                        }
                        else
                        {
                          while ( 1 )
                          {
                            v83 = (_QWORD *)v68[3];
                            if ( !v83 )
                              break;
                            if ( v61 == (_DWORD *)*v83 )
                            {
                              v84 = v68 + 3;
                              goto LABEL_77;
                            }
                            v68 = (_QWORD *)v68[3];
                          }
                        }
                      }
                    }
                  }
                  v62 = *(_BYTE **)(v59 + 16);
                  if ( v62 )
                  {
                    if ( !(unsigned int)sub_CA2B0(v62, v19) )
                    {
                      v63 = 16 * (i + 4LL);
                      v64 = *(_QWORD *)(v59 + v63 + 8);
                      if ( v64 )
                      {
                        if ( v56 )
                        {
                          if ( !(unsigned int)sub_CA2B0(*(_BYTE **)(v59 + v63 + 8), v56) )
                          {
                            v65 = v125;
                            if ( v125 )
                            {
                              if ( v64 == *v125 )
                              {
                                v89 = v125;
                                v90 = &v125;
LABEL_86:
                                *v90 = v89[3];
                                v72 = v112;
                                ++DWORD2(v112);
                                *(_QWORD *)&v112 = v89;
                                v89[3] = v72;
                              }
                              else
                              {
                                while ( 1 )
                                {
                                  v89 = (_QWORD *)v65[3];
                                  if ( !v89 )
                                    break;
                                  if ( v64 == *v89 )
                                  {
                                    v90 = v65 + 3;
                                    goto LABEL_86;
                                  }
                                  v65 = (_QWORD *)v65[3];
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                v59 = *(_QWORD *)(v59 + 8);
              }
              while ( v59 );
              v8 = v99;
            }
          }
LABEL_61:
          v38 = (const __m128i *)v107.m128i_i64[0];
          v35 = sub_F5720(a1, (__int64 *)v107.m128i_i64[0], (const char *)v10, v96, v100);
          if ( !v35 )
          {
LABEL_65:
            sub_11EA20((__int64)&v118, (__int64)v38, v66, (__int64)v40, v36, v37);
            v27 = (unsigned __int8 *)v112;
            if ( (_QWORD)v112 )
            {
              do
              {
                v67 = *((unsigned __int8 **)v27 + 3);
                sub_C9250(v9, v27);
                v27 = v67;
              }
              while ( v67 );
            }
            *(_QWORD *)(v9 + 496) = v106;
            goto LABEL_68;
          }
          goto LABEL_62;
        }
        v73 = *(_QWORD *)(v122 + 64);
        *(_DWORD *)(v73 + 4) &= ~0x200000u;
        v38 = (const __m128i *)v73;
        v120 = 0;
        sub_CFDC0((__int64)&v118, v73, 0);
        if ( *(_BYTE *)(v9 + 103) )
        {
          v35 = 7;
          goto LABEL_63;
        }
        v35 = v120;
        if ( !v120 )
        {
          if ( v73 && v115 )
            sub_CDAF0((__int64)v109, (_QWORD *)v73);
          goto LABEL_61;
        }
      }
      else
      {
        if ( v123 )
        {
          v70 = (__int64)v109;
          sub_CDDC0((__int64)v109, *(int **)(v123 + 80));
          v71 = *(_QWORD *)(v123 + 72);
          if ( v71 )
            sub_CDCD0(v70, v71);
          goto LABEL_61;
        }
        v102 = v108;
        v35 = sub_145C50((__int64)&v118);
        if ( !v35 )
        {
          v74 = v124;
          v75 = v102;
          v76 = (_QWORD *)v124[7];
          if ( v76 )
          {
            v103 = v8;
            v77 = v75;
            do
            {
              v78 = (unsigned __int8 *)v76[3];
              if ( v78 && v77 == sub_144100((__int64)&v118, 0, v78, v97, *(double *)v39.m128i_i64) )
              {
                v79 = v76[8];
                if ( v79 )
                {
                  v80 = *(_QWORD **)(v79 + 16);
                  if ( v80 )
                    sub_2150F((__int64)&v118, v107.m128i_i64[0], v80, (__int64)v110);
                }
                v81 = (_QWORD *)v76[7];
                if ( v81 )
                  sub_215A0((__int64)&v118, v107.m128i_i64[0], v81, (__int64)v110);
                v82 = (_QWORD *)v76[6];
                if ( v82 )
                  sub_2150F((__int64)&v118, v107.m128i_i64[0], v82, (__int64)v110);
              }
              v76 = (_QWORD *)v76[10];
            }
            while ( v76 );
            v75 = v77;
            v74 = v124;
            v8 = v103;
          }
          if ( v121 == v75 )
          {
            v92 = (_QWORD *)v74[4];
            if ( v92 )
            {
              sub_215A0((__int64)&v118, v107.m128i_i64[0], v92, (__int64)v110);
              v74 = v124;
            }
          }
          sub_CF140((__int64)v109, v74[3], v74 + 7);
          goto LABEL_61;
        }
      }
    }
LABEL_62:
    if ( v35 == 1 && (*(_QWORD *)(v9 + 48) & 0x10000001LL) == 1 )
    {
      v38 = (const __m128i *)*v8;
      sub_FD650(a1, (const __m128i *)*v8, 1, (__int64)v40, v36, v37);
      goto LABEL_65;
    }
LABEL_63:
    if ( v119 )
    {
      v38 = (const __m128i *)(a1 + 36);
      sub_F6E80((__int64 *)a1, (_DWORD *)(a1 + 36), "", v8[1], v8[2], &v118, *(double *)v39.m128i_i64, &v119);
      v66 = v95;
    }
    else
    {
      v66 = *(_QWORD *)a1;
      *(_DWORD *)(a1 + 36) = v35;
      if ( (*(_BYTE *)(v66 + 20) & 1) != 0 )
      {
        v38 = (const __m128i *)v35;
        sub_F4FB0(a1, v35);
      }
    }
    goto LABEL_65;
  }
LABEL_68:
  if ( !*(_BYTE *)(v9 + 111) )
    sub_CC7E0(v9, (__int64)v27, v29);
  return __readfsqword(0x28u) ^ v126;
}
