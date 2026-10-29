__int64 __fastcall sub_9E9A0(__int64 *a1, __m128i *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  char *v9; // r8
  __int64 v10[5]; // [rsp+0h] [rbp-28h] BYREF

  v10[1] = __readfsqword(0x28u);
  if ( (a2[13].m128i_i8[4] & 1) == 0 )
  {
    v2 = a2->m128i_i64[0];
    v10[0] = 0;
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64 *, __int64 *))(a2[16].m128i_i64[0] + 56))(
           *(_QWORD *)(v2 + 24),
           &a2->m128i_i64[1],
           v10) )
    {
      v9 = sub_81C40((__int64)a2);
      sub_95A30(v10[0], (__int64)"die.cpp", 139, (__int64)"Cannot retrieve tag for DIE %s", v9);
    }
    a2[13].m128i_i32[1] |= 1u;
  }
  if ( a2->m128i_i16[4] == 46 )
  {
    v4 = sub_9A5C0(a1[3], a2, a1[3] + 384, 0xFFFFFFFFFFFFFFFFLL, 0xFFFFFFFFFFFFFFFFLL);
    if ( v4 )
    {
      v5 = a1[4];
      v6 = *(_QWORD *)(v4 + 16);
      if ( v5 == -1 || v5 < v6 )
        a1[4] = v6;
      v7 = a1[5];
      v8 = *(_QWORD *)(v4 + 24);
      if ( v7 == -1 || v8 < v7 )
        a1[5] = v8;
    }
  }
  return 0;
}
