bool __fastcall sub_31B590(__int64 a1, __int64 a2, __int64 a3)
{
  bool result; // al
  char v5; // dl

  if ( *(_BYTE *)a1 != 4 )
    return (unsigned __int8)(*(_BYTE *)a1 - 7) > 1u;
  v5 = sub_1205A0(*(_BYTE **)(a1 + 8), a2, 0);
  result = 0;
  if ( !v5 )
    return sub_120720(*(_QWORD *)(a1 + 8), a3);
  return result;
}

