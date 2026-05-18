__int64 __fastcall sub_11D860(__int64 a1)
{
  __m128i *v2; // rbp
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // rdi
  __int64 j; // rsi
  __int64 i; // r13
  __int64 v11; // rsi
  __int64 v12; // r14
  int v13; // r12d
  __int64 v14; // rsi
  char v15; // al
  unsigned int v16; // r14d
  int v18; // r13d
  unsigned int v19; // r12d
  __int64 v20; // rax
  __int64 *v21; // rdx
  char v22; // al
  int v23; // r11d
  char v24; // al
  int v25; // eax
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rdx
  _QWORD *v30; // rsi
  __int32 v31; // r15d
  __int64 v32; // rax
  __int64 *v33; // r13
  __int64 (__fastcall *v34)(__int64 *); // rdx
  __int32 v35; // r15d
  __int32 v36; // edx
  __int64 v37; // r14
  __int64 v38; // rax
  __int64 v39; // r13
  unsigned int (__fastcall *v40)(__int64); // rax
  const char *v41; // r15
  __int64 v42; // rax
  int v43; // r13d
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdi
  int v47; // r13d
  __int64 v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rdi
  int v51; // eax
  __int32 v52; // r14d
  bool v53; // zf
  __int64 v54; // r13
  __int64 v55; // rcx
  const char *v56; // rdi
  const char *v57; // rsi
  __int64 v58; // rdi
  __int64 v59; // r14
  __int64 v60; // rax
  int v61; // r14d
  int v62; // r15d
  __int64 v63; // r14
  unsigned int v64; // eax
  void (__fastcall *v65)(__int64, char *, _QWORD); // rax
  const char *v66; // rsi
  __int32 v67; // r10d
  unsigned __int64 v68; // r11
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // r14
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // r8
  __int32 v75; // r15d
  __int64 v76; // rax
  __int64 v77; // rdi
  unsigned int v78; // eax
  void (__fastcall *v79)(__int64, char *, _QWORD); // rax
  __int64 (__fastcall *v80)(__int64, char *, __int64); // rax
  __int64 v81; // rdi
  __int32 k; // r13d
  int v83; // [rsp+0h] [rbp-88h]
  char *v84; // [rsp+0h] [rbp-88h]
  __int64 v85; // [rsp+8h] [rbp-80h]
  int v86; // [rsp+8h] [rbp-80h]
  _QWORD *v87; // [rsp+8h] [rbp-80h]
  unsigned int v88; // [rsp+10h] [rbp-78h]
  unsigned __int64 v89; // [rsp+20h] [rbp-68h]
  __int32 v90; // [rsp+2Ch] [rbp-5Ch]
  unsigned int v91; // [rsp+38h] [rbp-50h] BYREF
  unsigned int v92; // [rsp+3Ch] [rbp-4Ch] BYREF
  __int64 v93[9]; // [rsp+40h] [rbp-48h] BYREF

  v2 = *(__m128i **)a1;
  v93[1] = __readfsqword(0x28u);
  if ( v2[6].m128i_i8[7] )
    *(_DWORD *)(a1 + 52) = 7;
  v3 = *(_QWORD *)(a1 + 264);
  if ( v3 )
  {
    while ( *(_QWORD *)(v3 + 8) )
      v3 = *(_QWORD *)(v3 + 8);
    sub_11D4B0(v3);
    *(_QWORD *)(a1 + 264) = 0;
    *(_DWORD *)(a1 + 280) = 0;
  }
  sub_11D460(a1);
  v8 = *(_QWORD *)(a1 + 104);
  j = *(unsigned int *)(a1 + 36);
  if ( v8 && (_DWORD)j )
    sub_CD520(v8, j, v4, v5, v6, v7);
  for ( i = *(_QWORD *)(a1 + 272); i; i = *(_QWORD *)(a1 + 272) )
  {
    *(_QWORD *)(a1 + 272) = *(_QWORD *)(i + 8);
    v11 = *(int *)(i + 96);
    v12 = 56 * v11;
    if ( *(int *)(i + 100) > 0 )
    {
      v13 = 0;
      do
      {
        v14 = *(_QWORD *)(i + 120 + 8LL * v13 + v12);
        if ( v14 )
          sub_11D2F0(*(__int64 **)i, v14);
        ++v13;
      }
      while ( v13 < *(_DWORD *)(i + 100) );
      v11 = *(unsigned int *)(i + 96);
    }
    if ( i != -120 && (_DWORD)v11 )
      sub_CD520(i + 120, v11, v4, v5, v6, v7);
    sub_C9B10(**(_QWORD **)i, (__int64 *)(i + 72), -1, 0);
    j = i;
    sub_C9250(**(_QWORD **)i, (_QWORD *)i);
  }
  if ( *(_QWORD *)(a1 + 296) )
  {
    j = a1 + 296;
    sub_C9B10(*(_QWORD *)a1, (__int64 *)(a1 + 296), -1, 0);
  }
  if ( *(char *)(a1 + 198) >= 0 )
    goto LABEL_25;
  if ( *(_DWORD *)(a1 + 204) )
  {
    j = a1 + 204;
    sub_CD3F0(*(_QWORD *)a1, (_DWORD *)(a1 + 204));
  }
  v18 = *(_DWORD *)(a1 + 52);
  if ( !v18 )
    goto LABEL_61;
  if ( (unsigned __int8)v18 == 7 )
  {
    v22 = *(_BYTE *)(a1 + 198);
    goto LABEL_78;
  }
  if ( (unsigned int)(unsigned __int8)v18 - 9 <= 1 || (unsigned __int8)v18 == 13 )
  {
    v22 = *(_BYTE *)(a1 + 198);
    if ( (v22 & 0x40) != 0 && (unsigned __int8)v18 == 9 )
      goto LABEL_88;
    if ( (unsigned __int8)v18 != 7 && (unsigned __int8)v18 != 13 )
    {
LABEL_58:
      sub_116940(v2, 516, v4, v5);
      for ( j = v2[45].m128i_i64[0]; j; j = v2[45].m128i_i64[0] )
      {
        v2[45].m128i_i64[0] = *(_QWORD *)(j + 24);
        sub_C9250((__int64)v2, (_QWORD *)j);
      }
      v2[46].m128i_i64[0] = 0;
      v2[6].m128i_i8[13] = 0;
      v2[6].m128i_i8[5] = 1;
      v23 = *(_DWORD *)(a1 + 52);
      *(_QWORD *)(a1 + 56) = 0;
      if ( !v23 )
      {
        LOBYTE(v18) = 1;
LABEL_61:
        v19 = 0;
        if ( *(__int64 *)(a1 + 80) > 0 )
          sub_E8240(a1);
        goto LABEL_41;
      }
LABEL_88:
      LOBYTE(v18) = 1;
      v19 = 0;
      goto LABEL_41;
    }
LABEL_78:
    if ( (v22 & 0x20) != 0 )
    {
      LOBYTE(v18) = 1;
      v19 = 2;
      goto LABEL_41;
    }
    goto LABEL_58;
  }
  LOBYTE(v18) = 0;
  v19 = 0;
  if ( *(_BYTE *)(a1 + 194) == 3 )
    goto LABEL_61;
LABEL_41:
  if ( v2[33].m128i_i32[1] > 0 && !v2[35].m128i_i64[1]
    || !v2[6].m128i_i8[5]
    || v2[13].m128i_i32[2] != (((*(_BYTE *)(a1 + 198) >> 6) ^ 1) & 1) )
  {
    if ( v19 )
      goto LABEL_67;
    j = *(unsigned int *)(a1 + 52);
    if ( (_DWORD)j )
    {
      v24 = *(_BYTE *)(a1 + 194);
      if ( v24 != 3 )
      {
        v19 = 2;
        if ( v24 != 2 )
        {
          sub_116940(v2, 516, v4, v5);
          for ( j = v2[45].m128i_i64[0]; j; j = v2[45].m128i_i64[0] )
          {
            v2[45].m128i_i64[0] = *(_QWORD *)(j + 24);
            sub_C9250((__int64)v2, (_QWORD *)j);
          }
          v2[46].m128i_i64[0] = 0;
          v2[6].m128i_i8[13] = 0;
          v2[6].m128i_i8[5] = 1;
          *(_QWORD *)(a1 + 56) = 0;
          goto LABEL_51;
        }
        goto LABEL_67;
      }
    }
    v19 = 1;
    if ( *(_DWORD *)(*(_QWORD *)a1 + 740LL) )
    {
LABEL_68:
      v4 = *(unsigned int *)(a1 + 64);
      if ( (_DWORD)v4 )
      {
        j = v19;
        v27 = sub_1160E0(a1, v19);
        if ( v27 )
        {
          v29 = *(unsigned int *)(a1 + 52);
          if ( !(_DWORD)v29 || (_BYTE)v29 == 19 )
          {
            v30 = *(_QWORD **)(a1 + 168);
            *(_DWORD *)(a1 + 52) = v27;
            if ( v30 )
              sub_C9250((__int64)v2, v30);
            *(_QWORD *)(a1 + 168) = 0;
          }
          sub_116940(v2, 516, v29, v28);
          for ( j = v2[45].m128i_i64[0]; j; j = v2[45].m128i_i64[0] )
          {
            v2[45].m128i_i64[0] = *(_QWORD *)(j + 24);
            sub_C9250((__int64)v2, (_QWORD *)j);
          }
          v2[46].m128i_i64[0] = 0;
          v2[6].m128i_i8[13] = 0;
          v2[6].m128i_i8[5] = 1;
          *(_QWORD *)(a1 + 56) = 0;
        }
      }
    }
LABEL_69:
    if ( (*(_BYTE *)(a1 + 198) & 0x10) != 0 )
    {
      if ( v19 != 2 )
        goto LABEL_74;
      v2[7].m128i_i64[1] = 0;
LABEL_72:
      v25 = *(_DWORD *)(a1 + 204);
      *(_QWORD *)(a1 + 56) = 0;
      if ( !v25 )
      {
LABEL_25:
        --v2[13].m128i_i32[0];
        v15 = *(_BYTE *)(a1 + 198);
        if ( (v15 & 0x40) == 0 )
        {
          --v2[13].m128i_i32[2];
          v15 = *(_BYTE *)(a1 + 198);
        }
        if ( v15 < 0 )
          --v2[13].m128i_i32[1];
        *(_BYTE *)(a1 + 197) = 3;
        if ( v2[6].m128i_i8[7] )
        {
          *(_DWORD *)(a1 + 52) = 7;
          return 0;
        }
        else
        {
          v16 = 0;
          if ( *(_DWORD *)(a1 + 52) == 5 )
            return 5;
        }
        return v16;
      }
    }
    else
    {
LABEL_52:
      if ( !*(_DWORD *)(a1 + 204) )
        goto LABEL_25;
    }
    sub_CD510(a1, j, v4);
    goto LABEL_25;
  }
  if ( *(_DWORD *)(a1 + 52) && (*(_BYTE *)(a1 + 194) != 3 || (v18 & 1) != 0) )
  {
    j = 0;
    sub_116940(v2, 0, v4, v5);
    *(_QWORD *)(a1 + 56) = 0;
    goto LABEL_50;
  }
  if ( (__int64)(*(_QWORD *)(*(_QWORD *)a1 + 744LL) + *(_QWORD *)(*(_QWORD *)a1 + 752LL)) > 0
    && (unsigned int)sub_E8240(a1) )
  {
    if ( (*(_BYTE *)(a1 + 198) & 0x40) != 0 )
    {
      v16 = 1;
      if ( *(_DWORD *)(a1 + 204) )
        goto LABEL_101;
      return v16;
    }
    v16 = 787;
LABEL_49:
    *(_DWORD *)(a1 + 52) = v16;
    j = 0;
    sub_116940(v2, 0, (__int64)v21, v5);
    *(_QWORD *)(a1 + 56) = 0;
    goto LABEL_50;
  }
  v20 = v2[3].m128i_i64[0];
  if ( (v20 & 0x200000000LL) != 0 )
  {
    v21 = (__int64 *)0xFFFFFFFDFFFFFFFFLL;
    v16 = 11;
    v2[3].m128i_i64[0] = v20 & 0xFFFFFFFDFFFFFFFFLL;
    goto LABEL_49;
  }
  v5 = v2[35].m128i_i64[1];
  v31 = 0;
  v2[35].m128i_i64[1] = 0;
LABEL_103:
  v32 = v5 + 8LL * v31;
  while ( v2[33].m128i_i32[1] > v31 )
  {
    ++v31;
    v33 = *(__int64 **)(*(_QWORD *)v32 + 16LL);
    if ( v33 )
    {
      v34 = *(__int64 (__fastcall **)(__int64 *))(*v33 + 120);
      if ( v34 )
      {
        v85 = v5;
        j = a1 + 168;
        v16 = v34(v33);
        sub_DC780((__int64 *)a1, (__int64 **)(a1 + 168), v33 + 2);
        v5 = v85;
        if ( v16 )
        {
          v2[35].m128i_i64[1] = v85;
          goto LABEL_109;
        }
        goto LABEL_103;
      }
    }
    v32 += 8;
  }
  v2[35].m128i_i64[1] = v5;
  j = 0;
  v83 = 0;
  v35 = 0;
  while ( 1 )
  {
    v36 = v2[2].m128i_i32[2];
    v37 = 32LL * v35;
    if ( v36 <= v35 )
      break;
    while ( 1 )
    {
      v38 = v37 + v2[2].m128i_i64[0];
      v39 = *(_QWORD *)(v38 + 8);
      if ( v39 )
      {
        if ( *(_BYTE *)(v39 + 16) == 2 )
          break;
      }
      ++v35;
      v37 += 32;
      if ( v36 <= v35 )
        goto LABEL_119;
    }
    if ( *(_BYTE *)(v39 + 17) )
    {
      sub_CC740(*(_QWORD *)(v38 + 8));
      v38 = v37 + v2[2].m128i_i64[0];
    }
    v21 = *(__int64 **)(v39 + 8);
    v50 = *v21;
    if ( *(_BYTE *)(v38 + 16) != 1 )
    {
      v21 = (__int64 *)byte_1BAD80;
      if ( byte_1BAD80[*(unsigned __int8 *)(v50 + 9)] )
        v83 += (*(_QWORD *)(v50 + 16) & 0xFF000000FFLL) == 0;
    }
    v51 = *(_DWORD *)(v50 + 48);
    if ( v51 )
    {
      if ( !*(_BYTE *)(v39 + 17) || (v53 = *(_DWORD *)(v39 + 20) == 1, --*(_DWORD *)(v39 + 20), !v53) )
      {
LABEL_148:
        v16 = v51;
        goto LABEL_109;
      }
      v52 = v35 + 1;
LABEL_146:
      v86 = v51;
      sub_CC7D0(v39, j, (__int64)v21);
      v51 = v86;
      goto LABEL_147;
    }
    v52 = ++v35;
    if ( *(_QWORD *)(v50 + 296) )
    {
      if ( !*(_BYTE *)(v39 + 17) )
        goto LABEL_142;
      v51 = *(_DWORD *)(v39 + 20) - 1;
      v53 = *(_DWORD *)(v39 + 20) == 1;
      *(_DWORD *)(v39 + 20) = v51;
      if ( !v53 )
        goto LABEL_142;
      goto LABEL_146;
    }
    j = 4;
    v51 = sub_CC0D0(v50, 4);
    if ( *(_BYTE *)(v39 + 17) )
    {
      v53 = (*(_DWORD *)(v39 + 20))-- == 1;
      if ( v53 )
        goto LABEL_146;
    }
LABEL_147:
    v35 = v52;
    if ( v51 )
      goto LABEL_148;
LABEL_142:
    j = 1;
  }
LABEL_119:
  if ( (_DWORD)j )
  {
    v40 = (unsigned int (__fastcall *)(__int64))v2[17].m128i_i64[1];
    if ( v40 )
    {
      if ( v40(v2[17].m128i_i64[0]) )
      {
        v16 = 531;
        goto LABEL_49;
      }
    }
  }
  v41 = byte_1BADB4;
  v42 = **(_QWORD **)(*(_QWORD *)(v2[2].m128i_i64[0] + 8) + 8LL);
  if ( !*(_BYTE *)(v42 + 19) )
  {
    v41 = *(const char **)(v42 + 216);
    v43 = 0;
    if ( !v41 )
    {
LABEL_124:
      while ( 1 )
      {
        v44 = v2[2].m128i_u32[2];
        v45 = 32LL * v43;
        if ( (int)v44 <= v43 )
          break;
        while ( 1 )
        {
          ++v43;
          v46 = *(_QWORD *)(v2[2].m128i_i64[0] + v45 + 8);
          if ( v46 )
          {
            if ( *(_BYTE *)(v46 + 16) == 2 )
              break;
          }
          v45 += 32;
          if ( (int)v44 <= v43 )
            goto LABEL_128;
        }
        j = 0;
        v51 = sub_119750(v46, nullptr);
        if ( v51 )
          goto LABEL_148;
      }
LABEL_128:
      v47 = 0;
      while ( 1 )
      {
        v48 = 32LL * v47;
        if ( (int)v44 <= v47 )
          goto LABEL_133;
        while ( 1 )
        {
          ++v47;
          v49 = *(_QWORD *)(v2[2].m128i_i64[0] + v48 + 8);
          if ( v49 )
          {
            if ( *(_BYTE *)(v49 + 16) )
              break;
          }
          v48 += 32;
          if ( (int)v44 <= v47 )
            goto LABEL_133;
        }
        j = 0;
        v51 = sub_10FAC0(v49, 0, v44);
        if ( v51 )
          goto LABEL_148;
        v44 = v2[2].m128i_u32[2];
      }
    }
  }
  if ( (strlen(v41) & 0x3FFFFFFF) == 0 || v83 <= 1 )
  {
    v43 = 0;
    goto LABEL_124;
  }
  v54 = v2->m128i_i64[0];
  v55 = -1;
  v93[0] = 0;
  v56 = v41;
  v57 = "%.4c%s%.16c";
  do
  {
    if ( !v55 )
      break;
    v53 = *v56++ == v83 <= 1;
    --v55;
  }
  while ( !v53 );
  v58 = (__int64)v2;
  v59 = -v55 - 2;
  v60 = sub_E8280((__int64)v2, "%.4c%s%.16c", 0, v41, 0);
  v61 = v59 & 0x3FFFFFFF;
  v87 = (_QWORD *)v60;
  if ( !v60 )
  {
    v16 = 7;
    goto LABEL_49;
  }
  v62 = 0;
  v84 = (char *)(v60 + 4);
  v63 = v60 + 4 + v61;
  while ( 2 )
  {
    while ( 2 )
    {
      ++v62;
      if ( !(unsigned int)sub_FEBD0(v58, (__int64)v57) )
        sub_FF240(4, (const char *)&v92);
      sub_E89C0(13, v63, "-mj%06X9%02X", v92 >> 8, (unsigned __int8)v92);
      v57 = v84;
      v64 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, unsigned int *))(v54 + 56))(v54, v84, 0, &v91);
      if ( v64 )
      {
        v88 = v64;
        goto LABEL_216;
      }
      v58 = v91;
      if ( !v91 )
        goto LABEL_178;
      if ( !v62 )
        continue;
      break;
    }
    if ( v62 <= 100 )
    {
      if ( v62 == 1 )
      {
        v57 = "MJ collide: %s";
        v58 = 13;
        sub_E8BB0(0xDu, "MJ collide: %s", v84);
      }
      continue;
    }
    break;
  }
  sub_E8BB0(0xDu, "MJ delete: %s", v84);
  v65 = *(void (__fastcall **)(__int64, char *, _QWORD))(v54 + 48);
  if ( v65 )
    v65(v54, v84, 0);
