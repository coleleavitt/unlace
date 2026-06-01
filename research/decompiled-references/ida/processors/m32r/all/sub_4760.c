__int64 __fastcall sub_4760(__int64 a1, int a2, __int64 a3, __int64 a4, int a5)
{
  __int64 result; // rax
  int v6; // ecx
  char v7; // cl
  __int64 v8; // rdx
  __int64 v9; // rcx

  result = a4;
  v6 = a5 & 0x100;
  if ( (a5 & 0x10) != 0 )
    goto LABEL_9;
  if ( (a5 & 0x20) != 0 )
    goto LABEL_27;
  if ( (a5 & 0x40) != 0 )
  {
    if ( (a5 & 0x100) != 0 )
      goto LABEL_22;
    if ( (a5 & 0x200) != 0 )
      goto LABEL_7;
    if ( (a5 & 0x400) != 0 )
    {
LABEL_30:
      if ( under_debugger )
        goto LABEL_70;
      a1 = 10197;
      result = interr();
LABEL_32:
      LOWORD(a3) = (unsigned __int8)a2;
      if ( (a5 & 1) != 0 )
        goto LABEL_20;
      if ( (a5 & 2) != 0 )
      {
        a3 = (char)a2;
        v7 = 0;
        goto LABEL_16;
      }
      if ( (a5 & 4) == 0 )
        goto LABEL_35;
      a3 = (char)a2;
    }
    else
    {
      if ( (a5 & 0x800) == 0 )
      {
LABEL_66:
        if ( under_debugger )
          goto LABEL_70;
        interr();
        goto LABEL_68;
      }
      if ( (a5 & 1) != 0 )
        goto LABEL_20;
      if ( (a5 & 2) != 0 )
        goto LABEL_15;
      if ( (a5 & 4) == 0 )
        goto LABEL_35;
      a3 = (__int16)a3;
    }
LABEL_43:
    v8 = 4 * a3;
    *(_BYTE *)(result + 1) = 7;
    *(_QWORD *)(result + 16) = v8;
    v9 = *(_QWORD *)(a1 + 8);
    *(_BYTE *)(result + 5) = 9;
    *(_QWORD *)(result + 16) = ((unsigned int)v9 & 0xFFFFFFFC) + v8;
    return result;
  }
  if ( (a5 & 0x80u) != 0 )
  {
    if ( (a5 & 0x100) != 0 )
      goto LABEL_22;
    if ( (a5 & 0x200) == 0 )
      goto LABEL_29;
    LODWORD(a3) = (a2 << 16) & 0xFF0000 | a3;
    if ( (a5 & 1) != 0 )
      goto LABEL_20;
    if ( (a5 & 2) != 0 )
    {
      a3 = (int)a3;
      v7 = 2;
      goto LABEL_16;
    }
    if ( (a5 & 4) == 0 )
      goto LABEL_35;
    a3 = (int)((_DWORD)a3 << 8) >> 8;
    goto LABEL_43;
  }
  if ( (a5 & 0x100) != 0 )
    goto LABEL_22;
  if ( (a5 & 0x200) == 0 )
    goto LABEL_29;
LABEL_7:
  if ( under_debugger )
    goto LABEL_70;
  result = interr();
LABEL_9:
  if ( v6 )
  {
    a3 = (a2 >> 8) & 0xF;
    if ( (a5 & 1) == 0 )
      goto LABEL_11;
LABEL_20:
    *(_BYTE *)(result + 1) = 1;
    *(_WORD *)(result + 6) = a3;
    *(_BYTE *)(result + 5) = 1;
    return result;
  }
  if ( (a5 & 0x200) != 0 )
  {
    a3 = (a2 >> 4) & 0xF;
    if ( (a5 & 1) != 0 )
      goto LABEL_20;
    goto LABEL_11;
  }
  if ( (a5 & 0x400) == 0 )
  {
    while ( (a5 & 0x800) != 0 )
    {
      if ( under_debugger )
        goto LABEL_70;
      a1 = 10198;
      result = interr();
LABEL_27:
      if ( v6 )
      {
LABEL_22:
        if ( under_debugger )
          goto LABEL_70;
        interr();
      }
      else
      {
        if ( (a5 & 0x200) != 0 )
          goto LABEL_32;
LABEL_29:
        if ( (a5 & 0x400) != 0 )
          goto LABEL_30;
      }
    }
    goto LABEL_66;
  }
  a3 = a2 & 0xF;
  if ( (a5 & 1) != 0 )
    goto LABEL_20;
LABEL_11:
  v7 = 0;
  if ( (a5 & 2) != 0 )
  {
LABEL_16:
    *(_BYTE *)(result + 1) = 5;
    *(_QWORD *)(result + 8) = a3;
    *(_BYTE *)(result + 5) = v7;
    return result;
  }
  if ( (a5 & 4) != 0 )
  {
    *(_BYTE *)(result + 1) = 7;
    if ( !under_debugger )
    {
      result = interr();
LABEL_15:
      a3 = (__int16)a3;
      v7 = 1;
      goto LABEL_16;
    }
LABEL_70:
    BUG();
  }
LABEL_35:
  if ( (a5 & 0x1000) != 0 )
  {
    *(_BYTE *)(result + 1) = 3;
    *(_BYTE *)(result + 32) = 0;
    *(_WORD *)(result + 6) = a3;
    return result;
  }
  if ( (a5 & 0x2000) != 0 )
  {
    *(_BYTE *)(result + 1) = 3;
    *(_BYTE *)(result + 32) = 1;
    *(_WORD *)(result + 6) = a3;
    return result;
  }
  if ( (a5 & 0x4000) != 0 )
  {
    *(_BYTE *)(result + 1) = 4;
    *(_WORD *)(result + 6) = a3;
    return result;
  }
  if ( (a5 & 0x100000) != 0 )
  {
    *(_BYTE *)(result + 1) = 4;
    *(_QWORD *)(result + 16) = (__int16)a3;
    return result;
  }
  if ( (a5 & 0x8000) != 0 )
  {
    *(_BYTE *)(result + 1) = 3;
    *(_BYTE *)(result + 32) = 2;
    *(_WORD *)(result + 6) = a3;
    return result;
  }
  if ( (a5 & 0x10000) == 0 )
  {
LABEL_68:
    if ( !under_debugger )
      interr();
    goto LABEL_70;
  }
  *(_BYTE *)(result + 1) = 3;
  *(_BYTE *)(result + 32) = 3;
  *(_WORD *)(result + 6) = a3;
  return result;
}

