bool __fastcall sub_46570(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  bool result; // al

  v3 = *(_QWORD *)(a3 + 32) + *(_QWORD *)(a3 + 24);
  sub_464F0(a2, v3);
  result = 1;
  if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
    return (unsigned __int64)(v3 + 0x8000) <= 0xFFFF;
  return result;
}

