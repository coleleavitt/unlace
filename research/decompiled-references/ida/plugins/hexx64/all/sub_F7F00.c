__int64 __fastcall sub_F7F00(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  if ( *(_BYTE *)a2 == 8 )
  {
    *(_BYTE *)(a1 + 41) |= sub_F7C10(*(int **)(a2 + 8), *(_QWORD *)(a1 + 16), a3, a4);
    return 0;
  }
  else
  {
    if ( *(_BYTE *)a2 == 14 )
      *(_BYTE *)(a1 + 42) = 1;
    return 0;
  }
}

