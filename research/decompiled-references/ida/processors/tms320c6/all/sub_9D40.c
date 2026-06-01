char __fastcall sub_9D40(unsigned __int64 a1)
{
  __int64 v1; // rax

  LODWORD(v1) = get_dword();
  if ( (a1 ^ ((a1 & 0xFFFFFFFFFFFFFFE0LL) + 28)) <= 0x1F
    && (v1 & 0xF0000000) == 0xE0000000
    && _bittest((const int *)&v1, ((a1 >> 2) & 7) + 21) )
  {
    LOBYTE(v1) = ((unsigned int)v1 & (1 << ((a1 >> 1) & 0xF))) != 0;
  }
  else
  {
    return get_dword() & 1;
  }
  return v1;
}

