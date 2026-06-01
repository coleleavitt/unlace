unsigned __int64 __fastcall sub_F300(__int64 a1)
{
  unsigned int v1; // r9d
  char *v2; // rcx
  char *v3; // rax
  char v4; // dl
  char v5; // si
  __int64 v6; // r10
  char v7; // si
  char v8; // si
  char v9; // si
  char v10; // si
  char v11; // si
  char v12; // si
  bool v14; // zf
  char v15; // si
  _BYTE v16[19]; // [rsp+0h] [rbp-28h] BYREF
  char v17; // [rsp+13h] [rbp-15h] BYREF
  _BYTE v18[4]; // [rsp+14h] [rbp-14h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-10h]

  v19 = __readfsqword(0x28u);
  v1 = *(_DWORD *)(a1 + 252);
  v2 = (char *)*(&off_17A60 + (v1 & 3));
  v3 = v16;
  while ( 1 )
  {
    v4 = *v2++;
    *v3 = v4;
    if ( !v4 )
      break;
    if ( ++v3 == &v17 )
      goto LABEL_47;
  }
  if ( v3 >= v18 )
    goto LABEL_73;
  v2 = (char *)*(&off_17A40 + ((v1 >> 2) & 3));
  if ( v3 == &v17 )
  {
LABEL_47:
    v17 = 0;
    v6 = *(unsigned __int8 *)(a1 + 256);
    if ( (v1 & 0x20) != 0 )
      goto LABEL_48;
    v3 = &v17;
    if ( (v1 & 0x40) == 0 )
    {
LABEL_21:
      if ( (v1 & 0x80u) != 0 )
      {
        if ( v3 >= v18 )
        {
          if ( under_debugger )
            goto LABEL_86;
          goto LABEL_74;
        }
        goto LABEL_23;
      }
LABEL_27:
      if ( (v1 & 0x100) == 0 )
        goto LABEL_33;
      v2 = v18;
      if ( v3 >= v18 )
      {
        if ( under_debugger )
          goto LABEL_86;
        goto LABEL_74;
      }
      goto LABEL_29;
    }
LABEL_17:
    v2 = (char *)*(&off_17E60 + (unsigned __int8)v6);
    if ( v3 == &v17 )
    {
LABEL_49:
      v17 = 0;
      if ( (v1 & 0x80u) != 0 )
        goto LABEL_50;
      v3 = &v17;
      if ( (v1 & 0x100) == 0 )
      {
LABEL_33:
        if ( (v1 & 0x10) != 0 )
        {
          v2 = v18;
          if ( v3 >= v18 )
          {
            if ( under_debugger )
              goto LABEL_86;
            goto LABEL_74;
          }
          goto LABEL_35;
        }
LABEL_39:
        if ( (v1 & 0x200) == 0 )
          goto LABEL_45;
        v2 = v18;
        if ( v3 >= v18 )
        {
          if ( under_debugger )
            goto LABEL_86;
          goto LABEL_74;
        }
LABEL_41:
        if ( v3 == &v17 )
          goto LABEL_53;
        v2 = ",pn";
        while ( 1 )
        {
          v12 = *v2++;
          *v3 = v12;
          if ( !v12 )
            break;
          if ( ++v3 == &v17 )
            goto LABEL_53;
        }
LABEL_45:
        if ( *(_WORD *)(a1 + 248) != 229 )
          goto LABEL_46;
        v2 = v18;
        if ( v3 < v18 )
          goto LABEL_58;
LABEL_73:
        if ( under_debugger )
          goto LABEL_86;
        do
        {
LABEL_74:
          interr(520);
LABEL_75:
          ;
        }
        while ( !under_debugger );
LABEL_86:
        BUG();
      }
LABEL_29:
      if ( v3 == &v17 )
        goto LABEL_51;
      v2 = ",a";
      while ( 1 )
      {
        v10 = *v2++;
        *v3 = v10;
        if ( !v10 )
          goto LABEL_33;
        if ( ++v3 == &v17 )
          goto LABEL_51;
      }
    }
    while ( 1 )
    {
      v8 = *v2++;
      *v3 = v8;
      if ( !v8 )
        goto LABEL_21;
      if ( ++v3 == &v17 )
        goto LABEL_49;
    }
  }
  while ( 1 )
  {
    v5 = *v2++;
    *v3 = v5;
    if ( !v5 )
      break;
    if ( ++v3 == &v17 )
      goto LABEL_47;
  }
  v6 = *(unsigned __int8 *)(a1 + 256);
  if ( (v1 & 0x20) == 0 )
  {
LABEL_15:
    if ( (v1 & 0x40) == 0 )
      goto LABEL_21;
    if ( v3 >= v18 )
    {
      if ( under_debugger )
        goto LABEL_86;
      goto LABEL_74;
    }
    goto LABEL_17;
  }
  if ( v3 >= v18 )
    goto LABEL_75;
  v2 = (char *)*(&off_17EE0 + (unsigned __int8)v6);
  if ( v3 != &v17 )
  {
    do
    {
      v7 = *v2++;
      *v3 = v7;
      if ( !v7 )
        goto LABEL_15;
    }
    while ( ++v3 != &v17 );
  }
LABEL_48:
  v17 = 0;
  if ( (v1 & 0x40) != 0 )
    goto LABEL_49;
  v3 = &v17;
  if ( (v1 & 0x80u) == 0 )
    goto LABEL_27;
LABEL_23:
  v2 = (char *)qword_17E20[v6];
  if ( v3 != &v17 )
  {
    do
    {
      v9 = *v2++;
      *v3 = v9;
      if ( !v9 )
        goto LABEL_27;
    }
    while ( ++v3 != &v17 );
  }
LABEL_50:
  v17 = 0;
  if ( (v1 & 0x100) == 0 )
  {
    v3 = &v17;
    if ( (v1 & 0x10) != 0 )
    {
LABEL_35:
      if ( v3 == &v17 )
        goto LABEL_52;
      v2 = "l";
      while ( 1 )
      {
        v11 = *v2++;
        *v3 = v11;
        if ( !v11 )
          goto LABEL_39;
        if ( ++v3 == &v17 )
          goto LABEL_52;
      }
    }
    goto LABEL_39;
  }
LABEL_51:
  v17 = 0;
  if ( (v1 & 0x10) == 0 )
  {
    v3 = &v17;
    if ( (v1 & 0x200) == 0 )
      goto LABEL_45;
    goto LABEL_41;
  }
LABEL_52:
  v17 = 0;
  if ( (v1 & 0x200) == 0 )
  {
    if ( *(_WORD *)(a1 + 248) != 229 )
      goto LABEL_46;
    v3 = &v17;
LABEL_58:
    if ( v3 == &v17 )
      goto LABEL_54;
    v2 = "n";
    while ( 1 )
    {
      v15 = *v2++;
      *v3 = v15;
      if ( !v15 )
        goto LABEL_46;
      if ( ++v3 == &v17 )
      {
        v17 = 0;
        goto LABEL_46;
      }
    }
  }
LABEL_53:
  v14 = *(_WORD *)(a1 + 248) == 229;
  v17 = 0;
  if ( v14 )
LABEL_54:
    v17 = 0;
LABEL_46:
  (*(void (__fastcall **)(__int64, __int64, _BYTE *, char *))(*(_QWORD *)a1 + 280LL))(a1, 8, v16, v2);
  return v19 - __readfsqword(0x28u);
}
