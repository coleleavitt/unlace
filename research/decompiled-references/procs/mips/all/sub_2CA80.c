__int64 __fastcall sub_2CA80(__int64 a1, __int64 a2)
{
  char *v2; // r14
  unsigned int dword; // eax
  unsigned int v4; // edx
  int v5; // ecx
  __int64 v6; // r12

  v2 = (char *)&unk_5982C - 12;
  do
  {
    dword = get_dword(&v2[a2 - ((_QWORD)&unk_5982C - 12)]);
    v4 = *(_DWORD *)v2;
    v5 = 4;
    do
    {
      if ( (_BYTE)v4 != 0xFF && (_BYTE)v4 != (_BYTE)dword )
        return -1;
      dword >>= 8;
      v4 >>= 8;
      --v5;
    }
    while ( v5 );
    v2 += 4;
  }
  while ( v2 != (char *)&unk_5982C );
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL)
     & (a2 + ((4 * (unsigned int)get_dword(a2)) & 0x1FFFFFC ^ 0x1000000) - 0x1000000);
  if ( !(unsigned __int8)getinf_flag(11, 4)
    && (*(_BYTE *)(a1 + 188) & 4) == 0
    && (~((unsigned __int16)get_flags_ex(a2, 4) >> 8) & 6) == 0 )
  {
    op_offset(a2, 2, 2, v6, a2, 0);
  }
  return v6;
}
