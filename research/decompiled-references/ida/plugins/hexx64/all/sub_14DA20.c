__int64 __fastcall sub_14DA20(__int64 a1, __int64 a2, __m128i a3)
{
  *(_QWORD *)(a1 + 72) = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)a2 != 4 )
    return sub_14D680(a1 + 48, a2, a3);
  *(_BYTE *)(a1 + 40) = 1;
  return sub_11E900(*(_BYTE **)(a2 + 8), a1 + 48);
}

