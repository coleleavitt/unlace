__int64 __fastcall sub_7520(__int64 a1, __int64 a2)
{
  char v2; // dl
  __int64 result; // rax
  unsigned __int64 v4; // rdx
  __int64 v5; // rax

  v2 = *(_BYTE *)(a2 + 1);
  result = 192;
  if ( v2 != 4 )
  {
    if ( v2 == 5 )
    {
      v4 = *(unsigned __int16 *)(a1 + 24);
      result = 0;
      if ( (unsigned __int16)v4 <= 0x33u )
      {
        v5 = 0xA000000040822LL;
        return 4 * (unsigned int)_bittest64(&v5, v4);
      }
    }
    else
    {
      result = 0;
      if ( v2 == 2 )
        return 201;
    }
  }
  return result;
}

