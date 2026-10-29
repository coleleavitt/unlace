void __fastcall sub_1DC40(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rdx

  if ( (a3 & 0x2000000) == 0 )
  {
    sub_1D810(a1, a2, a3);
    return;
  }
  *(_BYTE *)(a2 + 1) = 5;
  *(_BYTE *)(a2 + 5) = 2;
  *(_QWORD *)(a2 + 8) = (unsigned int)__ROR4__((unsigned __int8)a3, 2 * (BYTE1(a3) & 0xF));
  if ( ((a3 >> 8) & 0xF) != 0 )
  {
    v5 = *(unsigned __int16 *)(a1 + 24);
    if ( (unsigned __int16)v5 > 0x19u )
    {
      if ( (_WORD)v5 == 268 )
LABEL_6:
        *(_DWORD *)(a1 + 28) |= 0x10u;
    }
    else if ( (unsigned __int16)v5 > 9u )
    {
      v6 = 63704064;
      if ( _bittest64(&v6, v5) )
        goto LABEL_6;
    }
  }
  if ( a4 )
  {
    get_flags_ex();
    if ( (unsigned __int8)is_off() )
      sub_1DB20(a4, 8, 8, 0);
  }
}

