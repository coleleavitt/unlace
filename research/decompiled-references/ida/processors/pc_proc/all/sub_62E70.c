bool __fastcall sub_62E70(__int64 a1)
{
  bool result; // al
  __int64 v2; // rdx
  __int64 v3; // rax

  result = 0;
  if ( *(_WORD *)(a1 + 24) == 46 && (*(_BYTE *)(a1 + 28) & 8) != 0 )
  {
    v2 = *(_QWORD *)(a1 + 48);
    result = v2 == 46 || v2 == 32;
    if ( result )
    {
      result = 0;
      if ( (*(_BYTE *)(a1 + 44) & 8) == 0 )
      {
        v3 = 0x80000000LL;
        if ( v2 == 32 )
          v3 = 0x8000;
        return (*(_QWORD *)(a1 + 88) & v3) != 0;
      }
    }
  }
  return result;
}

