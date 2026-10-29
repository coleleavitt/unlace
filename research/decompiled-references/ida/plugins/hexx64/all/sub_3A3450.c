__int64 __fastcall sub_3A3450(__int64 a1, double a2)
{
  int v2; // eax
  __int64 v5; // rsi
  __m128i *v6; // rdi
  int v7; // eax

  v2 = *(_DWORD *)(a1 + 44);
  if ( v2 != -2 )
    return (unsigned int)(v2 + 1);
  sub_2581E0(*(__m128i **)(a1 + 24));
  v5 = *(_QWORD *)(a1 + 32);
  v6 = *(__m128i **)(a1 + 24);
  if ( v5 == 1 )
  {
    *(_DWORD *)(a1 + 40) = 0;
    v7 = v6[8].m128i_i64[1] - 1;
    *(_DWORD *)(a1 + 44) = v7;
    return (unsigned int)(v7 + 1);
  }
  else
  {
    *(_QWORD *)(a1 + 40) = -1;
    sub_38BD60(v6, v5, (_DWORD *)(a1 + 40), (__int32 *)(a1 + 44), a2);
    return (unsigned int)(*(_DWORD *)(a1 + 44) + 1);
  }
}

