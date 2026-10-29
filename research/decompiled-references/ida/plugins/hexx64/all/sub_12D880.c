__int64 __fastcall sub_12D880(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        _DWORD *a5,
        __m128i a6)
{
  int *v6; // r15
  int v9; // esi
  unsigned int v11; // eax
  __int64 v12; // rdx
  int v13; // r13d
  int v14; // r8d
  unsigned int v15; // r14d
  __int64 v16; // rsi
  char v17; // al
  char v19; // al
  __int64 v20; // rcx
  int v21; // edx
  unsigned int *v22; // r10
  __int64 v23; // rcx
  char v24; // al
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 (__fastcall **v30)(); // rax
  __int64 v31; // rax
  char v32; // al
  __int64 v33; // r12
  unsigned int v34; // r14d
  __int64 v35; // r15
  __int64 v36; // r13
  __int64 v37; // rdx
  __int64 v38; // rcx
  int v39; // r8d
  int v40; // eax
  __int64 v41; // r10
  int v42; // r9d
  int v43; // r11d
  int v44; // eax
  __int64 v45; // r10
  int v46; // r9d
  __int64 v47; // rsi
  __int64 v48; // rsi
  int v49; // r8d
  __int64 v50; // rdx
  __int64 v51; // rcx
  char v52; // cl
  unsigned __int8 *v53; // r15
  unsigned int *v54; // rax
  __int64 v55; // r12
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int16 v58; // si
  __int16 v59; // cx
  int v60; // edx
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  unsigned int v64; // r13d
  __int64 v65; // rdi
  _DWORD *v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // rdx
  char *v69; // r12
  __int64 v70; // r10
  int v71; // r13d
  int v72; // eax
  int v73; // eax
  int v74; // eax
  int v75; // eax
  int v76; // eax
  unsigned __int128 v77; // [rsp+8h] [rbp-E0h]
  int v78; // [rsp+8h] [rbp-E0h]
  _DWORD *v79; // [rsp+8h] [rbp-E0h]
  int v80; // [rsp+8h] [rbp-E0h]
  unsigned __int8 v81; // [rsp+18h] [rbp-D0h]
  unsigned __int8 *v82; // [rsp+18h] [rbp-D0h]
  unsigned int *v83; // [rsp+20h] [rbp-C8h]
  __int64 v84; // [rsp+20h] [rbp-C8h]
  int v85; // [rsp+20h] [rbp-C8h]
  int v86; // [rsp+28h] [rbp-C0h]
  int v87; // [rsp+28h] [rbp-C0h]
  int v88; // [rsp+30h] [rbp-B8h]
  __int64 v89; // [rsp+38h] [rbp-B0h]
  unsigned __int64 v90; // [rsp+48h] [rbp-A0h] BYREF
  __int64 (__fastcall **v91)(); // [rsp+50h] [rbp-98h] BYREF
  __int128 v92; // [rsp+58h] [rbp-90h]
  __int64 v93; // [rsp+68h] [rbp-80h]
  unsigned int *v94; // [rsp+70h] [rbp-78h] BYREF
  __int64 v95; // [rsp+78h] [rbp-70h]
  unsigned __int64 v96; // [rsp+80h] [rbp-68h] BYREF
  __int64 v97; // [rsp+88h] [rbp-60h]
  unsigned __int64 v98; // [rsp+90h] [rbp-58h] BYREF
  __int64 v99; // [rsp+98h] [rbp-50h]
  unsigned __int64 v100; // [rsp+A8h] [rbp-40h]

  v6 = (int *)(a1 + 32);
  v9 = *(_DWORD *)(a1 + 68);
  v77 = __PAIR128__(a4, a3);
  v100 = __readfsqword(0x28u);
  LOBYTE(v11) = sub_122640(a1 + 32, v9);
  if ( !(_BYTE)v11 )
    return 0;
  v13 = *(_DWORD *)(a1 + 68);
  v14 = *(_DWORD *)(a1 + 36);
  if ( v13 > v14 )
  {
    if ( !under_debugger )
      sub_383060(0xCA55u, *(double *)a6.m128i_i64);
LABEL_123:
    BUG();
  }
  if ( (*(_BYTE *)(a1 + 33) & 0x20) != 0 )
    return 0;
  v15 = v11;
  if ( *(_BYTE *)(a1 + 32) != 4 )
  {
    v16 = a2[12];
    if ( *(_BYTE *)(v16 + 145)
      && (v19 = sub_11BB90((unsigned __int8 *)v6, v16, 0, *(double *)a6.m128i_i64), v13 = *(_DWORD *)(a1 + 68), v19) )
    {
      v21 = *(_DWORD *)(a1 + 36);
      if ( !v13 || v21 <= v13 )
      {
LABEL_8:
        if ( *(_BYTE *)(a1 + 32) == 14 && *(_DWORD *)(a1 + 68) < *(_DWORD *)(a1 + 36) / 2 )
        {
          v27 = *(__int64 **)(a1 + 40);
          v28 = v27[1];
          v29 = *v27;
          v27[1] = 0;
          *v27 = 0xFFFFFFFF00000000LL;
          v30 = *(__int64 (__fastcall ***)())(a1 + 32);
          *(_QWORD *)(a1 + 32) = v29;
          v91 = v30;
          v31 = *(_QWORD *)(a1 + 40);
          *(_QWORD *)(a1 + 40) = v28;
          *(_QWORD *)&v92 = v31;
          sub_11CDA0((__int64)&v91);
          return v15;
        }
        return 0;
      }
      v17 = sub_126F10(v6, a2, v21 - v13, v20, *(double *)a6.m128i_i64);
    }
    else
    {
      v17 = sub_12AB50((unsigned int **)v6, a2, v13, 1, a6);
    }
    if ( v17 )
    {
      *(_DWORD *)a1 = 4;
      return v15;
    }
    goto LABEL_8;
  }
  v22 = *(unsigned int **)(a1 + 40);
  v23 = *v22;
  switch ( (int)v23 )
  {
    case 4:
      *v22 = 10;
      sub_12C5D0(a2, a1, v12, v23, a6);
      return v15;
    case 5:
    case 7:
      v47 = *(_QWORD *)(a1 + 40);
      v94 = (unsigned int *)0xFFFFFFFF00000000LL;
      v95 = 0;
      v96 = 0xFFFFFFFF00000000LL;
      v97 = 0;
      v98 = 0xFFFFFFFF00000000LL;
      v99 = 0;
      v92 = 0;
      sub_1253A0((__int64)&v91, v47);
      v48 = a2[12];
      if ( (!*(_BYTE *)(v48 + 145) || !sub_11BB90((unsigned __int8 *)&v94, v48, 0, 0.0))
        && (unsigned __int8)sub_12AB50(&v94, a2, *(_DWORD *)(a1 + 68), 1, (__m128i)0LL) )
      {
        goto LABEL_64;
      }
      if ( a5 && (unsigned int)(*a5 - 8) <= 1 || (v49 = *(_DWORD *)(a1 + 68), v49 == 1) )
      {
        sub_11CDA0((__int64)&v98);
        sub_11CDA0((__int64)&v96);
        sub_11CDA0((__int64)&v94);
        return 0;
      }
      sub_1207E0((char *)&v94, a2, 10, v93, v49, (__m128i)0LL);
LABEL_64:
      sub_11CDA0((__int64)&v98);
      sub_123A40((__int64)&v98, (unsigned __int8 *)(a1 + 64), v50, v51);
      sub_11D890(a1, (__int64)&v91);
      sub_11CDA0((__int64)&v98);
      sub_11CDA0((__int64)&v96);
      sub_11CDA0((__int64)&v94);
      return v15;
    case 8:
    case 9:
      if ( v13 == v22[9] )
      {
        sub_123A40((__int64)&v91, (unsigned __int8 *)v22 + 32, v12, v23);
        *(_DWORD *)a1 = 4;
        sub_11CDA0((__int64)v6);
        sub_123A40((__int64)v6, (unsigned __int8 *)&v91, v62, v63);
        sub_11CDA0((__int64)&v91);
        return v15;
      }
      if ( v13 < (int)v22[9] )
      {
        *v22 = 10;
        v22 = *(unsigned int **)(a1 + 40);
      }
      v22[17] = v13;
      goto LABEL_44;
    case 10:
      goto LABEL_44;
    case 12:
    case 13:
    case 14:
    case 19:
    case 21:
      v24 = *((_BYTE *)v22 + 32);
      goto LABEL_19;
    case 15:
    case 16:
    case 18:
      goto LABEL_28;
    case 17:
      v32 = sub_11FD80((char *)v22 + 48, (__int64 *)&v90, 0);
      v13 = *(_DWORD *)(a1 + 68);
      if ( !v32 || (v90 & (v90 - 1)) != 0 || (unsigned __int64)v13 > 0x3F || v90 >= 1LL << v13 )
        goto LABEL_27;
      v65 = *(_QWORD *)(a1 + 40);
      v91 = &off_4DD8E0;
      *(_QWORD *)&v92 = a2;
      *((_QWORD *)&v92 + 1) = (unsigned int)v13 | 0x100000000LL;
      if ( (unsigned __int8)sub_121DB0(v65, (__int64)&v91, 273) )
        goto LABEL_44;
      v13 = *(_DWORD *)(a1 + 68);
LABEL_27:
      v22 = *(unsigned int **)(a1 + 40);
      v14 = *(_DWORD *)(a1 + 36);
      LODWORD(v23) = *v22;
LABEL_28:
      v23 = (unsigned int)v23 & 0xFFFFFFFD;
      v78 = v23;
      if ( v13 >= v14 )
        return 0;
      v81 = v15;
      v33 = (__int64)(v22 + 8);
      v34 = v13;
      v35 = (__int64)(v22 + 12);
      v36 = (__int64)v22;
      while ( 1 )
      {
        if ( v78 == 16 )
        {
          while ( 1 )
          {
            while ( !sub_30DAC0(v33, v34) )
            {
              v34 *= 2;
              if ( *(_DWORD *)(a1 + 36) <= (signed int)v34 )
                return 0;
            }
            if ( sub_30DAC0(v35, v34) )
              break;
            v34 *= 2;
            if ( (signed int)v34 >= *(_DWORD *)(a1 + 36) )
              return 0;
          }
        }
        else
        {
          while ( !(unsigned __int8)sub_1278D0(v33, a2, v34, v23, a6)
               || !(unsigned __int8)sub_1278D0(v35, a2, v34, v23, a6) )
          {
            v34 *= 2;
            if ( *(_DWORD *)(a1 + 36) <= (signed int)v34 )
              return 0;
          }
        }
        *(_QWORD *)&v92 = a2;
        *((_QWORD *)&v92 + 1) = v34 | 0x100000000LL;
        v91 = &off_4DD8E0;
        if ( (unsigned __int8)sub_121DB0(v36, (__int64)&v91, 273) )
          break;
        v34 *= 2;
        if ( *(_DWORD *)(a1 + 36) <= (signed int)v34 )
          return 0;
      }
      v64 = v34;
      v15 = v81;
      if ( *(_DWORD *)(a1 + 68) == v64 )
      {
LABEL_44:
        sub_12C5D0(a2, a1, v12, v23, a6);
        return v15;
      }
      *(_DWORD *)(a1 + 36) = v64;
      return 0;
    case 20:
      if ( *((_BYTE *)v22 + 48) == 2 )
      {
        v52 = 8 * v13;
        v53 = (unsigned __int8 *)(v22 + 8);
        v54 = v22 + 12;
        if ( (unsigned __int64)(8 * v13) > 0x3F )
        {
LABEL_69:
          v55 = -1;
          goto LABEL_70;
        }
      }
      else
      {
        v24 = *((_BYTE *)v22 + 32);
        if ( v24 != 2 )
          goto LABEL_19;
        v52 = 8 * v13;
        v53 = (unsigned __int8 *)(v22 + 12);
        v54 = v22 + 8;
        if ( (unsigned __int64)(8 * v13) > 0x3F )
          goto LABEL_69;
      }
      v55 = (1LL << v52) - 1;
LABEL_70:
      if ( sub_32ABC0(*(_QWORD *)(*((_QWORD *)v54 + 1) + 16LL), v54[1], 1) == v55 )
      {
        *(_QWORD *)&v92 = 0;
        sub_123A40((__int64)&v91, v53, v56, v57);
        v58 = *(_WORD *)(a1 + 32);
        v59 = *(_WORD *)(a1 + 34);
        v60 = *(_DWORD *)(a1 + 36);
        *(_QWORD *)(a1 + 32) = v91;
        v61 = *(_QWORD *)(a1 + 40);
        LOWORD(v91) = v58;
        *(_QWORD *)(a1 + 40) = v92;
        WORD1(v91) = v59;
        HIDWORD(v91) = v60;
        *(_QWORD *)&v92 = v61;
        sub_11CDA0((__int64)&v91);
        return v15;
      }
      v22 = *(unsigned int **)(a1 + 40);
      v24 = *((_BYTE *)v22 + 32);
LABEL_19:
      if ( v24 != 10 && *((_BYTE *)v22 + 48) != 10 )
      {
        v94 = (unsigned int *)0xFFFFFFFF00000000LL;
        v95 = 0;
        v96 = 0xFFFFFFFF00000000LL;
        v97 = 0;
        v98 = 0xFFFFFFFF00000000LL;
        v99 = 0;
        v92 = 0;
        sub_1253A0((__int64)&v91, (__int64)v22);
        sub_12B320((__int64)&v94, a2, v93, *(_DWORD *)(a1 + 68), (__m128i)0LL);
        sub_12B320((__int64)&v96, a2, v93, *(_DWORD *)(a1 + 68), (__m128i)0LL);
        sub_11CDA0((__int64)&v98);
        sub_123A40((__int64)&v98, (unsigned __int8 *)(a1 + 64), v25, v26);
        sub_11D890(a1, (__int64)&v91);
        sub_11CDA0((__int64)&v98);
        sub_11CDA0((__int64)&v96);
        sub_11CDA0((__int64)&v94);
        return v15;
      }
      return 0;
    case 23:
    case 24:
      if ( *((_BYTE *)v22 + 48) != 2
        || (*((_BYTE *)v22 + 33) & 4) != 0
        || *((_BYTE *)v22 + 32) == 4 && sub_122600(*((unsigned int **)v22 + 5)) )
      {
        return 0;
      }
      v86 = v14;
      v83 = v22;
      v82 = (unsigned __int8 *)(v22 + 8);
      LODWORD(v90) = -1;
      sub_152630((__int64)v22, &v90);
      v39 = v86;
      v40 = v90;
      v41 = (__int64)v83;
      v42 = 8 * (v86 - v13);
      if ( v42 == (_DWORD)v90 )
        goto LABEL_96;
      v43 = 8 * v13;
      if ( (_DWORD)v90 != 8 * v13 )
        goto LABEL_50;
      if ( v86 >= 2 * v13 )
      {
        if ( (unsigned __int8)sub_1273B0((__int64)v82, a2, *((_QWORD *)v83 + 3), 2 * v13, a6) )
        {
LABEL_96:
          *(_DWORD *)a1 = 11;
          sub_123A40((__int64)&v91, v82, v37, v38);
          sub_11CA10((char *)v6, (char *)&v91);
          sub_11CDA0((__int64)&v91);
          return v15;
        }
        v40 = v90;
        v43 = 8 * v13;
        v42 = 8 * (v86 - v13);
        v39 = v86;
        v41 = (__int64)v83;
LABEL_50:
        if ( v42 < v40 )
        {
          if ( v39 == 2 * v13 && *(_BYTE *)(v41 + 32) == 4 && **(_DWORD **)(v41 + 40) == 14 )
          {
            v69 = (char *)(v41 + 48);
            v79 = (_DWORD *)v41;
            sub_120A10(v41 + 48, a2, v40 - v43, *(_DWORD *)(v41 + 52), **(_QWORD **)(v41 + 56), 0);
            *(_DWORD *)a1 = *v79;
            *v79 = 11;
            sub_11CA10(v69, (char *)(a1 + 48));
            *(_DWORD *)(v70 + 68) = v13;
            *(_DWORD *)(a1 + 36) = v13;
            return v15;
          }
          goto LABEL_52;
        }
        if ( !v40 || (v40 & 7) != 0 )
        {
LABEL_52:
          v84 = v41;
          if ( (unsigned int)sub_119AE0(v77, v41, 1, *(double *)a6.m128i_i64) == 1 )
          {
            sub_12D880(a1, (__int64)a2, v77, *((__int64 *)&v77 + 1), a5);
            return v15;
          }
          v44 = *(_DWORD *)(a1 + 68);
          if ( *(_BYTE *)(v84 + 32) != 4 )
            goto LABEL_54;
          v66 = *(_DWORD **)(v84 + 40);
          if ( *v66 != 9 )
          {
            if ( *v66 != 8 || *(_DWORD *)v84 != 24 )
              goto LABEL_54;
            goto LABEL_100;
          }
          if ( *(_DWORD *)v84 == 23 )
          {
LABEL_100:
            if ( v66[9] == v44 )
            {
              *(_DWORD *)a1 = *(_DWORD *)v84;
              sub_11CA10((char *)(a1 + 48), (char *)(v84 + 48));
              sub_123A40((__int64)&v91, (unsigned __int8 *)(v67 + 32), v68, v67);
              sub_11CA10((char *)v6, (char *)&v91);
              sub_11CDA0((__int64)&v91);
              return v15;
            }
LABEL_54:
            if ( v44 == 1 && *(_DWORD *)v84 == 23 && 8 * *(_DWORD *)(v84 + 36) - 1 == (_DWORD)v90 )
            {
              v91 = (__int64 (__fastcall **)())0xFFFFFFFF00000000LL;
              *(_QWORD *)&v92 = 0;
              sub_11CA10((char *)&v91, (char *)v82);
              sub_11CA10((char *)&v91, (char *)v6);
              sub_120A10(a1 + 48, a2, 0, *(_DWORD *)(a1 + 36), *(_QWORD *)(v45 + 24), v46);
              *(_DWORD *)a1 = 40;
              sub_11CDA0((__int64)&v91);
              return v15;
            }
          }
          return 0;
        }
      }
      else if ( v42 < (int)v90 || !(_DWORD)v90 )
      {
        goto LABEL_52;
      }
      v89 = v41;
      v88 = v39;
      v87 = v40 / 8;
      v85 = v39 - v40 / 8;
      if ( sub_122640((__int64)v6, v85) )
      {
        *(_DWORD *)v89 = 11;
        sub_11CDA0(v89 + 48);
        *(_DWORD *)(a1 + 36) = v85;
        *(_DWORD *)(v89 + 68) = v85;
        return v15;
      }
      v71 = v87 + v13;
      if ( sub_122640((__int64)v6, v71) )
      {
        *(_DWORD *)a1 = 11;
        *(_DWORD *)v89 = 10;
        sub_11CDA0(v89 + 48);
        *(_DWORD *)(a1 + 36) = v71;
        *(_DWORD *)(v89 + 68) = v71;
        return v15;
      }
      v72 = round_up_power2();
      if ( v88 <= v72 )
      {
        v75 = round_up_power2();
        v41 = v89;
        if ( v88 > v75 )
        {
          sub_1273B0((__int64)v82, a2, *(_QWORD *)(a1 + 24), v75, a6);
          v76 = *(_DWORD *)(v89 + 36);
          *(_DWORD *)(v89 + 68) = v76;
          *(_DWORD *)(a1 + 36) = v76;
          return v15;
        }
        goto LABEL_52;
      }
      v80 = v72;
      sub_1279B0((__int64)v82, a2, *(_QWORD *)(a1 + 24), v72, a6);
      v73 = *(_DWORD *)(v89 + 36);
      *(_DWORD *)(v89 + 68) = v73;
      *(_DWORD *)(a1 + 36) = v73;
      v74 = v90 + 8 * (v80 - v88);
      if ( v74 < 0 )
      {
        if ( !under_debugger )
          sub_383060(0xC96Cu, *(double *)a6.m128i_i64);
        goto LABEL_123;
      }
      if ( v74 )
      {
        sub_120A10(v89 + 48, a2, v74, *(_DWORD *)(v89 + 52), **(_QWORD **)(v89 + 56), 0);
      }
      else
      {
        *(_DWORD *)v89 = 4;
        sub_11CDA0(v89 + 48);
      }
      return v15;
    default:
      return 0;
  }
}

