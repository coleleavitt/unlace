__int64 __fastcall sub_7F960(__int64 a1, int a2, unsigned __int8 *a3)
{
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  __int64 v8; // rcx
  unsigned int v9; // eax
  unsigned int v10; // r15d
  unsigned __int16 *v11; // rax
  int v12; // ecx
  unsigned __int16 *v13; // rcx
  int v14; // edi
  unsigned __int16 *i; // rax
  int v16; // edx
  __int64 result; // rax
  __int16 v18; // dx
  __int64 v19; // rdx
  int v20; // eax
  char *v21; // rcx
  unsigned __int16 v22; // cx
  __int64 v23; // rdx
  __int64 v24; // rdx
  unsigned __int64 v25; // r10
  int v26; // eax
  __int16 v27; // ax
  __int16 v28; // si
  unsigned __int64 v29; // xmm0_8
  int v30; // eax
  unsigned __int16 v31; // cx
  __m128i v32; // xmm1
  __int64 v33; // rsi
  __int16 v34; // ax
  int v35; // eax
  __int16 v36; // ax
  int v37; // eax
  char *v38; // rdi
  unsigned __int16 v39; // di
  int v40; // r8d
  unsigned __int64 v41; // rsi
  __m128i v42; // xmm1
  int v43; // eax
  int v44; // eax
  int v45; // edi
  unsigned __int64 v46; // r9
  __m128i v47; // xmm1
  unsigned __int64 v48; // r8
  int v49; // eax
  int v50; // eax
  __int16 v51; // ax
  int v52; // eax
  int v53; // eax
  unsigned __int16 v54; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int16 v55; // [rsp+2h] [rbp-76h]
  int v56; // [rsp+4h] [rbp-74h]
  _BYTE v57[12]; // [rsp+8h] [rbp-70h] BYREF
  __int64 v58; // [rsp+14h] [rbp-64h] BYREF
  __int16 v59; // [rsp+20h] [rbp-58h]
  unsigned __int16 v60; // [rsp+22h] [rbp-56h]
  int v61; // [rsp+24h] [rbp-54h]
  int v62; // [rsp+28h] [rbp-50h]
  unsigned int v63; // [rsp+2Ch] [rbp-4Ch]
  unsigned int v64; // [rsp+30h] [rbp-48h]
  unsigned int v65; // [rsp+34h] [rbp-44h]
  unsigned __int64 v66; // [rsp+38h] [rbp-40h]

  v66 = __readfsqword(0x28u);
  *a3 = 0;
  *(_DWORD *)(a1 + 28) = -1;
  v6 = qlsize(*(_QWORD *)(a1 + 8));
  *(_WORD *)(a1 + 57) = -1;
  v7 = v6;
  qlseek(*(_QWORD *)(a1 + 8), a2, 0, v8);
  v9 = qlread(*(_QWORD *)(a1 + 8), &v54, 56);
  if ( v9 <= 3 )
    return 0xFFFFFFFFLL;
  v10 = v9;
  if ( v54 )
    goto LABEL_6;
  if ( !a2 && v55 == 0xF303 )
    return 0xFFFFFFFFLL;
  if ( v55 == 0xFFFF )
  {
    if ( v9 <= 0x37 )
    {
      if ( v9 <= 0x33 )
        return 0xFFFFFFFFLL;
      v27 = v56;
    }
    else
    {
      v27 = v56;
      if ( (unsigned __int16)v56 > 1u )
      {
        if ( !(v58 ^ 0xB8DCA46AF6FA20AFLL | *(_QWORD *)&v57[4] ^ 0x4BA9BAEED1BAA1C7LL) )
        {
          v28 = HIWORD(v56);
          if ( HIWORD(v56) != 0x8664 )
          {
            if ( HIWORD(v56) > 0x8664u )
            {
              if ( HIWORD(v56) != 0xA641 && HIWORD(v56) != 0xAA64 )
                return 0xFFFFFFFFLL;
            }
            else if ( HIWORD(v56) != 332 && HIWORD(v56) != 452 )
            {
              return 0xFFFFFFFFLL;
            }
          }
          if ( v63 && v7 > 0x38 && v63 < (v7 - 56) / 0x28 )
          {
            v29 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v63), _mm_cvtsi32_si128(v65)).m128i_u64[0];
            if ( v65 )
            {
              if ( v64 >= 40 * (unsigned __int64)v63 + 56 && v64 < v7 && (v7 - v64) / 0x14 >= v65 )
                goto LABEL_60;
            }
            else if ( !v64 )
            {
LABEL_60:
              v30 = *(_DWORD *)v57;
              *(_QWORD *)(a1 + 73) = v64;
              *(_WORD *)(a1 + 59) = 3;
              *(_DWORD *)(a1 + 69) = v30;
              *(_WORD *)(a1 + 57) = v28;
              *(_DWORD *)(a1 + 81) = 0;
              *(_QWORD *)(a1 + 61) = v29;
              return 0;
            }
          }
          return 0xFFFFFFFFLL;
        }
LABEL_64:
        if ( v58 ^ 0xC2532622B6D69BACLL | *(_QWORD *)&v57[4] ^ 0x4DABD9A50CB3FE38LL
          || HIWORD(v56) != 332 && HIWORD(v56) != 0x8664 )
        {
          return 0xFFFFFFFFLL;
        }
        v31 = v60;
        if ( !v60 || v7 <= 0x34 || v60 >= (v7 - 52) / 0x28 )
          return 0xFFFFFFFFLL;
        v32 = _mm_cvtsi32_si128(v63);
        v33 = v62;
        if ( _mm_cvtsi128_si32(v32) )
        {
          if ( v62 < 40 * (unsigned __int64)v60 + 52
            || v62 >= v7
            || (v7 - v62) / 0x14 < (unsigned int)_mm_cvtsi128_si32(v32) )
          {
            return 0xFFFFFFFFLL;
          }
          v51 = v64;
          v33 = v62 + 32LL;
          *(_WORD *)(a1 + 59) = 9;
          *(_WORD *)(a1 + 81) = v51;
          *(_WORD *)(a1 + 57) = v59;
          v35 = v61;
        }
        else
        {
          if ( v62 )
            return 0xFFFFFFFFLL;
          v34 = v64;
          *(_WORD *)(a1 + 59) = 9;
          *(_WORD *)(a1 + 81) = v34;
          *(_WORD *)(a1 + 57) = v59;
          v35 = v61;
        }
        *(_DWORD *)(a1 + 69) = v35;
        v36 = HIWORD(v64);
        *(_QWORD *)(a1 + 73) = v33;
        *(_WORD *)(a1 + 83) = v36;
        *(_QWORD *)(a1 + 61) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v31), v32).m128i_u64[0];
        return 0;
      }
    }
    if ( !v27 )
      return 0xFFFFFFFFLL;
    goto LABEL_64;
  }
