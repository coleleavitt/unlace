__int64 __fastcall sub_141C0(__int64 a1, double a2, double a3)
{
  __int64 (*v3)(); // r12
  __int64 module_data; // rax
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64); // rax
  __int64 v8; // rbx
  __int64 (*v9)(); // r12
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 (*v13)(); // rax
  __int64 (*v14)(); // rax
  __int64 v15; // rsi
  __int64 i; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r12
  char v22; // al
  __int64 v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 j; // r12
  const char *v28; // rsi
  __int64 k; // r13
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  const char *v34; // rcx
  unsigned __int64 v35; // r12
  const char **v36; // r15
  const char **v37; // r13
  __int64 m; // rax
  __int64 v39; // rax
  const char *v40; // r15
  __int64 (*v41)(); // r14
  size_t v42; // r12
  char *v43; // rdi
  int v44; // eax
  const char *v45; // r13
  char *v46; // rdx
  const char *v47; // rdx
  __int64 v48; // rbp
  __int64 v49; // rbx
  const char *v50; // rax
  const char *v51; // rax
  struct _Unwind_Exception *v52; // rax
  struct _Unwind_Exception *v53; // rbx
  __int64 v54; // [rsp+0h] [rbp-1158h]
  __int64 v55; // [rsp+0h] [rbp-1158h]
  char *v56; // [rsp+0h] [rbp-1158h]
  char *v57; // [rsp+8h] [rbp-1150h]
  char *v58; // [rsp+8h] [rbp-1150h]
  __int64 v59; // [rsp+10h] [rbp-1148h]
  const char *v60; // [rsp+10h] [rbp-1148h]
  __int64 v61; // [rsp+18h] [rbp-1140h]
  __int64 v62; // [rsp+18h] [rbp-1140h]
  __int64 v63; // [rsp+20h] [rbp-1138h]
  unsigned __int64 v64; // [rsp+28h] [rbp-1130h]
  __int64 v65; // [rsp+30h] [rbp-1128h]
  char v66; // [rsp+3Fh] [rbp-1119h]
  __int64 v67; // [rsp+58h] [rbp-1100h]
  const char *v68; // [rsp+60h] [rbp-10F8h] BYREF
  __int128 v69; // [rsp+68h] [rbp-10F0h]
  _OWORD *v70; // [rsp+80h] [rbp-10D8h] BYREF
  __int128 v71; // [rsp+88h] [rbp-10D0h]
  __int64 v72; // [rsp+A0h] [rbp-10B8h]
  __int128 v73; // [rsp+A8h] [rbp-10B0h]
  const char *v74; // [rsp+C0h] [rbp-1098h]
  __int128 v75; // [rsp+C8h] [rbp-1090h]
  char *s1; // [rsp+E0h] [rbp-1078h] BYREF
  __int128 v77; // [rsp+E8h] [rbp-1070h]
  __int128 v78; // [rsp+100h] [rbp-1058h]
  char v79[4104]; // [rsp+110h] [rbp-1048h] BYREF
  unsigned __int64 v80; // [rsp+1118h] [rbp-40h]

  v54 = a1;
  v80 = __readfsqword(0x28u);
  netnode_check();
  if ( (unsigned __int8)netnode_exist() )
    goto LABEL_2;
  module_data = get_module_data();
  v6 = module_data;
  if ( !module_data )
  {
    sub_12B90();
    v53 = v52;
    if ( s1 )
    {
      *(_QWORD *)&v77 = 0;
      qfree();
    }
    _Unwind_Resume(v53);
  }
  v7 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)module_data + 32LL);
  v8 = v7 == sub_12A40 ? v6 + 488 : ((__int64 (__fastcall *)(__int64, const char *))v7)(v6, "$ dscu");
  netnode_check();
  if ( netnode_hashval() == -1 || netnode_hashval() == -1 )
    goto LABEL_2;
  v9 = *(__int64 (**)())(*(_QWORD *)v8 + 280LL);
  v77 = 0;
  v10 = qvector_reserve();
  s1 = (char *)v10;
  *(_QWORD *)&v77 = 7;
  *(_DWORD *)v10 = 1094999903;
  *(_WORD *)(v10 + 4) = 16724;
  v63 = -1;
  s1[6] = 0;
  if ( v9 != sub_129D0 )
    v63 = ((__int64 (__fastcall *)(__int64, __int64, char **))v9)(v8, v54, &s1);
  if ( s1 )
  {
    *(_QWORD *)&v77 = 0;
    qfree();
  }
  v3 = *(__int64 (**)())(*(_QWORD *)v8 + 280LL);
  v77 = 0;
  s1 = nullptr;
  v11 = qvector_reserve();
  s1 = (char *)v11;
  *(_QWORD *)&v77 = 7;
  *(_DWORD *)v11 = 1163157343;
  *(_WORD *)(v11 + 4) = 21592;
  s1[6] = 0;
  if ( v3 == sub_129D0 )
  {
    if ( s1 )
    {
      *(_QWORD *)&v77 = 0;
      qfree();
    }
LABEL_2:
    LODWORD(v3) = 0;
    return (unsigned int)v3;
  }
  v12 = ((__int64 (__fastcall *)(__int64, __int64, char **))v3)(v8, v54, &s1);
  if ( s1 )
  {
    *(_QWORD *)&v77 = 0;
    qfree();
  }
  LOBYTE(v3) = v12 == -1 || v63 == -1;
  if ( (_BYTE)v3 || v63 == v12 )
    goto LABEL_2;
  v68 = nullptr;
  v69 = 0;
  v13 = *(__int64 (**)())(*(_QWORD *)v8 + 264LL);
  if ( v13 == sub_129B0 )
    return (unsigned int)v3;
  if ( ((int (__fastcall *)(__int64, const char **, __int64))v13)(v8, &v68, v54) <= 0 )
    goto LABEL_102;
  v70 = nullptr;
  v71 = 0;
  v14 = *(__int64 (**)())(*(_QWORD *)v8 + 272LL);
  if ( v14 == sub_129C0
    || !((unsigned __int8 (__fastcall *)(__int64, _OWORD **, __int64))v14)(v8, &v70, v54)
    || (_QWORD)v71 != 16
    || netnode_supval() <= 0
    || v78 - *v70 != 0 )
  {
    sub_14020((__int64)"AUTOHIDE DATABASE\n"
                       "UUID mismatch between the input file and the image in memory.\n"
                       "\n"
                       "This could mean your dyld_shared_cache is out of sync with the library on disk,\n"
                       "and the database will likely not be rebased properly.\n"
                       "\n"
                       "To ensure proper rebasing, please confirm that the input file was included\n"
                       "the last time update_dyld_shared_cache was run.\n");
  }
  sub_13E80((__int64)"Rebasing CODE -> DATA pointers");
  lock_dbgmem_config();
  v15 = 67;
  for ( i = netnode_supfirst(); ; i = netnode_supnext() )
  {
    v21 = i;
    if ( i == -1 || (unsigned __int8)callui(27, v15, v17, v18, v19, v20, v54, v57, v59, v61) )
      break;
    node2ea();
    v22 = netnode_charval();
    if ( v22 == 1 )
    {
      add_dword();
    }
    else if ( v22 == 2 )
    {
      add_qword();
    }
    v15 = v21;
  }
  sub_13F50((__int64)"Rebasing DATA -> CODE pointers", v15);
  v23 = 68;
  for ( j = netnode_supfirst();
        j != -1 && !(unsigned __int8)callui(27, v23, callui, v24, v25, v26, v54, v57, v59, v61);
        j = netnode_supnext() )
  {
    node2ea();
    if ( (unsigned __int8)netnode_charval() == 1 )
    {
      if ( (unsigned __int8)getinf_flag() )
        add_qword();
      else
        add_dword();
    }
    v23 = j;
  }
  v28 = byte_9 + 1;
  callui(24, 10, 0, &callui, v25, v26, v54, v57, v59, v61);
  unlock_dbgmem_config();
  v72 = 0;
  v73 = 0;
  for ( k = get_first_seg(); k; k = get_next_seg() )
  {
    if ( (*(_BYTE *)(k + 44) & 0x10) != 0 )
    {
      v30 = v73;
      v28 = (const char *)v72;
      if ( *((_QWORD *)&v73 + 1) < (unsigned __int64)(v73 + 1) )
      {
        v72 = qvector_reserve();
        v28 = (const char *)v72;
        v30 = v73;
      }
      *(_QWORD *)&v28[8 * v30] = k;
      *(_QWORD *)&v73 = v73 + 1;
    }
  }
  sub_13E80((__int64)"Rebasing scattered segments");
  v34 = (const char *)v69;
  v66 = 1;
  v35 = 0;
  v65 = v73;
  v64 = v69;
  if ( (_QWORD)v73 )
  {
    do
    {
      v62 = callui(27, v28, v31, v34, v32, v33, v55, v58, v60, v62);
      if ( (_BYTE)v62 )
        break;
      v36 = *(const char ***)(v72 + 8 * v35);
      v77 = 0;
      s1 = nullptr;
      get_segm_name();
      if ( v35 >= v64 )
      {
        v34 = *v36;
        if ( !(_QWORD)v77 )
          goto LABEL_55;
        v43 = s1;
      }
      else
      {
        v34 = v68;
        v31 = 5 * v35;
        v37 = (const char **)&v68[40 * v35];
        if ( v37[3] )
        {
          v28 = v37[2];
          if ( !(_QWORD)v77 )
          {
            if ( *v28 )
            {
              v34 = *v36;
LABEL_55:
              sub_140F0((__int64)"%a: Failed to find segment %s in process memory!\n", 0.0, v34);
              if ( s1 )
              {
                *(_QWORD *)&v77 = 0;
                qfree();
              }
              v66 = 0;
              break;
            }
            v45 = *v37;
            if ( *v36 != v45 )
            {
              v28 = src;
              goto LABEL_84;
            }
            goto LABEL_85;
          }
        }
        else
        {
          v28 = src;
          if ( !(_QWORD)v77 )
          {
            v45 = *v37;
            v28 = src;
            if ( *v36 != v45 )
              goto LABEL_84;
            goto LABEL_85;
          }
        }
        v58 = s1;
        v43 = s1;
        if ( !strcmp(s1, v28) )
        {
          v45 = *v37;
          if ( v45 != *v36 )
            goto LABEL_83;
          goto LABEL_78;
        }
        v34 = *v36;
      }
      v28 = "UNDEF";
      v60 = v34;
      v58 = v43;
      v44 = strcmp(v43, "UNDEF");
      v34 = v60;
      if ( v44 )
        goto LABEL_55;
      v45 = &v60[v63];
      if ( v60 != &v60[v63] )
      {
LABEL_83:
        v28 = v43;
LABEL_84:
        sub_13F50((__int64)"Moving segment %s to %#a", v28, 0.0);
        v28 = v45;
        if ( (unsigned int)move_segm() )
        {
          move_segm_strerror();
          v46 = (char *)src;
          if ( (_QWORD)v77 )
            v46 = s1;
          v28 = *v36;
          sub_140F0((__int64)"%a: Failed to rebase segment %s to %a: %s\n", 0.0, *v36, a3, v46);
          v66 = 0;
        }
LABEL_85:
        v43 = s1;
      }
LABEL_78:
      if ( v43 )
      {
        *(_QWORD *)&v77 = 0;
        qfree();
      }
      ++v35;
    }
    while ( v35 != v65 );
  }
  callui(24, 10, 0, &callui, v32, v33, v55, v58, v60, v62);
  setinf();
  s1 = v56;
  netnode_supset();
  v74 = nullptr;
  v75 = 0;
  for ( m = netnode_qhashfirst(); m >= 0; m = netnode_qhashnext() )
  {
    v40 = src;
    v41 = *(__int64 (**)())(*(_QWORD *)v8 + 280LL);
    if ( (_QWORD)v75 )
      v40 = v74;
    s1 = nullptr;
    v77 = 0;
    if ( v40 )
    {
      v42 = strlen(v40);
      s1 = (char *)qvector_reserve();
      *(_QWORD *)&v77 = v42 + 1;
      memmove(s1, v40, v42);
      s1[v42] = 0;
    }
    if ( v41 == sub_129D0 )
    {
      v67 = -1;
      if ( !s1 )
        continue;
LABEL_60:
      *(_QWORD *)&v77 = 0;
      qfree();
      v39 = v67;
      goto LABEL_61;
    }
    v39 = ((__int64 (__fastcall *)(__int64, char *, char **))v41)(v8, v56, &s1);
    v67 = v39;
    if ( s1 )
      goto LABEL_60;
LABEL_61:
    if ( v39 != -1 )
      netnode_hashset();
  }
  if ( !v66 )
  {
    dbg_get_input_path();
    v51 = (const char *)qbasename();
    sub_14020(
      (__int64)"AUTOHIDE DATABASE\n"
               "Some loader segments were not rebased properly.\n"
               "\n"
               "This error might occur if you are debugging a dylib from /System/Library or /usr/lib,\n"
               "since these files have different segment info when they are loaded from dyld_shared_cache.\n"
               "\n"
               "To ensure more accurate segment info when debugging, you can:\n"
               "\n"
               "  1. open the dyld_shared_cache in IDA (usually found in /var/db/dyld/)\n"
               "  2. select the 'Apple DYLD cache (single module)' option\n"
               "  3. select %s from the list of modules\n"
               "  4. use %s as the input file path in the Process Options dialog\n",
      v51,
      v79);
  }
  if ( v74 )
  {
    *(_QWORD *)&v75 = 0;
    qfree();
  }
  if ( v72 )
  {
    *(_QWORD *)&v73 = 0;
    qfree();
  }
  if ( v70 )
  {
    *(_QWORD *)&v71 = 0;
    qfree();
  }
  LODWORD(v3) = 1;
LABEL_102:
  v47 = v68;
  if ( v68 )
  {
    v48 = v69;
    if ( (_QWORD)v69 )
    {
      v49 = 0;
      do
      {
        v50 = &v47[40 * v49];
        if ( *((_QWORD *)v50 + 2) )
        {
          *((_QWORD *)v50 + 3) = 0;
          qfree();
          v47 = v68;
        }
        ++v49;
      }
      while ( v48 != v49 );
    }
    *(_QWORD *)&v69 = 0;
    qfree();
  }
  return (unsigned int)v3;
}

