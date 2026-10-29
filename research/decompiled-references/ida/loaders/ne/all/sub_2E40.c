unsigned __int64 __fastcall sub_2E40(int a1, __int64 a2, unsigned __int16 a3, const char *a4, int a5)
{
  const char *v9; // r8
  int v10; // eax
  char *v11; // rdx
  const char *v12; // rcx
  char v13; // al
  char *v14; // rax
  const char *v15; // rcx
  char v16; // si
  const char *v17; // rcx
  char v18; // si
  char v20[1023]; // [rsp+0h] [rbp-438h] BYREF
  char v21; // [rsp+3FFh] [rbp-39h] BYREF
  char v22; // [rsp+400h] [rbp-38h] BYREF
  unsigned __int64 v23; // [rsp+408h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  show_auto(a2, 0);
  sub_2D70(a2, 1u, (__int64)"\nExternal Entry #%d into the Module", a5);
  v9 = "Moveable";
  if ( a1 )
    v9 = "Fixed";
  v10 = qsnprintf(v20, 1024, "Attributes (%04X): %s", a3, v9);
  v11 = &v20[v10];
  if ( (a3 & 1) == 0 )
    goto LABEL_9;
  if ( v11 >= &v22 )
    goto LABEL_32;
  v12 = " Exported";
  if ( v10 != 1023 )
  {
    while ( 1 )
    {
      v13 = *v12++;
      *v11 = v13;
      if ( !v13 )
        break;
      if ( ++v11 == &v21 )
        goto LABEL_28;
    }
LABEL_9:
    if ( (a3 & 2) != 0 )
      goto LABEL_10;
LABEL_15:
    if ( (a3 & 0xF8) == 0 )
    {
LABEL_21:
      if ( v11 < &v22 )
        goto LABEL_22;
      if ( !under_debugger )
        interr(518);
LABEL_35:
      BUG();
    }
    if ( v11 < &v22 )
    {
      v14 = &v21;
      if ( v11 == &v21 )
      {
LABEL_25:
        v21 = 0;
        goto LABEL_23;
      }
      v17 = " Ring transactions";
      while ( 1 )
      {
        v18 = *v17++;
        *v11 = v18;
        if ( !v18 )
          goto LABEL_21;
        if ( ++v11 == &v21 )
          goto LABEL_25;
      }
    }
LABEL_32:
    while ( !under_debugger )
    {
      interr(520);
LABEL_34:
      ;
    }
    goto LABEL_35;
  }
LABEL_28:
  *v11 = 0;
  if ( (a3 & 2) == 0 )
    goto LABEL_15;
LABEL_10:
  if ( v11 >= &v22 )
    goto LABEL_34;
  v14 = &v21;
  v15 = " Shared dataseg";
  if ( v11 != &v21 )
  {
    do
    {
      v16 = *v15++;
      *v11 = v16;
      if ( !v16 )
        goto LABEL_15;
    }
    while ( ++v11 != &v21 );
  }
  v21 = 0;
  v11 = &v21;
  if ( (a3 & 0xF8) != 0 )
    goto LABEL_25;
LABEL_22:
  v14 = v11 + 1;
  *v11 = 10;
  if ( v11 + 1 >= &v22 )
  {
    v14 = &v21;
    goto LABEL_25;
  }
LABEL_23:
  *v14 = 0;
  sub_2D70(a2, 1u, (__int64)"%s", v20);
  qsnprintf(v20, 1024, "%s_%d", a4, a5);
  add_entry(a5, a2, v20, 1, 1);
  make_name_auto(a2);
  return v23 - __readfsqword(0x28u);
}

