__int64 __fastcall sub_16000(__int64 a1, __int64 a2, const __m128i *a3, char a4)
{
  int v4; // eax
  char v6; // al
  bool v7; // al

  v4 = *(_DWORD *)(a1 + 48);
  if ( v4 == 3 )
  {
    *(_BYTE *)(a1 + 80) = a4;
    if ( (*(_BYTE *)(a1 + 72) & 2) != 0 && sub_13350(*(_QWORD *)(a1 + 8), a2, 1) )
    {
      *(_BYTE *)(a1 + 81) = 1;
      sub_13520(*(_QWORD *)(a1 + 8), a2, 1, 4, 0);
      return 1;
    }
    else
    {
      *(_BYTE *)(a1 + 81) = 0;
      return 1;
    }
  }
  else
  {
    if ( v4 == 5 || v4 == 2 )
    {
      v6 = *(_BYTE *)(a1 + 72);
      *(_BYTE *)(a1 + 80) = a4;
      v7 = (v6 & 2) != 0;
      *(_BYTE *)(a1 + 81) = v7;
      *(__m128i *)(a1 + 56) = _mm_loadu_si128(a3);
      if ( a2 != -1 && v7 )
        create_data(a2, 0x20000000, 4, -1);
    }
    return 1;
  }
}

