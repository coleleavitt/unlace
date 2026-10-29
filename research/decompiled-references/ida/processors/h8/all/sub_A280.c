__int64 __fastcall sub_A280(__int64 a1, __int64 a2)
{
  unsigned __int8 next_byte; // al
  char v3; // r12
  char v4; // dl
  int v5; // ecx
  char v6; // al
  __int16 v7; // ax
  char v8; // r13
  unsigned __int8 v9; // r14
  unsigned __int8 v10; // r15
  unsigned int v11; // r13d
  int v13; // eax
  __m128i v14; // xmm0
  __int16 v15; // ax
  __m128i v16; // xmm0
  char v17; // al
  __m128i v18; // xmm0
  __int16 v19; // ax
  __m128i v20; // xmm0
  int v21; // eax
  __m128i v22; // xmm0
  _OWORD v23[2]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v24; // [rsp+30h] [rbp-48h]
  unsigned __int64 v25; // [rsp+38h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  next_byte = insn_get_next_byte();
  *(_BYTE *)(a1 + 227) = next_byte;
  v3 = next_byte;
  v4 = next_byte >> 4;
  v5 = *(_DWORD *)(a2 + 28);
  *(_BYTE *)(a2 + 41) = 3;
  v6 = v5 - 1;
  if ( !v5 )
    v6 = 0;
  *(_BYTE *)(a2 + 45) = v6;
  v7 = *(_WORD *)(a1 + 224) > 0xFFFu;
  *(_BYTE *)(a2 + 72) = 0;
  *(_WORD *)(a2 + 46) = (v4 & 7) + 32 * v7;
  v8 = *(_BYTE *)(a1 + 227) & 0xF;
  v9 = insn_get_next_byte();
  v10 = insn_get_next_byte();
  if ( v8 == 1 )
  {
    v13 = *(_DWORD *)(a2 + 72);
    *(__m128i *)(a2 + 80) = _mm_loadu_si128((const __m128i *)(a2 + 40));
    v14 = _mm_loadu_si128((const __m128i *)(a2 + 56));
    *(_DWORD *)(a2 + 112) = v13;
    *(_BYTE *)(a2 + 80) = 1;
    *(__m128i *)(a2 + 96) = v14;
    if ( sub_8180(a2, a2 + 40, v9, v10, 2, 0x1026u) || (unsigned __int8)sub_A200(a1, a2, a2 + 40, v9, v10, 2, 1) )
      return *(unsigned __int16 *)(a2 + 26);
    return 0;
  }
  if ( v8 )
    return 0;
  v11 = ((unsigned int)v3 >> 31) + 1;
  if ( (unsigned __int8)sub_6AB0(a2, v9, v10, (v3 < 0) + 1) || sub_7E30(a2, v9, v10, 32) )
    return *(unsigned __int16 *)(a2 + 26);
  if ( v3 >= 0 )
  {
    if ( v9 == 0x90 )
    {
      v15 = 3;
    }
    else
    {
      v15 = 82;
      if ( v9 != 0xB0 )
      {
        if ( sub_7C50(a2, v9, v10, 1, v11) || (unsigned __int8)sub_79B0(a2, v9, v10) )
          return *(unsigned __int16 *)(a2 + 26);
        goto LABEL_16;
      }
    }
    v20 = _mm_loadu_si128((const __m128i *)(a2 + 40));
    *(_WORD *)(a2 + 24) = v15;
    v21 = *(_DWORD *)(a2 + 72);
    *(_DWORD *)(a2 + 28) = 1;
    *(__m128i *)(a2 + 80) = v20;
    v22 = _mm_loadu_si128((const __m128i *)(a2 + 56));
    *(_DWORD *)(a2 + 112) = v21;
    *(_BYTE *)(a2 + 80) = 1;
    *(_BYTE *)(a2 + 41) = 5;
    *(_BYTE *)(a2 + 45) = 0;
    *(_QWORD *)(a2 + 48) = v10;
    *(__m128i *)(a2 + 96) = v22;
    return *(unsigned __int16 *)(a2 + 26);
  }
  if ( sub_7C50(a2, v9, v10, 1, v11) )
    return *(unsigned __int16 *)(a2 + 26);
LABEL_16:
  if ( (~v9 & 0xF0) == 0 && (unsigned __int8)sub_8D00(a1, a2, v9, v10, 0) || (unsigned __int8)sub_8280(a2, v9, v10) )
    return *(unsigned __int16 *)(a2 + 26);
  memset(v23, 0, sizeof(v23));
  v24 = 0;
  if ( sub_8180(a2, (__int64)v23, v9, v10, 1, 0x1026u) )
  {
    v16 = _mm_loadu_si128((const __m128i *)(a2 + 40));
    *(_DWORD *)(a2 + 112) = *(_DWORD *)(a2 + 72);
    v17 = BYTE1(v23[0]);
    *(__m128i *)(a2 + 80) = v16;
    v18 = _mm_loadu_si128((const __m128i *)(a2 + 56));
    *(_BYTE *)(a2 + 41) = v17;
    v19 = WORD3(v23[0]);
    *(_BYTE *)(a2 + 80) = 1;
    *(_WORD *)(a2 + 46) = v19;
    LOBYTE(v19) = BYTE5(v23[0]);
    *(__m128i *)(a2 + 96) = v18;
    *(_BYTE *)(a2 + 45) = v19;
    return *(unsigned __int16 *)(a2 + 26);
  }
  return 0;
}