LABEL_6:
  if ( v9 <= 0x17 )
  {
    if ( v9 > 0x13 )
      goto LABEL_12;
    return 0xFFFFFFFFLL;
  }
  v11 = (unsigned __int16 *)((char *)&v58 + 3);
  v12 = -1;
  while ( 1 )
  {
    if ( *(_BYTE *)v11 )
    {
      if ( ++v12 > 0 )
        break;
    }
    if ( &v54 == v11 )
      goto LABEL_12;
    v11 = (unsigned __int16 *)((char *)v11 - 1);
  }
  v20 = 0;
  v21 = (char *)&unk_B2440;
  do
  {
    if ( v54 == *(_WORD *)v21 && (unsigned __int8)(v21[2] + 1) <= 1u )
    {
      if ( *((_QWORD *)&unk_B2440 + 2 * v20 + 1) )
        goto LABEL_42;
      goto LABEL_12;
    }
    ++v20;
    v21 += 16;
  }
  while ( v20 != 113 );
  if ( !*(_DWORD *)(a1 + 24) )
    goto LABEL_12;
LABEL_42:
  v22 = v55;
  if ( v55 )
  {
    if ( v55 > 0xFEFFu )
      goto LABEL_12;
    goto LABEL_92;
  }
  if ( !v54 )
    goto LABEL_12;
  if ( (unsigned __int16)(v54 - 257) > 7u )
  {
    if ( v54 == 287 || v54 == 265 )
      goto LABEL_12;
LABEL_92:
    if ( v54 == 21020 )
      goto LABEL_12;
    v25 = 1;
    v26 = 24;
    if ( ((v54 - 387) & 0xFFFD) != 0 )
      goto LABEL_46;
LABEL_94:
    v45 = (unsigned __int16)v58;
    v46 = (unsigned int)(unsigned __int16)v58 + v26;
    if ( v46 >= v7 || v55 >= (v7 - v46) / 0x28 )
      goto LABEL_12;
    v47 = _mm_cvtsi32_si128(*(unsigned int *)&v57[8]);
    v48 = *(_QWORD *)v57;
    if ( _mm_cvtsi128_si32(v47) )
    {
      if ( *(_QWORD *)v57 < v46 + 40LL * v55
        || *(_QWORD *)v57 >= v7
        || (v7 - *(_QWORD *)v57) / v25 < (unsigned int)_mm_cvtsi128_si32(v47) )
      {
        goto LABEL_12;
      }
      v52 = v56;
      *(_WORD *)(a1 + 57) = v54;
      *(_BYTE *)(a1 + 59) = 4;
      *(_DWORD *)(a1 + 69) = v52;
      *(_QWORD *)(a1 + 73) = (unsigned int)v48;
      v53 = WORD1(v58) << 16;
      *(_QWORD *)(a1 + 61) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v22), v47).m128i_u64[0];
      *(_DWORD *)(a1 + 81) = v45 | v53;
      *(_BYTE *)(a1 + 60) = HIDWORD(v48) != 0;
      return 0;
    }
    else
    {
      if ( *(_QWORD *)v57 )
        goto LABEL_12;
      v49 = v56;
      *(_WORD *)(a1 + 57) = v54;
      *(_QWORD *)(a1 + 73) = 0;
      *(_DWORD *)(a1 + 69) = v49;
      v50 = WORD1(v58);
      *(_QWORD *)(a1 + 61) = _mm_cvtsi32_si128(v22).m128i_u64[0];
      *(_DWORD *)(a1 + 81) = v45 | (v50 << 16);
      *(_WORD *)(a1 + 59) = 4;
      return 0;
    }
  }
  v23 = 209;
  if ( !_bittest64(&v23, (unsigned int)v54 - 257) )
  {
LABEL_46:
    if ( (unsigned __int16)(v54 - 487) > 0x10u )
    {
      v25 = 18;
      v26 = (unsigned __int16)(v54 - 193) < 2u ? 22 : 20;
    }
    else
    {
      v24 = 65793;
      v25 = 18;
      v26 = _bittest64(&v24, (unsigned int)v54 - 487) == 0 ? 20 : 24;
    }
    goto LABEL_94;
  }
