char __fastcall sub_7A80(__int64 a1, __int64 a2, unsigned __int8 a3, unsigned __int16 a4, unsigned __int16 a5)
{
  __int16 v5; // bx
  int v6; // r10d
  char result; // al
  char v8; // r11
  __int16 v9; // dx
  __int64 v10; // rax
  __int16 v11; // dx

  v5 = a4 & 0x7F;
  if ( (a4 & 0x7Fu) - 37 > 1 )
  {
    if ( under_debugger )
      goto LABEL_23;
    interr();
LABEL_21:
    if ( !under_debugger )
    {
      interr();
      return sub_7BA0(10304);
    }
LABEL_23:
    BUG();
  }
  v6 = *(_DWORD *)(a1 + 28);
  if ( v6 == 0 && a5 == 0 )
    goto LABEL_21;
  result = (a4 >> 13) & (a3 > 0xFu);
  if ( result )
    return 0;
  if ( (a4 & 0x1000) != 0 )
  {
    if ( (a3 & 0xF) != 0 )
      return result;
    if ( v5 != 38 )
    {
      *(_BYTE *)(a2 + 1) = 1;
      v10 = *(unsigned int *)(a1 + 28);
      v9 = 0;
      if ( (_DWORD)v10 )
        goto LABEL_8;
      goto LABEL_14;
    }
  }
  else if ( v5 != 38 )
  {
    v8 = a3;
    LOBYTE(v9) = a3 & 0xF;
    if ( v6 != 3 )
      goto LABEL_7;
    goto LABEL_16;
  }
  v8 = a3 >> 4;
  LOBYTE(v9) = a3 >> 4;
  if ( v6 != 3 )
    goto LABEL_7;
LABEL_16:
  if ( (v8 & 8) == 0 )
  {
LABEL_7:
    *(_BYTE *)(a2 + 1) = 1;
    v10 = *(unsigned int *)(a1 + 28);
    v9 = (unsigned __int8)v9;
    if ( (_DWORD)v10 )
    {
LABEL_8:
      *(_WORD *)(a2 + 6) = *((_WORD *)qword_16CD0 + 2 * v10) + v9;
      *(_BYTE *)(a2 + 5) = *(_DWORD *)(a1 + 28) - 1;
      return 1;
    }
LABEL_14:
    v11 = *((_WORD *)qword_16CD0 + 2 * a5) + v9;
    *(_BYTE *)(a2 + 5) = a5 - 1;
    *(_WORD *)(a2 + 6) = v11;
    return 1;
  }
  return result;
}

