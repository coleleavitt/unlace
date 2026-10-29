__int64 __fastcall sub_1081B0(
        __m128i *a1,
        int a2,
        __int64 *a3,
        _OWORD *a4,
        int a5,
        int a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13,
        double a14)
{
  __int64 v14; // rbx
  double v15; // xmm0_8
  __int64 v18; // rdi
  __int64 v19; // rdx
  char *v20; // rcx
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // r14
  unsigned __int8 *v24; // r13
  __int64 v25; // rdx
  int v26; // ecx
  int v27; // r8d
  int v28; // r9d
  unsigned __int8 *v29; // rax
  double v30; // xmm4_8
  double v31; // xmm5_8
  unsigned __int8 *v32; // r15
  unsigned __int8 *v33; // r14
  double v34; // xmm4_8
  double v35; // xmm5_8
  __int64 i; // rdx
  __int64 v37; // rax
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rax
  int v41; // ecx
  int v42; // edx
  char *v43; // r15
  __int64 v44; // rax
  char *v46; // r13
  int v47; // eax
  int v48; // r15d
  __int64 v49; // rsi
  __int64 v50; // rax
  _BYTE *v51; // r13
  double v52; // xmm0_8
  double v53; // xmm0_8
  int v54; // r15d
  __int64 v55; // rax
  char *v56; // rbx
  __int64 v57; // r13
  __int64 v58; // rax
  char *v59; // r13
  double v60; // xmm4_8
  double v61; // xmm5_8
  __int64 v62; // rax
  unsigned __int8 *v63; // r9
  int v64; // r8d
  int v65; // r8d
  double v66; // xmm3_8
  __int64 v67; // r13
  int v68; // eax
  int v69; // r11d
  double v70; // xmm4_8
  double v71; // xmm0_8
  __int64 v72; // rax
  unsigned __int8 *v73; // rdx
  __int64 v74; // rcx
  int v75; // eax
  bool v76; // zf
  __int64 v77; // rax
  __int64 v78; // rax
  double v79; // xmm0_8
  int v80; // ecx
  int v81; // esi
  int v82; // eax
  __m128i *v83; // [rsp+0h] [rbp-A8h]
  int v84; // [rsp+8h] [rbp-A0h]
  int v85; // [rsp+8h] [rbp-A0h]
  int v86; // [rsp+8h] [rbp-A0h]
  char *v87; // [rsp+10h] [rbp-98h]
  unsigned __int8 *v88; // [rsp+10h] [rbp-98h]
  int v89; // [rsp+24h] [rbp-84h] BYREF
  double v90; // [rsp+28h] [rbp-80h] BYREF
  _BYTE v91[48]; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 v92; // [rsp+68h] [rbp-40h]

  v14 = (__int64)a4;
  v15 = 0.0;
  v92 = __readfsqword(0x28u);
  v83 = a1;
  *a4 = 0;
  a4[1] = 0;
  a4[2] = 0;
  if ( a2 )
  {
    v18 = *a3;
    if ( (unsigned int)byte_1BAD40[*(_WORD *)(*a3 + 20) & 0x3F] - 1 <= 1 )
    {
      sub_CD1F0(v18);
      *(_QWORD *)(v14 + 32) = 0;
      *(_BYTE *)(v14 + 41) = 1;
      goto LABEL_4;
    }
    v29 = (unsigned __int8 *)sub_D9DB0(v18, 1u, 0.0, (__int64)byte_1BAD40, (int)a4, a5, a6);
    v32 = v29;
    if ( !v29 )
      return 1;
    v33 = v29;
    v84 = 0;
    if ( *v29 == 45 )
    {
      v33 = v29 + 1;
      v84 = 1;
    }
    if ( (unsigned int)sub_C7640(v33, "40f-21a-21d", 0.0, a8, a9, a10, v30, v31, a13, a14, &v89, &v90, v91, v83) != 3 )
      goto LABEL_13;
    v72 = v33[10];
    v73 = v33 + 10;
    if ( (_BYTE)v72 == 84 || (byte_1BEF00[v72] & 1) != 0 )
    {
      do
      {
        do
          v74 = *++v73;
        while ( (byte_1BEF00[v74] & 1) != 0 );
      }
      while ( (_BYTE)v74 == 84 );
    }
    v88 = v73;
    if ( sub_D4E30(v73, v14, 0.0, a8, a9, a10, v34, v35, a13, a14) )
    {
      if ( *v88 )
      {
LABEL_13:
        if ( !sub_D4E30(v32, v14, 0.0, a8, a9, a10, v34, v35, a13, a14) )
          goto LABEL_5;
        for ( i = 0; ; ++i )
        {
          v37 = v32[i];
          v38 = (unsigned __int8)aNow[i];
          if ( (_DWORD)v37 == (_DWORD)v38 )
          {
            if ( !v32[i] )
            {
              if ( !(unsigned int)sub_108100((__int64)v83) )
              {
LABEL_20:
                v39 = strlen((const char *)v32) & 0x3FFFFFFF;
                *(_QWORD *)v91 = 0;
                if ( !v39 || (int)sub_CAFA0(v32, (double *)v91, v39, 1u) <= 0 )
                  return 1;
                v15 = *(double *)v91;
                *(_BYTE *)(v14 + 41) = 1;
                *(double *)(v14 + 32) = v15;
                if ( v15 < 0.0 )
                  goto LABEL_5;
LABEL_4:
                a8 = 5373484.5;
                if ( v15 >= 5373484.5 )
                  goto LABEL_5;
                *(_BYTE *)(v14 + 40) = 1;
                v15 = v15 * 86400000.0 + 0.5;
                *(_QWORD *)v14 = (unsigned int)(int)v15;
                if ( a2 <= 1 )
                {
LABEL_58:
                  if ( *(_BYTE *)(v14 + 46) )
                    return 1;
                  return *(_QWORD *)v14 > 0x1A6401072FDFFuLL;
                }
LABEL_6:
                v23 = 1;
                while ( 2 )
                {
                  v24 = (unsigned __int8 *)sub_D9DB0(a3[v23], 1u, v15, v19, (int)v20, v21, v22);
                  sub_D9CE0(a3[v23], 1u, v15, v25, v26, v27, v28);
                  if ( !v24 )
                    return 1;
                  switch ( byte_1BF000[*v24] )
                  {
                    case '+':
                    case '-':
                    case '0':
                    case '1':
                    case '2':
                    case '3':
                    case '4':
                    case '5':
                    case '6':
                    case '7':
                    case '8':
                    case '9':
                      v40 = v24[1];
                      if ( (_BYTE)v40 == 58 || !(_BYTE)v40 || (v41 = 2, (byte_1BEF00[v40] & 1) != 0) )
                      {
                        v90 = 0.0;
                        v43 = (char *)(v24 + 1);
                        v42 = 1;
                      }
                      else
                      {
                        do
                        {
                          v42 = v41;
                          v43 = (char *)&v24[v41];
                          v44 = (unsigned __int8)*v43;
                          if ( !(_BYTE)v44 )
                            break;
                          if ( (_BYTE)v44 == 58 )
                            break;
                          ++v41;
                        }
                        while ( (byte_1BEF00[v44] & 1) == 0 );
                        v90 = 0.0;
                        if ( !v42 )
                          return 1;
                      }
                      if ( (int)sub_CAFA0(v24, &v90, v42, 1u) <= 0 )
                        return 1;
                      v62 = (unsigned __int8)*v43;
                      v63 = v24 + 1;
                      if ( (_BYTE)v62 == 58 )
                      {
                        v15 = 0.0;
                        v76 = (byte_1BEF00[*v24] & 4) == 0;
                        memset(v91, 0, 32);
                        if ( !v76 )
                          v63 = v24;
                        *(_OWORD *)&v91[32] = 0;
                        if ( sub_D4E30(v63, (__int64)v91, 0.0, a8, a9, a10, v60, v61, a13, a14) )
                          return 1;
                        if ( !v91[40] )
                          sub_C88C0((__int64)v91);
                        v19 = (*(_QWORD *)v91 - 43200000LL) >> 63;
                        v77 = (*(_QWORD *)v91 - 43200000LL) % 86400000;
                        *(_QWORD *)v91 = v77;
                        if ( *v24 == 45 )
                          *(_QWORD *)v91 = -v77;
                        if ( !*(_BYTE *)(v14 + 40) )
                          sub_C88C0(v14);
                        LODWORD(v20) = 0;
                        v78 = *(_QWORD *)v91;
                        *(_BYTE *)(v14 + 44) = 0;
                        *(_WORD *)(v14 + 42) = 0;
                        *(_QWORD *)v14 += v78;
                      }
                      else
                      {
                        if ( (byte_1BEF00[v62] & 1) != 0 )
                        {
                          do
                            ++v43;
                          while ( (byte_1BEF00[(unsigned __int8)*v43] & 1) != 0 );
                        }
                        if ( !v43 )
                          return 1;
                        v64 = strlen(v43) & 0x3FFFFFFF;
                        if ( (unsigned int)(v64 - 3) > 7 )
                          return 1;
                        v65 = v64 - (byte_1BF000[(unsigned __int8)v43[v64 - 1]] == 115);
                        if ( !*(_BYTE *)(v14 + 40) )
                        {
                          v86 = v65;
                          sub_C88C0(v14);
                          v65 = v86;
                        }
                        v66 = v90;
                        v67 = 0;
                        v68 = 6;
                        v69 = v65;
                        while ( 1 )
                        {
                          if ( v68 == v69
                            && !(unsigned int)sub_CA590(
                                                (unsigned __int8 *)&aSecond[16 * v67],
                                                (unsigned __int8 *)v43,
                                                v69)
                            && v66 > (float)-flt_1BEDA8[4 * v67] )
                          {
                            a8 = flt_1BEDA8[4 * v67];
                            if ( a8 > v66 )
                              break;
                          }
                          if ( ++v67 == 6 )
                          {
                            *(_BYTE *)(v14 + 44) = 0;
                            *(_WORD *)(v14 + 42) = 0;
                            return 1;
                          }
                          v68 = *((unsigned __int8 *)&unk_1BEDA0 + 16 * v67);
                        }
                        v22 = v67;
                        if ( (_DWORD)v67 == 4 )
                        {
                          sub_C8C60(v14);
                          v79 = v90;
                          v22 = 4;
                          v80 = (int)v90;
                          v81 = (int)v90 + *(_DWORD *)(v14 + 12);
                          if ( v81 <= 0 )
                            v82 = (v81 - 12) / 12;
                          else
                            v82 = (v81 - 1) / 12;
                          *(_DWORD *)(v14 + 8) += v82;
                          *(_BYTE *)(v14 + 40) = 0;
                          a8 = (double)v80;
                          *(_DWORD *)(v14 + 12) = v81 - 12 * v82;
                          v90 = v79 - (double)v80;
                          goto LABEL_114;
                        }
                        if ( (_DWORD)v67 == 5 )
                        {
                          sub_C8C60(v14);
                          v22 = 5;
                          v71 = v90;
                          *(_BYTE *)(v14 + 40) = 0;
                          *(_DWORD *)(v14 + 8) += (int)v66;
                          a8 = (double)(int)v71;
                          v90 = v71 - a8;
                          goto LABEL_114;
                        }
                        if ( !*(_BYTE *)(v14 + 40) )
                        {
LABEL_114:
                          v85 = v22;
                          sub_C88C0(v14);
                          v22 = v85;
                          v66 = v90;
                        }
                        a10 = v66 * 1000.0;
                        v20 = (char *)&unk_1BEDA0;
                        v19 = 0;
                        *(_BYTE *)(v14 + 44) = 0;
                        *(_WORD *)(v14 + 42) = 0;
                        v15 = *((float *)&unk_1BEDA0 + 4 * v22 + 3) * a10;
                        *(_QWORD *)v14 += (unsigned int)(int)(v70 + v15);
                      }
LABEL_55:
                      if ( a2 <= (int)++v23 )
                        goto LABEL_56;
                      continue;
                    case 'a':
                      if ( (unsigned int)sub_CA2B0(v24, "auto") || (_DWORD)v23 != 1 )
                        return 1;
                      if ( !*(_BYTE *)(v14 + 41) || *(_BYTE *)(v14 + 40) )
                        goto LABEL_64;
                      v52 = *(double *)(v14 + 32);
                      if ( v52 < -2.1086676e11 )
                        return 1;
                      a8 = 2.53402300799e11;
                      if ( v52 > 2.53402300799e11 )
                        return 1;
                      v53 = v52 * 1000.0 + 2.1086676e14;
                      goto LABEL_72;
                    case 'j':
                      if ( (unsigned int)sub_CA2B0(v24, "julianday")
                        || (_DWORD)v23 != 1
                        || !*(_BYTE *)(v14 + 40)
                        || !*(_BYTE *)(v14 + 41) )
                      {
                        return 1;
                      }
LABEL_64:
                      *(_BYTE *)(v14 + 41) = 0;
                      goto LABEL_55;
                    case 'l':
                      if ( (unsigned int)sub_CA2B0(v24, "localtime")
                        || !(unsigned int)sub_108100((__int64)v83)
                        || (unsigned int)sub_F76E0((const __m128i *)v14, v83, &v83[2].m128i_i32[1]) )
                      {
                        return 1;
                      }
                      goto LABEL_55;
                    case 's':
                      if ( (unsigned int)sub_CA590(v24, "start of ", 9)
                        || (*(_DWORD *)(v14 + 40) & 0xFF00FF) == 0 && !*(_BYTE *)(v14 + 43) )
                      {
                        return 1;
                      }
                      v51 = v24 + 9;
                      if ( !*(_BYTE *)(v14 + 42) )
                        sub_C8A60((__int64 *)v14);
                      *(_QWORD *)(v14 + 20) = 0;
                      *(_WORD *)(v14 + 43) = 1;
                      *(_QWORD *)(v14 + 32) = 0;
                      *(_WORD *)(v14 + 40) = 0;
                      if ( !v51 )
                        return 1;
                      if ( (unsigned int)sub_CA2B0(v51, "month") )
                      {
                        if ( (unsigned int)sub_CA2B0(v51, "year") )
                        {
                          if ( (unsigned int)sub_CA2B0(v51, (unsigned __int8 *)"day") )
                            return 1;
                        }
                        else
                        {
                          *(_QWORD *)(v14 + 12) = 0x100000001LL;
                        }
                      }
                      else
                      {
                        *(_DWORD *)(v14 + 16) = 1;
                      }
                      goto LABEL_55;
                    case 'u':
                      if ( (unsigned int)sub_CA2B0(v24, "unixepoch") || !*(_BYTE *)(v14 + 41) )
                      {
                        if ( (unsigned int)sub_CA2B0(v24, "utc") || !(unsigned int)sub_108100((__int64)v83) )
                          return 1;
                        if ( !*(_BYTE *)(v14 + 45) )
                        {
                          LODWORD(v19) = 0;
                          if ( !*(_BYTE *)(v14 + 40) )
                          {
                            sub_C88C0(v14);
                            LODWORD(v19) = 0;
                          }
                          v54 = 4;
                          v87 = *(char **)v14;
                          v55 = v14;
                          v56 = *(char **)v14;
                          v57 = v55;
                          do
                          {
                            *(_QWORD *)&v91[40] = 1;
                            v56 -= (int)v19;
                            memset(&v91[8], 0, 32);
                            *(_QWORD *)v91 = v56;
                            if ( (unsigned int)sub_F76E0((const __m128i *)v91, v83, &v83[2].m128i_i32[1]) )
                              return 1;
                            if ( !v91[40] )
                              sub_C88C0((__int64)v91);
                            v19 = (unsigned int)(*(_DWORD *)v91 - (_DWORD)v87);
                            if ( *(_DWORD *)v91 == (_DWORD)v87 )
                              break;
                            --v54;
                          }
                          while ( v54 );
                          v15 = 0.0;
                          v58 = v57;
                          v59 = v56;
                          *(_QWORD *)(v58 + 40) = 0;
                          v14 = v58;
                          *(_QWORD *)v58 = v59;
                          *(_BYTE *)(v58 + 40) = 1;
                          *(_OWORD *)(v58 + 8) = 0;
                          *(_BYTE *)(v58 + 45) = 1;
                          *(_OWORD *)(v58 + 24) = 0;
                        }
                      }
                      else
                      {
                        if ( (_DWORD)v23 != 1 )
                          return 1;
                        v53 = 1000.0 * *(double *)(v14 + 32) + 2.1086676e14;
                        if ( v53 < 0.0 )
                          return 1;
                        a8 = 4.642690608e14;
                        if ( v53 >= 4.642690608e14 )
                          return 1;
LABEL_72:
                        v15 = v53 + 0.5;
                        *(_DWORD *)(v14 + 40) = 1;
                        *(_BYTE *)(v14 + 44) = 0;
                        *(_QWORD *)v14 = (unsigned int)(int)v15;
                      }
                      goto LABEL_55;
                    case 'w':
                      if ( (unsigned int)sub_CA590(v24, "weekday ", 8) )
                        return 1;
                      v46 = (char *)(v24 + 8);
                      if ( !v46 )
                        return 1;
                      v47 = strlen(v46) & 0x3FFFFFFF;
                      v90 = 0.0;
                      if ( !v47 )
                        return 1;
                      if ( (int)sub_CAFA0((unsigned __int8 *)v46, &v90, v47, 1u) <= 0 )
                        return 1;
                      v15 = v90;
                      v48 = (int)v90;
                      if ( v90 != (double)(int)v90 )
                        return 1;
                      if ( v48 < 0 )
                        return 1;
                      a8 = 7.0;
                      if ( v90 >= 7.0 )
                        return 1;
                      sub_C8C60(v14);
                      *(_BYTE *)(v14 + 44) = 0;
                      *(_BYTE *)(v14 + 40) = 0;
                      sub_C88C0(v14);
                      v20 = *(char **)v14;
                      *(_BYTE *)(v14 + 44) = 0;
                      v49 = (__int64)(v20 + 129600000) / 86400000 % 7;
                      v19 = v49 - 7;
                      v50 = v49;
                      if ( v49 > v48 )
                        v50 = v49 - 7;
                      v21 = 0;
                      *(_WORD *)(v14 + 42) = 0;
                      *(_QWORD *)v14 = &v20[86400000 * (v48 - v50)];
                      goto LABEL_55;
                    default:
                      return 1;
                  }
                }
              }
              if ( (unsigned int)sub_CD7A0(v83, (__int64 *)v14, (_BYTE *)(v14 + 40)) )
                return 1;
LABEL_5:
              if ( a2 <= 1 )
              {
LABEL_56:
                if ( !*(_BYTE *)(v14 + 40) )
                  sub_C88C0(v14);
                goto LABEL_58;
              }
              goto LABEL_6;
            }
          }
          else if ( byte_1BF000[v37] != byte_1BF000[v38] )
          {
            goto LABEL_20;
          }
        }
      }
      *(_BYTE *)(v14 + 43) = 0;
    }
    v75 = v89;
    v22 = v84;
    *(_BYTE *)(v14 + 40) = 0;
    *(_BYTE *)(v14 + 42) = 1;
    v19 = (unsigned int)-v75;
    if ( v84 )
      v75 = -v75;
    v76 = *(_BYTE *)(v14 + 44) == 0;
    *(_DWORD *)(v14 + 8) = v75;
    *(_DWORD *)(v14 + 12) = LODWORD(v90);
    *(_DWORD *)(v14 + 16) = *(_DWORD *)v91;
    if ( !v76 )
      sub_C88C0(v14);
    goto LABEL_5;
  }
  if ( !(unsigned int)sub_108100((__int64)a1) )
    return 1;
  return sub_CD7A0(a1, (__int64 *)v14, (_BYTE *)(v14 + 40));
}
