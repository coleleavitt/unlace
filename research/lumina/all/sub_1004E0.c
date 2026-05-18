__int64 __fastcall sub_1004E0(const __m128i *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9

  if ( a1 )
  {
    if ( !(unsigned int)sub_FEBD0((__int64)a1, a2) )
    {
      v2 = sub_D1E10(56, a2);
      v3 = v2;
      if ( v2 )
      {
        *(_QWORD *)(v2 + 48) = 0;
        *(_OWORD *)v2 = 0;
        *(_OWORD *)(v2 + 16) = 0;
        *(_OWORD *)(v2 + 32) = 0;
        *(__m128i *)v2 = _mm_loadu_si128(a1);
        v4 = a1[1].m128i_u64[0];
        *(_QWORD *)(v2 + 24) = 0;
        *(_QWORD *)(v2 + 16) = v4;
        v5 = HIDWORD(v4);
        LOBYTE(v4) = BYTE4(v4);
        BYTE1(v4) = BYTE5(v4) & 0xEF;
        *(_WORD *)(v3 + 20) = v4;
        if ( (v5 & 0x12) == 0 )
        {
          if ( (v5 & 1) != 0 )
          {
            BYTE1(v5) &= 0xE5u;
            *(_WORD *)(v3 + 20) = v5;
          }
          return v3;
        }
        BYTE1(v5) = BYTE1(v5) & 0x8F | 0x40;
        *(_WORD *)(v3 + 20) = v5;
        if ( !(unsigned int)sub_E0350(v3) )
          return v3;
        sub_C9940(v3, a2, v7, v8, v9, v10);
      }
    }
  }
  return 0;
}
