bool __fastcall sub_317410(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  bool result; // al
  char v8; // dl

  if ( *(_BYTE *)a1 != 4 )
    return (unsigned __int8)(*(_BYTE *)a1 - 7) > 1u;
  v8 = sub_11CB60(*(_BYTE **)(a1 + 8), a2, 0, a4, a5, a6);
  result = 0;
  if ( !v8 )
    return sub_11CCE0(*(_QWORD *)(a1 + 8), a3);
  return result;
}

