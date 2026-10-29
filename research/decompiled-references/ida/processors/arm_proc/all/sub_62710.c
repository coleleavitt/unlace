unsigned __int64 __fastcall sub_62710(unsigned __int8 a1, __int64 a2)
{
  char v2; // al
  char v3; // dl
  int v4; // ebx
  int v5; // ebp
  __int64 v7; // rdx

  v2 = a1 >> 7;
  v3 = (a1 & 0x40) != 0;
  switch ( (_DWORD)a2 )
  {
    case 0x10:
      v5 = (unsigned __int8)(a1 << 6);
      v4 = (unsigned __int8)(v3 << 6) ^ 0x40 | (unsigned __int8)((16 * v3) | (32 * v3) | (v2 << 7) | (a1 >> 2) & 0xF);
      if ( !(unsigned __int8)getinf_flag() )
        return v5 | ((unsigned __int8)v4 << 8);
      return v4 | (v5 << 8);
    case 0x20:
      v5 = (unsigned __int8)(8 * a1);
      v4 = (unsigned __int8)(v3 << 6) ^ 0x40
         | (unsigned __int8)((2 * v3) | (4 * v3) | (8 * v3) | (16 * v3) | (32 * v3) | (v2 << 7) | ((a1 & 0x20) != 0));
      if ( !(unsigned __int8)getinf_flag() )
        return (v5 << 16) | ((unsigned __int8)v4 << 24);
      return v4 | (v5 << 8);
    case 0x40:
      v4 = (unsigned __int8)((2 * v3) | (4 * v3) | (8 * v3) | (16 * v3) | (32 * v3) | v3 | (v2 << 7) | (v3 << 6) ^ 0x40);
      v5 = -v3 & 0xC0 | a1 & 0x3F;
      if ( !(unsigned __int8)getinf_flag() )
        return (unsigned __int64)(((unsigned __int8)v5 << 16) | ((unsigned __int8)v4 << 24)) << 32;
      return v4 | (v5 << 8);
  }
  if ( under_debugger )
    BUG();
  interr();
  return sub_628A0(10354, a2, v7);
}

