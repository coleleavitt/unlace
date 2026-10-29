__int64 __fastcall sub_3A3AD0(__int64 a1, double a2)
{
  __int64 v4; // rsi
  __m128i *v5; // rdi

  if ( *(_DWORD *)(a1 + 44) != -2 )
    return (unsigned int)(*(_DWORD *)(a1 + 40) + 1);
  sub_2581E0(*(__m128i **)(a1 + 24));
  v4 = *(_QWORD *)(a1 + 32);
  v5 = *(__m128i **)(a1 + 24);
  if ( v4 != 1 )
  {
    *(_QWORD *)(a1 + 40) = -1;
    sub_38BD60(v5, v4, (_DWORD *)(a1 + 40), (__int32 *)(a1 + 44), a2);
    return (unsigned int)(*(_DWORD *)(a1 + 40) + 1);
  }
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = v5[8].m128i_i64[1] - 1;
  return 1;
}

