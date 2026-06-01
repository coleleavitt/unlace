__int64 __fastcall sub_21EE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int v8; // r13d

  if ( !strlen((const char *)(a1 + 4128)) )
    return 0;
  v8 = 0;
  bf_set_key();
  if ( a5 )
  {
    while ( qlseek() >= 0 && qlread() == 4096 )
    {
      v8 += 4096;
      bf_decrypt_cbc();
      mem2base();
      if ( v8 >= a5 )
        return 1;
      a4 += 4096;
    }
    return 0;
  }
  return 1;
}

