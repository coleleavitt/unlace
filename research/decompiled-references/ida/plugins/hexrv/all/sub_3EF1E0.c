bool __fastcall sub_3EF1E0(_QWORD *a1, __int64 a2)
{
  bool result; // al
  __int64 v3; // rdx
  __int64 tinfo_size; // rbx

  result = sub_11DD80(a1[24], *(_QWORD *)(a1[23] + 48LL), 0);
  if ( result )
  {
    v3 = a1[25];
    if ( (*(_BYTE *)(a2 + 16) & 1) != 0 )
    {
      result = 0;
      if ( a1[24] == v3 )
        return *(_BYTE *)(v3 + 64) == 0;
    }
    else if ( *(_BYTE *)(v3 + 64) )
    {
      tinfo_size = get_tinfo_size();
      return (int)get_dtype_size() == tinfo_size;
    }
  }
  return result;
}

