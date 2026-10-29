__int64 __fastcall sub_1EAD20(__int64 a1, __m128 a2, __m128 a3)
{
  unsigned int v3; // ebp
  __int64 v5; // rdx
  __int64 v6; // rax
  __m128i v7; // [rsp+0h] [rbp-48h] BYREF
  __int64 v8; // [rsp+10h] [rbp-38h]
  char v9; // [rsp+18h] [rbp-30h]
  unsigned __int64 v10; // [rsp+28h] [rbp-20h]

  v3 = 0;
  v10 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 64) + 4LL) & 8) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    v7 = (__m128i)*(unsigned __int64 *)(a1 + 64);
    v8 = 0;
    v9 = 1;
    sub_1EA870(a1, &v7, v5, 0, a2, a3);
    v3 = 0;
    if ( !sub_1E0CA0((__int64)&v7, a1 + 448) )
    {
      v3 = 1;
      sub_13FCB0((unsigned __int64 **)(a1 + 424));
      *(_BYTE *)(a1 + 440) = 1;
      sub_13FCB0((unsigned __int64 **)(a1 + 456));
      v6 = *(_QWORD *)(a1 + 64);
      *(_BYTE *)(a1 + 472) = 1;
      *(_DWORD *)(v6 + 4) &= ~8u;
    }
    if ( v7.m128i_i64[1] )
    {
      sub_13FCB0((unsigned __int64 **)&v7.m128i_i64[1]);
      if ( v7.m128i_i64[1] )
        qfree(v7.m128i_i64[1]);
    }
  }
  return v3;
}

