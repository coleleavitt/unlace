__int64 __fastcall sub_E4190(__int64 *a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // rax
  __int64 result; // rax

  v4 = *a1;
  if ( *(_DWORD *)(a3 + 8) )
  {
    if ( *(_BYTE *)(v4 + 197) )
    {
      sub_DBD10((__int64)a1, "corrupt database");
      return 0xFFFFFFFFLL;
    }
    else
    {
      *a4 = a3;
      result = sub_DCE90(v4, a2);
      if ( (int)result < 0 )
      {
        sub_DBD10((__int64)a1, "unknown database %T", a2);
        return 0xFFFFFFFFLL;
      }
    }
  }
  else
  {
    result = *(unsigned __int8 *)(v4 + 196);
    *a4 = a2;
  }
  return result;
}
