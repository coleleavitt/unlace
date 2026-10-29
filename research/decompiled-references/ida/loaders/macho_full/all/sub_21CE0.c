__int64 __fastcall sub_21CE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int v8; // r15d

  if ( strlen((const char *)(a1 + 4128)) != 64 )
    return 0;
  v8 = 0;
  aes_setkey_dec();
  aes_setkey_dec();
  if ( a5 )
  {
    while ( qlseek() >= 0 )
    {
      if ( qlread() != 2048 )
        break;
      aes_decrypt_cbc();
      mem2base();
      if ( qlseek() < 0 || qlread() != 2048 )
        break;
      a4 += 4096;
      v8 += 4096;
      a3 += 4096;
      aes_decrypt_cbc();
      mem2base();
      if ( v8 >= a5 )
        return 1;
    }
    return 0;
  }
  return 1;
}

