__int64 sub_7570()
{
  int *v0; // r14
  unsigned int dword; // eax
  unsigned int v2; // edx
  int v3; // ecx
  int v4; // ebp
  int v5; // ebp

  v0 = &dword_D914 - 3;
  while ( 2 )
  {
    dword = get_dword();
    v2 = *v0;
    v3 = 4;
    do
    {
      if ( (_BYTE)v2 != (_BYTE)dword && (_BYTE)v2 != 0xFF )
        return -1;
      dword >>= 8;
      v2 >>= 8;
      --v3;
    }
    while ( v3 );
    if ( &dword_D914 != ++v0 )
      continue;
    break;
  }
  v4 = get_dword();
  v5 = (__int16)get_dword() + (v4 << 16);
  if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0 )
  {
    op_offset();
    op_offset();
  }
  return v5;
}