LABEL_178:
  v66 = v84;
  v88 = sub_D2440(v54, (__int64)v84, v93, 0x4016u, 0);
  if ( v88 )
  {
LABEL_216:
    j = (__int64)v87;
    sub_C9250((__int64)v2, v87);
    v16 = v88;
    goto LABEL_109;
  }
  v67 = 0;
  v68 = 0;
  v69 = v93[0];
  v70 = *(_QWORD *)v93[0];
  v71 = v93[0];
  if ( v2[2].m128i_i32[2] > 0 )
  {
    do
    {
      v72 = *(_QWORD *)(v2[2].m128i_i64[0] + 32LL * v67 + 8);
      if ( v72 )
      {
        if ( *(_BYTE *)(v72 + 16) == 2 )
        {
          v73 = **(_QWORD **)(v72 + 8);
          v74 = *(_QWORD *)(v73 + 224);
          if ( v74 )
          {
            v90 = v67;
            v66 = *(const char **)(v73 + 224);
            v89 = v68;
            v16 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, unsigned __int64))(v70 + 24))(
                    v71,
                    v74,
                    ((unsigned int)strlen(v66) & 0x3FFFFFFF) + 1,
                    v68);
            v68 = v89 + (strlen(v66) & 0x3FFFFFFF) + 1;
            if ( v16 )
              goto LABEL_198;
            v71 = v93[0];
            v67 = v90;
            v70 = *(_QWORD *)v93[0];
          }
        }
      }
      ++v67;
    }
    while ( v67 < v2[2].m128i_i32[2] );
    v69 = v71;
  }
  if ( *(_QWORD *)v69 )
  {
    if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v69 + 96LL))(v69) & 0x400) == 0 )
    {
      v69 = v93[0];
      goto LABEL_191;
    }
