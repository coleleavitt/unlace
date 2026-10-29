__int64 __fastcall sub_E260(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int16 v5; // ax
  unsigned int v7; // edx
  __int64 v8; // rdi
  __int64 v9; // r12
  __int64 v10; // rax
  bool v11; // zf
  int v12; // eax

  v5 = *(_WORD *)(a2 + 24);
  if ( v5 == 36 )
  {
    if ( *(_QWORD *)(a3 + 16) != -1 )
      goto LABEL_8;
    goto LABEL_16;
  }
  if ( v5 != 38 || *(_BYTE *)(a2 + 41) != 5 )
    return 0;
  if ( *(_QWORD *)(a3 + 16) == -1 )
  {
LABEL_16:
    if ( (int)decode_insn(a3, *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26), a4) <= 0 )
      return 0;
    if ( *(_WORD *)(a2 + 24) == 38 )
      goto LABEL_6;
LABEL_8:
    v7 = *(unsigned __int16 *)(a2 + 126);
    goto LABEL_9;
  }
LABEL_6:
  v7 = *(unsigned __int16 *)(a2 + 86);
LABEL_9:
  if ( *(_WORD *)(a3 + 24) != 37
    || *(_WORD *)(a3 + 86) != (_WORD)v7
    || (unsigned __int8)sub_DE40(a1, a3, v7, *(unsigned __int16 *)(a3 + 126)) )
  {
    return 0;
  }
  v8 = *(_QWORD *)(a3 + 48);
  v9 = *(_QWORD *)(a2 + 48);
  if ( *(_WORD *)(a2 + 24) == 38 )
  {
    *(_QWORD *)(a2 + 48) = v9 + extend_sign(v8, 2, 1);
    *(__m128i *)(a2 + 80) = _mm_loadu_si128((const __m128i *)(a3 + 120));
    *(__m128i *)(a2 + 96) = _mm_loadu_si128((const __m128i *)(a3 + 136));
    *(_DWORD *)(a2 + 112) = *(_DWORD *)(a3 + 152);
  }
  else
  {
    v10 = extend_sign(v8, 2, 1);
    v11 = *(_BYTE *)(a2 + 81) == 1;
    *(_QWORD *)(a2 + 48) = v10 + (v9 << 16);
    if ( !v11 || *(_WORD *)(a2 + 86) )
    {
      *(_WORD *)(a2 + 24) = 37;
      *(__m128i *)(a2 + 120) = _mm_loadu_si128((const __m128i *)(a3 + 120));
      *(__m128i *)(a2 + 136) = _mm_loadu_si128((const __m128i *)(a3 + 136));
      *(_DWORD *)(a2 + 152) = *(_DWORD *)(a3 + 152);
    }
    else
    {
      *(_WORD *)(a2 + 24) = 38;
      *(__m128i *)(a2 + 80) = _mm_loadu_si128((const __m128i *)(a3 + 120));
      *(__m128i *)(a2 + 96) = _mm_loadu_si128((const __m128i *)(a3 + 136));
      v12 = *(_DWORD *)(a3 + 152);
      *(_BYTE *)(a2 + 121) = 0;
      *(_DWORD *)(a2 + 112) = v12;
    }
  }
  *(_BYTE *)(a2 + 72) |= 4u;
  *(_WORD *)(a2 + 26) += *(_WORD *)(a3 + 26);
  return 1;
}