LABEL_12:
  v13 = (unsigned __int16 *)&v57[11];
  v14 = -1;
  for ( i = (unsigned __int16 *)&v57[11]; ; i = (unsigned __int16 *)((char *)i - 1) )
  {
    if ( *(_BYTE *)i )
    {
      if ( ++v14 > 0 )
        break;
    }
    if ( i == &v54 )
      goto LABEL_17;
  }
  v37 = 0;
  v38 = (char *)&unk_B2440;
  while ( v54 != *(_WORD *)v38 || (unsigned __int8)(v38[2] + 1) > 1u )
  {
    ++v37;
    v38 += 16;
    if ( v37 == 113 )
    {
      if ( !*(_DWORD *)(a1 + 24) )
        goto LABEL_17;
      goto LABEL_82;
    }
  }
  if ( !*((_QWORD *)&unk_B2440 + 2 * v37 + 1) )
    goto LABEL_17;
LABEL_82:
  v39 = v55;
  if ( v55 <= 0xFEFFu && v54 == 21020 )
  {
    v40 = *(unsigned __int16 *)&v57[8];
    v41 = (unsigned int)*(unsigned __int16 *)&v57[8] + 20;
    if ( v41 < v7 && v55 < (v7 - v41) / 0x28 )
    {
      v42 = _mm_cvtsi32_si128(*(unsigned int *)&v57[4]);
      if ( _mm_cvtsi128_si32(v42) )
      {
        if ( *(unsigned int *)v57 >= v41 + 40LL * v55 && *(unsigned int *)v57 < v7 )
        {
          v16 = -1;
          if ( (v7 - *(unsigned int *)v57) / 0x12 < (unsigned int)_mm_cvtsi128_si32(v42) )
            goto LABEL_20;
          goto LABEL_88;
        }
      }
      else if ( !*(_DWORD *)v57 )
      {
LABEL_88:
        v43 = v56;
        *(_QWORD *)(a1 + 73) = *(unsigned int *)v57;
        *(_DWORD *)(a1 + 57) = 283164;
        *(_DWORD *)(a1 + 69) = v43;
        v44 = *(unsigned __int16 *)&v57[10] << 16;
        *(_QWORD *)(a1 + 61) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v39), v42).m128i_u64[0];
        *(_DWORD *)(a1 + 81) = v40 | v44;
        return 1;
      }
    }
  }
