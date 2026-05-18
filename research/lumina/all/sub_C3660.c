__int64 __fastcall sub_C3660(__int64 a1)
{
  while ( *(_BYTE *)(a1 - 1) || *(_BYTE *)(a1 - 2) || *(_BYTE *)(a1 - 3) || *(_BYTE *)(a1 - 4) )
    --a1;
  return *(_QWORD *)(*(_QWORD *)(a1 - 12) + 72LL);
}
