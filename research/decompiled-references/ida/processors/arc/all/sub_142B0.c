unsigned __int64 __fastcall sub_142B0(__int64 a1)
{
  unsigned __int16 v1; // dx
  __int64 v2; // r12
  unsigned int v3; // eax
  unsigned int v4; // edx
  int v5; // edx
  unsigned __int8 v7; // r13
  _UNKNOWN **v8; // rdx
  unsigned __int16 v9; // ax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  const char *v12; // rsi
  unsigned int dword; // eax
  const char *v14; // rsi
  _UNKNOWN **v15; // rax
  char *v16; // rsi
  _BYTE vars0[1032]; // [rsp+0h] [rbp+0h] BYREF
  unsigned __int64 vars408; // [rsp+408h] [rbp+408h]

  v1 = *(_WORD *)(a1 + 248);
  v2 = *(_QWORD *)(a1 + 616);
  vars408 = __readfsqword(0x28u);
  vars0[0] = 0;
  if ( !v1 )
  {
    dword = get_dword(*(_QWORD *)(a1 + 240));
    if ( dword >> 27 == 3 )
      qsnprintf(vars0, 1024, "ext%02X_%02X", 3, (dword >> 9) & 0x3F);
    else
      qsnprintf(vars0, 1024, "ext%02X", dword >> 27);
    v1 = *(_WORD *)(a1 + 248);
  }
  v3 = *(_DWORD *)(a1 + 252);
  if ( v1 <= 4u )
  {
    v4 = *(_DWORD *)(a1 + 252) & 6;
    if ( v4 == 4 )
    {
      v16 = "w";
      if ( *(_DWORD *)(v2 + 5272) == 2 )
        v16 = "h";
      qstrncat(vars0, v16, 1024);
      v3 = *(_DWORD *)(a1 + 252);
      if ( (v3 & 0x800) == 0 )
      {
LABEL_8:
        if ( (v3 & 1) == 0 )
          goto LABEL_9;
        goto LABEL_62;
      }
    }
    else
    {
      if ( v4 > 4 )
      {
        if ( v4 == 6 )
          qstrncat(vars0, "d", 1024);
        else
          qstrncat(vars0, "?", 1024);
        v3 = *(_DWORD *)(a1 + 252);
      }
      else if ( (v3 & 6) != 0 )
      {
        qstrncat(vars0, "b", 1024);
        v3 = *(_DWORD *)(a1 + 252);
      }
      if ( (v3 & 0x800) == 0 )
        goto LABEL_8;
    }
    qstrncat(vars0, "_s", 1024);
    v3 = *(_DWORD *)(a1 + 252);
    if ( (v3 & 1) == 0 )
    {
LABEL_9:
      v5 = v3 & 0x18;
      if ( v5 != 16 )
        goto LABEL_10;
      goto LABEL_63;
    }
LABEL_62:
    qstrncat(vars0, ".x", 1024);
    v3 = *(_DWORD *)(a1 + 252);
    v5 = v3 & 0x18;
    if ( v5 != 16 )
    {
LABEL_10:
      if ( v5 == 24 )
      {
        v14 = ".as";
      }
      else
      {
        if ( v5 != 8 )
        {
          if ( (v3 & 0x20) == 0 )
          {
LABEL_13:
            v1 = *(_WORD *)(a1 + 248);
            goto LABEL_14;
          }
          goto LABEL_52;
        }
        v14 = ".a";
        if ( *(_WORD *)(a1 + 248) != 1 && *(_DWORD *)(v2 + 5272) )
          v14 = ".aw";
      }
LABEL_51:
      qstrncat(vars0, v14, 1024);
      v3 = *(_DWORD *)(a1 + 252);
      if ( (v3 & 0x20) == 0 )
        goto LABEL_13;
LABEL_52:
      qstrncat(vars0, ".di", 1024);
      v3 = *(_DWORD *)(a1 + 252);
      v1 = *(_WORD *)(a1 + 248);
      goto LABEL_14;
    }
LABEL_63:
    v14 = ".ab";
    goto LABEL_51;
  }
  v7 = v3 & 0x1F;
  if ( (v3 & 0x1F) != 0 )
  {
    if ( v1 > 0x12u )
    {
      if ( (unsigned __int16)(v1 - 41) <= 2u )
      {
LABEL_25:
        v8 = &off_28F40;
        if ( *(_DWORD *)(v2 + 5272) != 2 )
          v8 = &off_29040;
        qstrncat(vars0, v8[v7], 1024);
        if ( (*(_BYTE *)(a1 + 253) & 8) == 0 )
        {
          v9 = *(_WORD *)(a1 + 248);
          goto LABEL_29;
        }
LABEL_72:
        qstrncat(vars0, "_s", 1024);
        v9 = *(_WORD *)(a1 + 248);
LABEL_29:
        if ( v9 <= 0x12u )
        {
          if ( v9 > 0xDu )
            goto LABEL_31;
        }
        else if ( (unsigned __int16)(v9 - 41) <= 2u )
        {
LABEL_31:
          v3 = *(_DWORD *)(a1 + 252);
          goto LABEL_32;
        }
LABEL_55:
        v15 = &off_29140;
        if ( *(_DWORD *)(v2 + 5272) != 2 )
          v15 = &off_29240;
        qstrncat(vars0, v15[v7], 1024);
        v3 = *(_DWORD *)(a1 + 252);
        goto LABEL_13;
      }
    }
    else if ( v1 > 0xDu )
    {
      goto LABEL_25;
    }
    if ( (v3 & 0x800) == 0 )
      goto LABEL_55;
    goto LABEL_72;
  }
  if ( (v3 & 0x800) != 0 )
  {
    qstrncat(vars0, "_s", 1024);
    v3 = *(_DWORD *)(a1 + 252);
    v1 = *(_WORD *)(a1 + 248);
  }
LABEL_14:
  if ( v1 <= 0x12u )
  {
    if ( v1 <= 0xDu )
    {
      if ( (v3 & 0x100) == 0 )
        goto LABEL_20;
      goto LABEL_42;
    }
  }
  else if ( (unsigned __int16)(v1 - 41) > 2u )
  {
    if ( (v3 & 0x100) == 0 )
      goto LABEL_20;
    if ( (unsigned __int16)(v1 - 152) <= 1u || v1 == 56 )
    {
      qstrncat(vars0, ".di", 1024);
      goto LABEL_20;
    }
LABEL_42:
    if ( v1 != 5 && v1 != 63 )
      qstrncat(vars0, ".f", 1024);
LABEL_20:
    if ( *(_DWORD *)(v2 + 5272) != 2 )
      goto LABEL_21;
    goto LABEL_33;
  }
LABEL_32:
  qstrncat(vars0, (char *)&unk_1F6D0 + 4 * ((v3 >> 5) & 3), 1024);
  if ( *(_DWORD *)(v2 + 5272) != 2 )
    goto LABEL_21;
LABEL_33:
  if ( (*(_BYTE *)(a1 + 253) & 4) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 360);
    v11 = *(_QWORD *)(a1 + 240);
    if ( *(_WORD *)(a1 + 248) == 43 )
    {
      v12 = ".t";
      if ( v11 < v10 )
        v12 = ".nt";
    }
    else
    {
      v12 = ".nt";
      if ( v11 < v10 )
        v12 = ".t";
    }
    qstrncat(vars0, v12, 1024);
  }
LABEL_21:
  (*(void (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)a1 + 280LL))(a1, 8, vars0);
  return vars408 - __readfsqword(0x28u);
}

