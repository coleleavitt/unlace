__int64 __fastcall sub_FC150(__int64 a1)
{
  if ( *(_BYTE *)a1 == 1 )
    return 1;
  if ( *(_BYTE *)a1 == 5 )
    return sub_FC000(**(_QWORD ***)(a1 + 8), *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL), 1u);
  return 0;
}

