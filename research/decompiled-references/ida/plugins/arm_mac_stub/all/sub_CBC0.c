__int64 __fastcall sub_CBC0(char *a1, double a2, double a3)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // r12
  const char **v5; // r13
  __int64 (__fastcall **v6)(__int64, const char *, __int64, const char *); // r14
  const char **v7; // r15
  __int64 module_data; // rax
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64); // rax
  __int64 (__fastcall *v12)(__int64, char *, char **); // r12
  __int64 v13; // rax
  __int64 (__fastcall *v14)(__int64, char *, char **); // r12
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rsi
  __int64 i; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r12
  char v25; // al
  const char *v26; // rcx
  char *v27; // rdi
  const char *v28; // rsi
  int v29; // eax
  __int64 v30; // rdx
  const char *v31; // r13
  __int64 m; // rax
  const char *v33; // r15
  __int64 (__fastcall *v34)(__int64, char *, char **); // r14
  size_t v35; // r12
  __int64 v36; // rax
  const char *v37; // rdx
  __int64 v38; // rbp
  __int64 v39; // rbx
  const char *v40; // rax
  __int64 v41; // rsi
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 j; // r12
  __int64 k; // r13
  __int64 v47; // rax
  char *v48; // rdx
  const char *v49; // rax
  char *v50; // [rsp+0h] [rbp-1158h]
  __int64 v51; // [rsp+8h] [rbp-1150h]
  __int64 v52; // [rsp+10h] [rbp-1148h]
  const char *v53; // [rsp+10h] [rbp-1148h]
  __int64 v54; // [rsp+18h] [rbp-1140h]
  __int64 v55; // [rsp+18h] [rbp-1140h]
  char v56; // [rsp+20h] [rbp-1138h]
  unsigned __int64 v57; // [rsp+28h] [rbp-1130h]
  __int64 v58; // [rsp+30h] [rbp-1128h]
  char v59; // [rsp+3Fh] [rbp-1119h]
  __int64 v60; // [rsp+48h] [rbp-1110h]
  __int64 v61; // [rsp+58h] [rbp-1100h]
  const char *v62; // [rsp+60h] [rbp-10F8h] BYREF
  __int128 v63; // [rsp+68h] [rbp-10F0h]
  _OWORD *v64; // [rsp+80h] [rbp-10D8h] BYREF
  __int128 v65; // [rsp+88h] [rbp-10D0h]
  __int64 v66; // [rsp+A0h] [rbp-10B8h]
  __int128 v67; // [rsp+A8h] [rbp-10B0h]
  const char *v68; // [rsp+C0h] [rbp-1098h]
  __int128 v69; // [rsp+C8h] [rbp-1090h]
  char *s1; // [rsp+E0h] [rbp-1078h] BYREF
  __int128 v71; // [rsp+E8h] [rbp-1070h]
  __int128 v72; // [rsp+100h] [rbp-1058h]
  char v73[4104]; // [rsp+110h] [rbp-1048h] BYREF
  unsigned __int64 v74; // [rsp+1118h] [rbp-40h]

  v50 = a1;
  v74 = __readfsqword(0x28u);
  netnode_check();
  if ( (unsigned __int8)netnode_exist() )
    goto LABEL_2;
  module_data = get_module_data();
  v10 = module_data;
  if ( !module_data )
  {
    sub_BE10(0);
    goto LABEL_103;
  }
  v11 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)module_data + 32LL);
  v3 = v11 == sub_BCB0 ? v10 + 272 : ((__int64 (__fastcall *)(__int64, const char *))v11)(v10, "$ dscu");
  netnode_check();
  v60 = 0;
  if ( netnode_hashval() == -1 || netnode_hashval() == -1 )
    goto LABEL_2;
  v12 = *(__int64 (__fastcall **)(__int64, char *, char **))(*(_QWORD *)v3 + 280LL);
  v71 = 0;
  s1 = nullptr;
  v13 = qvector_reserve();
  s1 = (char *)v13;
  *(_QWORD *)&v71 = 7;
  *(_WORD *)(v13 + 4) = 16724;
  *(_DWORD *)v13 = 1094999903;
  s1[6] = 0;
  v55 = v12(v3, v50, &s1);
  if ( s1 )
  {
    *(_QWORD *)&v71 = 0;
    qfree();
  }
  v14 = *(__int64 (__fastcall **)(__int64, char *, char **))(*(_QWORD *)v3 + 280LL);
  v71 = 0;
  s1 = nullptr;
  v15 = qvector_reserve();
  s1 = (char *)v15;
  *(_QWORD *)&v71 = 7;
  *(_DWORD *)v15 = 1163157343;
  *(_WORD *)(v15 + 4) = 21592;
  s1[6] = 0;
  v16 = v14(v3, v50, &s1);
  if ( s1 )
  {
    *(_QWORD *)&v71 = 0;
    qfree();
  }
  LOBYTE(v5) = v16 == -1 || v55 == -1;
  if ( (_BYTE)v5 || v55 == v16 )
  {
LABEL_2:
    LODWORD(v5) = 0;
  }
  else
  {
    v62 = nullptr;
    v63 = 0;
    if ( (*(int (__fastcall **)(__int64, const char **, char *))(*(_QWORD *)v3 + 264LL))(v3, &v62, v50) > 0 )
    {
      v17 = (__int64)&v64;
      v64 = nullptr;
      v65 = 0;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, _OWORD **, char *))(*(_QWORD *)v3 + 272LL))(v3, &v64, v50)
        || (_QWORD)v65 != 16
        || (v17 = -2, netnode_supval() <= 0)
        || v72 - *v64 != 0 )
      {
        sub_CA20((__int64)"AUTOHIDE DATABASE\n"
                          "UUID mismatch between the input file and the image in memory.\n"
                          "\n"
                          "This could mean your dyld_shared_cache is out of sync with the library on disk,\n"
                          "and the database will likely not be rebased properly.\n"
                          "\n"
                          "To ensure proper rebasing, please confirm that the input file was included\n"
                          "the last time update_dyld_shared_cache was run.\n");
      }
      sub_C880((__int64)"Rebasing CODE -> DATA pointers", v17);
      lock_dbgmem_config();
      v18 = 67;
      for ( i = netnode_supfirst(); ; i = netnode_supnext() )
      {
        v24 = i;
        if ( i == -1 || (unsigned __int8)callui(27, v18, v20, v21, v22, v23, v50, v51, v52, v55) )
          break;
        node2ea();
        v25 = netnode_charval();
        if ( v25 == 1 )
        {
          add_dword();
        }
        else if ( v25 == 2 )
        {
          add_qword();
        }
        v18 = v24;
      }
      sub_C950((__int64)"Rebasing DATA -> CODE pointers", v18);
      v41 = 68;
      v6 = (__int64 (__fastcall **)(__int64, const char *, __int64, const char *))&callui;
      for ( j = netnode_supfirst();
            j != -1 && !(unsigned __int8)callui(27, v41, callui, v42, v43, v44, v50, v51, v52, v55);
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
        v41 = j;
      }
      v28 = byte_9 + 1;
      callui(24, 10, 0, &callui, v43, v44, v50, v51, v52, v55);
      unlock_dbgmem_config();
      v66 = 0;
      v67 = 0;
      for ( k = get_first_seg(); k; k = get_next_seg() )
      {
        if ( (*(_BYTE *)(k + 44) & 0x10) != 0 )
        {
          v47 = v67;
          v28 = (const char *)v66;
          if ( *((_QWORD *)&v67 + 1) < (unsigned __int64)(v67 + 1) )
          {
            v66 = qvector_reserve();
            v28 = (const char *)v66;
            v47 = v67;
          }
          *(_QWORD *)&v28[8 * v47] = k;
          *(_QWORD *)&v67 = v67 + 1;
        }
      }
      sub_C880((__int64)"Rebasing scattered segments");
      v26 = (const char *)v63;
      v59 = 1;
      v4 = 0;
      v58 = v67;
      v57 = v63;
      if ( (_QWORD)v67 )
      {
        do
        {
          v56 = (*v6)(27, v28, v30, v26);
          if ( v56 )
            break;
          a2 = 0.0;
          v7 = *(const char ***)(v66 + 8 * v4);
          v71 = 0;
          s1 = nullptr;
          get_segm_name();
          if ( v4 >= v57 )
          {
            v26 = *v7;
            if ( !(_QWORD)v71 )
              goto LABEL_86;
            v27 = s1;
          }
          else
          {
            v26 = v62;
            v30 = 5 * v4;
            v5 = (const char **)&v62[40 * v4];
            if ( v5[3] )
            {
              v28 = v5[2];
              if ( !(_QWORD)v71 )
              {
                if ( *v28 )
                {
                  v26 = *v7;
LABEL_86:
                  sub_CAF0((__int64)"%a: Failed to find segment %s in process memory!\n", 0.0, v26);
                  if ( s1 )
                  {
                    *(_QWORD *)&v71 = 0;
                    qfree();
                  }
                  v59 = 0;
                  break;
                }
LABEL_103:
                v31 = *v5;
                v28 = s;
                if ( v31 != *v7 )
                {
LABEL_92:
                  sub_C950((__int64)"Moving segment %s to %#a", v28, a2);
                  v28 = v31;
                  if ( (unsigned int)move_segm() )
                  {
                    move_segm_strerror();
                    v48 = (char *)s;
                    if ( (_QWORD)v71 )
                      v48 = s1;
                    v28 = *v7;
                    sub_CAF0((__int64)"%a: Failed to rebase segment %s to %a: %s\n", a2, *v7, a3, v48);
                    v59 = v56;
                  }
                }
LABEL_93:
                v27 = s1;
                goto LABEL_34;
              }
            }
            else
            {
              v28 = s;
              if ( !(_QWORD)v71 )
              {
                v31 = *v5;
                if ( *v7 != v31 )
                {
                  v28 = s;
                  goto LABEL_92;
                }
                goto LABEL_93;
              }
            }
            v27 = s1;
            if ( !strcmp(s1, v28) )
            {
              v31 = *v5;
              if ( *v7 != v31 )
                goto LABEL_91;
              goto LABEL_34;
            }
            v26 = *v7;
          }
          v28 = "UNDEF";
          v53 = v26;
          v29 = strcmp(v27, "UNDEF");
          v26 = v53;
          if ( v29 )
            goto LABEL_86;
          v31 = &v53[v54 - v60];
          if ( v31 != v53 )
          {
LABEL_91:
            v28 = v27;
            goto LABEL_92;
          }
LABEL_34:
          if ( v27 )
          {
            *(_QWORD *)&v71 = 0;
            qfree();
          }
          ++v4;
        }
        while ( v4 != v58 );
      }
      (*v6)(24, &byte_9[1], 0, (const char *)v6);
      setinf();
      s1 = v50;
      netnode_supset();
      v68 = nullptr;
      v69 = 0;
      for ( m = netnode_qhashfirst(); m >= 0; m = netnode_qhashnext() )
      {
        v33 = s;
        v34 = *(__int64 (__fastcall **)(__int64, char *, char **))(*(_QWORD *)v3 + 280LL);
        if ( (_QWORD)v69 )
          v33 = v68;
        s1 = nullptr;
        v71 = 0;
        if ( v33 )
        {
          v35 = strlen(v33);
          s1 = (char *)qvector_reserve();
          *(_QWORD *)&v71 = v35 + 1;
          memmove(s1, v33, v35);
          s1[v35] = 0;
        }
        v36 = v34(v3, v50, &s1);
        v61 = v36;
        if ( s1 )
        {
          *(_QWORD *)&v71 = 0;
          qfree();
          v36 = v61;
        }
        if ( v36 != -1 )
          netnode_hashset();
      }
      if ( !v59 )
      {
        dbg_get_input_path();
        v49 = (const char *)qbasename();
        sub_CA20(
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
          v49,
          v73);
      }
      if ( v68 )
      {
        *(_QWORD *)&v69 = 0;
        qfree();
      }
      if ( v66 )
      {
        *(_QWORD *)&v67 = 0;
        qfree();
      }
      if ( v64 )
      {
        *(_QWORD *)&v65 = 0;
        qfree();
      }
      LODWORD(v5) = 1;
    }
    v37 = v62;
    if ( v62 )
    {
      v38 = v63;
      if ( (_QWORD)v63 )
      {
        v39 = 0;
        do
        {
          v40 = &v37[40 * v39];
          if ( *((_QWORD *)v40 + 2) )
          {
            *((_QWORD *)v40 + 3) = 0;
            qfree();
            v37 = v62;
          }
          ++v39;
        }
        while ( v38 != v39 );
      }
      *(_QWORD *)&v63 = 0;
      qfree();
    }
  }
  return (unsigned int)v5;
}

