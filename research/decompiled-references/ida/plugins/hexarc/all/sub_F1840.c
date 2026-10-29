__int64 __fastcall sub_F1840(__int64 a1, __int64 a2)
{
  if ( *(_BYTE *)a2 == 8 )
  {
    *(_BYTE *)(a1 + 41) |= sub_F1550(*(int **)(a2 + 8), *(_QWORD *)(a1 + 16));
    return 0;
  }
  else
  {
    if ( *(_BYTE *)a2 == 14 )
      *(_BYTE *)(a1 + 42) = 1;
    return 0;
  }
}

