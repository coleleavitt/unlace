__int64 __fastcall sub_13930(const __m128i *a1)
{
  unsigned int v1; // ebp
  __int64 v3; // r12
  int v4; // r9d
  unsigned __int8 v5; // r12
  unsigned __int8 v6; // al
  bool v7; // r14
  __int64 (__fastcall *v8)(__int64, __int64); // rax
  unsigned __int8 v9; // al
  bool v10; // dl
  bool v11; // cc
  bool v12; // al
  unsigned int v13; // r8d
  __m128i *v14; // rax
  unsigned int v15; // r8d
  __int64 v16[45]; // [rsp-170h] [rbp-1B8h] BYREF
  int v17[2]; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v18[7]; // [rsp+10h] [rbp-38h] BYREF

  v18[1] = __readfsqword(0x28u);
  if ( a1[2].m128i_i16[4] != 8 )
    return 0;
  v3 = a1[54].m128i_i64[0];
  if ( *(_BYTE *)(v3 + 1) )
  {
    v1 = (*(__int64 (__fastcall **)(const __m128i *, __int64 *, __int64))(a1->m128i_i64[0] + 8))(
           a1,
           &a1[3].m128i_i64[1],
           a1[54].m128i_i64[0]);
    if ( !(_BYTE)v1 )
      return 0;
    v5 = *(_BYTE *)(v3 + 5);
    v6 = a1[3].m128i_u8[13];
    v7 = v5 <= 0xF9u;
    if ( v6 > 0xF9u )
    {
      if ( v5 > 0xF9u && v6 >= v5 )
        goto LABEL_16;
    }
    else if ( v5 > 0xF9u || v6 >= v5 || a1->m128i_i8[8] && v6 == 2 )
    {
      goto LABEL_16;
    }
    v8 = *(__int64 (__fastcall **)(__int64, __int64))(a1->m128i_i64[0] + 32);
    if ( v8 == sub_10110 )
      return 0;
    v9 = v8((__int64)a1, (__int64)&a1[3].m128i_i64[1]);
    v10 = v7 || v9 < v5;
    v11 = v9 <= 0xF9u;
    v12 = v7 && v9 < v5;
    if ( !v11 )
      v12 = v10;
    if ( v12 )
      return 0;
LABEL_16:
    if ( a1[6].m128i_i8[1] != 1
      || (v15 = a1[6].m128i_u16[3],
          qmemcpy(v16, &a1[1], sizeof(v16)),
          !(unsigned __int8)sub_13510(
                              a1[55].m128i_i64[1],
                              (__int64 *)v17,
                              v18,
                              v15,
                              v15,
                              v4,
                              v16[0],
                              v16[1],
                              v16[2],
                              v16[3],
                              v16[4],
                              v16[5],
                              v16[6],
                              v16[7],
                              v16[8],
                              v16[9],
                              v16[10],
                              v16[11],
                              (void *)v16[12],
                              v16[13],
                              v16[14])) )
    {
      if ( a1[3].m128i_i8[9] != 1 )
        return 0;
      v13 = a1[3].m128i_u16[7];
      qmemcpy(v16, &a1[1], sizeof(v16));
      if ( !(unsigned __int8)sub_13510(
                               a1[55].m128i_i64[1],
                               (__int64 *)v17,
                               v18,
                               v13,
                               v13,
                               v4,
                               v16[0],
                               v16[1],
                               v16[2],
                               v16[3],
                               v16[4],
                               v16[5],
                               v16[6],
                               v16[7],
                               v16[8],
                               v16[9],
                               v16[10],
                               v16[11],
                               (void *)v16[12],
                               v16[13],
                               v16[14]) )
        return 0;
      v14 = (__m128i *)a1[54].m128i_i64[0];
      *v14 = _mm_loadu_si128(a1 + 6);
      v14[1] = _mm_loadu_si128(a1 + 7);
      v14[2].m128i_i32[0] = a1[8].m128i_i32[0];
    }
    *(_QWORD *)(a1[23].m128i_i64[1] + 8) = *(_QWORD *)v17;
    return v1;
  }
  a1[49].m128i_i8[8] = 1;
  return 0;
}

