__int64 __fastcall sub_6A50(__int64 a1, unsigned __int64 a2, unsigned __int16 *a3, unsigned __int8 *a4)
{
  unsigned __int16 *v6; // r11
  unsigned __int16 *v7; // rax
  int v8; // ecx
  __int64 result; // rax
  int v10; // r15d
  int v11; // eax
  int v12; // ebx
  char *v13; // rdx
  char *v14; // rsi
  __m128i v15; // xmm2
  unsigned __int64 v16; // xmm0_8
  __m128i v17; // xmm1
  unsigned __int16 v18; // cx
  int v19; // eax
  unsigned __int32 v20; // edx
  __int16 v21; // dx
  __int64 v22; // rcx
  __int16 v23; // ax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  unsigned __int32 v27; // [rsp+8h] [rbp-60h]
  unsigned __int16 v28; // [rsp+Ch] [rbp-5Ch]
  unsigned __int16 v29[2]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v30; // [rsp+14h] [rbp-54h]
  unsigned __int32 v31; // [rsp+1Ch] [rbp-4Ch]
  int v32; // [rsp+20h] [rbp-48h]
  unsigned __int64 v33; // [rsp+28h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  if ( a2 <= 0x13 )
    return 0xFFFFFFFFLL;
  v6 = a3;
  v7 = (unsigned __int16 *)((char *)a3 + 19);
  v8 = -1;
  while ( 1 )
  {
    if ( *(_BYTE *)v7 )
    {
      if ( ++v8 > 0 )
        break;
    }
    if ( a3 == v7 )
      return 0xFFFFFFFFLL;
    v7 = (unsigned __int16 *)((char *)v7 - 1);
  }
  *a4 = 0;
  v10 = *(_DWORD *)(a1 + 24);
  v11 = 0;
  v12 = *a3;
  v13 = (char *)&unk_22400;
  if ( v10 == 2 )
    goto LABEL_13;
  while ( *(_WORD *)v13 != (_WORD)v12 || (unsigned __int8)(v13[2] + 1) > 1u )
  {
    ++v11;
    v13 += 16;
    if ( v11 == 113 )
    {
      if ( !v10 )
        goto LABEL_13;
      goto LABEL_20;
    }
  }
  if ( !*((_QWORD *)&unk_22400 + 2 * v11 + 1) )
    goto LABEL_13;
LABEL_20:
  if ( !(unsigned __int8)sub_52E0(v6, a2) )
  {
LABEL_13:
    LOWORD(v12) = __ROL2__(v12, 8);
    v14 = (char *)&unk_22400;
    v15 = _mm_cvtsi32_si128(*((_DWORD *)v6 + 4));
    v16 = _mm_unpacklo_epi32(
            _mm_cvtsi32_si128(_byteswap_ulong(*((_DWORD *)v6 + 1))),
            _mm_cvtsi32_si128(_byteswap_ulong(*((_DWORD *)v6 + 2)))).m128i_u64[0];
    v17 = _mm_or_si128(_mm_slli_epi16(v15, 8u), _mm_srli_epi16(v15, 8u));
    v18 = __ROL2__(v6[1], 8);
    v19 = 0;
    v20 = _byteswap_ulong(*((_DWORD *)v6 + 3));
    while ( *(_WORD *)v14 != (_WORD)v12 || ((v14[2] + 1) & 0xFD) != 0 )
    {
      ++v19;
      v14 += 16;
      if ( v19 == 113 )
      {
        if ( !v10 )
          return 0xFFFFFFFFLL;
        goto LABEL_35;
      }
    }
    if ( !*((_QWORD *)&unk_22400 + 2 * v19 + 1) )
      return 0xFFFFFFFFLL;
LABEL_35:
    v29[0] = v12;
    v29[1] = v18;
    v28 = v18;
    v31 = v20;
    v27 = v20;
    v30 = v16;
    v32 = _mm_cvtsi128_si32(v17);
    if ( (unsigned __int8)sub_52E0(v29, a2) )
    {
      *a4 = 1;
      *v6 = v12;
      v6[1] = v28;
      *((_DWORD *)v6 + 3) = v27;
      *(_QWORD *)(v6 + 2) = v16;
      *((_DWORD *)v6 + 4) = _mm_cvtsi128_si32(v17);
      goto LABEL_21;
    }
    return 0xFFFFFFFFLL;
  }
LABEL_21:
  *(_WORD *)(a1 + 57) = v12;
  *(_DWORD *)(a1 + 61) = v6[1];
  *(_DWORD *)(a1 + 69) = *((_DWORD *)v6 + 1);
  *(_QWORD *)(a1 + 73) = *((int *)v6 + 2);
  *(_DWORD *)(a1 + 65) = *((_DWORD *)v6 + 3);
  *(_WORD *)(a1 + 81) = v6[8];
  v21 = v6[9];
  *(_WORD *)(a1 + 59) = 0;
  *(_WORD *)(a1 + 83) = v21;
  if ( (unsigned __int16)v12 > 0x1F2u )
  {
    if ( (_WORD)v12 == 0x8664 )
    {
      if ( (v6[9] & 2) != 0 )
        return (v21 & 0x200) != 0;
      if ( v6[8] <= 0x1Bu )
        goto LABEL_67;
    }
    else
    {
      if ( (unsigned __int16)v12 <= 0x8664u )
      {
        LOBYTE(v23) = v12;
        HIBYTE(v23) = BYTE1(v12) & 0xFE;
        if ( v23 == 614 )
        {
          if ( (v6[9] & 2) != 0 )
          {
            result = 1;
            if ( (v21 & 0x200) != 0 )
              return result;
            goto LABEL_71;
          }
LABEL_44:
          if ( v6[8] > 0x1Bu )
          {
            result = 1;
            if ( (v21 & 0x200) != 0 )
              return result;
            goto LABEL_46;
          }
          goto LABEL_67;
        }
        if ( (_WORD)v12 == 1126 )
        {
          if ( (v6[9] & 2) == 0 )
          {
            if ( v6[8] > 0x1Bu )
            {
              result = 1;
              if ( (v21 & 0x200) != 0 )
                return result;
              goto LABEL_56;
            }
            goto LABEL_67;
          }
          return (v21 & 0x200) != 0;
        }
LABEL_41:
        if ( (_WORD)v12 != 388 && (_WORD)v12 != 512 )
        {
LABEL_59:
          result = 1;
          if ( (v21 & 0x200) != 0 )
            return result;
LABEL_60:
          if ( (_WORD)v12 == 352 )
            return *a4;
LABEL_46:
          if ( (unsigned __int16)v12 <= 0x160u )
          {
LABEL_30:
            if ( (unsigned __int16)(v12 - 336) > 2u )
              goto LABEL_31;
            return 1;
          }
          result = 1;
          if ( (_WORD)v12 == 0x808C )
            return result;
          goto LABEL_48;
        }
        if ( (v6[9] & 2) == 0 )
          goto LABEL_44;
        return (v21 & 0x200) != 0;
      }
      if ( (_WORD)v12 == 0xA641 || (_WORD)v12 == 0xAA64 )
        goto LABEL_26;
    }
    result = 1;
    if ( (v21 & 0x200) == 0 )
      return (_WORD)v12 == 0x8E00;
    return result;
  }
  if ( (unsigned __int16)v12 > 0x1BFu )
  {
    v24 = 0x7000000000015LL;
    if ( _bittest64(&v24, (unsigned int)(v12 - 448)) )
      goto LABEL_26;
    goto LABEL_52;
  }
  if ( (unsigned __int16)v12 > 0x168u )
  {
    if ( (unsigned __int16)(v12 - 418) <= 6u )
    {
      v26 = 81;
      if ( _bittest64(&v26, (unsigned int)(v12 - 418)) )
        goto LABEL_26;
      goto LABEL_52;
    }
    goto LABEL_41;
  }
  if ( (unsigned __int16)v12 <= 0x14Bu )
  {
    if ( (v21 & 0x200) != 0 )
      return 1;
    if ( (unsigned __int16)v12 > 0x89u )
    {
LABEL_31:
      if ( (_WORD)v12 != 320 )
        return 0;
      return *a4;
    }
    return (unsigned __int16)v12 > 0x87u;
  }
  v22 = 335544321;
  if ( _bittest64(&v22, (unsigned int)(v12 - 332)) )
  {
LABEL_26:
    if ( (v6[9] & 2) != 0 )
    {
      result = 1;
      if ( (v21 & 0x200) != 0 )
        return result;
      if ( (_WORD)v12 != 352 )
      {
        if ( (unsigned __int16)v12 <= 0x160u )
          goto LABEL_30;
LABEL_48:
        if ( (unsigned __int16)v12 > 0x808Cu )
        {
          if ( (unsigned __int16)v12 <= 0x8302u )
            return (unsigned __int16)v12 > 0x82FFu;
          return (_WORD)v12 == 0x8E00;
        }
        goto LABEL_55;
      }
      return *a4;
    }
    if ( v6[8] > 0x1Bu )
      goto LABEL_59;
LABEL_67:
    *(_BYTE *)(a1 + 59) = 1;
    result = 1;
    if ( v21 >= 0 )
      return *v6 == 498;
    return result;
  }
LABEL_52:
  result = 1;
  if ( (v21 & 0x200) != 0 )
    return result;
  if ( (unsigned __int16)(v12 - 472) > 7u )
    goto LABEL_60;
  v25 = 161;
  if ( _bittest64(&v25, (unsigned int)(v12 - 472)) )
    return result;
LABEL_55:
  result = 1;
  if ( (_WORD)v12 == 1280 )
    return result;
LABEL_56:
  if ( (unsigned __int16)(v12 + 0x8000) <= 1u )
    return 1;
LABEL_71:
  result = 0;
  if ( (_WORD)v12 == 355 )
    return *a4;
  return result;
}
