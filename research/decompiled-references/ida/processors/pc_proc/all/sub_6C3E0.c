bool __fastcall sub_6C3E0(__int64 a1, __int64 a2)
{
  bool result; // al

  result = 0;
  if ( *(_WORD *)(a2 + 24) == 16 && *(_BYTE *)(a2 + 41) == 7 )
    return *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26) == sub_80350(a1, a2, a2 + 40);
  return result;
}

