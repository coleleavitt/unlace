__int64 __fastcall sub_CC00(_QWORD *a1, int a2)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // r12
  char v9; // bp
  char v10; // bp
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rdi
  const char *v14; // rsi
  const char *v15; // rax
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  const char *v20; // r14
  size_t v21; // rax
  size_t v22; // r15
  void *v23; // rdi
  void *v24; // rdx
  void *v25; // [rsp+8h] [rbp-10F0h]
  void *dest[4]; // [rsp+10h] [rbp-10E8h] BYREF
  __int64 v27; // [rsp+30h] [rbp-10C8h]
  __int128 v28; // [rsp+38h] [rbp-10C0h]
  __int64 v29; // [rsp+48h] [rbp-10B0h]
  __int128 v30; // [rsp+50h] [rbp-10A8h]
  __int128 v31; // [rsp+60h] [rbp-1098h]
  __int128 v32; // [rsp+70h] [rbp-1088h]
  __int64 v33; // [rsp+80h] [rbp-1078h]
  __int128 v34; // [rsp+88h] [rbp-1070h]
  __int64 v35; // [rsp+98h] [rbp-1060h]
  int v36; // [rsp+A0h] [rbp-1058h]
  char v37; // [rsp+A8h] [rbp-1050h]
  unsigned __int64 v38; // [rsp+10B8h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  v7 = netnode_altval();
  switch ( a2 )
  {
    case 0:
      v9 = sub_BC20(a1 + 227);
      goto LABEL_5;
    case 1:
      memset(dest, 0, sizeof(dest));
      LODWORD(v27) = -1;
      v10 = sub_B130((__int64)a1, (int)dest);
      if ( dest[0] )
      {
        dest[1] = 0;
        qfree();
      }
      if ( !v10 )
        goto LABEL_11;
      memset(dest, 0, sizeof(dest));
      dest[1] = (void *)qvector_reserve();
      dest[2] = &byte_5;
      strcpy((char *)dest[1], "OBJC");
      v27 = 0;
      v29 = 0x186A000000000LL;
      v33 = 0;
      v35 = 0;
      v36 = -1;
      v37 = 0;
      v28 = 0;
      v30 = 0;
      v31 = 0;
      v32 = 0;
      v34 = 0;
      getinf_buf();
      v15 = (const char *)qbasename();
      v20 = v15;
      if ( v15 && (v21 = strlen(v15), (v22 = v21) != 0) )
      {
        v23 = dest[1];
        v24 = (void *)(v21 + 1);
        if ( dest[3] < (void *)(v21 + 1) )
        {
          v25 = (void *)(v21 + 1);
          dest[1] = (void *)qvector_reserve();
          v24 = v25;
          v23 = dest[1];
        }
        dest[2] = v24;
        memmove(v23, v20, v22);
        *((_BYTE *)dest[1] + v22) = 0;
      }
      else
      {
        dest[2] = 0;
      }
      sub_1D820(a1[226], (unsigned int)dest, v16, v17, v18, v19);
      v7 |= 1uLL;
      if ( v33 )
      {
        *(_QWORD *)&v34 = 0;
        qfree();
      }
      if ( v27 )
      {
        *(_QWORD *)&v28 = 0;
        qfree();
      }
      if ( dest[1] )
      {
        dest[2] = 0;
        qfree();
      }
LABEL_22:
      netnode_supdel_all();
      goto LABEL_3;
    case 2:
      v9 = (sub_B230((__int64)(a1 + 265), 0, v3, v4, v5, v6) ^ 1) & 1;
      goto LABEL_5;
    case 3:
      memset(dest, 0, 24);
      if ( netnode_qsupstr() <= 0 )
      {
        sub_EC40(
          (unsigned int)"Error: run code %zu requires argument 'const char *module_path' to be passed via the database. U"
                        "se netnode(%s).supset(1, module_path, '%c') to provide the arg.\n",
          a2,
          (unsigned int)"$ objc",
          82,
          v11,
          v12);
LABEL_11:
        netnode_supdel_all();
        return 0;
      }
      else
      {
        v13 = (__int64)(a1 + 259);
        v14 = src;
        if ( dest[1] )
          v14 = (const char *)dest[0];
        v9 = sub_C2B0(v13, v14);
LABEL_5:
        netnode_supdel_all();
        if ( v9 )
        {
LABEL_3:
          dest[0] = (void *)v7;
          netnode_supset();
          return 1;
        }
        else
        {
          return 0;
        }
      }
    case 4:
      v7 |= 2uLL;
      v9 = sub_28BE0(a1 + 229, a1[1]);
      goto LABEL_5;
    case 5:
      if ( !netnode_altval() )
        v7 |= 4uLL;
      v9 = sub_2B720(a1 + 244);
      goto LABEL_5;
    case 6:
      *(_OWORD *)dest = 0;
      sub_28830(a1 + 229, dest);
      *(_OWORD *)dest = 0;
      sub_28830(a1 + 244, dest);
      goto LABEL_22;
    case 7:
      sub_13AD0((_DWORD)a1, -2, v3, v4, v5, v6);
      netnode_supdel_all();
      goto LABEL_3;
    case 8:
      v9 = sub_C7C0((__int64)a1);
      goto LABEL_5;
    default:
      sub_EC40((unsigned int)"unknown run code: %d\n", a2, v3, v4, v5, v6);
      goto LABEL_11;
  }
}
