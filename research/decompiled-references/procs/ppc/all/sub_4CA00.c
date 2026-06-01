__int64 __fastcall sub_4CA00(__int64 a1, int a2, double a3)
{
  unsigned int v4; // eax
  unsigned int v5; // ebp
  int v6; // eax
  int v7; // r15d
  char *v8; // rdx
  const char *v9; // rcx
  char v10; // al
  const char *v11; // rcx
  char v12; // si
  char v13; // si
  char v14; // si
  __int16 v15; // dx
  __int16 v16; // r15
  __int16 v17; // bx
  __int16 v18; // dx
  __int16 v19; // bx
  __int16 v20; // dx
  __int16 v21; // dx
  int v22; // ebx
  __int16 v23; // dx
  bool v24; // zf
  void *v25; // r14
  size_t v26; // rax
  size_t v27; // r15
  size_t v28; // rdx
  void *v29; // rdi
  _QWORD *v30; // rax
  const char *v31; // rdx
  int v32; // r12d
  __int64 v33; // rax
  const char *v34; // rsi
  __int64 *v35; // r15
  __int64 v36; // rax
  __int64 v37; // rbx
  const char *v38; // rsi
  _DWORD *v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rax
  size_t v43; // [rsp+8h] [rbp-1460h]
  __int16 v44; // [rsp+1Eh] [rbp-144Ah] BYREF
  _BYTE v45[1023]; // [rsp+20h] [rbp-1448h] BYREF
  char v46; // [rsp+41Fh] [rbp-1049h] BYREF
  char v47[4104]; // [rsp+420h] [rbp-1048h] BYREF
  unsigned __int64 v48; // [rsp+1428h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  *(_DWORD *)(a1 + 456) = a2;
  qstrncpy(v47, "ppc.cfg");
  v4 = choose_ioport_device(a1 + 136, v47, 0);
  if ( !(_BYTE)v4 )
  {
    v40 = *(_DWORD **)(a1 + 136);
    if ( *(_QWORD *)(a1 + 152) <= 4u )
    {
      v41 = qvector_reserve(a1 + 136, v40, 5, 1);
      *(_QWORD *)(a1 + 136) = v41;
      v40 = (_DWORD *)v41;
    }
    *(_QWORD *)(a1 + 144) = 5;
    *v40 = 1162760014;
    *(_BYTE *)(*(_QWORD *)(a1 + 136) + 4LL) = 0;
    return 0;
  }
  v5 = v4;
  v6 = qsnprintf(
         v45,
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
         v47);
  v7 = *(_DWORD *)(a1 + 456);
  v8 = &v45[v6];
  v44 = *(_WORD *)(a1 + 456) & 1;
  if ( v8 >= v47 )
    goto LABEL_63;
  v9 = "\n<#Rename port and I/O registers#I/O ports:C>";
  if ( v6 == 1023 )
  {
LABEL_60:
    *v8 = 0;
    if ( (v7 & 2) != 0 )
LABEL_38:
      v44 |= 2u;
  }
  else
  {
    while ( 1 )
    {
      v10 = *v9++;
      *v8 = v10;
      if ( !v10 )
        break;
      if ( ++v8 == &v46 )
        goto LABEL_60;
    }
    if ( (v7 & 2) != 0 )
      goto LABEL_38;
  }
  if ( v8 >= v47 )
  {
    if ( under_debugger )
      goto LABEL_69;
LABEL_64:
    interr(520);
  }
  v11 = "\n<#Adjust the segments#Memory layout:C>";
  if ( v8 == &v46 )
  {
LABEL_39:
    v46 = 0;
    if ( (v7 & 4) == 0 )
      goto LABEL_62;
    v8 = &v46;
    goto LABEL_41;
  }
  while ( 1 )
  {
    v12 = *v11++;
    *v8 = v12;
    if ( !v12 )
      break;
    if ( ++v8 == &v46 )
      goto LABEL_39;
  }
  if ( (v7 & 4) != 0 )
LABEL_41:
    v44 |= 4u;
  if ( v8 >= v47 )
  {
    if ( under_debugger )
      goto LABEL_69;
    goto LABEL_64;
  }
  if ( v8 == &v46 )
  {
LABEL_62:
    v46 = 0;
    goto LABEL_24;
  }
  v11 = "\n<#Create interrupt vectors and/or entry points#Interrupts:C>";
  while ( 1 )
  {
    v13 = *v11++;
    *v8 = v13;
    if ( !v13 )
      break;
    if ( ++v8 == &v46 )
      goto LABEL_62;
  }
  if ( v8 >= v47 )
  {
LABEL_63:
    if ( !under_debugger )
      goto LABEL_64;
LABEL_69:
    BUG();
  }
  if ( v8 == &v46 )
    goto LABEL_62;
  v11 = ">\n\n";
  while ( 1 )
  {
    v14 = *v11++;
    *v8 = v14;
    if ( !v14 )
      break;
    if ( ++v8 == &v46 )
      goto LABEL_62;
  }
LABEL_24:
  if ( !(unsigned int)sub_4C1B0((__int64)v45, &v44, v8, v11) )
    return 0;
  v15 = v7;
  v16 = v7 & 0xFFFE;
  v17 = v15 | 1;
  if ( (v44 & 1) == 0 )
    v17 = v16;
  v18 = v17;
  v19 = v17 & 0xFFFD;
  v20 = v18 | 2;
  if ( (v44 & 2) != 0 )
    v19 = v20;
  v21 = v19;
  LOWORD(v22) = v19 & 0xFFFB;
  v23 = v21 | 4;
  if ( (v44 & 4) != 0 )
    LOWORD(v22) = v23;
  v24 = *(_QWORD *)(a1 + 144) == 0;
  *(_DWORD *)(a1 + 456) = (unsigned __int16)v22;
  if ( v24 )
  {
    if ( s1 )
      goto LABEL_43;
  }
  else
  {
    v25 = *(void **)(a1 + 136);
    if ( v25 )
    {
      v26 = strlen(*(const char **)(a1 + 136));
      v27 = v26;
      if ( v26 )
      {
        v28 = v26 + 1;
        v29 = v25;
        if ( *(_QWORD *)(a1 + 152) < v26 + 1 )
        {
          v43 = v26 + 1;
          v42 = qvector_reserve(a1 + 136, v25, v28, 1);
          v28 = v43;
          *(_QWORD *)(a1 + 136) = v42;
          v29 = (void *)v42;
        }
        *(_QWORD *)(a1 + 144) = v28;
        memmove(v29, v25, v27);
        *(_BYTE *)(*(_QWORD *)(a1 + 136) + v27) = 0;
        v30 = *(_QWORD **)(a1 + 216);
        if ( *(_QWORD *)(a1 + 144) )
          v31 = *(const char **)(a1 + 136);
        else
          v31 = s1;
        goto LABEL_44;
      }
LABEL_43:
      v30 = *(_QWORD **)(a1 + 216);
      v31 = s1;
      *(_QWORD *)(a1 + 144) = 0;
LABEL_44:
      netnode_supset(*v30, -1, v31, 0, 83);
      sub_4B350(a1 + 128, v22 & 0xFFFE, a3);
      v22 = *(_DWORD *)(a1 + 456);
    }
  }
  if ( (v22 & 1) != 0 && *(_QWORD *)(a1 + 168) )
  {
    v32 = 0;
    v33 = 0;
    do
    {
      v34 = s1;
      v35 = (__int64 *)(*(_QWORD *)(a1 + 160) + 88 * v33);
      v36 = *(_QWORD *)(a1 + 440);
      v37 = *v35;
      if ( v36 != -1 )
        v37 = *v35 + v36;
      if ( v35[2] )
        v34 = (const char *)v35[1];
      set_name(v37, v34, 4096);
      v38 = s1;
      if ( v35[5] )
        v38 = (const char *)v35[4];
      ++v32;
      set_cmt(v37, v38, 1);
      v33 = v32;
    }
    while ( (unsigned __int64)v32 < *(_QWORD *)(a1 + 168) );
  }
  return v5;
}
