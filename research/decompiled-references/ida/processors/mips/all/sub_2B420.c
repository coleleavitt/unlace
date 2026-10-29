bool __fastcall sub_2B420(__int64 a1, __int64 a2)
{
  bool result; // al
  int v3; // ebx

  result = 0;
  if ( *(_QWORD *)a2 == -1 && !*(_QWORD *)(a2 + 8) )
  {
    v3 = *(_DWORD *)(a2 + 24);
    if ( (v3 & 0x80u) == 0 && !*(_QWORD *)(a2 + 16) )
      return (v3 & 0x4F) == (unsigned __int8)get_default_reftype();
  }
  return result;
}

