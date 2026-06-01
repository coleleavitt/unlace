unsigned __int64 __fastcall sub_2F20(const char *a1, __int64 a2, unsigned int a3, const char *a4, unsigned int a5)
{
  unsigned __int64 v7; // rbx
  _BYTE *v9; // rsi
  char *v10; // r8
  __int64 v11; // r9
  const char *v12; // rax
  char *v13; // rcx
  __int64 v14; // rdx
  const char *v15; // rax
  char *v16; // rax
  _BOOL8 v17; // r15
  const char *v18; // rax
  unsigned __int8 v20; // r9
  int v21; // ecx
  int v22; // eax
  char *v24; // [rsp+0h] [rbp-458h]
  char v25[1023]; // [rsp+10h] [rbp-448h] BYREF
  char v26; // [rsp+40Fh] [rbp-49h] BYREF
  _BYTE v27[8]; // [rsp+410h] [rbp-48h] BYREF
  unsigned __int64 v28; // [rsp+418h] [rbp-40h]

  v7 = (unsigned __int64)v25;
  v28 = __readfsqword(0x28u);
  show_auto(a2, 0);
  v9 = (_BYTE *)(&dword_0 + 1);
  sub_2E50(a2, 1u, (__int64)"\nExternal Entry #%u into the Module %s", a5, a4);
  v11 = a3;
  v12 = "Attributes: ";
  v13 = &v26;
  do
  {
    v14 = *(unsigned __int8 *)v12++;
    *(_BYTE *)v7 = v14;
    if ( !(_BYTE)v14 )
    {
      if ( v7 >= (unsigned __int64)v27 )
        goto LABEL_35;
      v10 = &v26;
      if ( !a1 )
        goto LABEL_21;
      if ( (char *)v7 != &v26 )
      {
        v15 = a1;
        goto LABEL_9;
      }
      goto LABEL_40;
    }
    ++v7;
    v10 = &v26;
  }
  while ( (char *)v7 != &v26 );
  v26 = 0;
  if ( !a1 )
  {
LABEL_21:
    v15 = "forwarder entry";
    if ( (char *)v7 == &v26 )
    {
LABEL_22:
      v26 = 0;
      v16 = v10;
      goto LABEL_15;
    }
LABEL_9:
    while ( 1 )
    {
      v14 = *(unsigned __int8 *)v15++;
      *(_BYTE *)v7 = v14;
      if ( !(_BYTE)v14 )
        break;
      if ( (char *)++v7 == &v26 )
      {
        v26 = 0;
        if ( a1 )
        {
          if ( (a3 & 1) != 0 )
            goto LABEL_25;
LABEL_12:
          LOBYTE(v11) = (unsigned __int8)a3 >> 3;
          if ( !((unsigned __int8)a3 >> 3) )
          {
LABEL_13:
            if ( v7 < (unsigned __int64)v27 )
              goto LABEL_14;
            if ( !under_debugger )
              interr(518, v9, v14, v13, v10, v11);
LABEL_45:
            BUG();
          }
LABEL_42:
          v21 = (unsigned __int8)v11;
          v9 = &v27[-v7];
LABEL_39:
          v24 = v10;
          v22 = qsnprintf(v7, v9, "  Args: %d", v21);
          v10 = v24;
          v7 += v22;
          goto LABEL_13;
        }
        goto LABEL_22;
      }
    }
    if ( !a1 )
      goto LABEL_13;
    if ( (a3 & 1) == 0 )
      goto LABEL_12;
    if ( v7 < (unsigned __int64)v27 )
    {
LABEL_25:
      if ( (char *)v7 != &v26 )
      {
        v18 = " Exported";
        while ( 1 )
        {
          v14 = *(unsigned __int8 *)v18++;
          *(_BYTE *)v7 = v14;
          if ( !(_BYTE)v14 )
            goto LABEL_12;
          if ( (char *)++v7 == &v26 )
            goto LABEL_37;
        }
      }
      goto LABEL_37;
    }
LABEL_35:
    if ( under_debugger )
      goto LABEL_45;
    interr(520, 1, v14, &v26, v10, a3);
LABEL_37:
    v20 = (unsigned __int8)v11 >> 3;
    v26 = 0;
    if ( v20 )
    {
      v21 = v20;
      v9 = (_BYTE *)(&dword_0 + 1);
      v7 = (unsigned __int64)v10;
      goto LABEL_39;
    }
    goto LABEL_22;
  }
LABEL_40:
  v26 = 0;
  if ( (a3 & 1) != 0 )
    goto LABEL_37;
  LOBYTE(v11) = (unsigned __int8)a3 >> 3;
  v7 = (unsigned __int64)&v26;
  if ( (unsigned __int8)a3 >> 3 )
    goto LABEL_42;
LABEL_14:
  v16 = (char *)(v7 + 1);
  *(_BYTE *)v7 = 10;
  if ( v7 + 1 >= (unsigned __int64)v27 )
    goto LABEL_22;
LABEL_15:
  *v16 = 0;
  sub_2E50(a2, 1u, (__int64)"%s", v25);
  if ( a1 )
  {
    if ( byte_B290 )
    {
      if ( a5 == 1 )
        qword_B270 = a2;
      LODWORD(v17) = 0;
    }
    else
    {
      v17 = (unsigned __int8)segtype(a2) != 3;
    }
    qsnprintf(v25, 1024, "%s_%u", a4, a5);
    add_entry(a5, a2, v25, v17, 1);
    make_name_auto(a2);
  }
  else
  {
    add_entry(a5, a2, 0, 0, 1);
  }
  return v28 - __readfsqword(0x28u);
}