LABEL_192:
    v75 = 0;
    while ( v2[2].m128i_i32[2] > v75 )
    {
      v76 = v75++;
      v77 = *(_QWORD *)(v2[2].m128i_i64[0] + 32 * v76 + 8);
      if ( v77 )
      {
        if ( *(_BYTE *)(v77 + 16) == 2 )
        {
          v66 = v84;
          v78 = sub_119750(v77, v84);
          if ( v78 )
          {
            v16 = v78;
            sub_C9230(v93[0], (__int64)v84);
            goto LABEL_200;
          }
        }
      }
    }
    sub_C9230(v93[0], (__int64)v66);
    v80 = *(__int64 (__fastcall **)(__int64, char *, __int64))(v54 + 48);
    if ( v80 )
    {
      j = (__int64)v87;
      v16 = v80(v54, v84, 1);
      v81 = (__int64)v2;
      sub_C9250((__int64)v2, v87);
      if ( v16 )
        goto LABEL_109;
    }
    else
    {
      j = (__int64)v87;
      v81 = (__int64)v2;
      sub_C9250((__int64)v2, v87);
    }
    if ( qword_2424C0 )
      qword_2424C0(v81, j, v21, v5);
    for ( k = 0; k < v2[2].m128i_i32[2]; ++k )
    {
      v81 = *(_QWORD *)(v2[2].m128i_i64[0] + 32LL * k + 8);
      if ( v81 && *(_BYTE *)(v81 + 16) )
      {
        j = 1;
        sub_10FAC0(v81, 1, (__int64)v21);
      }
    }
    if ( qword_2424C8 )
      qword_2424C8(v81, j);
