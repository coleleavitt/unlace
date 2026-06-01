__int64 __fastcall sub_498E0(__int64 a1)
{
  __int64 v2; // r12
  __int64 v3; // rdx
  unsigned int v4; // ebp
  unsigned __int8 v5; // r12
  unsigned __int8 v6; // al
  bool v7; // r14
  unsigned __int8 v8; // al
  bool v9; // dl
  __int64 v10; // rax
  __m128i *v11; // rax

  if ( *(_WORD *)(a1 + 40) != 209 )
    return 0;
  v2 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v2 + 1) )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 8LL))(a1, a1 + 56, *(_QWORD *)(a1 + 864));
  if ( !(_BYTE)v4 )
    return 0;
  v5 = *(_BYTE *)(v2 + 5);
  v6 = *(_BYTE *)(a1 + 61);
  v7 = v5 <= 0xF9u;
  if ( v6 > 0xF9u )
  {
    if ( v6 >= v5 && v5 > 0xF9u )
      goto LABEL_14;
  }
  else if ( v6 >= v5 || v5 > 0xF9u || *(_BYTE *)(a1 + 8) && v6 == 2 )
  {
    goto LABEL_14;
  }
  LOBYTE(v3) = v6 < v5;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, a1 + 56, v3);
  v9 = v7 || v8 < v5;
  if ( v8 <= 0xF9u )
    v9 = v7 && v8 < v5;
  if ( v9 )
    return 0;
LABEL_14:
  if ( (unsigned __int8)(*(_BYTE *)(a1 + 97) - 1) > 3u )
    return 0;
  v10 = *(_QWORD *)(a1 + 864);
  *(__m128i *)(v10 + 40) = _mm_loadu_si128((const __m128i *)(a1 + 56));
  *(__m128i *)(v10 + 56) = _mm_loadu_si128((const __m128i *)(a1 + 72));
  *(_DWORD *)(v10 + 72) = *(_DWORD *)(a1 + 88);
  v11 = *(__m128i **)(a1 + 864);
  *v11 = _mm_loadu_si128((const __m128i *)(a1 + 96));
  v11[1] = _mm_loadu_si128((const __m128i *)(a1 + 112));
  v11[2].m128i_i32[0] = *(_DWORD *)(a1 + 128);
  return v4;
}

