__int64 __fastcall sub_D00F0(__int64 a1, int a2, int a3)
{
  unsigned int v4; // ebx
  _QWORD v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v6[1] = __readfsqword(0x28u);
  if ( a3 == 2 )
  {
    return 0;
  }
  else
  {
    sub_326DD0(v6, a1);
    if ( (unsigned __int8)getinf_flag() && (v6[0] & 0x3F) == 0x29
      || (a2 == 176 || a2 == 256) && ((a3 - 4) & 0xFFFFFFFB) != 0 )
    {
      v4 = 0;
    }
    else
    {
      v4 = 0;
      if ( LOBYTE(v6[0]) )
        LOBYTE(v4) = (unsigned int)verify_tinfo() == 0;
    }
    clear_tinfo_t();
  }
  return v4;
}