LABEL_133:
    j = 128;
    sub_D0560((__int64)v2, 128);
    v2[46].m128i_i64[1] = 0;
    v2[47].m128i_i64[0] = 0;
    v2[3].m128i_i64[0] &= ~0x80000uLL;
    v2[2].m128i_i32[3] &= ~1u;
LABEL_50:
    v2[46].m128i_i32[1] = 0;
    if ( !v19 )
    {
LABEL_51:
      if ( (*(_BYTE *)(a1 + 198) & 0x10) == 0 )
        goto LABEL_52;
LABEL_74:
      v26 = *(_QWORD *)(a1 + 56);
      v2[8].m128i_i64[0] += v26;
      v2[7].m128i_i64[1] = v26;
      goto LABEL_72;
    }
LABEL_67:
    if ( *(_DWORD *)(*(_QWORD *)a1 + 740LL) )
      goto LABEL_68;
    goto LABEL_69;
  }
LABEL_191:
  v66 = (_BYTE *)(&dword_0 + 2);
  v16 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v69 + 40LL))(v69, 2);
  if ( !v16 )
    goto LABEL_192;
LABEL_198:
  sub_C9230(v93[0], (__int64)v66);
  v79 = *(void (__fastcall **)(__int64, char *, _QWORD))(v54 + 48);
  if ( v79 )
    v79(v54, v84, 0);
LABEL_200:
  j = (__int64)v87;
  sub_C9250((__int64)v2, v87);
LABEL_109:
  if ( v16 != 5 || (*(_BYTE *)(a1 + 198) & 0x40) == 0 )
    goto LABEL_49;
  if ( *(_DWORD *)(a1 + 204) )
  {
LABEL_101:
    sub_CD510(a1, j, (__int64)v21);
    return v16;
  }
  return 5;
}
