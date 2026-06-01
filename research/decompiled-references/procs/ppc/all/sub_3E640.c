__int64 __fastcall sub_3E640(__int64 a1)
{
  __int16 v1; // ax
  unsigned int v2; // ebp
  __int64 v4; // r12
  unsigned __int8 v5; // r12
  unsigned __int8 v6; // al
  bool v7; // r14
  __int64 (__fastcall *v8)(__int64, __int64); // rax
  unsigned __int8 v9; // al
  bool v10; // dl
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // r9
  const __m128i *v14; // r8
  __m128i *v15; // rax
  __int64 v16; // rax
  _BOOL4 v17; // edx
  __int64 v18; // rax
  _BOOL4 v19; // edx
  bool v20; // [rsp+7h] [rbp-31h] BYREF
  unsigned __int64 v21; // [rsp+8h] [rbp-30h]

  v1 = *(_WORD *)(a1 + 40);
  v21 = __readfsqword(0x28u);
  if ( (unsigned __int16)(v1 - 1) > 1u && (unsigned __int16)(v1 - 1155) > 2u && (v1 & 0xFFFD) != 4 )
    return 0;
  v4 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v4 + 1) )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  v2 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 8LL))(a1, a1 + 56, *(_QWORD *)(a1 + 864));
  if ( !(_BYTE)v2 )
    return 0;
  v5 = *(_BYTE *)(v4 + 5);
  v6 = *(_BYTE *)(a1 + 61);
  v7 = v5 <= 0xF9u;
  if ( v6 > 0xF9u )
  {
    if ( v6 < v5 || v5 <= 0xF9u )
      goto LABEL_14;
  }
  else if ( v6 < v5 && v5 <= 0xF9u && (v6 != 2 || !*(_BYTE *)(a1 + 8)) )
  {
LABEL_14:
    v8 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
    if ( v8 == sub_313C0 )
      return 0;
    v9 = v8(a1, a1 + 56);
    v10 = v7 || v9 < v5;
    if ( v9 <= 0xF9u )
      v10 = v9 < v5 && v7;
    if ( v10 )
      return 0;
  }
  v11 = a1 + 56;
  if ( *(_BYTE *)(a1 + 137) )
    v11 = a1 + 96;
  if ( (unsigned __int16)(*(_WORD *)(a1 + 40) - 1) > 1u )
  {
    v12 = sub_34AD0(a1 + 16, v11 + 40, &v20);
    *(_QWORD *)(v13 + 8) = v12;
    v15 = *(__m128i **)(a1 + 864);
    *v15 = _mm_loadu_si128(v14);
    v15[1] = _mm_loadu_si128(v14 + 1);
    v15[2].m128i_i32[0] = v14[2].m128i_i32[0];
    v16 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 912) = -1;
    v17 = v20;
    *(_QWORD *)(a1 + 944) = v16;
    *(_DWORD *)(a1 + 920) = -1;
    *(_DWORD *)(a1 + 952) = -858993459 * (((__int64)&v14[-3] - a1 - 8) >> 3) + 1;
    *(_QWORD *)(a1 + 928) = 0;
    *(_DWORD *)(a1 + 936) = 4 - v17;
    return v2;
  }
  if ( (unsigned __int8)sub_3DFA0(a1, (_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL), v11, &v20) )
  {
    v18 = *(_QWORD *)(a1 + 376);
    v19 = v20;
    *(_QWORD *)(a1 + 944) = -1;
    *(_DWORD *)(a1 + 952) = -1;
    *(_QWORD *)(a1 + 912) = -1;
    *(_DWORD *)(a1 + 920) = -1;
    *(_QWORD *)(a1 + 928) = *(_QWORD *)(v18 + 8);
    *(_DWORD *)(a1 + 936) = 3 - v19;
    return v2;
  }
  return 0;
}
