__int64 __fastcall sub_10900(__int64 a1)
{
  __int16 v1; // ax
  unsigned int v2; // ebp
  char v4; // al
  __int64 v5; // r12
  unsigned __int8 v6; // r12
  unsigned __int8 v7; // al
  bool v8; // r14
  __int64 (__fastcall *v9)(__int64, __int64); // rax
  unsigned __int8 v10; // al
  bool v11; // dl
  bool v12; // cc
  bool v13; // al
  __m128i *v14; // rax

  v1 = *(_WORD *)(a1 + 40);
  if ( v1 == 78 )
  {
    v4 = *(_BYTE *)(a1 + 97);
    if ( v4 != 1 && v4 != 4 || *(_BYTE *)(a1 + 131) != 17 )
      return 0;
  }
  else if ( v1 != 65 || *(_BYTE *)(a1 + 97) != 5 || *(_QWORD *)(a1 + 104) != 1 )
  {
    return 0;
  }
  v5 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v5 + 1) )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  v2 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL))(a1, a1 + 56, v5);
  if ( !(_BYTE)v2 )
    return 0;
  v6 = *(_BYTE *)(v5 + 5);
  v7 = *(_BYTE *)(a1 + 61);
  v8 = v6 <= 0xF9u;
  if ( v7 > 0xF9u )
  {
    if ( v6 > 0xF9u && v7 >= v6 )
      goto LABEL_23;
  }
  else if ( v6 > 0xF9u || v7 >= v6 || *(_BYTE *)(a1 + 8) && v7 == 2 )
  {
    goto LABEL_23;
  }
  v9 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v9 == sub_10110 )
    return 0;
  v10 = v9(a1, a1 + 56);
  v11 = v8 || v10 < v6;
  v12 = v10 <= 0xF9u;
  v13 = v8 && v10 < v6;
  if ( !v12 )
    v13 = v11;
  if ( v13 )
    return 0;
LABEL_23:
  if ( *(_WORD *)(a1 + 40) == 78 )
  {
    v14 = *(__m128i **)(a1 + 864);
    *v14 = _mm_loadu_si128((const __m128i *)(a1 + 96));
    v14[1] = _mm_loadu_si128((const __m128i *)(a1 + 112));
    v14[2].m128i_i32[0] = *(_DWORD *)(a1 + 128);
  }
  **(_DWORD **)(a1 + 376) &= 0xFFFFFBFB;
  return v2;
}

