__int64 __fastcall sub_AFA0(_QWORD *a1, char a2)
{
  unsigned int v3; // eax
  unsigned int v4; // r13d
  int v5; // eax
  char *v6; // rdx
  const char *v7; // rcx
  char v8; // al
  const char *v9; // rcx
  char v10; // si
  char v11; // si
  char v12; // si
  char v13; // dl
  char v14; // bl
  char v15; // si
  char v16; // dl
  char v17; // si
  char v18; // dl
  char v19; // dl
  char v20; // si
  char v21; // dl
  _DWORD *v23; // rsi
  __int64 v24; // rax
  __int16 v25; // [rsp+Eh] [rbp-143Ah] BYREF
  _BYTE v26[1023]; // [rsp+10h] [rbp-1438h] BYREF
  char v27; // [rsp+40Fh] [rbp-1039h] BYREF
  _BYTE v28[4104]; // [rsp+410h] [rbp-1038h] BYREF
  unsigned __int64 v29; // [rsp+1418h] [rbp-30h]

  v29 = __readfsqword(0x28u);
  getinf_buf();
  qstrlwr();
  qstrncat();
  v3 = choose_ioport_device();
  if ( !(_BYTE)v3 )
  {
    v23 = (_DWORD *)a1[17];
    if ( a1[19] <= 4u )
    {
      v24 = qvector_reserve();
      a1[17] = v24;
      v23 = (_DWORD *)v24;
    }
    a1[18] = 5;
    *v23 = 1162760014;
    *(_BYTE *)(a1[17] + 4LL) = 0;
    netnode_supset();
    return 0;
  }
  v4 = v3;
  netnode_supset();
  v5 = qsnprintf();
  v6 = &v26[v5];
  v25 = a2 & 1;
  if ( v6 >= v28 )
    goto LABEL_44;
  v7 = "\n<#Rename port and I/O registers#I/O ports:C>";
  if ( v5 == 1023 )
  {
LABEL_37:
    *v6 = 0;
    if ( (a2 & 2) != 0 )
LABEL_33:
      v25 |= 2u;
  }
  else
  {
    while ( 1 )
    {
      v8 = *v7++;
      *v6 = v8;
      if ( !v8 )
        break;
      if ( ++v6 == &v27 )
        goto LABEL_37;
    }
    if ( (a2 & 2) != 0 )
      goto LABEL_33;
  }
  if ( v6 >= v28 )
    goto LABEL_46;
  v9 = "\n<#Adjust the segments#Memory layout:C>";
  if ( v6 == &v27 )
  {
LABEL_34:
    v27 = 0;
    if ( (a2 & 4) == 0 )
      goto LABEL_39;
    v6 = &v27;
    goto LABEL_36;
  }
  while ( 1 )
  {
    v10 = *v9++;
    *v6 = v10;
    if ( !v10 )
      break;
    if ( ++v6 == &v27 )
      goto LABEL_34;
  }
  if ( (a2 & 4) != 0 )
LABEL_36:
    v25 |= 4u;
  if ( v6 >= v28 )
  {
    if ( under_debugger )
      goto LABEL_49;
    goto LABEL_45;
  }
  if ( v6 == &v27 )
  {
LABEL_39:
    v27 = 0;
    goto LABEL_24;
  }
  v9 = "\n<#Create interrupt vectors and/or entry points#Interrupts:C>";
  while ( 1 )
  {
    v11 = *v9++;
    *v6 = v11;
    if ( !v11 )
      break;
    if ( ++v6 == &v27 )
      goto LABEL_39;
  }
  if ( v6 >= v28 )
  {
LABEL_44:
    if ( under_debugger )
      goto LABEL_49;
    do
    {
LABEL_45:
      interr();
LABEL_46:
      ;
    }
    while ( !under_debugger );
LABEL_49:
    BUG();
  }
  if ( v6 == &v27 )
    goto LABEL_39;
  v9 = ">\n\n";
  while ( 1 )
  {
    v12 = *v9++;
    *v6 = v12;
    if ( !v12 )
      break;
    if ( ++v6 == &v27 )
      goto LABEL_39;
  }
LABEL_24:
  if ( !(unsigned int)sub_AA80((__int64)v26, &v25, v6, v9) )
    return 0;
  v13 = a2;
  v14 = a2 & 0xFE;
  v15 = v13 | 1;
  if ( (v25 & 1) == 0 )
    v15 = v14;
  v16 = v15;
  v17 = v15 & 0xFD;
  v18 = v16 | 2;
  if ( (v25 & 2) != 0 )
    v17 = v18;
  v19 = v17;
  v20 = v17 & 0xFB;
  v21 = v19 | 4;
  if ( (v25 & 4) != 0 )
    v20 = v21;
  sub_AE90((__int64)a1, v20);
  return v4;
}

