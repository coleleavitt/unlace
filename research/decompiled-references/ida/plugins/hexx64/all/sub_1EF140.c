void __fastcall sub_1EF140(__int64 a1, __int64 a2, int a3, double a4)
{
  unsigned int v5; // r14d
  signed int v6; // r15d
  int v7; // ebx
  int v8; // ebp
  int v9; // eax
  _BYTE *v10; // rdx
  unsigned int v11; // ecx
  char v12; // r8

  v5 = *(_DWORD *)(a1 + 72);
  v6 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
  v7 = round_down_power2();
  if ( v7 > 1 )
  {
    while ( a3 % v7 )
    {
      v7 >>= 1;
      if ( v7 == 1 )
        goto LABEL_6;
    }
  }
  if ( (v7 & (v7 - 1)) != 0 )
  {
    if ( under_debugger )
      BUG();
    interr();
    sub_1EF340(2858, a2, v10, v11, v12);
    return;
  }
LABEL_6:
  v8 = 2 * v6;
  if ( 2 * v6 < v7 )
  {
    if ( v5 <= 0x10 )
    {
      v9 = getinf();
      if ( v9 == 176 || v9 == 256 )
      {
        if ( v6 > v8 )
        {
LABEL_28:
          v7 = 2 * v6;
          goto LABEL_29;
        }
LABEL_36:
        v7 = 2 * v6;
LABEL_37:
        v5 = getinf();
        goto LABEL_16;
      }
    }
    else if ( v5 == 256 || v5 == 176 )
    {
      if ( v6 > v8 )
        v6 *= 2;
LABEL_13:
      if ( *(char *)(a2 + 25) < 0 )
        return;
LABEL_21:
      sub_1EEEF0(a2, *(_QWORD *)(a1 + 1504), nullptr, v6, *(_DWORD *)(a1 + 72), a4);
      return;
    }
    if ( (unsigned __int8)getinf_flag() )
      goto LABEL_12;
    if ( v6 > v8 )
    {
      v7 = 2 * v6;
      if ( v5 > 0x10 )
        goto LABEL_11;
      goto LABEL_28;
    }
    v7 = 2 * v6;
    if ( v5 > 0x10 )
      goto LABEL_18;
    goto LABEL_36;
  }
  if ( v6 > v7 )
  {
    if ( v5 > 0x10 )
    {
LABEL_9:
      if ( v5 != 176 && v5 != 256 )
      {
LABEL_11:
        if ( !(unsigned __int8)getinf_flag() )
          goto LABEL_13;
      }
LABEL_12:
      v6 = v7;
      goto LABEL_13;
    }
LABEL_29:
    v5 = getinf();
    goto LABEL_9;
  }
  if ( v5 <= 0x10 )
    goto LABEL_37;
LABEL_16:
  if ( v5 == 176 || v5 == 256 )
    goto LABEL_13;
LABEL_18:
  if ( (unsigned __int8)getinf_flag() )
    v6 = v7;
  if ( *(char *)(a2 + 25) >= 0 )
    goto LABEL_21;
}

