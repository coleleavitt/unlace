unsigned __int64 __fastcall sub_103B0(__int64 a1, const __m128i *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int8 v6; // al
  __int64 v7; // r12
  __int8 v8; // dl
  __int64 v10; // r8
  __int64 v11; // r9
  __int8 v12; // al
  __int8 v13; // dl
  __m128i v14; // xmm0
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17[45]; // [rsp-170h] [rbp-1F8h] BYREF
  const void *v18; // [rsp+8h] [rbp-80h]
  __int64 v19; // [rsp+10h] [rbp-78h] BYREF
  unsigned __int64 v20; // [rsp+18h] [rbp-70h] BYREF
  __m128i v21; // [rsp+20h] [rbp-68h] BYREF
  __m128i v22; // [rsp+30h] [rbp-58h]
  __int64 v23; // [rsp+40h] [rbp-48h]
  unsigned __int64 v24; // [rsp+48h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v6 = a2->m128i_i8[5];
  if ( v6 == 2 )
    return v24 - __readfsqword(0x28u);
  v7 = a2[1].m128i_i64[0];
  v23 = a2[2].m128i_i64[0];
  v8 = a2->m128i_i8[1];
  v21 = _mm_loadu_si128(a2);
  v22 = _mm_loadu_si128(a2 + 1);
  if ( v8 != 1 )
  {
    if ( v8 != 4 )
      return v24 - __readfsqword(0x28u);
    v7 = (v6 != 1) + v7 - 2;
  }
  v22.m128i_i64[0] = v7;
  v18 = (const void *)(a1 + 16);
  qmemcpy(v17, (const void *)(a1 + 16), sizeof(v17));
  if ( (unsigned __int8)sub_F9F0(
                          *(_QWORD *)(a1 + 888),
                          &v19,
                          &v20,
                          &v21,
                          a5,
                          a6,
                          v17[0],
                          v17[1],
                          v17[2],
                          v17[3],
                          v17[4],
                          *(__int128 *)&v17[5],
                          *(__int128 *)&v17[7],
                          v17[9],
                          v17[10],
                          v17[11],
                          v17[12],
                          v17[13],
                          v17[14],
                          v17[15])
    && !v19 )
  {
    v12 = v21.m128i_i8[5];
    if ( a2->m128i_i8[1] != 1 )
    {
      v13 = a2->m128i_i8[5];
      if ( v13 != 1 )
      {
        if ( !v13 && v21.m128i_i8[5] == 1 )
          goto LABEL_16;
        goto LABEL_12;
      }
      if ( v21.m128i_i8[5] != 2 )
        goto LABEL_12;
    }
LABEL_16:
    a2->m128i_i8[5] = v12;
    a2[1].m128i_i64[0] = v7;
    return v24 - __readfsqword(0x28u);
  }
LABEL_12:
  if ( (a2->m128i_i64[0] & 0xFF000000FF00LL) == 0x400 )
  {
    v14 = _mm_loadu_si128(a2);
    LODWORD(v23) = a2[2].m128i_i32[0];
    v15 = a2[1].m128i_i64[0];
    v21 = v14;
    v7 = v15 - 3;
    v16 = *(_QWORD *)(a1 + 888);
    v22.m128i_i64[1] = _mm_loadu_si128(a2 + 1).m128i_i64[1];
    v22.m128i_i64[0] = v7;
    qmemcpy(v17, v18, sizeof(v17));
    if ( (unsigned __int8)sub_F9F0(
                            v16,
                            &v19,
                            &v20,
                            &v21,
                            v10,
                            v11,
                            v17[0],
                            v17[1],
                            v17[2],
                            v17[3],
                            v17[4],
                            *(__int128 *)&v17[5],
                            *(__int128 *)&v17[7],
                            v17[9],
                            v17[10],
                            v17[11],
                            v17[12],
                            v17[13],
                            v17[14],
                            v17[15]) )
    {
      if ( !v19 )
      {
        v12 = v21.m128i_i8[5];
        if ( v21.m128i_i8[5] == 2 )
          goto LABEL_16;
      }
    }
  }
  return v24 - __readfsqword(0x28u);
}
