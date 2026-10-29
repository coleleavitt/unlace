__int64 __fastcall sub_D280(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v3; // r12
  unsigned __int8 v4; // r12
  unsigned __int8 v5; // al
  bool v6; // r14
  __int64 (__fastcall *v7)(__int64, __int64); // rax
  unsigned __int8 v8; // al
  bool v9; // dl
  bool v10; // cc
  bool v11; // al
  __m128i *v12; // rax

  if ( *(_WORD *)(a1 + 40) != 108 )
    return 0;
  v3 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v3 + 1) )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  v1 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 8LL))(a1, a1 + 136, *(_QWORD *)(a1 + 864));
  if ( !(_BYTE)v1 )
    return 0;
  v4 = *(_BYTE *)(v3 + 5);
  v5 = *(_BYTE *)(a1 + 141);
  v6 = v4 <= 0xF9u;
  if ( v5 > 0xF9u )
  {
    if ( v4 <= 0xF9u || v5 < v4 )
      goto LABEL_12;
  }
  else if ( v4 <= 0xF9u && v5 < v4 && (!*(_BYTE *)(a1 + 8) || v5 != 2) )
  {
LABEL_12:
    v7 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
    if ( v7 == sub_A250 )
      return 0;
    v8 = v7(a1, a1 + 136);
    v9 = v6 || v8 < v4;
    v10 = v8 <= 0xF9u;
    v11 = v6 && v8 < v4;
    if ( !v10 )
      v11 = v9;
    if ( v11 )
      return 0;
  }
  if ( *(_BYTE *)(a1 + 97) == 5 && *(_QWORD *)(a1 + 104) == 2 )
  {
    v12 = *(__m128i **)(a1 + 864);
    *v12 = _mm_loadu_si128((const __m128i *)(a1 + 56));
    v12[1] = _mm_loadu_si128((const __m128i *)(a1 + 72));
    v12[2].m128i_i32[0] = *(_DWORD *)(a1 + 88);
    **(_DWORD **)(a1 + 376) = **(_DWORD **)(a1 + 376) & 0xFFFFFBFB | 4;
    return v1;
  }
  return 0;
}

