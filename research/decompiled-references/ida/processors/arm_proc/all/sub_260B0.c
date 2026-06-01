void __fastcall sub_260B0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v7; // rdi
  __int16 v8; // ax
  __int64 v9; // rcx
  __int64 sreg; // rax
  bool v11; // cf
  bool v12; // zf
  __int64 v13; // rax
  char v14; // cl

  if ( (unsigned __int8)is_loaded()
    && !(unsigned __int8)sub_55C30(a3)
    && (*(_BYTE *)(a2 + 34) & 4) == 0
    && (getinf() & 0x1006) != 0x1002 )
  {
    v7 = *(_QWORD *)(a2 + 16);
    if ( a4 )
    {
      v8 = *(_WORD *)(a2 + 24);
      if ( *(int *)(a1 + 192) > 2 )
      {
        v9 = a3 & 1;
      }
      else
      {
        if ( v8 == 41 )
        {
          v14 = a3;
          a3 &= ~1uLL;
          v9 = v14 & 1;
LABEL_14:
          sub_25A70(a1, v7, a3, v9);
          return;
        }
        v9 = 1;
        if ( *(_DWORD *)(a1 + 212) )
        {
          sreg = get_sreg();
          v7 = *(_QWORD *)(a2 + 16);
          v11 = (unsigned __int64)--sreg < 0xFFFFFFFFFFFFFFFDLL;
          v12 = sreg == -3;
          v8 = *(_WORD *)(a2 + 24);
          v9 = v11 | (unsigned __int8)v12;
        }
      }
      a3 &= ~1uLL;
    }
    else if ( *(_DWORD *)(a1 + 212) )
    {
      v13 = get_sreg();
      v7 = *(_QWORD *)(a2 + 16);
      v11 = (unsigned __int64)--v13 < 0xFFFFFFFFFFFFFFFDLL;
      v12 = v13 == -3;
      v8 = *(_WORD *)(a2 + 24);
      v9 = v11 | (unsigned __int8)v12;
    }
    else
    {
      v8 = *(_WORD *)(a2 + 24);
      v9 = 1;
    }
    if ( v8 == 46 )
      v9 ^= 1uLL;
    goto LABEL_14;
  }
}

