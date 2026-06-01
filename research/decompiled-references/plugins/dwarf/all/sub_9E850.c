__int64 __fastcall sub_9E850(__int64 a1, __m128i *a2)
{
  __int64 v3; // rax
  const char *v5; // rdi
  char *v6; // r8
  __int64 v7[5]; // [rsp+0h] [rbp-28h] BYREF

  v7[1] = __readfsqword(0x28u);
  if ( (a2[13].m128i_i8[4] & 1) == 0 )
  {
    v3 = a2->m128i_i64[0];
    v7[0] = 0;
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64 *, __int64 *))(a2[16].m128i_i64[0] + 56))(
           *(_QWORD *)(v3 + 24),
           &a2->m128i_i64[1],
           v7) )
    {
      v6 = sub_81C40((__int64)a2);
      sub_95A30(v7[0], (__int64)"die.cpp", 139, (__int64)"Cannot retrieve tag for DIE %s", v6);
    }
    a2[13].m128i_i32[1] |= 1u;
  }
  if ( a2->m128i_i16[4] != 52 )
    return 0;
  if ( (unsigned __int8)sub_97630(a2->m128i_i64, 60) )
    return 0;
  v5 = (const char *)sub_986B0((__int64)a2);
  if ( !v5 || strcmp(v5, *(const char **)(a1 + 24)) )
    return 0;
  if ( (a2[14].m128i_i64[0] & 0x7FFFFFFFFFFFFFFFLL) == 0 || a2[14].m128i_i64[0] == -1 )
  {
    if ( !under_debugger )
      interr(30478);
    BUG();
  }
  *(__m128i *)(a1 + 32) = _mm_loadu_si128(a2 + 14);
  return 1;
}
