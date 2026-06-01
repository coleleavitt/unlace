__int64 __fastcall sub_2C970(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // r14
  __int64 v5; // r13
  unsigned int dword; // eax
  unsigned int v8; // edx
  int v9; // ecx
  __int64 v10; // rbp
  int v12; // ebp

  v4 = 0;
  v5 = a4;
  if ( a4 > 0 )
  {
    do
    {
      dword = get_dword(a2 + 4 * (int)v4);
      v8 = *(_DWORD *)(a3 + 4 * v4);
      v9 = 0;
      while ( (_BYTE)v8 == 0xFF || (_BYTE)dword == (_BYTE)v8 )
      {
        dword >>= 8;
        ++v9;
        v8 >>= 8;
        if ( v9 == 4 )
          goto LABEL_11;
      }
      if ( v9 != 3 || (_BYTE)v8 != 36 || (_BYTE)dword != 52 )
        return -1;
LABEL_11:
      ++v4;
    }
    while ( v5 != v4 );
  }
  v12 = get_dword(a2);
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (unsigned int)((__int16)get_dword(a2 + 4) + (v12 << 16));
  if ( !(unsigned __int8)getinf_flag(11, 4) && (~((unsigned __int16)get_flags_ex(a2, 4) >> 8) & 6) == 0 )
  {
    op_offset(a2, 1, *(_DWORD *)(a1 + 608) | 0x40u, v10, 0, 0);
    op_offset(a2 + 4, 1, 4, v10, 0, 0);
  }
  return v10;
}
