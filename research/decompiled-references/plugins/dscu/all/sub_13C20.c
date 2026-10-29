__int64 __fastcall sub_13C20(__int64 a1, const __m128i *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r14
  __int64 v6; // r13
  const char *v7; // r8
  __m128i v8; // xmm0
  const char *v9; // rsi
  const char *v10; // rdx
  const char *v12; // [rsp+0h] [rbp-70h] BYREF
  __int128 v13; // [rsp+8h] [rbp-68h]
  const char *v14; // [rsp+20h] [rbp-50h] BYREF
  __int64 v15; // [rsp+28h] [rbp-48h]
  unsigned __int64 v16; // [rsp+38h] [rbp-38h]

  v16 = __readfsqword(0x28u);
  if ( (unsigned __int8)callui(27, a2, &callui) )
    return 0xFFFFFFFFLL;
  v12 = nullptr;
  v13 = 0;
  v5 = a2[1].m128i_u32[2];
  v6 = a2->m128i_i64[1];
  sub_13640((__int64 *)&v14, *(_QWORD *)(a1 + 8), (__int64)a2, v2, v3, v4);
  v7 = byte_190C8;
  if ( v15 )
    v7 = v14;
  v8 = _mm_loadu_si128(a2);
  sub_13580(
    (__int64 *)&v12,
    (__int64)"[%a..%a] %s size=%a module=%d type=%s",
    v8.m128i_i64[0],
    _mm_add_epi64(_mm_srli_si128(v8, 8), v8).m128i_u64[0],
    v7,
    v6,
    v5);
  if ( v14 )
  {
    v15 = 0;
    qfree(v14);
  }
  v9 = byte_190C8;
  if ( (_QWORD)v13 )
    v9 = v12;
  sub_7F80((__int64)"%s\n", v9);
  v10 = byte_190C8;
  if ( (_QWORD)v13 )
    v10 = v12;
  sub_74D0(*(_QWORD *)(a1 + 16), (__int64)"%s\n", v10);
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree(v12);
  }
  return 0;
}
