__int64 __fastcall sub_3DB90(__int64 a1)
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
  unsigned int v11; // eax
  __int64 v12; // r8
  __int64 v13; // rax
  const __m128i *v14; // r8
  char v15; // r9
  __m128i *v16; // rax
  __int64 v17; // rax
  char v18; // [rsp+7h] [rbp-31h] BYREF
  unsigned __int64 v19; // [rsp+8h] [rbp-30h]

  v1 = *(_WORD *)(a1 + 40);
  v19 = __readfsqword(0x28u);
  if ( (v1 & 0xFFFD) != 4 && (unsigned __int16)(v1 - 1155) > 2u )
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
    if ( v6 >= v5 && v5 > 0xF9u )
      goto LABEL_17;
  }
  else if ( v6 >= v5 || v5 > 0xF9u || *(_BYTE *)(a1 + 8) && v6 == 2 )
  {
    goto LABEL_17;
  }
  v8 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v8 == sub_313C0 )
    return 0;
  v9 = v8(a1, a1 + 56);
  v10 = v7 || v9 < v5;
  if ( v9 <= 0xF9u )
    v10 = v7 && v9 < v5;
  if ( v10 )
    return 0;
LABEL_17:
  v11 = *(_DWORD *)(a1 + 936);
  if ( v11 <= 3 )
  {
    if ( v11 )
      goto LABEL_19;
LABEL_28:
    if ( !under_debugger )
      interr(10469);
    BUG();
  }
  if ( v11 != 4 )
    goto LABEL_28;
LABEL_19:
  v12 = a1 + 56;
  if ( *(_BYTE *)(a1 + 137) )
    v12 = a1 + 96;
  v13 = sub_34AD0(a1 + 16, v12 + 40, &v18);
  if ( v18 == v15 )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 888) + 32LL) + 16LL)
                                             & (*(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL) + v13);
    v16 = *(__m128i **)(a1 + 864);
    *v16 = _mm_loadu_si128(v14);
    v16[1] = _mm_loadu_si128(v14 + 1);
    v16[2].m128i_i32[0] = v14[2].m128i_i32[0];
    v17 = *(_QWORD *)(a1 + 32);
    *(_BYTE *)(a1 + 904) = 1;
    *(_QWORD *)(a1 + 912) = v17;
    *(_DWORD *)(a1 + 920) = -858993459 * (((__int64)&v14[-3] - a1 - 8) >> 3) + 1;
    return v2;
  }
  return 0;
}

