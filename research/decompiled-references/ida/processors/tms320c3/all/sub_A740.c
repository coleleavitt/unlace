__int64 __fastcall sub_A740(__int64 a1, unsigned __int16 a2)
{
  unsigned __int16 v3; // bx
  unsigned int v4; // eax
  unsigned int v5; // r13d
  int v6; // eax
  char *v7; // rdx
  const char *v8; // rcx
  char v9; // al
  const char *v10; // rcx
  char v11; // si
  char v12; // si
  char v13; // si
  unsigned __int16 v14; // ax
  __int16 v15; // bx
  __int16 v16; // ax
  __int16 v17; // cx
  __int16 v18; // ax
  __int16 v19; // cx
  __int16 v20; // cx
  unsigned __int16 v21; // ax
  void *v22; // r12
  size_t v23; // rax
  size_t v24; // r15
  size_t v25; // rdx
  void *v26; // rdi
  _DWORD *v27; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  size_t v31; // [rsp+8h] [rbp-1460h]
  __int16 v32; // [rsp+1Eh] [rbp-144Ah] BYREF
  _BYTE v33[1023]; // [rsp+20h] [rbp-1448h] BYREF
  char v34; // [rsp+41Fh] [rbp-1049h] BYREF
  _BYTE v35[4104]; // [rsp+420h] [rbp-1048h] BYREF
  unsigned __int64 v36; // [rsp+1428h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  v3 = a2;
  getinf_buf();
  qstrlwr();
  qstrncat();
  v4 = choose_ioport_device();
  if ( !(_BYTE)v4 )
  {
    v27 = *(_DWORD **)(a1 + 136);
    if ( *(_QWORD *)(a1 + 152) <= 4u )
    {
      v29 = qvector_reserve();
      *(_QWORD *)(a1 + 136) = v29;
      v27 = (_DWORD *)v29;
    }
    *(_QWORD *)(a1 + 144) = 5;
    *v27 = 1162760014;
    *(_BYTE *)(*(_QWORD *)(a1 + 136) + 4LL) = 0;
    return 0;
  }
  v5 = v4;
  v6 = qsnprintf();
  v7 = &v33[v6];
  v32 = a2 & 1;
  if ( v7 >= v35 )
  {
LABEL_52:
    if ( !under_debugger )
    {
LABEL_53:
      interr();
      goto LABEL_51;
    }
LABEL_57:
    BUG();
  }
  v8 = "\n<#Rename port and I/O registers#I/O ports:C>";
  if ( v6 == 1023 )
  {
LABEL_46:
    *v7 = 0;
    if ( (a2 & 2) != 0 )
LABEL_37:
      v32 |= 2u;
  }
  else
  {
    while ( 1 )
    {
      v9 = *v8++;
      *v7 = v9;
      if ( !v9 )
        break;
      if ( ++v7 == &v34 )
        goto LABEL_46;
    }
    if ( (a2 & 2) != 0 )
      goto LABEL_37;
  }
  if ( v7 >= v35 )
  {
    if ( !under_debugger )
      goto LABEL_53;
    goto LABEL_57;
  }
  v10 = "\n<#Adjust the segments#Memory layout:C>";
  if ( v7 == &v34 )
  {
LABEL_38:
    v34 = 0;
    if ( (v3 & 4) == 0 )
      goto LABEL_48;
    v7 = &v34;
    goto LABEL_40;
  }
  while ( 1 )
  {
    v11 = *v10++;
    *v7 = v11;
    if ( !v11 )
      break;
    if ( ++v7 == &v34 )
      goto LABEL_38;
  }
  if ( (v3 & 4) != 0 )
LABEL_40:
    v32 |= 4u;
  if ( v7 >= v35 )
  {
    if ( !under_debugger )
      goto LABEL_53;
    goto LABEL_57;
  }
  if ( v7 == &v34 )
  {
LABEL_48:
    v34 = 0;
    goto LABEL_24;
  }
  v10 = "\n<#Create interrupt vectors and/or entry points#Interrupts:C>";
  while ( 1 )
  {
    v12 = *v10++;
    *v7 = v12;
    if ( !v12 )
      break;
    if ( ++v7 == &v34 )
      goto LABEL_48;
  }
  if ( v7 >= v35 )
    goto LABEL_52;
  if ( v7 == &v34 )
    goto LABEL_48;
  v10 = ">\n\n";
  while ( 1 )
  {
    v13 = *v10++;
    *v7 = v13;
    if ( !v13 )
      break;
    if ( ++v7 == &v34 )
      goto LABEL_48;
  }
LABEL_24:
  if ( !(unsigned int)sub_A670((__int64)v33, &v32, v7, v10) )
    return 0;
  v14 = v3;
  v15 = v3 & 0xFFFE;
  v16 = v14 | 1;
  if ( (v32 & 1) == 0 )
    v16 = v15;
  v17 = v16;
  v18 = v16 & 0xFFFD;
  v19 = v17 | 2;
  if ( (v32 & 2) != 0 )
    v18 = v19;
  v20 = v18;
  v21 = v18 & 0xFFFB;
  v3 = v20 | 4;
  if ( (v32 & 4) == 0 )
    v3 = v21;
  if ( *(_QWORD *)(a1 + 144) )
  {
    v22 = *(void **)(a1 + 136);
    if ( v22 )
    {
      v23 = strlen(*(const char **)(a1 + 136));
      v24 = v23;
      if ( v23 )
      {
        v25 = v23 + 1;
        v26 = v22;
        if ( *(_QWORD *)(a1 + 152) < v23 + 1 )
        {
          v31 = v23 + 1;
          v30 = qvector_reserve();
          v25 = v31;
          *(_QWORD *)(a1 + 136) = v30;
          v26 = (void *)v30;
        }
        *(_QWORD *)(a1 + 144) = v25;
        memmove(v26, v22, v24);
        *(_BYTE *)(*(_QWORD *)(a1 + 136) + v24) = 0;
        goto LABEL_51;
      }
      goto LABEL_50;
    }
  }
  else if ( &dword_D944 )
  {
LABEL_50:
    *(_QWORD *)(a1 + 144) = 0;
LABEL_51:
    netnode_supset();
    sub_9B00((__int64 *)(a1 + 128), v3);
  }
  return v5;
}

