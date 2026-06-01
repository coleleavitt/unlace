__int64 __fastcall sub_6A990(_DWORD *a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int8 v6; // r12
  int v9; // edi
  __int64 result; // rax
  int v11; // edx
  __int64 v12; // rdx
  _DWORD *v13; // [rsp+0h] [rbp-68h] BYREF
  __int64 v14; // [rsp+8h] [rbp-60h]
  int v15; // [rsp+10h] [rbp-58h]
  int v16; // [rsp+14h] [rbp-54h]
  int v17; // [rsp+18h] [rbp-50h]
  __m128i v18; // [rsp+1Ch] [rbp-4Ch]
  int v19; // [rsp+2Ch] [rbp-3Ch]
  int v20; // [rsp+30h] [rbp-38h]
  unsigned int v21; // [rsp+34h] [rbp-34h]
  unsigned __int64 v22; // [rsp+38h] [rbp-30h]

  v6 = a4;
  v9 = a1[51];
  v22 = __readfsqword(0x28u);
  result = 0;
  if ( v9 )
  {
    if ( !(_BYTE)a4 || (a4 = (unsigned int)a1[52], !(_DWORD)a4) )
    {
LABEL_18:
      v21 = a3;
      v13 = a1;
      v12 = a3 >> 6;
      v19 = (a3 >> 5) & 1;
      v14 = a2;
      v20 = 0;
      v18 = _mm_and_si128(
              _mm_unpacklo_epi64(
                _mm_unpacklo_epi32(_mm_cvtsi32_si128(a3 >> 8), _mm_cvtsi32_si128(a3 >> 22)),
                _mm_unpacklo_epi32(_mm_cvtsi32_si128(a3 >> 7), _mm_cvtsi32_si128(v12))),
              _mm_shuffle_epi32(_mm_cvtsi32_si128(1u), 0));
      v16 = (unsigned __int16)a3 >> 12;
      v17 = a3 & 0xF;
      v15 = HIWORD(a3) & 0xF;
      result = sub_6A740((__int64)&v13, v6, v12, a4, a5, a6);
      if ( !(_BYTE)result || !*(_WORD *)(a2 + 26) || !*(_WORD *)(a2 + 24) )
      {
        *(_WORD *)(a2 + 24) = 0;
        return result;
      }
      return 1;
    }
LABEL_12:
    v13 = a1;
    v14 = a2;
    v15 = a3;
    if ( (a3 & 0xEF000E10) == 0xEE000E00 )
    {
      if ( (unsigned int)sub_6A1E0((__int64)&v13) )
        return 1;
      if ( (a3 & 0xEE000000) != 0xEC000000 )
      {
LABEL_28:
        if ( (a3 & 0xEF001040) != 0xEF000040 )
        {
LABEL_16:
          if ( (a3 & 0xFF00D001) == 0xF000C001 && (unsigned int)sub_6A630((__int64)&v13) )
            return 1;
          goto LABEL_18;
        }
LABEL_29:
        if ( (unsigned int)sub_6A2A0((__int64)&v13) )
          return 1;
        goto LABEL_16;
      }
    }
    else if ( (a3 & 0xEE000000) != 0xEC000000 )
    {
      if ( (a3 & 0xEF001040) != 0xEF000040 )
      {
        if ( (a3 & 0xFFE00000) == 0xEA400000 )
        {
          if ( (unsigned int)sub_6A370((__int64)&v13) )
            return 1;
          goto LABEL_18;
        }
        goto LABEL_16;
      }
      goto LABEL_29;
    }
    if ( (unsigned int)sub_6A250((__int64)&v13) )
      return 1;
    goto LABEL_28;
  }
  if ( a1[52] )
  {
    if ( !(_BYTE)a4 )
      goto LABEL_18;
    goto LABEL_12;
  }
  v11 = a1[50];
  if ( v11 )
  {
    a4 = a3 & 0xFBE0F50;
    if ( (_DWORD)a4 == 246549056 )
      goto LABEL_18;
    if ( v11 > 2 )
    {
      a4 = a3 & 0xFBA0E50;
      if ( (_DWORD)a4 == 247073344 )
        goto LABEL_18;
      a4 = a3 & 0xFB00FF0;
      if ( (_DWORD)a4 == 246417920 || v11 > 4 && (((a3 & 0xFB00E10) - 244320768) & 0xFFEFFFF0) == 0 )
        goto LABEL_18;
    }
  }
  return result;
}
