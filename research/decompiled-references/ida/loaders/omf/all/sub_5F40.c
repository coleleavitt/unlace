unsigned __int64 __fastcall sub_5F40(__int64 a1)
{
  char v1; // r12
  unsigned __int8 v2; // bl
  unsigned __int8 v3; // al
  const char *v4; // rdx
  char *v5; // rsi
  unsigned __int8 v6; // bp
  char *v7; // rax
  char v8; // cl
  const char *v9; // rdx
  const char *v10; // rdx
  char v11; // si
  const char *v13; // rdx
  char v14[1023]; // [rsp+0h] [rbp-428h] BYREF
  char v15; // [rsp+3FFh] [rbp-29h] BYREF
  char v16; // [rsp+400h] [rbp-28h] BYREF
  unsigned __int64 v17; // [rsp+408h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  v1 = sub_5EE0(a1, -1);
  v2 = sub_5EE0(a1, -1);
  v3 = sub_5EE0(a1, -1);
  v4 = "Linker directives:";
  v5 = &v15;
  v6 = v3;
  v7 = v14;
  do
  {
    v8 = *v4++;
    *v7 = v8;
    if ( !v8 )
    {
      if ( (v1 & 1) == 0 )
      {
LABEL_10:
        if ( (v1 & 2) == 0 )
          goto LABEL_11;
        if ( v7 >= &v16 )
          goto LABEL_34;
        goto LABEL_19;
      }
      if ( v7 >= &v16 )
        goto LABEL_32;
      if ( v7 != &v15 )
      {
        v9 = " [For new exe]";
        do
        {
          v5 = (char *)*(unsigned __int8 *)v9++;
          *v7 = (char)v5;
          if ( !(_BYTE)v5 )
            goto LABEL_10;
        }
        while ( ++v7 != &v15 );
      }
LABEL_24:
      v15 = 0;
      if ( (v1 & 2) == 0 )
      {
        v7 = &v15;
        if ( (v1 & 4) == 0 )
          goto LABEL_17;
LABEL_13:
        if ( v7 != &v15 )
        {
          v10 = " [Run MPC]";
          do
          {
            v11 = *v10++;
            *v7 = v11;
            if ( !v11 )
              goto LABEL_17;
          }
          while ( ++v7 != &v15 );
        }
LABEL_26:
        v15 = 0;
        goto LABEL_17;
      }
LABEL_25:
      v15 = 0;
      if ( (v1 & 4) == 0 )
        goto LABEL_17;
      goto LABEL_26;
    }
    ++v7;
  }
  while ( v7 != &v15 );
  v15 = 0;
  if ( (v1 & 1) != 0 )
    goto LABEL_24;
  if ( (v1 & 2) == 0 )
    goto LABEL_11;
LABEL_19:
  if ( v7 == &v15 )
    goto LABEL_25;
  v13 = " [Omit $PUBLICS]";
  while ( 1 )
  {
    v5 = (char *)*(unsigned __int8 *)v13++;
    *v7 = (char)v5;
    if ( !(_BYTE)v5 )
      break;
    if ( ++v7 == &v15 )
      goto LABEL_25;
  }
LABEL_11:
  if ( (v1 & 4) != 0 )
  {
    if ( v7 < &v16 )
      goto LABEL_13;
LABEL_32:
    while ( !under_debugger )
    {
      interr(520, v5);
LABEL_34:
      ;
    }
    BUG();
  }
LABEL_17:
  sub_4EF0(qword_145D0, 1u, (__int64)"%s", v14);
  sub_4EF0(qword_145D0, 1u, (__int64)"P-code interpreter version: %d, CodeView version: %d", v2, v6);
  return v17 - __readfsqword(0x28u);
}

