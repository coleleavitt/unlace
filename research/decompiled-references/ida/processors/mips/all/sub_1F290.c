char __fastcall sub_1F290(__int64 a1, unsigned __int64 a2)
{
  unsigned __int16 v2; // ax
  char v4; // [rsp+7h] [rbp-11h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  v2 = sub_1F160(a1, &v4, a2, nullptr);
  if ( *(_DWORD *)(a1 + 260) == 2 )
    return sub_1E5E0(a1, v2, v4);
  if ( v2 > 0x1B8u )
  {
    if ( v2 <= 0x241u )
    {
      if ( v2 > 0x23Du || v2 == 518 )
        return 1;
      return sub_1E5E0(a1, v2, v4);
    }
    if ( v2 > 0x5E6u )
    {
      if ( (unsigned __int16)(v2 - 1543) > 7u )
        return sub_1E5E0(a1, v2, v4);
    }
    else if ( v2 <= 0x5E4u )
    {
      return sub_1E5E0(a1, v2, v4);
    }
  }
  else if ( v2 <= 0x1B6u )
  {
    if ( v2 > 0x74u )
    {
      if ( (unsigned __int16)(v2 - 198) > 4u )
        return sub_1E5E0(a1, v2, v4);
    }
    else
    {
      if ( v2 > 0x72u )
        return 1;
      if ( v2 > 0x6Au )
      {
        if ( (unsigned __int16)(v2 - 109) > 4u )
          return sub_1E5E0(a1, v2, v4);
      }
      else if ( v2 <= 0x64u && (unsigned __int16)(v2 - 82) > 0x10u )
      {
        return sub_1E5E0(a1, v2, v4);
      }
    }
  }
  if ( !v4 )
    return 1;
  return sub_1E5E0(a1, v2, v4);
}

