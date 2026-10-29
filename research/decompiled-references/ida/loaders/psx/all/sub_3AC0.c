__int64 __fastcall sub_3AC0(__int64 a1, unsigned __int8 a2, __int64 a3, double a4)
{
  unsigned __int8 v7; // r12
  char v8; // r13
  unsigned __int8 v9; // al
  __int64 v10; // rsi
  unsigned __int8 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // al
  __m128i v17; // xmm0
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int8 v21; // bl
  __int16 v22; // ax
  __int64 v23; // rsi
  __int16 v24; // ax
  __int64 v25; // rdx
  _WORD *i; // rcx
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rdi
  unsigned __int8 v32; // bl
  __int16 v33; // ax
  __int16 v34; // ax
  __int64 v35; // rdi
  unsigned __int8 v36; // bl
  __int16 v37; // ax
  __int16 v38; // ax
  unsigned __int8 v39; // bl
  __int16 v40; // ax
  __int64 v41; // rdx
  __int16 v42; // ax
  __int64 v43; // rax
  unsigned __int8 v44; // r12
  __int16 v45; // bx
  unsigned __int8 v46; // r13
  __int64 v47; // rdi
  unsigned __int64 v48; // rbx
  __int64 v49; // rcx
  __int64 v50; // rax
  __m128i si128; // xmm0
  __int64 v52; // rdi
  __int64 v53; // rax
  __int64 v54; // [rsp+0h] [rbp-68h] BYREF
  __m128i v55; // [rsp+8h] [rbp-60h]
  unsigned __int64 v56; // [rsp+18h] [rbp-50h]
  __int64 v57; // [rsp+20h] [rbp-48h]
  unsigned __int64 v58; // [rsp+28h] [rbp-40h]

  v58 = __readfsqword(0x28u);
  if ( a2 <= 0x18u )
  {
    switch ( a2 )
    {
      case 0u:
        v44 = qlgetc(a3);
        v45 = qlgetc(a3);
        v46 = qlgetc(a3);
        *(_QWORD *)(a1 + 24) = (unsigned __int16)(v44 | (unsigned __int16)(v45 << 8))
                             | ((v46 | ((unsigned int)qlgetc(a3) << 8)) << 16);
        return 1;
      case 2u:
        v39 = qlgetc(a3);
        v40 = qlgetc(a3);
        v41 = qword_A268;
        v42 = v39 | (unsigned __int16)(v40 << 8);
        if ( dword_A290 <= 0 )
          goto LABEL_58;
        while ( *(_WORD *)v41 != v42 )
        {
          v41 += 32;
          if ( v41 == qword_A268 + 32LL * dword_A290 )
            goto LABEL_58;
        }
        if ( v41 )
          goto LABEL_48;
LABEL_58:
        v41 = qword_A270;
        if ( dword_A294 > 0 )
        {
          while ( *(_WORD *)v41 != v42 )
          {
            v41 += 32;
            if ( v41 == qword_A270 + 32LL * dword_A294 )
              goto LABEL_63;
          }
          if ( v41 )
            goto LABEL_48;
        }
LABEL_63:
        v41 = qword_A280;
        if ( dword_A29C > 0 )
        {
          while ( *(_WORD *)v41 != v42 )
          {
            v41 += 32;
            if ( v41 == qword_A280 + 32LL * dword_A29C )
              return 0;
          }
          if ( v41 )
          {
LABEL_48:
            v43 = *(_QWORD *)(v41 + 16);
            *(_DWORD *)(a1 + 4) |= 2u;
            *(_QWORD *)(a1 + 24) = v43;
            return 1;
          }
        }
        return 0;
      case 4u:
        v36 = qlgetc(a3);
        v37 = qlgetc(a3);
        v23 = (unsigned int)dword_A298;
        v38 = v36 | (unsigned __int16)(v37 << 8);
        if ( dword_A298 <= 0 )
          return 0;
        v35 = qword_A278;
        LODWORD(v25) = 0;
        for ( i = (_WORD *)qword_A278; v38 != *i; i += 24 )
        {
          LODWORD(v25) = v25 + 1;
          if ( (_DWORD)v25 == dword_A298 )
            return 0;
        }
        goto LABEL_36;
      case 0xCu:
        v32 = qlgetc(a3);
        v33 = qlgetc(a3);
        v23 = (unsigned int)dword_A298;
        v34 = v32 | (unsigned __int16)(v33 << 8);
        if ( dword_A298 <= 0 )
          return 0;
        v35 = qword_A278;
        LODWORD(v25) = 0;
        for ( i = (_WORD *)qword_A278; v34 != *i; i += 24 )
        {
          LODWORD(v25) = v25 + 1;
          if ( dword_A298 == (_DWORD)v25 )
            return 0;
        }
LABEL_36:
        v25 = (int)v25;
        v27 = *(_QWORD *)(v35 + 48LL * (int)v25 + 24);
        if ( v27 == -1 )
          return 0;
        goto LABEL_25;
      case 0x16u:
        v21 = qlgetc(a3);
        v22 = qlgetc(a3);
        v23 = (unsigned int)dword_A298;
        v24 = v21 | (unsigned __int16)(v22 << 8);
        if ( dword_A298 <= 0 )
          return 0;
        LODWORD(v25) = 0;
        i = (_WORD *)qword_A278;
        break;
      default:
        return 0;
    }
    while ( v24 != *i )
    {
      LODWORD(v25) = v25 + 1;
      i += 24;
      if ( dword_A298 == (_DWORD)v25 )
        return 0;
    }
    v25 = (int)v25;
    v27 = *(_QWORD *)(qword_A278 + 48LL * (int)v25 + 32);
    if ( v27 != -1 )
    {
LABEL_25:
      *(_QWORD *)(a1 + 24) = v27;
      if ( (*(_BYTE *)(a1 + 4) & 1) != 0 )
      {
        v27 += *(_QWORD *)(a1 + 8);
      }
      else
      {
        v47 = *(_QWORD *)(a1 + 16);
        if ( v47 != -1 )
          v27 = 16 * sel2para(v47, v23, v25, i, a4) + *(_QWORD *)(a1 + 24);
      }
      v28 = getseg(v27);
      v30 = *(_DWORD *)(a1 + 4) & 0xFFFFFFFE;
      if ( v28 )
      {
        v31 = *(_QWORD *)(v28 + 48);
        *(_DWORD *)(a1 + 4) = v30;
        *(_QWORD *)(a1 + 8) = 0;
        *(_QWORD *)(a1 + 16) = v31;
        if ( v31 != -1 )
          v27 -= 16 * sel2para(v31, v23, v30, v29, a4);
      }
      else
      {
        si128 = _mm_load_si128((const __m128i *)&xmmword_7440);
        *(_DWORD *)(a1 + 4) = v30;
        *(__m128i *)(a1 + 8) = si128;
      }
      *(_QWORD *)(a1 + 24) = v27;
      return 1;
    }
    return 0;
  }
  v7 = qlgetc(a3);
  v54 = 0;
  v55 = _mm_load_si128((const __m128i *)&xmmword_7440);
  v56 = 0;
  v57 = 0;
  v8 = ((__int64 (__fastcall *)(__int64 *, _QWORD, __int64))sub_3AC0)(&v54, v7, a3);
  v9 = qlgetc(a3);
  v10 = v9;
  v11 = v9;
  v15 = sub_3AC0(a1, v9, a3, v12, v13, v14, v54, v55.m128i_i64[0], v55.m128i_i64[1]);
  if ( !v8 || !v15 )
    return 0;
  v17 = _mm_load_si128((const __m128i *)&xmmword_7440);
  if ( (a2 & 0xFD) != 0x2C )
  {
    if ( a2 != 50 || (v54 & 0x200000000LL) != 0 || v7 || (*(_BYTE *)(a1 + 4) & 2) != 0 )
      return 0;
    v18 = *(_QWORD *)(a1 + 24);
    *(__m128i *)(a1 + 8) = v17;
    *(_QWORD *)(a1 + 32) = 0;
    v19 = v18 / v56;
    *(_DWORD *)(a1 + 4) = 4;
    *(_WORD *)a1 = 0;
    *(_QWORD *)(a1 + 24) = v19;
    return 1;
  }
  if ( (v54 & 0x200000000LL) != 0 )
    return 0;
  v20 = *(unsigned int *)(a1 + 4);
  if ( v7 == 12 && a2 == 46 )
  {
    v48 = v56;
    if ( (v20 & 1) != 0 )
    {
      v49 = *(_QWORD *)(a1 + 8);
    }
    else
    {
      v52 = *(_QWORD *)(a1 + 16);
      v49 = 0;
      if ( v52 != -1 )
      {
        v53 = sel2para(v52, v10, v20, 0, *(double *)v17.m128i_i64);
        LODWORD(v20) = *(_DWORD *)(a1 + 4);
        v49 = 16 * v53;
      }
    }
    v50 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 8) = v48;
    *(_DWORD *)(a1 + 4) = v20 | 1;
    *(_QWORD *)(a1 + 24) = v49 + v50 - v48;
    return 1;
  }
  if ( (v20 & 2) != 0 )
  {
    if ( v7 )
      return 0;
    if ( a2 == 44 )
    {
      *(_QWORD *)(a1 + 32) += v56;
      return 1;
    }
    goto LABEL_19;
  }
  if ( v11 == 4 && a2 == 46 )
  {
    if ( v7 )
      return 0;
LABEL_19:
    *(_QWORD *)(a1 + 32) -= v56;
    return 1;
  }
  if ( a2 != 44 )
    return 0;
  *(_QWORD *)(a1 + 24) += v56;
  return 1;
}

