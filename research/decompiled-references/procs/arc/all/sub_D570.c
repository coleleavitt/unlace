__int64 __fastcall sub_D570(__int64 a1, const __m128i **a2)
{
  __int64 result; // rax
  const __m128i **v3; // rbp
  int v4; // eax
  char v5; // al
  __int64 v6; // r12
  const __m128i *v7; // rcx
  __m128i *v8; // rdx

  if ( *(_WORD *)(a1 + 40) != 43 || *(_BYTE *)(a1 + 137) != 7 )
    return 0;
  v3 = a2;
  v4 = *(_DWORD *)(a1 + 44);
  LOBYTE(a2) = v4 & 0x1F;
  if ( (unsigned __int8)((*(_BYTE *)(a1 + 44) & 0x1F) - 1) > 0xEu )
    return 0;
  if ( (v4 & 0x10) != 0 )
    return 0;
  LODWORD(a2) = (unsigned __int8)a2;
  if ( (unsigned int)(unsigned __int8)a2 - 5 > 1 )
    return 0;
  v5 = *(_BYTE *)(a1 + 57);
  if ( v5 == 1 )
  {
    if ( *(_BYTE *)(a1 + 97) != 5 )
      return 0;
    *v3 = (const __m128i *)(a1 + 56);
    v6 = *(_QWORD *)(a1 + 104);
  }
  else
  {
    if ( v5 != 5 || *(_BYTE *)(a1 + 97) != 1 )
      return 0;
    LODWORD(a2) = dword_1F560[(unsigned __int8)a2 - 1];
    *v3 = (const __m128i *)(a1 + 96);
    v6 = *(_QWORD *)(a1 + 64);
  }
  result = sub_D300(a1, (unsigned int)a2, *(_QWORD *)(a1 + 152) + 16LL * *(_QWORD *)(a1 + 16));
  if ( (_BYTE)result )
  {
    *(_WORD *)(*(_QWORD *)(a1 + 376) + 4LL) = v6;
    v7 = *v3;
    v8 = *(__m128i **)(a1 + 864);
    *v8 = _mm_loadu_si128(*v3);
    v8[1] = _mm_loadu_si128(v7 + 1);
    v8[2].m128i_i32[0] = v7[2].m128i_i32[0];
    return result;
  }
  return 0;
}
