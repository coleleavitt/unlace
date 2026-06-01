__int64 __fastcall sub_E930(__int64 a1, __int64 a2, __int64 (__fastcall *a3)(__int64, __int64), __int64 a4)
{
  unsigned __int8 v6; // al
  __int64 dword; // rbp
  unsigned __int16 v9; // si
  __int64 v10; // rdi
  char v12; // al
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rdx

  v6 = *(_BYTE *)(a2 + 1);
  if ( v6 == 4 )
  {
    dword = *(_QWORD *)(a2 + 16) + sub_E8D0(a1, *(unsigned __int16 *)(a2 + 6), a3, a4);
    v12 = *(_BYTE *)(a2 + 33);
    if ( (v12 & 4) != 0 )
    {
      dword = (unsigned int)get_dword(dword);
      v12 = *(_BYTE *)(a2 + 33);
    }
    if ( (v12 & 0x10) != 0 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL);
      v14 = *(_QWORD *)(v13 + 8LL * (*(_BYTE *)(a2 + 32) & 0xF));
      if ( v14 )
      {
        v15 = *(_QWORD *)(((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD))a3)(
                            v14,
                            a4,
                            v13,
                            *(_BYTE *)(a2 + 32) & 0xF)
                        + 8);
      }
      else
      {
        sub_6C80((__int64)"Bad register number passed to mc68k.regval: %d", *(_BYTE *)(a2 + 32) & 0xF);
        v15 = 0;
      }
      if ( (*(_BYTE *)(a2 + 32) & 0x10) != 0 )
        v15 = (unsigned __int16)v15;
      v12 = *(_BYTE *)(a2 + 33);
      dword += v15 << (v12 & 3);
    }
    if ( (v12 & 8) != 0 )
    {
      dword = (unsigned int)get_dword(dword);
      v12 = *(_BYTE *)(a2 + 33);
    }
    if ( (v12 & 0x40) == 0 )
      return dword;
    return *(_QWORD *)(a2 + 8) + dword;
  }
  else
  {
    if ( v6 > 4u )
    {
      dword = -1;
      if ( v6 != 7 )
        return dword;
    }
    else if ( v6 != 2 )
    {
      dword = -1;
      if ( v6 == 3 )
      {
        v9 = *(_WORD *)(a2 + 6) & 7 | 8;
        v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 8LL * v9);
        if ( v10 )
        {
          dword = *(_QWORD *)(a3(v10, a4) + 8);
        }
        else
        {
          dword = 0;
          sub_6C80((__int64)"Bad register number passed to mc68k.regval: %d", v9);
        }
        if ( (*(_WORD *)(a2 + 6) & 0x38) == 0x20 )
          dword -= get_dtype_size(*(unsigned __int8 *)(a2 + 5));
      }
      return dword;
    }
    return *(_QWORD *)(a2 + 16);
  }
}
