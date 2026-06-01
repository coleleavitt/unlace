unsigned __int64 __fastcall sub_2781F0(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 result; // rax

  v1 = sub_24DC40(a1);
  if ( *(_DWORD *)(v1 + 8) != 61 )
    return 0xFFFFFFFFLL;
  result = sub_24E6B0(*(__int64 **)(v1 + 24));
  if ( result > 1 )
    return 0xFFFFFFFFLL;
  return result;
}

