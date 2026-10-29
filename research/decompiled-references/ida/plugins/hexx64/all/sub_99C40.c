__int64 __fastcall sub_99C40(__int128 a1)
{
  const __m128i *v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rax
  unsigned int v4; // r12d
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 *v8; // r12
  unsigned __int8 *v9; // r13
  int v10; // eax
  __m128i v11; // xmm0
  __int64 v12; // rax
  __int64 *v13; // r10
  __int64 *v14; // r11
  int v15; // eax
  bool v16; // al
  __int64 *v17; // rsi
  unsigned __int8 *v18; // rdi
  char v19; // al
  __int64 *v20; // r10
  __int64 *v21; // r11
  __int64 v22; // rax
  __int64 v23; // r13
  __int64 v24; // rdx
  __int64 *v25; // r10
  __int64 *v26; // rcx
  __int64 v27; // rax
  int v28; // r8d
  int v29; // r9d
  __int64 *v30; // r10
  __int64 v31; // rax
  __int64 v32; // r8
  char v33; // al
  __int64 v34; // rax
  char v35; // al
  char v36; // al
  __int64 *v37; // rdx
  __int64 v38; // rax
  int v39; // r8d
  int v40; // r9d
  __int64 *v41; // r11
  __int64 *v42; // r10
  __int64 *v43; // r11
  __int64 v44; // r12
  __m128i v45; // xmm0
  __int64 *v46; // r10
  __int64 *v47; // r11
  __int64 *v48; // r12
  int v49; // r8d
  int v50; // r9d
  __int64 v51; // r8
  int v52; // r9d
  __int64 *v53; // rdx
  __int64 v54; // r8
  int v55; // r9d
  char v56; // al
  __int64 *v57; // rcx
  __int64 *v58; // r11
  __int64 *v59; // r10
  __int64 *v60; // r10
  __int64 v61; // r13
  __int64 v62; // rsi
  unsigned __int8 *v63; // r12
  unsigned int v64; // eax
  __int128 v65; // rdi
  __int64 v66; // r12
  char v67; // al
  __int64 v68; // rdx
  int v69; // r8d
  int v70; // r9d
  __int64 v71; // r12
  __int64 *v72; // r10
  __int64 *v73; // r11
  __int64 *v74; // r12
  __int64 *v75; // [rsp-10h] [rbp-1E0h]
  __m128i v76; // [rsp+0h] [rbp-1D0h] BYREF
  __m128i v77; // [rsp+10h] [rbp-1C0h] BYREF
  __int64 *v78; // [rsp+20h] [rbp-1B0h]
  __int64 *v79; // [rsp+28h] [rbp-1A8h]
  __int64 *v80; // [rsp+30h] [rbp-1A0h]
  __int64 *v81; // [rsp+38h] [rbp-198h]
  __int64 *v82; // [rsp+40h] [rbp-190h]
  __int64 *v83; // [rsp+48h] [rbp-188h]
  __int64 *v84; // [rsp+50h] [rbp-180h]
  __int64 *v85; // [rsp+58h] [rbp-178h]
  __int64 *v86; // [rsp+60h] [rbp-170h]
  __int64 v87; // [rsp+68h] [rbp-168h]
  char v88; // [rsp+7Fh] [rbp-151h] BYREF
  __int64 v89; // [rsp+80h] [rbp-150h] BYREF
  __int64 v90; // [rsp+88h] [rbp-148h] BYREF
  _QWORD v91[2]; // [rsp+90h] [rbp-140h] BYREF
  unsigned __int64 v92; // [rsp+A0h] [rbp-130h] BYREF
  __m128i *v93; // [rsp+A8h] [rbp-128h]
  __int64 v94[2]; // [rsp+B0h] [rbp-120h] BYREF
  __int64 v95; // [rsp+C0h] [rbp-110h]
  __int128 v96; // [rsp+C8h] [rbp-108h]
  __int64 v97[2]; // [rsp+E0h] [rbp-F0h] BYREF
  __int64 v98; // [rsp+F0h] [rbp-E0h]
  __m128i v99; // [rsp+F8h] [rbp-D8h]
  unsigned __int64 *v100[2]; // [rsp+110h] [rbp-C0h] BYREF
  __int64 v101; // [rsp+120h] [rbp-B0h]
  __m128i v102; // [rsp+128h] [rbp-A8h]
  const void *v103; // [rsp+140h] [rbp-90h] BYREF
  __int128 v104; // [rsp+148h] [rbp-88h]
  __m128i v105; // [rsp+158h] [rbp-78h] BYREF
  __int64 v106; // [rsp+168h] [rbp-68h]
  _QWORD v107[2]; // [rsp+170h] [rbp-60h] BYREF
  _QWORD v108[10]; // [rsp+180h] [rbp-50h] BYREF

  v87 = *((_QWORD *)&a1 + 1);
  v1 = (const __m128i *)a1;
  v108[3] = __readfsqword(0x28u);
  v2 = *((_QWORD *)&a1 + 1);
  *((_QWORD *)&a1 + 1) = &v89;
  v91[1] = 0;
  v89 = v2;
  v91[0] = 0xFFFFFFFF00000000LL;
  v3 = sub_93440(a1, (__int64)v91, &v88, 0);
  if ( v3 && (!LOBYTE(v91[0]) || HIDWORD(v91[0]) == *(_DWORD *)(v87 + 36)) )
  {
    *((_QWORD *)&a1 + 1) = v3;
    v90 = v89;
    v6 = sub_129440(a1, (__int64)&v90, 0);
    if ( v6 )
    {
      if ( (*(_BYTE *)(v6 + 4) & 0x10) == 0 )
      {
        v7 = *(_QWORD *)(a1 + 480);
        v8 = (__int64 *)(v6 + 32);
        v9 = (unsigned __int8 *)(v6 + 48);
        v93 = nullptr;
        v86 = *(__int64 **)(v7 + 112);
        v92 = 0xFFFFFFFF00000000LL;
        v10 = *(_DWORD *)v6;
        if ( v88 )
        {
          if ( v10 != 34 )
          {
            if ( v10 == 32 && (unsigned __int8)sub_11FD80((char *)v9, &v103, 0) && !v103 )
            {
              sub_125180((__int64)&v92, v9);
              v85 = (__int64 *)&v92;
              v93[1] = _mm_unpacklo_epi64((__m128i)1uLL, (__m128i)1uLL);
              goto LABEL_17;
            }
LABEL_11:
            v4 = 0;
LABEL_12:
            sub_11CDA0((__int64)&v92);
            goto LABEL_5;
          }
        }
        else if ( v10 != 35 )
        {
          if ( v10 != 36 )
            goto LABEL_11;
          v85 = v8;
          v8 = (__int64 *)v9;
LABEL_17:
          v11.m128i_i64[0] = 0;
          *((_QWORD *)&a1 + 1) = v94;
          v94[0] = 0;
          v94[1] = 0;
          v95 = 0;
          v96 = 0;
          sub_123EA0(a1, (__int64)v8, 0, 0xFFFF0000);
          if ( (unsigned __int8)sub_64880(v94) && !(_QWORD)v96 )
          {
            *((_QWORD *)&a1 + 1) = v94;
            sub_123EA0(a1, (__int64)v85, 0, 0xFFFF0000);
            if ( (unsigned __int8)sub_64880(v94) && !(_QWORD)v96 )
              goto LABEL_24;
            v84 = v85;
          }
          else
          {
            v84 = v8;
          }
          v12 = sub_124CC0(a1, v94, v87, 0, 0, 1u);
          v13 = (__int64 *)v12;
          if ( v90 == v12 )
            v13 = (__int64 *)sub_124CC0(a1, v94, v12, 0, 0, 1u);
          v14 = (__int64 *)v87;
          if ( !v13 )
          {
            v31 = sub_A9D90(a1, v94, *(_QWORD *)(v87 + 8), 0, 0);
            v14 = (__int64 *)v31;
            if ( !v31 )
              goto LABEL_24;
            v13 = (__int64 *)v31;
          }
          if ( *(_DWORD *)v13 != 13 )
            goto LABEL_24;
          v15 = *((_DWORD *)v13 + 9);
          if ( v15 != *(_DWORD *)(v87 + 36) )
            goto LABEL_24;
          if ( v15 >= *((_DWORD *)v86 + 22) )
          {
            if ( v15 != *((_DWORD *)v86 + 22) )
              goto LABEL_24;
            v82 = v13;
            v83 = v14;
            v16 = sub_11CBB0((__int64)v86, 0xDu);
            v14 = v83;
            v13 = v82;
            if ( !v16 )
              goto LABEL_24;
          }
          v17 = v84;
          v18 = (unsigned __int8 *)(v13 + 6);
          v82 = v14;
          v81 = v13 + 4;
          v83 = v13;
          if ( v84 == v8 )
            v18 = (unsigned __int8 *)(v13 + 4);
          v84 = v82;
          if ( !sub_125B60(v18, (__int64)v17, 0) )
            goto LABEL_24;
          v82 = v83;
          LOBYTE(v83) = sub_12EA80((__int64)v86, v1, v90, (__int64)v8, (__int64)v83, (__int64)v81, 0);
          if ( !(_BYTE)v83 )
            goto LABEL_24;
          v79 = v82 + 6;
          v19 = sub_12EA80((__int64)v86, v1, v90, (__int64)v85, (__int64)v82, (__int64)(v82 + 6), 0);
          v20 = v82;
          v21 = v84;
          if ( !v19 )
          {
            v32 = v82[1];
            v85 = v82;
            v33 = sub_12EA80((__int64)v86, v1, v90, (__int64)v9, v32, (__int64)(v82 + 8), 0);
            v20 = v82;
            v21 = v84;
            if ( !v33 )
              goto LABEL_24;
          }
          if ( *(_DWORD *)v87 != 13 )
          {
            v80 = nullptr;
LABEL_45:
            if ( LOBYTE(v91[0]) )
            {
              v84 = v20;
              v85 = v21;
              v36 = sub_157240((__int64)v1, (__int64)v79, (__int64)v91);
              v21 = v85;
              v20 = v84;
              if ( !v36 )
                goto LABEL_24;
            }
            v22 = v87;
            v82 = v21;
            v84 = v97;
            if ( v21 == (__int64 *)v87 )
              v22 = (__int64)v20;
            v85 = v20;
            v23 = v22;
            sub_124680((__int64)v97, (__int64)v1, (__int64)v20, 1u);
            v24 = *(_QWORD *)(v23 + 8);
            v25 = v85;
            v26 = v82;
            v85 = v82;
            v82 = v25;
            v27 = sub_A9AA0((__int64)v1, v84, v24, (__int64)v26, 1u);
            v4 = 0;
            v30 = v82;
            if ( v27 )
            {
LABEL_49:
              if ( v98 )
              {
                v99.m128i_i64[0] = 0;
                qfree(v98);
              }
              qfree(v97[0]);
              goto LABEL_25;
            }
            v37 = v82;
            v82 = (__int64 *)v100;
            v78 = v30;
            sub_127A20((__int64)v100, (__int64)v1, (__int64)v37, 1, v28, v29);
            if ( sub_A9AA0((__int64)v1, v100, *(_QWORD *)(v23 + 8), (__int64)v85, 1u) )
            {
              LOBYTE(v83) = 0;
              if ( v85 == (__int64 *)v87 )
                goto LABEL_90;
            }
            v38 = sub_A9D90((__int64)v1, v82, *(_QWORD *)(v23 + 8), (__int64)v85, 1u);
            v41 = v85;
            v42 = v78;
            if ( v38 )
              goto LABEL_67;
            v77.m128i_i64[0] = (__int64)v85;
            v85 = (__int64 *)&v103;
            sub_127A20((__int64)&v103, (__int64)v1, (__int64)v78, 0, v39, v40);
            sub_648D0(v82, &v103, 0.0);
            v71 = *((_QWORD *)&v104 + 1);
            v11 = _mm_loadu_si128(&v105);
            *((_QWORD *)&v104 + 1) = 0;
            v72 = v78;
            v73 = (__int64 *)v77.m128i_i64[0];
            v105 = 0;
            if ( v101 )
            {
              v77.m128i_i64[0] = (__int64)v78;
              v78 = v73;
              v76 = v11;
              v102.m128i_i64[0] = 0;
              qfree(v101);
              v11 = _mm_load_si128(&v76);
              v72 = (__int64 *)v77.m128i_i64[0];
              v73 = v78;
            }
            v101 = v71;
            v74 = v85;
            v77.m128i_i64[0] = (__int64)v72;
            v78 = v73;
            v102 = v11;
            sub_93B40(v85);
            sub_124680((__int64)v74, (__int64)v1, (__int64)v78, 0);
            v85 = v74;
            LOBYTE(v74) = sub_94210((unsigned __int64 **)v82, v74);
            sub_93B40(v85);
            v41 = v78;
            v42 = (__int64 *)v77.m128i_i64[0];
            if ( (_BYTE)v74 )
            {
LABEL_67:
              if ( v41 == v42 )
                goto LABEL_90;
              v85 = (__int64 *)&v103;
            }
            else if ( (_BYTE)v83 )
            {
              goto LABEL_75;
            }
            v78 = v41;
            v83 = v42;
            sub_124680((__int64)v85, (__int64)v1, (__int64)v42, 0);
            v43 = v78;
            v78 = v83;
            v83 = v43;
            sub_648D0(v84, (const void **)v85, *(double *)v11.m128i_i64);
            v44 = *((_QWORD *)&v104 + 1);
            v45 = _mm_loadu_si128(&v105);
            v46 = v78;
            *((_QWORD *)&v104 + 1) = 0;
            v105 = 0;
            v47 = v83;
            if ( v98 )
            {
              v77 = v45;
              v99.m128i_i64[0] = 0;
              qfree(v98);
              v45 = _mm_load_si128(&v77);
              v46 = v78;
              v47 = v83;
            }
            v98 = v44;
            v48 = v85;
            v77.m128i_i64[0] = (__int64)v46;
            v78 = v47;
            v99 = v45;
            sub_93B40(v85);
            sub_127A20((__int64)v48, (__int64)v1, v23, 0, v49, v50);
            LOBYTE(v83) = sub_94210((unsigned __int64 **)v84, v48);
            if ( !(_BYTE)v83 )
            {
              sub_93B40(v85);
              v42 = (__int64 *)v77.m128i_i64[0];
              v41 = v78;
              if ( v77.m128i_i64[0] == v23 )
              {
                v53 = v81;
                v81 = (__int64 *)v77.m128i_i64[0];
                if ( !(unsigned __int8)sub_155CD0((__int64)v1, v77.m128i_i64[0], (__int64)v53, 0, v51, v52) )
                {
                  if ( !under_debugger )
                    sub_383060(0xCCE8u, *(double *)v45.m128i_i64);
                  goto LABEL_106;
                }
                v56 = sub_155CD0((__int64)v1, v81, (__int64)v79, 0, v54, v55);
                v42 = v81;
                v41 = v78;
                if ( !v56 )
                {
                  if ( !under_debugger )
                    sub_383060(0xCCE9u, *(double *)v45.m128i_i64);
                  goto LABEL_106;
                }
              }
LABEL_75:
              v106 = 0;
              v79 = v41;
              v105.m128i_i64[1] = 0xFFFFFFFF00000000LL;
              v107[0] = 0xFFFFFFFF00000000LL;
              v107[1] = 0;
              v108[0] = 0xFFFFFFFF00000000LL;
              v108[1] = 0;
              v81 = v42;
              v104 = 0;
              sub_1253A0((__int64)v85, (__int64)v42);
              if ( v80 )
              {
                v57 = v81;
                v75 = v80;
                v80 = v81;
                v81 = v79;
                sub_B1520(
                  (__int64)v1,
                  (__int64)v79,
                  (__int64)&v105.m128i_i64[1],
                  (__int64)v57,
                  (__int64)&v105.m128i_i64[1],
                  v87,
                  (__int64)v75,
                  0);
                v58 = v81;
                v59 = v80;
              }
              else
              {
                v80 = v81;
                v81 = v79;
                sub_1207E0(&v105.m128i_i8[8], (__int64)v86, 9, v105.m128i_i64[0], 2 * v105.m128i_i32[3]);
                v59 = v80;
                v58 = v81;
              }
              if ( LOBYTE(v91[0]) )
              {
                v86 = v59;
                sub_B1520((__int64)v1, (__int64)v58, (__int64)v107, (__int64)v59, (__int64)v107, v87, (__int64)v91, 0);
                v60 = v86;
              }
              else
              {
                v81 = v59;
                sub_1207E0((char *)v107, (__int64)v86, 9, v105.m128i_i64[0], v105.m128i_i32[3]);
                v60 = v81;
              }
              v61 = v87;
              v62 = v60[1];
              v86 = v60;
              v63 = (unsigned __int8 *)(v87 + 64);
              sub_1571F0((__int64)v1, v62, (__int64)v108, *(_QWORD *)(v87 + 8), v87 + 64, 1);
              sub_11D890(v61, (__int64)v85);
              LOBYTE(v64) = sub_11EFE0((unsigned __int8 *)v86 + 64, v63, 1u);
              v4 = v64;
              if ( (_BYTE)v64 )
              {
                if ( (_BYTE)v83 )
                  sub_11D5A0((__int64)v86);
                *((_QWORD *)&v65 + 1) = v87;
                *(_QWORD *)&v65 = v1;
                sub_993D0(v65, 0.0);
                sub_7CCD0((__int64)v85);
                goto LABEL_83;
              }
              if ( !under_debugger )
                sub_383060(0xCCE7u, 0.0);
LABEL_106:
              BUG();
            }
            sub_93B40(v85);
LABEL_90:
            v4 = 0;
LABEL_83:
            sub_93B40(v82);
            goto LABEL_49;
          }
          v80 = (__int64 *)(v87 + 32);
          if ( !LOBYTE(v91[0]) )
          {
            if ( *(_BYTE *)(v87 + 32) == 4 )
            {
              v66 = *(_QWORD *)(v87 + 40);
              if ( *(_DWORD *)v66 != 13 )
                goto LABEL_60;
            }
            else
            {
              v34 = *(_QWORD *)(v87 + 16);
              if ( !v34 )
                goto LABEL_60;
              if ( *(_DWORD *)v34 != 13 )
                goto LABEL_60;
              v84 = v20;
              v85 = v21;
              v67 = sub_125B60((unsigned __int8 *)(v34 + 64), (__int64)v80, 0);
              v21 = v85;
              v20 = v84;
              if ( !v67 )
                goto LABEL_60;
              v78 = v84;
              v68 = *(_QWORD *)(v87 + 16);
              v84 = v85;
              v82 = (__int64 *)v100;
              sub_124680((__int64)v100, (__int64)v1, v68, 1u);
              v11.m128i_i64[0] = 0;
              v103 = nullptr;
              v104 = 0u;
              v85 = (__int64 *)&v103;
              v105 = 0;
              sub_127FE0(
                (__int64)v1,
                (__int64)&v103,
                (__int64)v80,
                0,
                v69,
                v70,
                v76.m128i_i32[0],
                v76.m128i_i32[2],
                v77.m128i_i32[0],
                v77.m128i_i32[2],
                (__int64)v78);
              v66 = 0;
              if ( !(unsigned __int8)sub_94210(v100, &v103) )
                v66 = *(_QWORD *)(v87 + 16);
              sub_93B40(v85);
              sub_93B40(v82);
              v20 = v78;
              v21 = v84;
            }
            if ( v66 )
            {
              v84 = v20;
              v85 = v21;
              sub_125180((__int64)v91, (unsigned __int8 *)(v66 + 48));
              v20 = v84;
              v21 = v85;
              v80 = (__int64 *)(v66 + 32);
            }
          }
LABEL_60:
          v84 = v20;
          v85 = v21;
          v35 = sub_157240((__int64)v1, (__int64)v81, (__int64)v80);
          v21 = v85;
          v20 = v84;
          if ( v35 )
            goto LABEL_45;
LABEL_24:
          v4 = 0;
LABEL_25:
          if ( v95 )
          {
            *(_QWORD *)&v96 = 0;
            qfree(v95);
          }
          qfree(v94[0]);
          goto LABEL_12;
        }
        v85 = (__int64 *)v9;
        goto LABEL_17;
      }
    }
  }
  v4 = 0;
LABEL_5:
  sub_11CDA0((__int64)v91);
  return v4;
}

