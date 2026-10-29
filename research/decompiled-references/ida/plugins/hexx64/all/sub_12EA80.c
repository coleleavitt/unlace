__int64 __fastcall sub_12EA80(
        __int64 a1,
        const __m128i *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __m128 a8,
        int a9)
{
  __int64 v9; // r14
  const __m128i *v11; // r12
  __int64 v12; // rbx
  int v13; // r15d
  unsigned __int8 v14; // dl
  __int64 v15; // rax
  __int64 v16; // r10
  __int64 v17; // rax
  __int64 v18; // r11
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rdi
  _DWORD *v25; // rax
  __int16 v26; // ax
  unsigned int v27; // r9d
  __int64 v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // rdx
  __m128 *v32; // r11
  int v33; // eax
  int v34; // edx
  int v35; // ecx
  int v36; // esi
  __int64 v37; // rcx
  __m128 *v38; // r11
  bool v39; // bl
  int v40; // edx
  __int32 v41; // eax
  __int64 v42; // r15
  __int64 v43; // r14
  __int64 v44; // rsi
  __int64 v45; // rax
  __m128 *v46; // rax
  __m128 *v47; // r15
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // r15
  char v52; // r9
  __int64 v53; // rbx
  __int64 v54; // rsi
  int *v55; // rcx
  __int64 v56; // rax
  __int64 v57; // [rsp+18h] [rbp-1A8h]
  __m128 *v58; // [rsp+18h] [rbp-1A8h]
  __int64 v59; // [rsp+20h] [rbp-1A0h]
  int v60; // [rsp+20h] [rbp-1A0h]
  unsigned __int64 v61; // [rsp+28h] [rbp-198h]
  unsigned __int8 *v62; // [rsp+28h] [rbp-198h]
  unsigned __int64 v63; // [rsp+30h] [rbp-190h]
  _DWORD *v64; // [rsp+30h] [rbp-190h]
  __int64 v65; // [rsp+30h] [rbp-190h]
  char v66; // [rsp+38h] [rbp-188h]
  __m128 *v67; // [rsp+38h] [rbp-188h]
  __int64 v69; // [rsp+48h] [rbp-178h]
  unsigned __int8 v70; // [rsp+48h] [rbp-178h]
  __int64 v71; // [rsp+48h] [rbp-178h]
  int *v72; // [rsp+48h] [rbp-178h]
  int v73; // [rsp+48h] [rbp-178h]
  char v74; // [rsp+48h] [rbp-178h]
  char v75; // [rsp+48h] [rbp-178h]
  __int64 v76; // [rsp+50h] [rbp-170h] BYREF
  __int64 v77; // [rsp+58h] [rbp-168h] BYREF
  __int64 v78; // [rsp+68h] [rbp-158h] BYREF
  _QWORD v79[2]; // [rsp+70h] [rbp-150h] BYREF
  unsigned __int64 *v80[2]; // [rsp+80h] [rbp-140h] BYREF
  __int64 v81; // [rsp+90h] [rbp-130h]
  __int64 v82; // [rsp+98h] [rbp-128h]
  __m128 v83; // [rsp+B0h] [rbp-110h] BYREF
  __int64 v84; // [rsp+C0h] [rbp-100h]
  unsigned __int8 *v85; // [rsp+C8h] [rbp-F8h]
  __int64 v86; // [rsp+D0h] [rbp-F0h]
  __int64 v87; // [rsp+D8h] [rbp-E8h]
  int v88; // [rsp+E0h] [rbp-E0h]
  __m128 v89; // [rsp+F0h] [rbp-D0h] BYREF
  __int64 v90; // [rsp+100h] [rbp-C0h]
  __int64 v91; // [rsp+108h] [rbp-B8h]
  __int64 v92; // [rsp+110h] [rbp-B0h]
  __int64 v93; // [rsp+118h] [rbp-A8h]
  int v94; // [rsp+120h] [rbp-A0h]
  __m128 v95; // [rsp+130h] [rbp-90h] BYREF
  _DWORD *v96; // [rsp+140h] [rbp-80h]
  __int64 v97; // [rsp+148h] [rbp-78h]
  unsigned __int64 v98; // [rsp+150h] [rbp-70h] BYREF
  __int64 v99; // [rsp+158h] [rbp-68h]
  _QWORD v100[2]; // [rsp+160h] [rbp-60h] BYREF
  _QWORD v101[10]; // [rsp+170h] [rbp-50h] BYREF

  v9 = a5;
  v11 = a2;
  v77 = a4;
  v76 = a6;
  v101[3] = __readfsqword(0x28u);
  if ( !a2 )
  {
    if ( a5 | a3 )
    {
      if ( !under_debugger )
        sub_383060(0xC965u, *(double *)a7.m128i_i64);
LABEL_207:
      BUG();
    }
    v12 = v77;
    if ( v77 )
    {
      v69 = v76;
      if ( v76 )
        goto LABEL_6;
    }
LABEL_51:
    if ( !under_debugger )
      sub_383060(0xC476u, *(double *)a7.m128i_i64);
    goto LABEL_207;
  }
  v12 = v77;
  if ( !v77 )
    goto LABEL_51;
  v69 = v76;
  if ( !v76 )
    goto LABEL_51;
  if ( a5 | a3 )
  {
    sub_1217B0(a2, a3, v77, *(double *)a7.m128i_i64);
    sub_1217B0(a2, v9, v76, *(double *)a7.m128i_i64);
  }
LABEL_6:
  v13 = a9 & 1;
  v66 = a9 & 1;
  if ( (a9 & 1) == 0 )
  {
    if ( *(_DWORD *)(v12 + 4) != *(_DWORD *)(v69 + 4) )
      goto LABEL_32;
    v14 = *(_BYTE *)v12;
    goto LABEL_20;
  }
  v14 = *(_BYTE *)v12;
  if ( *(_BYTE *)v12 == 4 )
  {
    while ( 1 )
    {
      v15 = *(_QWORD *)(v12 + 8);
      if ( (unsigned int)(*(_DWORD *)v15 - 8) > 1 || *(_DWORD *)(v15 + 36) < *(_DWORD *)(v69 + 4) )
        break;
      v14 = *(_BYTE *)(v15 + 32);
      v12 = v15 + 32;
      if ( v14 != 4 )
        goto LABEL_13;
    }
    v14 = *(_BYTE *)v12;
LABEL_13:
    v77 = v12;
    if ( *(_BYTE *)v69 != 4 )
      goto LABEL_19;
  }
  else
  {
    v77 = v12;
    if ( *(_BYTE *)v69 != 4 )
    {
      v76 = v69;
      goto LABEL_32;
    }
  }
  v16 = v69;
  do
  {
    v17 = *(_QWORD *)(v16 + 8);
    if ( (unsigned int)(*(_DWORD *)v17 - 8) > 1 )
      break;
    if ( *(_DWORD *)(v17 + 36) < *(_DWORD *)(v12 + 4) )
      break;
    v16 = v17 + 32;
  }
  while ( *(_BYTE *)(v17 + 32) == 4 );
  v69 = v16;
LABEL_19:
  v76 = v69;
LABEL_20:
  if ( v14 == 4 && (unsigned int)(**(_DWORD **)(v12 + 8) - 8) <= 1 )
  {
    v19 = v69;
    v20 = v9;
    v18 = v12;
    v21 = a3;
  }
  else
  {
    v18 = v69;
    if ( *(_BYTE *)v69 != 4 || (unsigned int)(**(_DWORD **)(v69 + 8) - 8) > 1 )
      goto LABEL_32;
    v19 = v12;
    v20 = a3;
    v21 = v9;
  }
  if ( a2 )
  {
    v57 = v18;
    v63 = v21;
    v59 = v19;
    v61 = v20;
    if ( (unsigned __int8)sub_12EA80(a1, a2, v21, *(_QWORD *)(v18 + 8) + 32LL, v20, v19, 1) )
    {
      v22 = *(_QWORD *)(v57 + 8);
      v23 = a2[4].m128i_i64[0];
      v89.m128_u64[1] = v63;
      v89.m128_u64[0] = (unsigned __int64)a2;
      v92 = 0;
      v91 = v22 + 32;
      v93 = 0;
      v94 = 0;
      v90 = 0;
      sub_12A160(v23, &v89, 0, *(double *)a7.m128i_i64, a8);
      v24 = a2[4].m128i_i64[0];
      v95.m128_u64[0] = (unsigned __int64)a2;
      v64 = (_DWORD *)v90;
      v95.m128_u64[1] = v61;
      v97 = v59;
      v98 = 0;
      v99 = 0;
      LODWORD(v100[0]) = 0;
      v96 = nullptr;
      sub_12A160(v24, &v95, 0, *(double *)a7.m128i_i64, a8);
      if ( v64 )
      {
        if ( v96 == v64 )
        {
          v25 = *(_DWORD **)(v57 + 8);
          if ( *v64 == *v25 && v64[9] <= v25[9] )
            return 1;
        }
      }
    }
  }
LABEL_32:
  v26 = *(_WORD *)(v12 + 2);
  if ( v26 && *(_WORD *)(v69 + 2) == v26 && (v66 || *(_DWORD *)(v12 + 4) == *(_DWORD *)(v69 + 4))
    || sub_1255D0((unsigned __int8 *)v12, a1, v69, a9 & 1, *(double *)a7.m128i_i64)
    && ((a9 & 2) != 0 || (unsigned __int8)sub_124EC0((__int64)a2, a3, v12, v9, v69)) )
  {
    return 1;
  }
  LOBYTE(v27) = a3 == 0 && a3 == v9;
  if ( (_BYTE)v27 )
    return 0;
  if ( !a2 )
  {
    if ( !under_debugger )
      sub_383060(0xC9CCu, *(double *)a7.m128i_i64);
    goto LABEL_207;
  }
  if ( *(_DWORD *)(v12 + 4) != -1 && *(_DWORD *)(v69 + 4) != -1 )
  {
    v79[1] = 0;
    v79[0] = 0xFFFFFFFF00000000LL;
    if ( *(_DWORD *)(v12 + 4) != *(_DWORD *)(v69 + 4) )
    {
      if ( (a9 & 1) == 0 )
      {
LABEL_47:
        v70 = v27;
        sub_11CDA0((__int64)v79);
        return v70;
      }
      if ( sub_12C420((unsigned __int64 *)a1, (__int64)v79, (unsigned __int64 *)&v77, &v76, a3, v9, a7) )
        goto LABEL_63;
    }
    if ( (v62 = (unsigned __int8 *)v77, v71 = v76, *(_BYTE *)v77 == 4)
      && *(_BYTE *)v76 == 4
      && sub_130620(a1, a2, a3, *(_BYTE **)(v77 + 8), v9, *(_BYTE **)(v76 + 8), v13)
      || (unsigned __int8)sub_12E4F0((__int64)a2, a3, v9, v62, (unsigned __int8 *)v71, v13, *(double *)a7.m128i_i64, a8) )
    {
LABEL_63:
      LOBYTE(v27) = 1;
      goto LABEL_47;
    }
    v29 = a2[4].m128i_i64[0];
    v83.m128_u64[0] = (unsigned __int64)a2;
    v85 = v62;
    v83.m128_u64[1] = a3;
    v84 = 0;
    v86 = 0;
    v87 = 0;
    v88 = 0;
    sub_12A160(v29, &v83, 0, *(double *)a7.m128i_i64, a8);
    v30 = a2[4].m128i_i64[0];
    v89.m128_u64[0] = (unsigned __int64)a2;
    v89.m128_u64[1] = v9;
    v60 = v88;
    v91 = v71;
    v65 = v84;
    v90 = 0;
    v92 = 0;
    v93 = 0;
    v94 = 0;
    sub_12A160(v30, &v89, 0, *(double *)a7.m128i_i64, a8);
    v32 = (__m128 *)v90;
    LOBYTE(v27) = 0;
    if ( !(v90 | v65) )
      goto LABEL_47;
    v33 = v94;
    if ( v65 == v90 && v60 == v94 )
    {
LABEL_67:
      LOBYTE(v27) = 1;
      goto LABEL_47;
    }
    if ( v65 )
    {
      if ( v90 )
      {
        v34 = *(_DWORD *)v90;
        v35 = *(_DWORD *)v65;
        v36 = *(_DWORD *)v65;
        if ( *(_DWORD *)v65 == *(_DWORD *)v90 )
          goto LABEL_94;
        if ( v34 == 10 )
        {
          if ( (v60 == 2 || v60 == 1 && v66) && *(_BYTE *)(v90 + 32) == 4 && v35 == **(_DWORD **)(v90 + 40) )
          {
            v60 = 1;
            v34 = *(_DWORD *)v65;
            v32 = *(__m128 **)(v90 + 40);
          }
        }
        else if ( v34 == 11 && v60 == 3 )
        {
          if ( *(_BYTE *)(v90 + 32) == 4 && (v34 = **(_DWORD **)(v90 + 40), v35 == v34) )
          {
            v60 = 1;
            v32 = *(__m128 **)(v90 + 40);
          }
          else
          {
            v60 = 3;
            v34 = 11;
          }
        }
        if ( v35 == 10 )
        {
          if ( v94 != 2 && (v94 != 1 || !v66) )
          {
            if ( (a9 & 1) != 0 )
            {
LABEL_85:
              if ( (unsigned int)(v34 - 8) <= 1 )
              {
                do
                {
                  if ( v32[2].m128_i8[0] != 4 )
                    break;
                  v32 = (__m128 *)v32[2].m128_u64[1];
                }
                while ( (unsigned int)(v32->m128_i32[0] - 8) <= 1 );
              }
LABEL_89:
              if ( *(_DWORD *)v65 != v32->m128_i32[0] )
              {
LABEL_90:
                if ( v60 != 1 || v33 != 1 )
                  goto LABEL_47;
                v72 = (int *)v32;
                if ( !sub_1322F0(v11, (int *)v65, (int *)v32) )
                {
                  LOBYTE(v27) = sub_1322F0(v11, v72, (int *)v65);
                  goto LABEL_47;
                }
                goto LABEL_67;
              }
LABEL_94:
              if ( v60 != 2 )
                goto LABEL_95;
              goto LABEL_146;
            }
            if ( v32->m128_i32[0] != 10 )
              goto LABEL_90;
            if ( v60 == 2 )
            {
LABEL_146:
              v60 = 2;
              v66 |= *(_DWORD *)(v65 + 68) > *(_DWORD *)(v91 + 4);
LABEL_95:
              if ( v33 == 2 )
                v66 |= v32[4].m128_i32[1] > *((_DWORD *)v85 + 1);
              goto LABEL_97;
            }
            goto LABEL_97;
          }
        }
        else if ( v35 != 11 || v94 != 3 )
        {
          if ( (a9 & 1) == 0 )
            goto LABEL_89;
          goto LABEL_80;
        }
        if ( *(_BYTE *)(v65 + 32) != 4 || (v55 = *(int **)(v65 + 40), v34 != *v55) )
        {
          if ( (a9 & 1) == 0 )
            goto LABEL_89;
          goto LABEL_85;
        }
        v65 = *(_QWORD *)(v65 + 40);
        if ( (a9 & 1) != 0 )
        {
          v36 = *v55;
          v33 = 1;
LABEL_80:
          if ( (unsigned int)(v36 - 8) <= 1 )
          {
            v37 = v65;
            do
            {
              if ( *(_BYTE *)(v37 + 32) != 4 )
                break;
              v37 = *(_QWORD *)(v37 + 40);
            }
            while ( (unsigned int)(*(_DWORD *)v37 - 8) <= 1 );
            v65 = v37;
          }
          goto LABEL_85;
        }
        v33 = 1;
        if ( v60 == 2 )
          v66 |= v55[17] > *(_DWORD *)(v91 + 4);
LABEL_97:
        v73 = v33;
        v58 = v32;
        v98 = 0xFFFFFFFF00000000LL;
        v99 = 0;
        v100[0] = 0xFFFFFFFF00000000LL;
        v100[1] = 0;
        v101[0] = 0xFFFFFFFF00000000LL;
        v101[1] = 0;
        sub_330970((__int64)&v95, -1);
        v38 = v58;
        if ( v73 != v60 )
        {
          if ( !v66 )
            goto LABEL_127;
          if ( v60 == 3 || v73 == 3 )
          {
            if ( v60 == 2 || v73 == 2 || *((_DWORD *)v85 + 1) == *(_DWORD *)(v91 + 4) )
              goto LABEL_127;
            if ( v60 == 1 )
            {
              v54 = v65;
              v53 = (__int64)v58;
            }
            else
            {
              v53 = v65;
              v54 = (__int64)v58;
            }
            if ( *(_DWORD *)(v54 + 68) <= *(_DWORD *)(v53 + 68) )
              goto LABEL_127;
            sub_1253A0((__int64)&v95, v54);
            sub_12B6F0((__int64)&v95, (unsigned __int64 *)a1, 11, *(_DWORD *)(v53 + 68), 1, a7);
            v38 = v58;
            if ( v60 == 1 )
              v65 = (__int64)&v95;
            else
              v38 = &v95;
          }
        }
        v67 = v38;
        if ( *(_DWORD *)v65 != 1 && !sub_11F430((_BYTE *)v65, *(_QWORD *)(a1 + 96), 0) && v67->m128_i32[0] != 1 )
        {
          v39 = sub_11F430(v67, *(_QWORD *)(a1 + 96), 0);
          if ( !v39 )
          {
            v40 = *(_DWORD *)(v65 + 68);
            v41 = v67[4].m128_i32[1];
            if ( v40 == v41 || v40 >= *((_DWORD *)v85 + 1) && v41 >= *(_DWORD *)(v91 + 4) )
            {
              if ( (__m128 *)v65 == v67 )
              {
                v39 = 1;
              }
              else if ( *(_DWORD *)v65 != 61
                     && v67->m128_i32[0] != 61
                     && sub_130620(*(_QWORD *)(v11[30].m128i_i64[0] + 112), nullptr, 0, (_BYTE *)v65, 0, v67, 1) )
              {
                sub_124680((__int64)v80, (__int64)v11, v65, 1, *(double *)a7.m128i_i64, a8);
                v42 = v83.m128_i64[1];
                v43 = v89.m128_i64[1];
                if ( v83.m128_u64[0] == v89.m128_u64[0] )
                {
                  if ( !(unsigned __int8)sub_124EC0((__int64)v11, v83.m128_i64[1], (__int64)v85, v89.m128_i64[1], v91) )
                  {
LABEL_198:
                    if ( v81 )
                    {
                      v82 = 0;
                      qfree(v81);
                    }
                    qfree((__int64)v80[0]);
                    goto LABEL_201;
                  }
                  if ( v43 )
                  {
                    v56 = *(_QWORD *)(v43 + 8);
                    if ( v56 )
                    {
                      while ( v42 != v56 )
                      {
                        v56 = *(_QWORD *)(v56 + 8);
                        if ( !v56 )
                          goto LABEL_196;
                      }
                      v42 = v43;
                      v43 = v56;
                    }
                  }
LABEL_196:
                  v50 = sub_A9AA0((__int64)v11, v80, v42, v43, 1u);
                }
                else
                {
                  while ( 1 )
                  {
                    if ( (const __m128i *)v83.m128_u64[0] == v11 )
                      goto LABEL_119;
                    if ( (const __m128i *)v89.m128_u64[0] == v11 )
                      break;
                    if ( v11[22].m128i_i32[0] != 1 )
                    {
                      if ( !under_debugger )
                        sub_383060(0xCCACu, *(double *)a7.m128i_i64);
                      goto LABEL_207;
                    }
                    v44 = v11[4].m128i_i64[0];
                    v45 = *(unsigned int *)v11[21].m128i_i64[1];
                    if ( (unsigned int)v45 >= *(_DWORD *)(v44 + 64) )
                      sub_11B900(*(double *)a7.m128i_i64);
                    v11 = *(const __m128i **)(*(_QWORD *)(v44 + 528) + 8 * v45);
                  }
                  if ( (const __m128i *)v83.m128_u64[0] == v11 )
                  {
LABEL_119:
                    v43 = v83.m128_i64[1];
                    v46 = &v83;
                    v47 = &v89;
                  }
                  else
                  {
                    v47 = &v83;
                    v46 = &v89;
                  }
                  sub_123EA0((__int64)v11, (__int64 *)v80, v46[1].m128_i64[1], 1, 0xFFFF0000, *(double *)a7.m128i_i64);
                  while ( v11 != (const __m128i *)v47->m128_u64[0] )
                  {
                    if ( sub_A9AA0((__int64)v11, v80, v11[3].m128i_i64[0], v43, 1u) )
                      goto LABEL_198;
                    if ( v11[22].m128i_i32[0] != 1 )
                    {
                      if ( !under_debugger )
                        sub_383060(0xCCADu, *(double *)a7.m128i_i64);
                      goto LABEL_207;
                    }
                    v48 = v11[4].m128i_i64[0];
                    v49 = *(unsigned int *)v11[21].m128i_i64[1];
                    if ( (unsigned int)v49 >= *(_DWORD *)(v48 + 64) )
                      sub_11B900(*(double *)a7.m128i_i64);
                    v11 = *(const __m128i **)(*(_QWORD *)(v48 + 528) + 8 * v49);
                  }
                  v50 = sub_A9AA0((__int64)v11, v80, v47->m128_i64[1], v43, 1u);
                }
                v39 = v50 == 0;
                goto LABEL_198;
              }
LABEL_201:
              sub_7CCD0((__int64)&v95);
              LOBYTE(v27) = v39;
              goto LABEL_47;
            }
          }
        }
LABEL_127:
        sub_11CDA0((__int64)v101);
        sub_11CDA0((__int64)v100);
        sub_11CDA0((__int64)&v98);
        LOBYTE(v27) = 0;
        goto LABEL_47;
      }
      if ( v65 == v92 )
        goto LABEL_47;
      v51 = v83.m128_i64[1];
    }
    else
    {
      if ( v86 == v90 )
        goto LABEL_47;
      v60 = v94;
      v9 = a3;
      v65 = v90;
      v51 = v89.m128_i64[1];
      v71 = (__int64)v62;
    }
    if ( *(_DWORD *)v65 == 4 )
    {
      sub_123A40((__int64)&v95, (unsigned __int8 *)(v65 + 32), v31, v65);
      if ( v60 != 3
        || (v52 = sub_1279B0((__int64)&v95, (unsigned __int64 *)a1, *(_QWORD *)(v65 + 24), *(_DWORD *)(v71 + 4), a7)) != 0 )
      {
        v52 = sub_12EA80(a1, a2, v51, (__int64)&v95, v9, v71, a9 | (unsigned int)(unsigned __int8)(v66 | (v60 == 2)));
      }
      v75 = v52;
      sub_11CDA0((__int64)&v95);
      LOBYTE(v27) = v75;
    }
    else if ( (unsigned int)(*(_DWORD *)v65 - 8) > 1 )
    {
      if ( v60 != 3 && v66 )
      {
        v95 = (__m128)0xFFFFFFFF00000000LL;
        v78 = (__int64)v85;
        v80[0] = (unsigned __int64 *)v91;
        v74 = sub_12C420(
                (unsigned __int64 *)a1,
                (__int64)&v95,
                (unsigned __int64 *)&v78,
                (__int64 *)v80,
                v83.m128_i64[1],
                v89.m128_i64[1],
                a7);
        sub_11CDA0((__int64)&v95);
        LOBYTE(v27) = v74;
      }
    }
    else if ( *(_DWORD *)(v71 + 4) <= *(_DWORD *)(v65 + 36) && v60 != 3 )
    {
      LOBYTE(v27) = sub_12EA80(a1, a2, v51, v65 + 32, v9, v71, 1);
    }
    goto LABEL_47;
  }
  return v27;
}

