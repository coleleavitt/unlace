__int64 __fastcall sub_52190(
        __int64 a1,
        __int64 **a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __m128 si128,
        double a7,
        double a8)
{
  __int64 v10; // rbx
  int v12; // r14d
  __int64 (__fastcall *v13)(__int64, char *); // rax
  char *v14; // rax
  char v15; // al
  __int64 v16; // rdi
  __int64 v17; // rbx
  __int64 (*v18)(void); // rax
  int v19; // r8d
  __int64 **v21; // r14
  bool v22; // zf
  const char *v23; // rdx
  void (__fastcall *v24)(void *); // rax
  __int64 v25; // r14
  void (*v26)(); // rax
  __int64 (__fastcall **v27)(); // rdi
  __int64 v28; // rbp
  __int64 v29; // r14
  __int64 (__fastcall **v30)(); // rbx
  __int64 (__fastcall *v31)(); // rdi
  __int64 (__fastcall *v32)(); // rdi
  __int64 v33; // rdi
  __int64 v34; // r15
  __int64 v35; // rdx
  const char *v36; // r14
  const char *v37; // rdx
  __int64 v38; // r14
  unsigned __int64 j; // r15
  const char *v40; // rdx
  __int64 v41; // r14
  unsigned __int64 v42; // rdx
  __int64 v43; // r15
  __int64 v44; // rsi
  const char *v45; // rsi
  char v46; // al
  __int64 v47; // rdx
  __int64 v48; // rbx
  __int64 v49; // r15
  __int64 *v50; // rcx
  __int64 v51; // rdi
  __int64 (__fastcall *v52)(__int64, __int64 (__fastcall ***)()); // rax
  unsigned __int8 *v53; // rax
  __int64 v54; // r15
  unsigned __int64 i; // r14
  const char *v56; // rdx
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rax
  unsigned __int64 v60; // r15
  const char *v61; // rcx
  __int64 v62; // r14
  __int64 v63; // rax
  const char *v64; // rdx
  unsigned __int8 **v65; // r8
  __int64 v66; // rcx
  int v67; // edx
  int v68; // edx
  int v70; // [rsp+Ch] [rbp-ECh]
  __int64 v71; // [rsp+10h] [rbp-E8h]
  __int64 v72; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v73; // [rsp+18h] [rbp-E0h]
  char v74; // [rsp+18h] [rbp-E0h]
  char v75; // [rsp+27h] [rbp-D1h] BYREF
  __int64 **v76; // [rsp+28h] [rbp-D0h]
  __int64 v77; // [rsp+30h] [rbp-C8h] BYREF
  __int128 v78; // [rsp+38h] [rbp-C0h] BYREF
  __int64 (__fastcall **v79)(); // [rsp+50h] [rbp-A8h] BYREF
  __int128 v80; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v81; // [rsp+68h] [rbp-90h]
  _OWORD v82[2]; // [rsp+70h] [rbp-88h] BYREF
  __int64 v83; // [rsp+90h] [rbp-68h]
  __int128 v84; // [rsp+98h] [rbp-60h]
  char v85; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v86; // [rsp+B8h] [rbp-40h]

  v10 = a1;
  v86 = __readfsqword(0x28u);
  switch ( a3 )
  {
    case 5:
    case 27:
      v12 = 1;
      goto LABEL_3;
    case 6:
    case 9:
    case 21:
    case 22:
      v12 = 2;
      goto LABEL_3;
    case 7:
    case 25:
      v12 = -1;
      goto LABEL_3;
    case 8:
      *((_QWORD *)&v80 + 1) = a1;
      si128.m128_u64[0] = 0;
      v33 = *(_QWORD *)(a1 + 320);
      *(_QWORD *)&v80 = a2;
      v79 = off_AA320;
      v81 = 0;
      v82[0] = 0;
      (*(void (__fastcall **)(__int64, __int64 **, _QWORD, __int64 (__fastcall ***)()))(*(_QWORD *)v33 + 16LL))(
        v33,
        a2,
        0,
        &v79);
      if ( !*(_QWORD *)&v82[0] )
        goto LABEL_83;
      v34 = v81;
      si128.m128_u64[0] = 0;
      v77 = 0;
      v78 = 0;
      v35 = *(_QWORD *)(v81 + 8);
      if ( *(_QWORD *)&v82[0] <= 2u )
      {
        if ( v35 )
        {
          v36 = *(const char **)v81;
          goto LABEL_101;
        }
LABEL_107:
        v36 = src;
LABEL_102:
        sub_37FD0(&v77, (__int64)"__annotation(\"%s\"", v36);
        v54 = 24;
        for ( i = 1; i < *(_QWORD *)&v82[0]; v54 += 24 )
        {
          v56 = src;
          if ( *(_QWORD *)(v54 + v81 + 8) )
            v56 = *(const char **)(v54 + v81);
          sub_47240(&v77, (__int64)", \"%s\"", v56);
          ++i;
        }
        goto LABEL_74;
      }
      if ( !v35 )
        goto LABEL_107;
      v36 = *(const char **)v81;
      if ( !strcmp(*(const char **)v81, "Debug")
        && *(_QWORD *)(v34 + 32)
        && !strcmp(*(const char **)(v34 + 24), "AssertFail") )
      {
        v37 = src;
        if ( *(_QWORD *)(v34 + 56) )
          v37 = *(const char **)(v34 + 48);
        sub_37FD0(&v77, (__int64)"NT_ASSERT(\"%s\"", v37);
        v38 = 72;
        for ( j = 3; j < *(_QWORD *)&v82[0]; v38 += 24 )
        {
          v40 = src;
          if ( *(_QWORD *)(v38 + v81 + 8) )
            v40 = *(const char **)(v38 + v81);
          sub_47240(&v77, (__int64)",\n  \"%s\"", v40);
          ++j;
        }
LABEL_74:
        v41 = v78;
        if ( (_QWORD)v78 )
        {
          v42 = v78 + 1;
          v43 = v78;
          v41 = v78 - 1;
        }
        else
        {
          v42 = 2;
          v43 = 1;
        }
        v44 = v77;
        goto LABEL_77;
      }
LABEL_101:
      if ( strcmp(v36, "TMF:") )
        goto LABEL_102;
      v58 = qvector_reserve(&v77, 0, 20, 1);
      si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_94050);
      v77 = v58;
      *(_QWORD *)&v78 = 20;
      *(__m128 *)v58 = si128;
      *(_DWORD *)(v58 + 15) = 574244429;
      v44 = v77;
      *(_BYTE *)(v77 + 19) = 0;
      if ( *(_QWORD *)&v82[0] > 1u )
      {
        v74 = 1;
        v59 = v81;
        v60 = 1;
        do
        {
          v61 = src;
          v62 = 24 * v60;
          v63 = 24 * v60 + v59;
          if ( *(_QWORD *)(v63 + 8) )
            v61 = *(const char **)v63;
          v64 = "\n  ";
          if ( !v74 )
            v64 = " ";
          sub_47240(&v77, (__int64)",%s\"%s\"", v64, v61);
          v59 = v81;
          v65 = (unsigned __int8 **)(v81 + v62);
          if ( *(_QWORD *)(v81 + v62 + 8) )
          {
            v66 = (__int64)*v65;
            v67 = **v65;
            if ( v67 != 123 || *(_BYTE *)(v66 + 1) )
            {
              v68 = v67 - 125;
              if ( !v68 )
                v68 = *(unsigned __int8 *)(v66 + 1);
              v74 |= v68 == 0;
            }
            else
            {
              v74 = 0;
            }
          }
          ++v60;
        }
        while ( v60 < *(_QWORD *)&v82[0] );
        v44 = v77;
      }
      v41 = v78;
      if ( (_QWORD)v78 )
      {
        v42 = v78 + 1;
        v43 = v78;
        v41 = v78 - 1;
      }
      else
      {
        v42 = 2;
        v43 = 1;
      }
LABEL_77:
      if ( *((_QWORD *)&v78 + 1) < v42 )
      {
        v73 = v42;
        v77 = qvector_reserve(&v77, v44, v42, 1);
        v42 = v73;
        v44 = v77;
      }
      *(_QWORD *)&v78 = v42;
      *(_BYTE *)(v44 + v43) = 0;
      v45 = src;
      *(_BYTE *)(v77 + v41) = 41;
      if ( (_QWORD)v78 )
        v45 = (const char *)v77;
      set_cmt(a4, v45, 0);
      if ( v77 )
      {
        *(_QWORD *)&v78 = 0;
        qfree(v77);
      }
LABEL_83:
      v46 = segtype(a4);
      v47 = v81;
      v79 = off_AA320;
      v12 = 2 * (v46 == 2);
      if ( v81 )
      {
        if ( *(_QWORD *)&v82[0] )
        {
          v72 = v10;
          v48 = 0;
          v49 = *(_QWORD *)&v82[0];
          do
          {
            v50 = (__int64 *)(v47 + 24 * v48);
            v51 = *v50;
            if ( *v50 )
            {
              v50[1] = 0;
              qfree(v51);
              v47 = v81;
            }
            ++v48;
          }
          while ( v49 != v48 );
          v10 = v72;
        }
        *(_QWORD *)&v82[0] = 0;
        qfree(v47);
      }
LABEL_3:
      if ( *(_QWORD *)(a5 + 8) && !strncmp(*(const char **)a5, "__imp__", 7u) )
      {
        if ( (unsigned __int8)getinf_flag(3, 4) )
          create_data(a4, 805306368, 8, -1);
        else
          create_data(a4, 0x20000000, 4, -1);
        v12 = -1;
      }
      v13 = (__int64 (__fastcall *)(__int64, char *))(*a2)[4];
      if ( v13 == sub_2DC80 )
      {
        v14 = (char *)sub_2CEC0(a2[2], 16, 1u, 512);
        if ( !v14 )
          goto LABEL_9;
        v15 = *v14;
        v75 = v15;
      }
      else
      {
        if ( (unsigned int)v13((__int64)a2, &v75) )
          goto LABEL_9;
        v15 = v75;
      }
      if ( v15 )
      {
        if ( (get_aflags(a4) & 0x10000000) != 0 )
        {
          clr_abits(a4, 0x10000000);
          create_insn(a4, 0);
        }
      }
      else
      {
        v12 = -1;
      }
LABEL_9:
      v16 = *(_QWORD *)(v10 + 320);
      if ( (*(_BYTE *)(*(_QWORD *)(v16 + 8) + 112LL) & 2) != 0 )
      {
        v77 = 1;
        v78 = 0u;
        if ( (unsigned __int8)sub_4F630(v10, (__int64)&v77, a2, nullptr, *(double *)si128.m128_u64, a7, a8) )
        {
          if ( a3 == 7 )
          {
            v25 = v78;
            if ( *(_QWORD *)(a5 + 8) && !strcmp(*(const char **)a5, "_NAME_") && (_BYTE)v25 == 50 )
            {
              v79 = nullptr;
              get_stock_tinfo(&v79, 10);
              copy_tinfo_t(&v78, &v79);
              clear_tinfo_t(&v79);
              v25 = v78;
            }
          }
          else
          {
            if ( a3 == 5 )
            {
              v21 = (__int64 **)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v10 + 320) + 128LL))(
                                  *(_QWORD *)(v10 + 320),
                                  0,
                                  0);
              v76 = v21;
              if ( !((unsigned int (__fastcall *)(__int64 **, __int64 **))(*a2)[31])(a2, v21) )
              {
                v22 = *(_QWORD *)(a5 + 8) == 0;
                v23 = src;
                v79 = (__int64 (__fastcall **)())(&dword_0 + 1);
                v80 = 0u;
                if ( !v22 )
                  v23 = *(const char **)a5;
                if ( (unsigned int)sub_4CB40((__int64 *)v10, (__int64)&v79, v23, v21, (__int64)a2, 13) == 1 )
                {
                  v57 = v80;
                  *(_QWORD *)&v80 = v78;
                  *(_QWORD *)&v78 = v57;
                }
                clear_tinfo_t(&v80);
              }
              if ( v21 )
              {
                v24 = (void (__fastcall *)(void *))(*v21)[37];
                if ( v24 == sub_243F0 )
                  operator delete(v21, 0x18u);
                else
                  v24(v21);
              }
            }
            v25 = v78;
          }
          if ( (get_tinfo_property(v25, 2) & 0xF) == 0xC || a3 == 5 )
          {
            (*(void (__fastcall **)(__int64, __int64 **, __int64))(*(_QWORD *)v10 + 64LL))(v10, a2, a4);
            v12 = 1;
          }
          else
          {
            v12 = -1;
          }
          if ( *(_DWORD *)(v10 + 332) )
          {
            si128.m128_u64[0] = 0;
            v79 = nullptr;
            v81 = 0;
            memset(v82, 0, sizeof(v82));
            v83 = 0;
            v85 = 16;
            v80 = 0;
            v84 = 0;
            if ( !(unsigned __int8)get_tinfo_details(v78, 12, &v79) || (_QWORD)v80 || (v82[0] & 0x3F) != 1 )
            {
              v26 = *(void (**)())(*(_QWORD *)v10 + 56LL);
              if ( v26 != nullsub_8 )
                ((void (__fastcall *)(__int64, __int64, _QWORD, _QWORD, __int128 *))v26)(v10, a4, 0, 0, &v78);
              apply_tinfo(a4, &v78, 4);
            }
            if ( v83 )
            {
              *(_QWORD *)&v84 = 0;
              qfree(v83);
            }
            cleanup_argloc((char *)v82 + 8);
            clear_tinfo_t(v82);
            v27 = v79;
            if ( v79 )
            {
              if ( (_QWORD)v80 )
              {
                v71 = v10;
                v28 = 0;
                v70 = v12;
                v29 = v80;
                do
                {
                  v30 = &v27[10 * v28];
                  clear_tinfo_t(v30 + 8);
                  v31 = v30[5];
                  if ( v31 )
                  {
                    v30[6] = nullptr;
                    qfree(v31);
                  }
                  v32 = v30[2];
                  if ( v32 )
                  {
                    v30[3] = nullptr;
                    qfree(v32);
                  }
                  ++v28;
                  cleanup_argloc(v30);
                  v27 = v79;
                }
                while ( v29 != v28 );
                v12 = v70;
                v10 = v71;
              }
              *(_QWORD *)&v80 = 0;
              qfree(v27);
            }
          }
        }
        else if ( v12 == 1 )
        {
          auto_mark_range(a4, a4 + 1, 20);
          auto_mark_range(a4, a4 + 1, 30);
        }
        clear_tinfo_t(&v78);
        v16 = *(_QWORD *)(v10 + 320);
      }
      v17 = *(_QWORD *)(v10 + 8);
      v18 = *(__int64 (**)(void))(*(_QWORD *)v16 + 112LL);
      if ( (char *)v18 == (char *)sub_23F30 )
        v19 = *(_DWORD *)(v16 + 16);
      else
        v19 = v18();
      sub_49200(v17, a4, a5, v12, v19, *(double *)si128.m128_u64, a7, a8);
      return 1;
    case 10:
      v52 = (__int64 (__fastcall *)(__int64, __int64 (__fastcall ***)()))(*a2)[10];
      if ( (char *)v52 == (char *)sub_2DC40 )
      {
        v53 = (unsigned __int8 *)sub_2CEC0(a2[2], 128, 1u, 512);
        if ( !v53 )
          goto LABEL_2;
        v12 = *v53;
      }
      else
      {
        if ( (unsigned int)v52((__int64)a2, &v79) )
          goto LABEL_2;
        v12 = (unsigned __int8)v79;
      }
      goto LABEL_3;
    default:
LABEL_2:
      v12 = 0;
      goto LABEL_3;
  }
}

