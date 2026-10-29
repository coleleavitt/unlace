__int64 __fastcall sub_28810(__int64 a1)
{
  __int64 v1; // rax

  v1 = getseg();
  if ( v1 && *(_BYTE *)(v1 + 184) == 1 )
    return 2;
  else
    return (~((unsigned __int16)get_flags_ex(a1, 0) >> 8) & 6) != 0;
}

