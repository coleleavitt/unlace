__int64 __fastcall sub_334400(__int64 a1, char *a2, __int64 a3, _QWORD *a4)
{
  const char *v5; // rbx
  char v6; // al
  unsigned int v7; // ebp
  char *v8; // r14
  char *v9; // rax
  const char *v10; // r15
  size_t v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  const char *v16; // rbx
  size_t v17; // rax
  size_t v18; // r14
  char *v19; // rbx
  char *v20; // rax
  int v21; // r15d
  const char *v22; // r14
  const char *file_ext; // rax
  size_t v24; // rax
  size_t v25; // r14
  const char *v26; // rbx
  int v28; // eax
  void *v29; // rdi
  char *v30; // rdx
  __int64 v31; // rax
  char *v32; // rdx
  void *v33; // rdi
  __int64 v34; // rax
  char v35; // [rsp+0h] [rbp-1068h]
  char *s1; // [rsp+18h] [rbp-1050h]
  char *s1a; // [rsp+18h] [rbp-1050h]
  char *s1b; // [rsp+18h] [rbp-1050h]
  char s[4104]; // [rsp+20h] [rbp-1048h] BYREF
  unsigned __int64 v42; // [rsp+1028h] [rbp-40h]

  v5 = a2;
  v42 = __readfsqword(0x28u);
  v6 = *a2;
  if ( *a2 == 45 )
  {
    v7 = 32;
    while ( 1 )
    {
      v8 = (char *)(v5 + 1);
      v9 = strchr(v5 + 1, 58);
      if ( v9 )
      {
        v10 = v9 + 1;
        v11 = v9 - v8;
      }
      else
      {
        v11 = strlen(v5 + 1);
        v10 = &v8[v11];
      }
      if ( v11 == 3 )
      {
        if ( *(_WORD *)v8 != 25966 || v5[3] != 119 )
          goto LABEL_17;
        v7 |= 2u;
        goto LABEL_11;
      }
      if ( v11 == 4 )
      {
        switch ( *(_DWORD *)(v5 + 1) )
        {
          case 0x73727265:
            v7 |= 8u;
            break;
          case 0x74617473:
            v7 |= 0x40u;
            break;
          case 0x66726570:
            v7 |= 0x200000u;
            break;
          case 0x74736574:
            v7 |= 0x8000u;
            break;
          default:
            goto LABEL_17;
        }
        goto LABEL_11;
      }
      if ( v11 == 6 )
        break;
      if ( v11 == 8 )
      {
        if ( *(_QWORD *)(v5 + 1) == 0x73636E756662696CLL )
        {
          *(_DWORD *)(a1 + 604) |= 0x1000000u;
          goto LABEL_11;
        }
LABEL_6:
        if ( *(_DWORD *)v8 != 1818845549 )
          goto LABEL_7;
        goto LABEL_21;
      }
      if ( v11 <= 5 )
        goto LABEL_17;
      if ( *(_DWORD *)v8 != 1818845549 )
      {
LABEL_7:
        if ( *(_DWORD *)v8 == 1768781164 && *(_WORD *)(v5 + 5) == 24942 )
        {
          if ( v5[7] == 64 )
          {
            v28 = 60 * strtol(v5 + 8, nullptr, 10);
            *(_DWORD *)(a1 + 1340) = v28;
            if ( !v28 )
              goto LABEL_17;
          }
          LOBYTE(v7) = v7 | 0x80;
        }
        else
        {
          if ( v11 != 8 || *(_QWORD *)(v5 + 1) != 0x6568636163657375LL )
            goto LABEL_17;
          *(_DWORD *)(a1 + 604) |= 0x8000000u;
        }
        goto LABEL_11;
      }
LABEL_21:
      if ( v5[5] != 61 )
        goto LABEL_7;
      v16 = v5 + 6;
      v17 = strlen(v16);
      v18 = v17;
      if ( v17 )
      {
        v29 = *(void **)(a1 + 952);
        v30 = (char *)(v17 + 1);
        if ( *(_QWORD *)(a1 + 968) < v17 + 1 )
        {
          s1a = (char *)(v17 + 1);
          v31 = qvector_reserve();
          v30 = s1a;
          *(_QWORD *)(a1 + 952) = v31;
          v29 = (void *)v31;
        }
        *(_QWORD *)(a1 + 960) = v30;
        memmove(v29, v16, v18);
        *(_BYTE *)(*(_QWORD *)(a1 + 952) + v18) = 0;
LABEL_11:
        v6 = *v10;
        if ( *v10 != 45 )
          goto LABEL_24;
        goto LABEL_12;
      }
      *(_QWORD *)(a1 + 960) = 0;
      v6 = *v10;
      if ( *v10 != 45 )
        goto LABEL_24;
LABEL_12:
      v5 = v10;
    }
    if ( *(_DWORD *)v8 == 1634955118 && *(_WORD *)(v5 + 5) == 25974 )
    {
      if ( getinf() )
        set_database_flag();
      goto LABEL_11;
    }
    goto LABEL_6;
  }
  v10 = a2;
  v7 = 32;
LABEL_24:
  if ( v6 )
  {
    if ( v6 == 43 )
    {
      v7 |= 1u;
      ++v10;
    }
    v19 = strchr(v10, 58);
    if ( !v19 )
    {
LABEL_17:
      set_database_flag();
      sub_311930(
        (__int64)"AUTOHIDE NONE\n"
                 "Wrong options for the decompiler plugin.\n"
                 "\n"
                 "The format is: -Ohexrays:-option1:-option2...:outfile:func1:func2...\n"
                 "  Valid options are:\n"
                 "    -new    decompile only if output file does not exist\n"
                 "    -nosave do not save to existing database (idb) file\n"
                 "    -errs   send problematic databases to Hex-Rays\n"
                 "    -lumina use Lumina server\n"
                 "    -libfuncs decompile library functions too\n"
                 "    -usecache use cached microcode and pseudocode\n"
                 "    -mail=my@mail.com your email (if -errs option is used)\n"
                 "\n"
                 "  The output file name can be prepended with + to append to it\n"
                 "  If the specified file extension is invalid, .c will be used\n"
                 "\n"
                 "  The functions can be specified by their addresses or names\n"
                 "  The ALL keyword means all non-library non-trivial functions\n"
                 "\n"
                 "Example: \"-Ohexrays:-errs:-mail=john@mail.com:outfile:ALL\"\n"
                 " will decompile all nonlibrary non-trivial (having more than\n"
                 "one instruction) functions to outfile.*. In the case of an\n"
                 "error, the .idb file will be sent to hex-rays.com\n",
        1,
        v12,
        v13,
        v14,
        v15,
        v35);
    }
    qstrncpy();
    v20 = "rs";
    v21 = *(_DWORD *)(a1 + 1336) & 0x4000;
    if ( !v21 )
      v20 = "c";
    v22 = v20;
    file_ext = (const char *)get_file_ext();
    if ( !file_ext || (s1 = (char *)file_ext, strcasecmp(file_ext, v22)) && (v21 || strcasecmp(s1, "cpp")) )
      set_file_ext();
    v24 = strlen(s);
    v25 = v24;
    if ( v24 )
    {
      v32 = (char *)(v24 + 1);
      v33 = *(void **)a3;
      if ( *(_QWORD *)(a3 + 16) < v24 + 1 )
      {
        s1b = (char *)(v24 + 1);
        v34 = qvector_reserve();
        v32 = s1b;
        *(_QWORD *)a3 = v34;
        v33 = (void *)v34;
      }
      *(_QWORD *)(a3 + 8) = v32;
      memmove(v33, s, v25);
      *(_BYTE *)(*(_QWORD *)a3 + v25) = 0;
    }
    else
    {
      *(_QWORD *)(a3 + 8) = 0;
    }
    if ( a4 )
    {
      if ( *a4 )
      {
        a4[1] = 0;
        qfree();
        *a4 = 0;
        a4[2] = 0;
      }
      v26 = v19 + 1;
      if ( strcmp(v26, "ALL") )
        sub_35A1A0(a1, a4, v26);
    }
  }
  return v7;
}