LABEL_17:
  v16 = -1;
LABEL_20:
  while ( 1 )
  {
    if ( *(_BYTE *)v13 )
    {
      if ( ++v16 > 0 )
        break;
    }
    if ( v13 == &v54 )
      return 0xFFFFFFFFLL;
    v13 = (unsigned __int16 *)((char *)v13 - 1);
  }
  if ( a2 && !(unsigned __int8)sub_7ECC0(&v54, v7) )
    *(_QWORD *)v57 = 0;
  result = sub_7F280(a1, v7, &v54, a3);
  if ( (_DWORD)result == -1 )
  {
    result = sub_7F790(a1, v7, &v54, a3);
    if ( (_DWORD)result == -1 )
      return 0xFFFFFFFFLL;
  }
  v18 = *(_WORD *)(a1 + 57);
  if ( v18 == 147 )
  {
LABEL_74:
    *(_QWORD *)(a1 + 24) = 0x500000003LL;
  }
  else if ( (unsigned __int16)(v18 - 193) <= 1u && v10 > 0x15 )
  {
    v19 = (unsigned __int16)v58;
    if ( *a3 )
      LOWORD(v19) = __ROL2__(v58, 8);
    LOWORD(v19) = v19 - 146;
    switch ( v19 )
    {
      case 0LL:
      case 6LL:
        *(_QWORD *)(a1 + 24) = 0x100000036LL;
        break;
      case 1LL:
        goto LABEL_74;
      case 5LL:
        *(_QWORD *)(a1 + 24) = 0x3000001D6LL;
        break;
      case 7LL:
        *(_QWORD *)(a1 + 24) = 6;
        break;
      case 10LL:
      case 15LL:
        *(_QWORD *)(a1 + 24) = 0x200000037LL;
        break;
      case 11LL:
        *(_QWORD *)(a1 + 24) = 0x60000001CLL;
        break;
      case 14LL:
        *(_QWORD *)(a1 + 24) = 0x4000001AELL;
        break;
      default:
        return result;
    }
  }
  return result;
}
