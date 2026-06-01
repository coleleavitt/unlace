__int64 __fastcall sub_3C06D0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  const char *v7; // rsi
  unsigned int v8; // r13d

  if ( (unsigned __int8)get_tinfo_details() )
  {
    v7 = s1;
    if ( *(_QWORD *)(a2 + 8) )
      v7 = *(const char **)a2;
    v8 = sub_3C0590(a3, v7, *(_DWORD *)(*(_QWORD *)(a1 + 112) + 80LL), a4, 0.0);
  }
  else
  {
    if ( !a4 )
      sub_2B05F0((__int64)"AUTOHIDE NONE\nIncorrect function type", 12);
    v8 = 0;
  }
  cleanup_argloc();
  clear_tinfo_t();
  return v8;
}

