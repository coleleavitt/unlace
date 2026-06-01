__int64 __fastcall sub_62C0(__int64 a1, __int16 a2)
{
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
  __int16 v14; // ax
  __int16 v15; // bp
  __int16 v16; // ax
  __int16 v17; // cx
  __int16 v18; // ax
  __int16 v19; // cx
  __int16 v20; // cx
  __int16 v21; // ax
  __int16 v22; // cx
  __int16 v23; // bp
  void *v24; // r12
  size_t v25; // rax
  size_t v26; // r15
  size_t v27; // rdx
  void *v28; // rdi
  int v29; // r14d
  __int64 v30; // rax
  _QWORD *v31; // rbp
  __int64 v32; // r12
  __int64 name_ea; // rax
  _DWORD *v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rax
  size_t v38; // [rsp+8h] [rbp-1460h]
  __int16 v39; // [rsp+1Eh] [rbp-144Ah] BYREF
  _BYTE v40[1023]; // [rsp+20h] [rbp-1448h] BYREF
  char v41; // [rsp+41Fh] [rbp-1049h] BYREF
  _BYTE v42[4104]; // [rsp+420h] [rbp-1048h] BYREF
  unsigned __int64 v43; // [rsp+1428h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  getinf_buf();
  qstrlwr();
  qstrncat();
  v4 = choose_ioport_device();
  if ( !(_BYTE)v4 )
  {
    v35 = *(_DWORD **)(a1 + 136);
    if ( *(_QWORD *)(a1 + 152) <= 4u )
    {
      v36 = qvector_reserve();
      *(_QWORD *)(a1 + 136) = v36;
      v35 = (_DWORD *)v36;
    }
    *(_QWORD *)(a1 + 144) = 5;
    *v35 = 1162760014;
    *(_BYTE *)(*(_QWORD *)(a1 + 136) + 4LL) = 0;
    return 0;
  }
  v5 = v4;
  v6 = qsnprintf();
  v7 = &v40[v6];
  v39 = a2 & 1;
  if ( v7 >= v42 )
    goto LABEL_64;
  v8 = "\n<#Rename port and I/O registers#I/O ports:C>";
  if ( v6 == 1023 )
  {
LABEL_61:
    *v7 = 0;
    if ( (a2 & 2) != 0 )
LABEL_37:
      v39 |= 2u;
  }
  else
  {
    while ( 1 )
    {
      v9 = *v8++;
      *v7 = v9;
      if ( !v9 )
        break;
      if ( ++v7 == &v41 )
        goto LABEL_61;
    }
    if ( (a2 & 2) != 0 )
      goto LABEL_37;
  }
  if ( v7 >= v42 )
  {
    if ( under_debugger )
      goto LABEL_69;
LABEL_65:
    interr();
  }
  v10 = "\n<#Adjust the segments#Memory layout:C>";
  if ( v7 == &v41 )
  {
LABEL_38:
    v41 = 0;
    if ( (a2 & 4) == 0 )
      goto LABEL_63;
    v7 = &v41;
    goto LABEL_40;
  }
  while ( 1 )
  {
    v11 = *v10++;
    *v7 = v11;
    if ( !v11 )
      break;
    if ( ++v7 == &v41 )
      goto LABEL_38;
  }
  if ( (a2 & 4) != 0 )
LABEL_40:
    v39 |= 4u;
  if ( v7 >= v42 )
  {
    if ( under_debugger )
      goto LABEL_69;
    goto LABEL_65;
  }
  if ( v7 == &v41 )
  {
LABEL_63:
    v41 = 0;
    goto LABEL_24;
  }
  v10 = "\n<#Create interrupt vectors and/or entry points#Interrupts:C>";
  while ( 1 )
  {
    v12 = *v10++;
    *v7 = v12;
    if ( !v12 )
      break;
    if ( ++v7 == &v41 )
      goto LABEL_63;
  }
  if ( v7 >= v42 )
  {
LABEL_64:
    if ( !under_debugger )
      goto LABEL_65;
LABEL_69:
    BUG();
  }
  if ( v7 == &v41 )
    goto LABEL_63;
  v10 = ">\n\n";
  while ( 1 )
  {
    v13 = *v10++;
    *v7 = v13;
    if ( !v13 )
      break;
    if ( ++v7 == &v41 )
      goto LABEL_63;
  }
LABEL_24:
  if ( !(unsigned int)sub_60F0((__int64)v40, &v39, v7, v10) )
    return 0;
  v14 = a2;
  v15 = a2 & 0xFFFE;
  v16 = v14 | 1;
  if ( (v39 & 1) == 0 )
    v16 = v15;
  v17 = v16;
  v18 = v16 & 0xFFFD;
  v19 = v17 | 2;
  if ( (v39 & 2) != 0 )
    v18 = v19;
  v20 = v18;
  v21 = v18 & 0xFFFB;
  v22 = v20 | 4;
  if ( (v39 & 4) == 0 )
    v22 = v21;
  v23 = v22;
  if ( *(_QWORD *)(a1 + 144) )
  {
    v24 = *(void **)(a1 + 136);
    if ( !v24 )
      goto LABEL_44;
    v25 = strlen(*(const char **)(a1 + 136));
    v26 = v25;
    if ( v25 )
    {
      v27 = v25 + 1;
      v28 = v24;
      if ( *(_QWORD *)(a1 + 152) < v25 + 1 )
      {
        v38 = v25 + 1;
        v37 = qvector_reserve();
        v27 = v38;
        *(_QWORD *)(a1 + 136) = v37;
        v28 = (void *)v37;
      }
      *(_QWORD *)(a1 + 144) = v27;
      memmove(v28, v24, v26);
      *(_BYTE *)(*(_QWORD *)(a1 + 136) + v26) = 0;
      goto LABEL_43;
    }
  }
  else if ( !&dword_8504 )
  {
    goto LABEL_44;
  }
  *(_QWORD *)(a1 + 144) = 0;
LABEL_43:
  netnode_supset();
  sub_5590((__int64 *)(a1 + 128), v23 & 0xFFFE);
LABEL_44:
  sub_6200(a1);
  if ( (v23 & 1) != 0 )
  {
    if ( *(_QWORD *)(a1 + 224) == -1 )
    {
      sub_52D0();
      sub_6200(a1);
    }
    if ( *(_QWORD *)(a1 + 168) )
    {
      v29 = 0;
      v30 = 0;
      do
      {
        v31 = (_QWORD *)(*(_QWORD *)(a1 + 160) + 88 * v30);
        v32 = *v31 + *(_QWORD *)(a1 + 224);
        name_ea = get_name_ea();
        if ( v32 != name_ea )
        {
          if ( name_ea != -1 )
            set_name();
          del_items();
          set_name();
        }
        if ( v31[5] > 1u )
          set_cmt();
        v30 = ++v29;
      }
      while ( (unsigned __int64)v29 < *(_QWORD *)(a1 + 168) );
    }
  }
  return v5;
}

