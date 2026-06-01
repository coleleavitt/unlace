__int64 __fastcall sub_3E280(__int64 a1)
{
  __int16 v1; // ax
  unsigned int v2; // ebp
  __int64 v4; // r13
  unsigned __int8 v5; // r13
  unsigned __int8 v6; // al
  bool v7; // r14
  __int64 (__fastcall *v8)(__int64, __int64); // rax
  unsigned __int8 v9; // al
  bool v10; // dl
  __int64 v11; // r8
  __int64 v12; // rax
  const __m128i *v13; // r8
  __m128i *v14; // rdx
  __int64 v15; // rax
  _BOOL4 v16; // edx
  bool v17; // [rsp+Fh] [rbp-39h] BYREF
  _QWORD v18[7]; // [rsp+10h] [rbp-38h] BYREF

  v1 = *(_WORD *)(a1 + 40);
  v18[1] = __readfsqword(0x28u);
  if ( (unsigned __int16)(v1 - 1) > 1u && v1 != 6 && v1 != 1157 )
    return 0;
  v4 = *(_QWORD *)(a1 + 864);
  if ( *(_BYTE *)(v4 + 1) )
  {
    v2 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 8LL))(a1, a1 + 56, *(_QWORD *)(a1 + 864));
    if ( !(_BYTE)v2 )
      return 0;
    v5 = *(_BYTE *)(v4 + 5);
    v6 = *(_BYTE *)(a1 + 61);
    v7 = v5 <= 0xF9u;
    if ( v6 > 0xF9u )
    {
      if ( v5 > 0xF9u && v6 >= v5 )
        goto LABEL_18;
    }
    else if ( v5 > 0xF9u || v6 >= v5 || *(_BYTE *)(a1 + 8) && v6 == 2 )
    {
      goto LABEL_18;
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
LABEL_18:
    v11 = a1 + 56;
    if ( *(_BYTE *)(a1 + 137) )
      v11 = a1 + 96;
    if ( (unsigned __int16)(*(_WORD *)(a1 + 40) - 1) <= 1u )
    {
      if ( !(unsigned __int8)sub_3DFA0(a1, v18, v11, &v17) )
        return 0;
      v15 = *(_QWORD *)(a1 + 944);
      v16 = v17;
      *(_QWORD *)(a1 + 944) = -1;
      *(_QWORD *)(a1 + 912) = v15;
      LODWORD(v15) = *(_DWORD *)(a1 + 952);
      *(_DWORD *)(a1 + 936) = v16 + 1;
      *(_DWORD *)(a1 + 920) = v15;
      v12 = v18[0];
      *(_DWORD *)(a1 + 952) = -1;
      *(_QWORD *)(a1 + 928) = v12;
    }
    else
    {
      v12 = sub_34AD0(a1 + 16, v11 + 40, nullptr);
      v14 = *(__m128i **)(a1 + 864);
      *v14 = _mm_loadu_si128(v13);
      v14[1] = _mm_loadu_si128(v13 + 1);
      v14[2].m128i_i32[0] = v13[2].m128i_i32[0];
      *(_QWORD *)(a1 + 912) = *(_QWORD *)(a1 + 32);
      *(_DWORD *)(a1 + 920) = -858993459 * (((__int64)&v13[-3] - a1 - 8) >> 3) + 1;
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 888) + 32LL) + 16LL)
                                             & (*(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL) + v12);
    *(_BYTE *)(a1 + 904) = 1;
    return v2;
  }
  *(_BYTE *)(a1 + 792) = 1;
  return 0;
}
