__int64 __fastcall sub_16760(__int64 a1, int a2)
{
  char *v3; // rbp
  unsigned int v4; // eax
  unsigned int v5; // r12d
  int v6; // eax
  int v7; // r15d
  char *v8; // rdx
  const char *v9; // rcx
  char v10; // al
  const char *v11; // rcx
  char v12; // si
  char v13; // si
  char v14; // si
  __int16 v15; // ax
  __int16 v16; // r15
  __int16 v17; // ax
  __int16 v18; // cx
  __int16 v19; // ax
  __int16 v20; // cx
  __int16 v21; // cx
  unsigned __int16 v22; // ax
  unsigned __int16 v23; // cx
  bool v24; // zf
  void *v25; // r14
  size_t v26; // rax
  size_t v27; // r15
  size_t v28; // rdx
  void *v29; // rdi
  _QWORD *v30; // rax
  const char *v31; // rdx
  _DWORD *v32; // rsi
  __int64 v34; // rax
  __int64 v35; // rax
  size_t v36; // [rsp+8h] [rbp-1460h]
  __int16 v37; // [rsp+1Eh] [rbp-144Ah] BYREF
  _BYTE v38[1023]; // [rsp+20h] [rbp-1448h] BYREF
  char v39; // [rsp+41Fh] [rbp-1049h] BYREF
  char v40[4104]; // [rsp+420h] [rbp-1048h] BYREF
  unsigned __int64 v41; // [rsp+1428h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  *(_DWORD *)(a1 + 5276) = a2;
  v3 = v40;
  qstrncpy(v40, "arc.cfg");
  v4 = choose_ioport_device(a1 + 5152, v40, 0);
  if ( !(_BYTE)v4 )
  {
    v32 = *(_DWORD **)(a1 + 5152);
    if ( *(_QWORD *)(a1 + 5168) <= 4u )
    {
      v34 = qvector_reserve(a1 + 5152, v32, 5, 1);
      *(_QWORD *)(a1 + 5152) = v34;
      v32 = (_DWORD *)v34;
    }
    *(_QWORD *)(a1 + 5160) = 5;
    *v32 = 1162760014;
    *(_BYTE *)(*(_QWORD *)(a1 + 5152) + 4LL) = 0;
    return 0;
  }
  v5 = v4;
  v6 = qsnprintf(
         v38,
         1024,
         "Loaded information type\n"
         "\n"
         "Please specify what information should be loaded from\n"
         "the configuration file %s to the database.\n"
         "\n"
         "If the input file does not contain parts corresponding to\n"
         "the segmentation defined in the config file, you might want\n"
         "to clear the 'memory layout' checkbox or even cancel this\n"
         "dialog box.\n",
         v40);
  v7 = *(_DWORD *)(a1 + 5276);
  v8 = &v38[v6];
  v37 = *(_WORD *)(a1 + 5276) & 1;
  if ( v8 >= v40 )
  {
LABEL_53:
    if ( !under_debugger )
    {
LABEL_54:
      v30 = (_QWORD *)interr(520);
      goto LABEL_55;
    }
LABEL_59:
    BUG();
  }
  v9 = "\n<#Rename port and I/O registers#I/O ports:C>";
  if ( v6 == 1023 )
  {
LABEL_47:
    *v8 = 0;
    if ( (v7 & 2) != 0 )
LABEL_38:
      v37 |= 2u;
  }
  else
  {
    while ( 1 )
    {
      v10 = *v9++;
      *v8 = v10;
      if ( !v10 )
        break;
      if ( ++v8 == &v39 )
        goto LABEL_47;
    }
    if ( (v7 & 2) != 0 )
      goto LABEL_38;
  }
  if ( v8 >= v40 )
  {
    if ( !under_debugger )
      goto LABEL_54;
    goto LABEL_59;
  }
  v11 = "\n<#Adjust the segments#Memory layout:C>";
  if ( v8 == &v39 )
  {
LABEL_39:
    v39 = 0;
    if ( (v7 & 4) == 0 )
      goto LABEL_49;
    v8 = &v39;
    goto LABEL_41;
  }
  while ( 1 )
  {
    v12 = *v11++;
    *v8 = v12;
    if ( !v12 )
      break;
    if ( ++v8 == &v39 )
      goto LABEL_39;
  }
  if ( (v7 & 4) != 0 )
LABEL_41:
    v37 |= 4u;
  if ( v8 >= v40 )
  {
    if ( !under_debugger )
      goto LABEL_54;
    goto LABEL_59;
  }
  if ( v8 == &v39 )
  {
LABEL_49:
    v39 = 0;
    goto LABEL_24;
  }
  v11 = "\n<#Create interrupt vectors and/or entry points#Interrupts:C>";
  while ( 1 )
  {
    v13 = *v11++;
    *v8 = v13;
    if ( !v13 )
      break;
    if ( ++v8 == &v39 )
      goto LABEL_49;
  }
  if ( v8 >= v40 )
    goto LABEL_53;
  if ( v8 == &v39 )
    goto LABEL_49;
  v11 = ">\n\n";
  while ( 1 )
  {
    v14 = *v11++;
    *v8 = v14;
    if ( !v14 )
      break;
    if ( ++v8 == &v39 )
      goto LABEL_49;
  }
LABEL_24:
  if ( !(unsigned int)sub_162E0((__int64)v38, &v37, v8, v11) )
    return 0;
  v15 = v7;
  v16 = v7 & 0xFFFE;
  v17 = v15 | 1;
  if ( (v37 & 1) == 0 )
    v17 = v16;
  v18 = v17;
  v19 = v17 & 0xFFFD;
  v20 = v18 | 2;
  if ( (v37 & 2) != 0 )
    v19 = v20;
  v21 = v19;
  v22 = v19 & 0xFFFB;
  v23 = v21 | 4;
  if ( (v37 & 4) == 0 )
    v23 = v22;
  v24 = *(_QWORD *)(a1 + 5160) == 0;
  LODWORD(v3) = v23;
  *(_DWORD *)(a1 + 5276) = v23;
  if ( v24 )
  {
    if ( needle )
      goto LABEL_51;
  }
  else
  {
    v25 = *(void **)(a1 + 5152);
    if ( v25 )
    {
      v26 = strlen(*(const char **)(a1 + 5152));
      v27 = v26;
      if ( v26 )
      {
        v28 = v26 + 1;
        v29 = v25;
        if ( *(_QWORD *)(a1 + 5168) < v26 + 1 )
        {
          v36 = v26 + 1;
          v35 = qvector_reserve(a1 + 5152, v25, v28, 1);
          v28 = v36;
          *(_QWORD *)(a1 + 5152) = v35;
          v29 = (void *)v35;
        }
        *(_QWORD *)(a1 + 5160) = v28;
        memmove(v29, v25, v27);
        *(_BYTE *)(*(_QWORD *)(a1 + 5152) + v27) = 0;
        v30 = *(_QWORD **)(a1 + 5232);
        if ( *(_QWORD *)(a1 + 5160) )
        {
          v31 = *(const char **)(a1 + 5152);
LABEL_52:
          netnode_supset(*v30, -1, v31, 0, 83);
          sub_151B0(a1 + 5144, (int)v3);
          return v5;
        }
LABEL_55:
        v31 = needle;
        goto LABEL_52;
      }
LABEL_51:
      v30 = *(_QWORD **)(a1 + 5232);
      v31 = needle;
      *(_QWORD *)(a1 + 5160) = 0;
      goto LABEL_52;
    }
  }
  return v5;
}
