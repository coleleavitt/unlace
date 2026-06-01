bool __fastcall sub_5E80(__int64 a1, __int64 a2)
{
  bool result; // al
  unsigned __int8 v3; // dl
  __int64 v4; // rax

  result = 0;
  if ( *(_BYTE *)(a2 + 41) == 2 )
  {
    v3 = *(_BYTE *)(a1 + 246);
    if ( v3 <= 1u )
    {
      if ( v3 )
        v4 = *(_QWORD *)(a2 + 56) & 0x7FLL;
      else
        v4 = *(_QWORD *)(a2 + 56) & 0x1FLL;
      return v4 == 3;
    }
    else
    {
      return v3 == 2 && *(_QWORD *)(a2 + 56) == 4064;
    }
  }
  return result;
}

