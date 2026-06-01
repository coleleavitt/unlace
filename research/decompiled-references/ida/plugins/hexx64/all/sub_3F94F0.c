__int64 __fastcall sub_3F94F0(__int64 a1, _BYTE *a2, signed int a3, signed int *a4, __m128i a5, double a6, __m128 a7)
{
  unsigned int v10; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  char v14; // si
  __int16 v15; // ax
  __int64 v16; // rdi
  __int64 v17; // rsi
  int v18; // r15d
  int dtype_size; // eax
  unsigned int v20; // r15d
  __int64 v21; // rsi
  int v22; // eax
  unsigned int v23; // esi
  char v25; // si
  __int64 v26; // rsi
  __m128 v27; // xmm1
  int v28; // edx
  __m128i v29; // xmm0
  int v30; // ecx
  __int64 v31; // [rsp+8h] [rbp-70h]
  unsigned __int8 v32[16]; // [rsp+10h] [rbp-68h] BYREF
  _QWORD v33[11]; // [rsp+20h] [rbp-58h] BYREF

  v10 = *(unsigned __int16 *)(a1 + 48);
  v33[3] = __readfsqword(0x28u);
  v12 = v10;
  if ( (_WORD)v10 != 92 && v10 != 222 && (unsigned __int16)(v10 - 198) > 1u && (unsigned __int16)(v10 - 97) > 1u )
    a3 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 468LL);
  if ( !a2[32] )
  {
    v20 = 0;
    goto LABEL_25;
  }
  v13 = *(_DWORD *)(a1 + 52) & 0x1018;
  v14 = ((char)a2[33] >> 3) & 7;
  if ( (*(_DWORD *)(a1 + 52) & 0x10) != 0 && (*(_BYTE *)(a1 + 57) & 2) != 0 )
  {
    v25 = v14 | 8;
    v15 = v25;
    if ( (unsigned __int16)v12 > 0x5C0u )
    {
      if ( (unsigned __int16)v12 <= 0x5F1u )
      {
        if ( (unsigned __int16)v12 > 0x5EDu )
          goto LABEL_12;
        goto LABEL_42;
      }
      if ( (unsigned __int16)(v12 - 1532) > 0xFu )
        goto LABEL_42;
    }
    else if ( (unsigned __int16)v12 <= 0x5BCu )
    {
      if ( (unsigned __int16)v12 > 0x378u )
      {
        if ( (unsigned __int16)(v12 - 993) <= 3u )
          goto LABEL_12;
      }
      else if ( (unsigned __int16)v12 > 0x374u )
      {
        goto LABEL_12;
      }
LABEL_42:
      v17 = (unsigned int)v25;
      goto LABEL_16;
    }
  }
  else
  {
    v15 = v14;
    if ( (unsigned __int16)v12 > 0x5C0u )
    {
      if ( (unsigned __int16)v12 > 0x5F1u )
      {
        LOWORD(v12) = v12 - 1532;
        if ( (unsigned __int16)v12 > 0xFu )
          goto LABEL_15;
      }
      else if ( (unsigned __int16)v12 <= 0x5EDu )
      {
        goto LABEL_15;
      }
    }
    else if ( (unsigned __int16)v12 <= 0x5BCu )
    {
      if ( (unsigned __int16)v12 > 0x378u )
      {
        LOWORD(v12) = v12 - 993;
        if ( (unsigned __int16)v12 > 3u )
          goto LABEL_15;
      }
      else if ( (unsigned __int16)v12 <= 0x374u )
      {
        goto LABEL_15;
      }
    }
  }
LABEL_12:
  v16 = a1 + 24;
  if ( (*(_BYTE *)(a1 + 297) & 0x10) != 0 )
    v15 |= 0x10u;
  v15 = sub_3F1D70(v16, v15);
LABEL_15:
  v17 = (unsigned int)v15;
  if ( v15 != 4 )
  {
LABEL_16:
    v18 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 832) + 168LL))(*(_QWORD *)(a1 + 832), v17);
    dtype_size = get_dtype_size();
    sub_1D6310(a1, 4u, dtype_size, v18, 0x3BEA45E214ADDC55LL, a3, *(double *)a5.m128i_i64, 0);
    v13 = (unsigned __int8)a2[33];
    LOBYTE(v13) = (unsigned __int8)v13 >> 6;
    if ( (_BYTE)v13 )
    {
      v26 = *(_QWORD *)(a1 + 832);
      v27 = (__m128)_mm_cvtsi32_si128(a3);
      v28 = 1 << v13;
      v29 = _mm_cvtsi32_si128(*(_DWORD *)(v26 + 80));
      v30 = *(_DWORD *)(v26 + 80);
      v33[0] = 0xFFFFFFFF00000000LL;
      *(_DWORD *)v32 = 1;
      a5 = _mm_unpacklo_epi32(v29, (__m128i)v27);
      v33[1] = 0;
      *(_QWORD *)&v32[4] = a5.m128i_i64[0];
      sub_120A10((__int64)v33, (unsigned __int64 *)v26, v28, v30, -1, 0);
      sub_1D6450(a1, 14, v32, (unsigned __int8 *)v33, v32, a5, v27, a7);
      sub_11CDA0((__int64)v33);
      sub_11CDA0((__int64)v32);
    }
    v20 = 1;
    goto LABEL_19;
  }
  v20 = 0;
LABEL_19:
  if ( a2[1] != 2 )
  {
    v21 = a2[33] & 7;
    if ( (*(_BYTE *)(a1 + 52) & 0x10) != 0 && (*(_BYTE *)(a1 + 57) & 1) != 0 )
      v21 = a2[33] & 7 | 8u;
    v31 = (*(int (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(a1 + 832) + 168LL))(
            *(_QWORD *)(a1 + 832),
            v21,
            v12,
            v13);
    v22 = get_dtype_size();
    v23 = (_BYTE)v20 == 0 ? 4 : 12;
    v20 = 1;
    sub_1D6310(a1, v23, v22, v31, a3, a3, *(double *)a5.m128i_i64, 0);
  }
LABEL_25:
  *a4 = a3;
  return v20;
}

