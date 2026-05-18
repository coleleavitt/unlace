__int64 __fastcall sub_192280(char **a1, _OWORD *a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // r12
  unsigned int v5; // edi
  int v6; // r9d
  unsigned __int8 v7; // al
  _OWORD *v8; // r8
  int v9; // esi
  int v10; // r11d
  int v11; // r14d
  int v12; // r15d
  char *v13; // r12
  int v14; // ebp
  __int64 v15; // r15
  int v16; // edx
  __m128i v17; // xmm0
  __m128i *v18; // rsi
  int v19; // ecx
  __int16 v20; // ax
  int v21; // ecx
  __m128i *v22; // rsi
  __int16 v23; // ax
  unsigned int v24; // r8d
  unsigned __int16 *v25; // rsi
  __m128i *v26; // rcx
  int v27; // eax
  int v28; // r10d
  unsigned int v29; // eax
  __m128i *v30; // rcx
  __int16 v31; // ax
  __m128i v32; // xmm0
  int v33; // eax
  bool v34; // al
  int v35; // r9d
  int v36; // ebx
  char *v37; // rbp
  int v38; // r14d
  char v39; // r13
  __int64 result; // rax
  int v41; // edx
  __m128i *v42; // rcx
  __int16 v43; // ax
  __m128i si128; // xmm0
  int v45; // edi
  __m128i *v46; // r9
  __int16 v47; // cx
  int v48; // edi
  __m128i *v49; // r9
  __int16 v50; // cx
  unsigned int v51; // r9d
  unsigned __int16 *v52; // rdi
  __m128i *v53; // rcx
  int v54; // r12d
  int v55; // r14d
  unsigned int v56; // r12d
  unsigned int v57; // ecx
  __m128i *v58; // r9
  unsigned __int16 *v59; // rdi
  int v60; // eax
  int v61; // r10d
  unsigned int v62; // eax
  bool v63; // zf
  unsigned int v64; // edx
  char *v65; // r15
  unsigned __int8 i; // al
  int v67; // eax
  int v68; // r13d
  int v69; // eax
  char *v70; // rax
  int v71; // ecx
  char *v72; // rax
  int v73; // edx
  __int16 v74; // [rsp+0h] [rbp-136h]
  char v75; // [rsp+2h] [rbp-134h]
  unsigned int v76; // [rsp+2h] [rbp-134h]
  int v77; // [rsp+6h] [rbp-130h]
  __int16 v78; // [rsp+6h] [rbp-130h]
  int v79; // [rsp+6h] [rbp-130h]
  int v80; // [rsp+6h] [rbp-130h]
  int v81; // [rsp+Eh] [rbp-128h]
  char *v82; // [rsp+Eh] [rbp-128h]
  int v83; // [rsp+Eh] [rbp-128h]
  int v84; // [rsp+Eh] [rbp-128h]
  _QWORD *v85; // [rsp+16h] [rbp-120h]
  int v86; // [rsp+16h] [rbp-120h]
  _OWORD *v87; // [rsp+16h] [rbp-120h]
  __int64 v88; // [rsp+1Eh] [rbp-118h]
  __m128i v89; // [rsp+2Eh] [rbp-108h] BYREF
  __m128i v90[2]; // [rsp+3Eh] [rbp-F8h] BYREF
  __m128i v91[2]; // [rsp+5Eh] [rbp-D8h] BYREF
  __int16 v92; // [rsp+7Eh] [rbp-B8h] BYREF
  unsigned __int16 v93; // [rsp+80h] [rbp-B6h]
  _BYTE v94[88]; // [rsp+9Eh] [rbp-98h] BYREF
  unsigned __int64 v95; // [rsp+F6h] [rbp-40h]

  v2 = a1;
  v95 = __readfsqword(0x28u);
  v3 = (__int64)a2;
  *a2 = 0;
  v4 = (__int64)*a1;
  v5 = **a1;
  if ( v5 <= 0x7F )
  {
    v39 = v5;
    while ( isspace(v5) )
    {
      v5 = *(char *)++v4;
      v39 = v5;
      if ( v5 > 0x7F )
        goto LABEL_2;
    }
    if ( !v39 )
      return 3;
  }
LABEL_2:
  *v2 = v4;
  sub_1998A0(v94, v4, 80);
  v6 = v94[0];
  memset(v90, 0, 22);
  v7 = v94[0];
  if ( !v94[0] )
  {
    v75 = 0;
    v15 = 0;
    v74 = 0;
    goto LABEL_35;
  }
  v75 = 0;
  v8 = a2;
  v74 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = v94;
  v14 = 0;
LABEL_4:
  if ( (unsigned __int8)(v7 - 48) > 9u )
    goto LABEL_5;
  if ( !v11 )
    v11 = 1;
  do
  {
LABEL_51:
    while ( 1 )
    {
      v78 = v6 - 48;
      if ( v6 == 48 )
        break;
      if ( v90[0].m128i_i16[2] )
      {
        v75 = 1;
        goto LABEL_76;
      }
LABEL_54:
      v10 += v12;
      v41 = 0;
      v42 = (__m128i *)((char *)v90[1].m128i_i64 + 4);
      do
      {
        if ( v42->m128i_i16[0] < 0 )
          v41 |= 1u;
        v43 = 2 * v42->m128i_i16[0];
        if ( (v41 & 2) != 0 )
          v43 |= 1u;
        v42 = (__m128i *)((char *)v42 - 2);
        v41 *= 2;
        v42->m128i_i16[1] = v43;
      }
      while ( v42 != (__m128i *)&v90[0].m128i_i16[1] );
      si128 = _mm_load_si128(v90);
      v45 = 0;
      v82 = v13;
      v91[1].m128i_i32[0] = v90[1].m128i_i32[0];
      v91[1].m128i_i16[2] = 0;
      v46 = (__m128i *)((char *)v91[1].m128i_i64 + 4);
      v91[0] = si128;
      do
      {
        if ( v46->m128i_i16[0] < 0 )
          v45 |= 1u;
        v47 = 2 * v46->m128i_i16[0];
        if ( (v45 & 2) != 0 )
          v47 |= 1u;
        v46 = (__m128i *)((char *)v46 - 2);
        v45 *= 2;
        v46->m128i_i16[1] = v47;
      }
      while ( v46 != (__m128i *)&v91[0].m128i_i16[1] );
      v48 = 0;
      v49 = (__m128i *)((char *)v91[1].m128i_i64 + 4);
      do
      {
        if ( v49->m128i_i16[0] < 0 )
          v48 |= 1u;
        v50 = 2 * v49->m128i_i16[0];
        if ( (v48 & 2) != 0 )
          v50 |= 1u;
        v49 = (__m128i *)((char *)v49 - 2);
        v48 *= 2;
        v49->m128i_i16[1] = v50;
      }
      while ( v49 != (__m128i *)&v91[0].m128i_i16[1] );
      v86 = v11;
      v51 = 0;
      v52 = &v90[1].m128i_u16[2];
      v53 = (__m128i *)((char *)v91[1].m128i_i64 + 4);
      do
      {
        v54 = v53->m128i_u16[0];
        v55 = *v52;
        v53 = (__m128i *)((char *)v53 - 2);
        --v52;
        v56 = v51 + v55 + v54;
        v52[1] = v56;
        v51 = HIWORD(v56);
      }
      while ( v53 != (__m128i *)&v91[0].m128i_i16[1] );
      v13 = v82;
      v57 = 0;
      v11 = v86;
      memset(v91, 0, 22);
      v58 = (__m128i *)((char *)v91[1].m128i_i64 + 4);
      v91[1].m128i_i16[1] = v78;
      v59 = &v90[1].m128i_u16[2];
      do
      {
        v60 = v58->m128i_u16[0];
        v61 = *v59;
        v58 = (__m128i *)((char *)v58 - 2);
        --v59;
        v62 = v57 + v61 + v60;
        v59[1] = v62;
        v57 = HIWORD(v62);
      }
      while ( v58 != (__m128i *)&v91[0].m128i_i16[1] );
LABEL_76:
      v6 = *++v13;
      ++v14;
      v7 = v6;
      if ( !v6 )
        goto LABEL_88;
      if ( (unsigned __int8)(v6 - 48) > 9u )
        goto LABEL_5;
    }
    if ( v12 | v14 )
    {
      if ( v90[0].m128i_i16[2] )
        goto LABEL_76;
      goto LABEL_54;
    }
    v6 = *++v13;
    v7 = v6;
    if ( !v6 )
      goto LABEL_88;
    v14 = 0;
    v12 = 0;
  }
  while ( (unsigned __int8)(v6 - 48) <= 9u );
  while ( 1 )
  {
LABEL_5:
    if ( v6 == 46 )
    {
      if ( v12 )
        goto LABEL_89;
      v64 = *v13;
      v65 = v13;
      for ( i = *v13; v64 <= 0x7F; i = v64 )
      {
        if ( v64 - 48 > 9 )
          break;
        v64 = *++v65;
      }
      v87 = v8;
      v79 = v10;
      v67 = tolower(i);
      v10 = v79;
      v8 = v87;
      if ( v67 == 101 )
      {
        if ( !v11 && v13 == v65 )
          goto LABEL_89;
      }
      else
      {
        *v65 = 0;
      }
      if ( v94 < v65 && *(v65 - 1) == 48 )
      {
        v70 = v65 - 1;
        do
        {
          *v70 = 122;
          if ( v70 == v94 )
            break;
          --v70;
        }
        while ( *v70 == 48 );
        v9 = 1;
      }
      v6 = *++v13;
      v7 = v6;
      if ( v11 )
      {
        if ( !v6 )
          goto LABEL_88;
        if ( (unsigned __int8)(v6 - 48) <= 9u )
          goto LABEL_122;
        if ( v6 == 46 )
          goto LABEL_89;
        v12 = 1;
      }
      else
      {
        if ( !v6 )
          goto LABEL_88;
        if ( (unsigned __int8)(v6 - 48) <= 9u )
        {
          v11 = 1;
LABEL_122:
          v12 = 1;
          goto LABEL_51;
        }
        if ( v6 == 46 )
          goto LABEL_89;
        v12 = 1;
        v11 = 1;
      }
    }
    if ( v6 == 122 )
    {
      if ( !v9 )
        goto LABEL_89;
      v6 = *++v13;
      v7 = v6;
      if ( v6 )
        goto LABEL_4;
LABEL_88:
      v3 = (__int64)v8;
LABEL_11:
      v6 -= v10;
      v15 = (int)(v13 - v94);
      if ( v6 > 0 )
      {
        do
        {
          v16 = v90[0].m128i_u16[2];
          if ( v90[0].m128i_i16[2] )
            break;
          v17 = _mm_load_si128(v90);
          v18 = (__m128i *)((char *)v91[1].m128i_i64 + 4);
          v91[1].m128i_i16[2] = 0;
          v19 = 0;
          v91[1].m128i_i32[0] = v90[1].m128i_i32[0];
          v91[0] = v17;
          do
          {
            if ( v18->m128i_i16[0] < 0 )
              v19 |= 1u;
            v20 = 2 * v18->m128i_i16[0];
            if ( (v19 & 2) != 0 )
              v20 |= 1u;
            v18 = (__m128i *)((char *)v18 - 2);
            v19 *= 2;
            v18->m128i_i16[1] = v20;
          }
          while ( v18 != (__m128i *)&v91[0].m128i_i16[1] );
          v21 = 0;
          v22 = (__m128i *)((char *)v91[1].m128i_i64 + 4);
          do
          {
            if ( v22->m128i_i16[0] < 0 )
              v21 |= 1u;
            v23 = 2 * v22->m128i_i16[0];
            if ( (v21 & 2) != 0 )
              v23 |= 1u;
            v22 = (__m128i *)((char *)v22 - 2);
            v21 *= 2;
            v22->m128i_i16[1] = v23;
          }
          while ( v22 != (__m128i *)&v91[0].m128i_i16[1] );
          v24 = 0;
          v25 = &v91[1].m128i_u16[2];
          v26 = (__m128i *)((char *)v90[1].m128i_i64 + 4);
          do
          {
            v27 = v26->m128i_u16[0];
            v28 = *v25;
            v26 = (__m128i *)((char *)v26 - 2);
            --v25;
            v29 = v24 + v28 + v27;
            v25[1] = v29;
            v24 = HIWORD(v29);
          }
          while ( v26 != (__m128i *)&v90[0].m128i_i16[1] );
          v30 = (__m128i *)((char *)v91[1].m128i_i64 + 4);
          do
          {
            if ( v30->m128i_i16[0] < 0 )
              v16 |= 1u;
            v31 = 2 * v30->m128i_i16[0];
            if ( (v16 & 2) != 0 )
              v31 |= 1u;
            v30 = (__m128i *)((char *)v30 - 2);
            v16 *= 2;
            v30->m128i_i16[1] = v31;
          }
          while ( v30 != (__m128i *)&v91[0].m128i_i16[1] );
          if ( v91[0].m128i_i16[2] )
            break;
          v32 = _mm_load_si128(v91);
          v90[1].m128i_i32[0] = v91[1].m128i_i32[0];
          v90[0] = v32;
          v90[1].m128i_i16[2] = 0;
          --v6;
        }
        while ( v6 );
      }
LABEL_35:
      v77 = v6;
      v33 = sub_190980((__int64)v90);
      if ( v33 > 112 )
      {
        memset(v90, 0, 22);
      }
      else
      {
        v34 = sub_191200((__int64)v90, v75, 0, (unsigned int)(16494 - v33), 112);
        v35 = v77;
        if ( !v34 )
          goto LABEL_85;
        v76 = v90[0].m128i_u16[1];
        if ( v77 )
        {
          v81 = 1;
          if ( v77 < 0 )
          {
            if ( -v77 > 4096 )
            {
              sub_1911A0((__int64)&unk_1D0D60, &v92);
              v68 = v93;
              sub_190D00((__int64)&v92, v90[0].m128i_i32);
              v81 = -1;
              v76 = v76 + 0x3FFF - v68;
              v35 = -4096 - v77;
            }
            else
            {
              v81 = -1;
              v35 = -v77;
            }
          }
          v85 = v2;
          v88 = v3;
          v36 = 1;
          v37 = (char *)&unk_1D0E20;
          v38 = v35;
          v89 = _mm_load_si128((const __m128i *)&xmmword_1B7190);
          do
          {
            if ( (v36 & v38) != 0 )
              sub_191E80((__int64)&v89, (__int64)v37, &v89);
            v37 -= 16;
            v36 *= 2;
          }
          while ( v37 != (char *)&unk_1D0E20 - 208 );
          v2 = v85;
          v3 = v88;
          sub_1911A0((__int64)&v89, &v92);
          v63 = v81 == -1;
          v83 = v93;
          if ( v63 )
          {
            LOBYTE(v35) = sub_190D00((__int64)&v92, v90[0].m128i_i32);
            v76 = v76 - v83 + 0x3FFF;
          }
          else
          {
            LOBYTE(v35) = sub_190B20((__int64)&v92, v90[0].m128i_i32);
            v76 = v76 + v83 - 16382;
          }
        }
        if ( !sub_191200((__int64)v90, v35, 0, v76, 112) )
        {
LABEL_85:
          result = 2;
          goto LABEL_81;
        }
      }
      v90[0].m128i_i16[0] = v74;
      sub_191160(v90, v3);
      result = 1;
      goto LABEL_81;
    }
    if ( ((v6 - 43) & 0xFFFFFFFD) != 0 )
      break;
    if ( v11 )
    {
      v3 = (__int64)v8;
LABEL_10:
      v6 = 0;
      goto LABEL_11;
    }
    if ( v6 == 45 )
    {
      v6 = *++v13;
      v7 = v6;
      if ( !v6 )
      {
        v74 = -1;
        v3 = (__int64)v8;
        goto LABEL_11;
      }
      if ( (unsigned __int8)(v6 - 48) <= 9u )
      {
        v11 = -1;
        v74 = -1;
        goto LABEL_51;
      }
      v74 = -1;
    }
    else
    {
      v6 = *++v13;
      v7 = v6;
      if ( !v6 )
        goto LABEL_88;
      if ( (unsigned __int8)(v6 - 48) <= 9u )
      {
        v11 = -1;
        goto LABEL_51;
      }
    }
    v11 = -1;
  }
  v84 = v10;
  v80 = v14;
  v3 = (__int64)v8;
  v69 = tolower(v7);
  v10 = v84;
  if ( v69 == 101 )
  {
    if ( v11 )
    {
      v71 = v13[1];
      v72 = v13 + 2;
      v73 = -1;
      if ( v71 != 45 )
      {
        if ( v71 != 43 )
          v72 = v13 + 1;
        v73 = 1;
      }
      if ( (unsigned __int8)(*v72 - 48) > 9u )
      {
        v15 = (int)(v72 - v94);
        result = 3;
        goto LABEL_81;
      }
      v6 = 0;
      while ( 1 )
      {
        v13 = v72 + 1;
        v6 = *v72 + 10 * v6 - 48;
        if ( (v6 & 0x8000) != 0 )
          break;
        if ( (unsigned __int8)(v72[1] - 48) > 9u )
        {
          if ( v73 != -1 )
            goto LABEL_11;
          if ( v6 )
          {
            v6 = -v6;
            goto LABEL_11;
          }
          break;
        }
        ++v72;
      }
    }
LABEL_89:
    result = 3;
    v15 = (int)((_DWORD)v13 - (unsigned int)v94);
    goto LABEL_81;
  }
  result = 3;
  v15 = (int)((_DWORD)v13 - (unsigned int)v94);
  if ( v11 && (v11 != -1 || v80) )
    goto LABEL_10;
LABEL_81:
  *v2 += v15;
  return result;
}
