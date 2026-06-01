__int64 __fastcall sub_CC10(__int64 a1)
{
  __int64 v1; // rbp
  __int64 result; // rax
  unsigned __int8 v3; // bp
  unsigned __int8 v4; // al
  bool v5; // r13
  __int64 v6; // rbp
  __int64 v7; // rax
  __m128i *v8; // rdx
  __int64 v9; // rdx
  int v10; // esi
  __int64 (__fastcall *v11)(__int64, __int64); // rax
  unsigned __int8 v12; // al
  bool v13; // dl
  _QWORD v14[7]; // [rsp+0h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(a1 + 864);
  v14[1] = __readfsqword(0x28u);
  if ( !*(_BYTE *)(v1 + 1) )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL))(a1, a1 + 56, v1) )
    return 0;
  v3 = *(_BYTE *)(v1 + 5);
  v4 = *(_BYTE *)(a1 + 61);
  v5 = v3 <= 0xF9u;
  if ( v4 > 0xF9u )
  {
    if ( v4 >= v3 && v3 > 0xF9u )
      goto LABEL_10;
  }
  else if ( v4 >= v3 || v3 > 0xF9u || *(_BYTE *)(a1 + 8) && v4 == 2 )
  {
    goto LABEL_10;
  }
  v11 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v11 == sub_A190 )
    return 0;
  v12 = v11(a1, a1 + 56);
  v13 = v5 || v12 < v3;
  if ( v12 <= 0xF9u )
    v13 = v5 && v12 < v3;
  if ( v13 )
    return 0;
LABEL_10:
  if ( *(_WORD *)(a1 + 40) != 10 )
    return 0;
  if ( *(_QWORD *)(a1 + 184) != 2 )
    return 0;
  if ( !(unsigned int)sub_BE80(
                        *(_QWORD *)(a1 + 888),
                        (__int64)v14,
                        nullptr,
                        nullptr,
                        nullptr,
                        nullptr,
                        nullptr,
                        *(_QWORD *)(a1 + 32),
                        *(unsigned __int16 *)(a1 + 102),
                        0) )
    return 0;
  v6 = v14[0];
  v7 = use_mapping(v14[0]);
  result = is_mapped(v7);
  if ( !(_BYTE)result )
    return 0;
  v8 = *(__m128i **)(a1 + 864);
  *v8 = _mm_loadu_si128((const __m128i *)(a1 + 136));
  v8[1] = _mm_loadu_si128((const __m128i *)(a1 + 152));
  v8[2].m128i_i32[0] = *(_DWORD *)(a1 + 168);
  v9 = *(_QWORD *)(a1 + 376);
  v10 = *(unsigned __int16 *)(a1 + 142);
  *(_BYTE *)(v9 + 68) = *(_BYTE *)(a1 + 141);
  *(_DWORD *)(v9 + 64) = v10;
  *(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL) = v6;
  **(_DWORD **)(a1 + 376) = **(_DWORD **)(a1 + 376) & 0xFFFFFBFB | 4;
  return result;
}

