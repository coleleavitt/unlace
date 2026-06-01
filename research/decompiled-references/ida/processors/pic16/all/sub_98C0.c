__int64 __fastcall sub_98C0(int a1, int *a2)
{
  int v3; // eax
  const char *v4; // rcx
  __int64 v5; // r8
  int v6; // r12d
  char *v7; // rdx
  unsigned __int16 v8; // r14
  char v9; // al
  __int64 v10; // r9
  int v11; // r13d
  int v12; // ebx
  const char *v13; // rax
  const char *v14; // rax
  __int16 v15; // ax
  unsigned __int16 v16; // dx
  unsigned __int16 v17; // dx
  unsigned __int16 v18; // dx
  unsigned __int16 v19; // dx
  const char *v20; // rax
  unsigned __int16 v21; // [rsp+1Eh] [rbp-44Ah] BYREF
  _BYTE v22[1023]; // [rsp+20h] [rbp-448h] BYREF
  char v23; // [rsp+41Fh] [rbp-49h] BYREF
  char v24; // [rsp+420h] [rbp-48h] BYREF
  unsigned __int64 v25; // [rsp+428h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  if ( !a1 )
    return 0;
  v3 = qsnprintf();
  v6 = *a2;
  v21 = 0;
  v7 = &v22[v3];
  v8 = v6;
  if ( (a1 & 1) != 0 )
  {
    v21 = (v6 & 1) != 0;
    if ( v7 >= &v24 )
      goto LABEL_53;
    v4 = "\n<#Rename port and I/O registers#I/O ports:C>";
    if ( v3 != 1023 )
    {
      while ( 1 )
      {
        v9 = *v4++;
        *v7 = v9;
        if ( !v9 )
          break;
        if ( ++v7 == &v23 )
          goto LABEL_50;
      }
      v10 = 2;
      v11 = a1 & 2;
      if ( (a1 & 2) == 0 )
        goto LABEL_10;
      goto LABEL_38;
    }
LABEL_50:
    *v7 = 0;
    v10 = 2;
  }
  else
  {
    v10 = 1;
  }
  v11 = a1 & 2;
  if ( (a1 & 2) == 0 )
    goto LABEL_10;
LABEL_38:
  if ( (v6 & 2) != 0 )
    v21 |= v10;
  v10 = (unsigned int)(2 * v10);
  if ( v7 >= &v24 )
  {
    if ( under_debugger )
      goto LABEL_58;
    goto LABEL_54;
  }
  v20 = "\n<#Adjust the segments#Memory layout:C>";
  if ( v7 == &v23 )
  {
LABEL_46:
    v23 = 0;
    v12 = a1 & 4;
    if ( (a1 & 4) == 0 )
      goto LABEL_49;
    v7 = &v23;
    if ( (v6 & 4) == 0 )
      goto LABEL_48;
LABEL_51:
    v21 |= v10;
    goto LABEL_12;
  }
  while ( 1 )
  {
    v4 = (const char *)*(unsigned __int8 *)v20++;
    *v7 = (char)v4;
    if ( !(_BYTE)v4 )
      break;
    if ( ++v7 == &v23 )
      goto LABEL_46;
  }
LABEL_10:
  v12 = a1 & 4;
  if ( (a1 & 4) == 0 )
    goto LABEL_18;
  if ( (v6 & 4) != 0 )
    goto LABEL_51;
LABEL_12:
  if ( v7 >= &v24 )
  {
    if ( under_debugger )
      goto LABEL_58;
LABEL_54:
    interr();
  }
  if ( v7 == &v23 )
  {
LABEL_48:
    v12 = 4;
    goto LABEL_49;
  }
  v13 = "\n<#Create interrupt vectors and/or entry points#Interrupts:C>";
  while ( 1 )
  {
    v4 = (const char *)*(unsigned __int8 *)v13++;
    *v7 = (char)v4;
    if ( !(_BYTE)v4 )
      break;
    if ( ++v7 == &v23 )
      goto LABEL_48;
  }
  v12 = 4;
LABEL_18:
  if ( v7 >= &v24 )
  {
LABEL_53:
    if ( !under_debugger )
      goto LABEL_54;
LABEL_58:
    BUG();
  }
  if ( v7 == &v23 )
  {
LABEL_49:
    v23 = 0;
    goto LABEL_23;
  }
  v14 = ">\n\n";
  while ( 1 )
  {
    v4 = (const char *)*(unsigned __int8 *)v14++;
    *v7 = (char)v4;
    if ( !(_BYTE)v4 )
      break;
    if ( ++v7 == &v23 )
      goto LABEL_49;
  }
LABEL_23:
  if ( !(unsigned int)sub_97E0((__int64)v22, &v21, v7, v4, v5, v10) )
    return 0;
  v15 = 1;
  if ( (a1 & 1) != 0 )
  {
    if ( (v21 & 1) != 0 )
      v8 = v6 | 1;
    else
      v8 = v6 & 0xFFFE;
    v15 = 2;
  }
  if ( v11 )
  {
    v16 = v8;
    v8 &= ~2u;
    v17 = v16 | 2;
    if ( ((unsigned __int16)v15 & v21) != 0 )
      v8 = v17;
    v15 *= 2;
  }
  if ( v12 )
  {
    v18 = v8;
    v8 &= ~4u;
    v19 = v18 | 4;
    if ( ((unsigned __int16)v15 & v21) != 0 )
      v8 = v19;
  }
  *a2 = v8;
  return 1;
}

