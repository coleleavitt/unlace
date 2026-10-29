unsigned __int64 __fastcall sub_27ACF0(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 result; // rax

  v1 = sub_250740(a1);
  if ( *(_DWORD *)(v1 + 8) != 61 )
    return 0xFFFFFFFFLL;
  result = sub_2511B0(*(__int64 **)(v1 + 24));
  if ( result > 1 )
    return 0xFFFFFFFFLL;
  return result;
}

