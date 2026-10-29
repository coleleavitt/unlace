__int64 __fastcall sub_1A690(__int64 a1)
{
  __int16 v1; // ax
  __int64 v2; // rbp
  unsigned __int8 v4; // bp
  unsigned __int8 v5; // al
  bool v6; // r13
  __int64 (__fastcall *v7)(__int64, __int64); // rax
  unsigned __int8 v8; // al
  bool v9; // dl
  __int64 *v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 *v13; // rax
  __int64 v14; // rsi
  __int64 *v15; // rcx
  __m128i *v16; // rax
  _QWORD v17[7]; // [rsp+0h] [rbp-38h] BYREF

  v1 = *(_WORD *)(a1 + 40);
  v17[1] = __readfsqword(0x28u);
  if ( (v1 & 0xFFFB) != 0x223 )
    goto LABEL_4;
  v2 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v2 + 1) )
  {
    *(_BYTE *)(a1 + 792) = 1;
    goto LABEL_4;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 8LL))(
          a1,
          a1 + 56,
          *(_QWORD *)(a1 + 864)) )
    goto LABEL_4;
  v4 = *(_BYTE *)(v2 + 5);
  v5 = *(_BYTE *)(a1 + 61);
  v6 = v4 <= 0xF9u;
  if ( v5 > 0xF9u )
  {
    if ( v4 > 0xF9u && v5 >= v4 )
      goto LABEL_17;
  }
  else if ( v4 > 0xF9u || v5 >= v4 || *(_BYTE *)(a1 + 8) && v5 == 2 )
  {
    goto LABEL_17;
  }
  v7 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v7 == sub_14E20 )
    goto LABEL_4;
  v8 = v7(a1, a1 + 56);
  v9 = v6 || v8 < v4;
  if ( v8 <= 0xF9u )
    v9 = v6 && v8 < v4;
  if ( v9 )
  {
LABEL_4:
    if ( (unsigned __int8)sub_1A430(a1, v17, (__int64 **)(a1 + 896)) )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL) = *(_QWORD *)(a1 + 960) + v17[0];
      return 1;
    }
    return 0;
  }
LABEL_17:
  if ( (unsigned __int8)sub_26470(
                          *(_QWORD *)(a1 + 888),
                          a1 + 896,
                          *(_QWORD *)(a1 + 32),
                          *(unsigned __int16 *)(a1 + 102))
    && (unsigned __int8)(*(_BYTE *)(a1 + 920) - 10) <= 1u )
  {
    v10 = *(__int64 **)(a1 + 896);
    v11 = *(_QWORD *)(a1 + 904);
    v12 = *v10;
    if ( v11 == 1 || (v13 = v10 + 3, v14 = 3 * v11, v15 = &v10[v14], v14 == 3) )
    {
LABEL_28:
      *(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL) = *(_QWORD *)(a1 + 960) + v12;
      v16 = *(__m128i **)(a1 + 864);
      *v16 = _mm_loadu_si128((const __m128i *)(a1 + 136));
      v16[1] = _mm_loadu_si128((const __m128i *)(a1 + 152));
      v16[2].m128i_i32[0] = *(_DWORD *)(a1 + 168);
      *(_BYTE *)(*(_QWORD *)(a1 + 864) + 32LL) = 2;
      return 1;
    }
    while ( v12 == *v13 )
    {
      v13 += 3;
      if ( v15 == v13 )
        goto LABEL_28;
    }
  }
  return 0;
}

