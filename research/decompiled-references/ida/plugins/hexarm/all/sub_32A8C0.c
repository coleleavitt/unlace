__int64 __fastcall sub_32A8C0(__int64 a1)
{
  unsigned int v1; // r12d

  if ( sub_CF9B0() <= 0 )
  {
    v1 = 0;
  }
  else
  {
    if ( a1 )
    {
      *(_QWORD *)a1 = unk_0;
      copy_tinfo_t();
      *(_WORD *)(a1 + 16) = 3;
      *(_BYTE *)(a1 + 18) = 62;
    }
    v1 = 1;
  }
  clear_tinfo_t();
  return v1;
}

