char __fastcall sub_A3780(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  unsigned __int8 *v4; // r13
  unsigned int v6; // eax
  __m128i v7; // xmm0
  int v8; // eax
  char result; // al
  _DWORD v10[6]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v4 = (unsigned __int8 *)(a2 + 64);
  v11 = __readfsqword(0x28u);
  if ( sub_11EFE0((unsigned __int8 *)(a3 + 32), (unsigned __int8 *)(a2 + 64), 2u)
    || (result = sub_11EFE0((unsigned __int8 *)(a3 + 48), v4, 2u)) != 0 )
  {
    v6 = sub_138140(*(_QWORD **)(a1 + 64), *(int *)(a2 + 68), 1);
    if ( v6 == -1 )
    {
      if ( !under_debugger )
        sub_383060(0xC843u, a4);
      BUG();
    }
    v7 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(a2 + 68)), _mm_cvtsi32_si128(v6));
    v10[0] = 1;
    *(_QWORD *)&v10[1] = v7.m128i_i64[0];
    sub_A3240(a1, a3, 4, (unsigned __int8 *)v10, nullptr, v4, v7);
    sub_11CA10((char *)v4, (char *)v10);
    v8 = *(_DWORD *)(a1 + 24);
    BYTE1(v8) &= ~2u;
    LOBYTE(v8) = v8 | 0x80;
    *(_DWORD *)(a1 + 24) = v8;
    sub_11CDA0((__int64)v10);
    return 1;
  }
  return result;
}

