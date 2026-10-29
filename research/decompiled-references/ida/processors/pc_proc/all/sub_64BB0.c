void __fastcall sub_64BB0(__int64 a1, __int64 a2, __int64 a3)
{
  int next_byte; // eax
  int v6; // r13d
  __int16 v7; // ax
  __int16 v8; // dx
  int v9; // r13d
  int v10; // edx
  unsigned int next_dword; // eax
  int v12; // edx
  __int16 v13; // ax
  unsigned __int64 v14; // rax
  __int16 v15; // ax
  int v16; // edx
  __int16 v17; // ax
  __int16 v18; // ax
  char v19; // al
  bool v20; // zf
  int v21; // edx
  int v22; // eax
  char v23; // cl
  char v24; // si
  __int16 v25; // ax
  int v26; // eax
  int v27; // eax
  unsigned __int64 v28; // rsi
  bool v29; // cl
  int v30; // eax
  __int64 v31; // rdx

  if ( *(_BYTE *)(a1 + 5220) )
  {
    next_byte = *(_DWORD *)(a1 + 5196);
  }
  else
  {
    *(_BYTE *)(a1 + 5220) = 1;
    next_byte = (unsigned __int8)insn_get_next_byte();
    *(_DWORD *)(a1 + 5196) = (unsigned __int8)next_byte;
    *(_DWORD *)(a1 + 5200) = ((int)(unsigned __int8)next_byte >> 3) & 7;
  }
  v6 = next_byte;
  v7 = next_byte & 7;
  v8 = v7;
  v9 = (v6 >> 6) & 3;
  if ( (*(_BYTE *)(a2 + 28) & 0x10) != 0 )
    v8 = v7 | (8 * (*(_BYTE *)(a2 + 33) & 1));
  *(_WORD *)(a3 + 6) = v8;
  if ( v9 == 3 )
  {
    sub_64010(a2, a3);
    *(_BYTE *)(a3 + 1) = 1;
    return;
  }
  *(_BYTE *)(a1 + 5221) = 1;
  *(_BYTE *)(a1 + 5223) = 1;
  v10 = *(_DWORD *)(a2 + 28) & 0x1018;
  if ( v10 != 4096 && v10 != 8 )
  {
    if ( v7 == 4 )
    {
      *(_BYTE *)(a3 + 32) = 1;
      v19 = insn_get_next_byte();
      *(_BYTE *)(a3 + 33) = v19;
      if ( !v9 && (v19 & 7) == 5 )
      {
        *(_BYTE *)(a3 + 1) = 2;
        *(_BYTE *)(a3 + 2) = *(_WORD *)(a2 + 26);
        next_dword = insn_get_next_dword();
        *(_QWORD *)(a3 + 16) = (int)next_dword;
        if ( (*(_DWORD *)(a2 + 28) & 0x10) != 0 && (*(_DWORD *)(a2 + 28) & 0x1018) == 0x1010 )
          goto LABEL_12;
        goto LABEL_11;
      }
    }
    else if ( v9 == 0 && v7 == 5 )
    {
      *(_BYTE *)(a3 + 1) = 2;
      *(_BYTE *)(a3 + 2) = *(_WORD *)(a2 + 26);
      next_dword = insn_get_next_dword();
      *(_QWORD *)(a3 + 16) = (int)next_dword;
      if ( (*(_DWORD *)(a2 + 28) & 0x10) != 0 )
      {
        if ( (*(_BYTE *)(a1 + 4453) & 0x10) != 0 )
        {
          *(_BYTE *)(a3 + 1) = 4;
          *(_WORD *)(a3 + 6) = 28;
        }
        else
        {
          v29 = (*(_DWORD *)(a2 + 28) & 0x1018) == 4112;
          v30 = *(_DWORD *)(a1 + 5244);
          v31 = v30 + 2608LL;
          *(_BYTE *)(a1 + 2 * v31 + 9) = *(_BYTE *)a3;
          *(_BYTE *)(a1 + 2 * v31 + 10) = v29 + 1;
          *(_DWORD *)(a1 + 5244) = v30 + 1;
        }
        v12 = 30;
LABEL_13:
        *(_BYTE *)(a1 + 5221) = 1;
        v13 = *(unsigned __int8 *)(a2 + 32);
        if ( (_BYTE)v13 )
        {
          if ( v12 == (unsigned __int8)v13 )
            *(_DWORD *)(a2 + 28) |= 0x80u;
        }
        else
        {
          v13 = (unsigned __int8)v12;
        }
        *(_WORD *)(a3 + 26) = v13;
        v14 = *(_QWORD *)(a3 + 16);
        goto LABEL_16;
      }
LABEL_11:
      *(_QWORD *)(a3 + 16) = next_dword;
LABEL_12:
      v12 = 32;
      goto LABEL_13;
    }
    v20 = *(_WORD *)(a3 + 6) == 5;
    *(_BYTE *)(a3 + 1) = 3;
    *(_QWORD *)(a3 + 16) = 0;
    if ( v20 )
    {
      v22 = *(_DWORD *)(a2 + 28);
    }
    else
    {
      v21 = 32;
      if ( !*(_BYTE *)(a3 + 32) )
      {
LABEL_42:
        *(_BYTE *)(a1 + 5221) = 1;
        v25 = *(unsigned __int8 *)(a2 + 32);
        if ( (_BYTE)v25 )
        {
          if ( v21 == (unsigned __int8)v25 )
            *(_DWORD *)(a2 + 28) |= 0x80u;
        }
        else
        {
          v25 = (unsigned __int8)v21;
        }
        *(_WORD *)(a3 + 26) = v25;
        if ( !v9 )
          goto LABEL_48;
        *(_BYTE *)(a3 + 1) = 4;
        *(_BYTE *)(a3 + 2) = *(_WORD *)(a2 + 26);
        if ( v9 != 1 )
        {
          v14 = (int)insn_get_next_dword();
          *(_QWORD *)(a3 + 16) = (int)v14;
          goto LABEL_16;
        }
        *(_QWORD *)(a3 + 16) = (char)insn_get_next_byte();
        v27 = *(_DWORD *)(a2 + 28);
        *(_DWORD *)(a2 + 28) = v27 | 0x40;
        if ( (v27 & 0x10000) != 0 )
        {
          v28 = *(_QWORD *)(a3 + 16) << sub_22020(a2, (_BYTE *)a3);
          *(_QWORD *)(a3 + 16) = v28;
          v14 = v28;
        }
        else
        {
LABEL_48:
          v14 = *(_QWORD *)(a3 + 16);
        }
LABEL_16:
        if ( v14 > 0xFFFF )
          *(_DWORD *)(a2 + 28) |= 0x20u;
        return;
      }
      v22 = *(_DWORD *)(a2 + 28);
      v23 = *(_BYTE *)(a3 + 33) & 7;
      if ( (v22 & 0x10) != 0 )
      {
        v24 = *(_BYTE *)(a2 + 33) & 1;
        if ( (*(_BYTE *)(a2 + 33) & 1) != 0 || v23 != 4 )
        {
          v21 = 32;
          if ( v24 )
            goto LABEL_42;
          goto LABEL_62;
        }
      }
      else if ( v23 != 4 )
      {
LABEL_62:
        v21 = 32;
        if ( v23 != 5 )
          goto LABEL_42;
      }
    }
    BYTE1(v22) |= 4u;
    v21 = 31;
    *(_DWORD *)(a2 + 28) = v22;
    goto LABEL_42;
  }
  if ( v7 == 6 && !v9 )
  {
    *(_BYTE *)(a3 + 1) = 2;
    *(_BYTE *)(a3 + 2) = *(_WORD *)(a2 + 26);
    *(_QWORD *)(a3 + 16) = (unsigned __int16)insn_get_next_word();
    *(_BYTE *)(a1 + 5221) = 1;
    v18 = *(unsigned __int8 *)(a2 + 32);
    if ( (_BYTE)v18 )
    {
      if ( (_BYTE)v18 != 32 )
        goto LABEL_34;
      *(_DWORD *)(a2 + 28) |= 0x80u;
    }
    v18 = 32;
LABEL_34:
    *(_WORD *)(a3 + 26) = v18;
    return;
  }
  v15 = *(_WORD *)(a3 + 6);
  *(_BYTE *)(a3 + 1) = 3;
  *(_QWORD *)(a3 + 16) = 0;
  if ( (unsigned __int16)(v15 - 2) <= 1u || (v16 = 32, v15 == 6) )
  {
    *(_DWORD *)(a2 + 28) |= 0x400u;
    v16 = 31;
  }
  *(_BYTE *)(a1 + 5221) = 1;
  v17 = *(unsigned __int8 *)(a2 + 32);
  if ( (_BYTE)v17 )
  {
    if ( v16 == (unsigned __int8)v17 )
      *(_DWORD *)(a2 + 28) |= 0x80u;
  }
  else
  {
    v17 = (unsigned __int8)v16;
  }
  *(_WORD *)(a3 + 26) = v17;
  if ( v9 )
  {
    *(_BYTE *)(a3 + 1) = 4;
    *(_BYTE *)(a3 + 2) = *(_WORD *)(a2 + 26);
    if ( v9 == 1 )
    {
      *(_QWORD *)(a3 + 16) = (char)insn_get_next_byte();
      v26 = *(_DWORD *)(a2 + 28);
      *(_DWORD *)(a2 + 28) = v26 | 0x40;
      if ( (v26 & 0x10000) != 0 )
        *(_QWORD *)(a3 + 16) <<= sub_22020(a2, (_BYTE *)a3);
    }
    else
    {
      *(_QWORD *)(a3 + 16) = (unsigned __int16)insn_get_next_word();
    }
  }
}

