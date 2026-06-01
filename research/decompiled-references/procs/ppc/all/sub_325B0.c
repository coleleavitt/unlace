__int64 __fastcall sub_325B0(__int64 a1)
{
  __int64 v1; // r13
  __int64 v3; // rbp
  unsigned int v4; // r12d
  unsigned __int8 v5; // r13
  unsigned __int8 v6; // al
  bool v7; // r14
  __m128i *v8; // rax
  __m128i *v9; // rax
  __int64 (__fastcall *v10)(__int64, __int64); // rax
  unsigned __int8 v11; // al
  bool v12; // dl

  v1 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v1 + 1) )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  v3 = a1 + 56;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 8LL))(a1, a1 + 56, *(_QWORD *)(a1 + 864));
  if ( !(_BYTE)v4 )
    return 0;
  v5 = *(_BYTE *)(v1 + 5);
  v6 = *(_BYTE *)(a1 + 61);
  v7 = v5 <= 0xF9u;
  if ( v6 > 0xF9u )
  {
    if ( v5 > 0xF9u && v6 >= v5 )
      goto LABEL_10;
  }
  else if ( v5 > 0xF9u || v6 >= v5 || *(_BYTE *)(a1 + 8) && v6 == 2 )
  {
    goto LABEL_10;
  }
  v10 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v10 == sub_313C0 )
    return 0;
  v11 = v10(a1, a1 + 56);
  v12 = v7 || v11 < v5;
  if ( v11 <= 0xF9u )
    v12 = v7 && v11 < v5;
  if ( v12 )
    return 0;
LABEL_10:
  if ( (unsigned __int16)(*(_WORD *)(a1 + 40) - 1) > 1u )
    return 0;
  if ( *(_BYTE *)(a1 + 137) )
    v3 = a1 + 96;
  v8 = *(__m128i **)(a1 + 864);
  *v8 = _mm_loadu_si128((const __m128i *)v3);
  v8[1] = _mm_loadu_si128((const __m128i *)(v3 + 16));
  v8[2].m128i_i32[0] = *(_DWORD *)(v3 + 32);
  v9 = *(__m128i **)(a1 + 864);
  v9[5] = _mm_loadu_si128((const __m128i *)(v3 + 40));
  v9[6] = _mm_loadu_si128((const __m128i *)(v3 + 56));
  v9[7].m128i_i32[0] = *(_DWORD *)(v3 + 72);
  **(_DWORD **)(a1 + 376) |= 0x200000u;
  return v4;
}
