__int64 __fastcall sub_61340(
        __int64 a1,
        int a2,
        const void *a3,
        __int64 *a4,
        int a5,
        double a6,
        __m128i a7,
        double a8,
        __m128 a9)
{
  size_t v12; // rax
  size_t v13; // rbp
  bool v14; // zf
  __int64 v15; // rdx
  __int64 v16; // rax
  const char *v17; // rdx
  __int64 v18; // rax
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int v22; // eax
  int v23; // edx
  __int64 v24; // rcx
  __int64 v25; // rbp
  __int64 v26; // rax
  int v27; // edx
  int v28; // ecx
  int v29; // r8d
  __int64 v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // r12
  __int64 i; // rbp
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r12
  __int64 j; // rbp
  _QWORD *v38; // rax
  __int64 v39; // rax
  void (*v40)(); // rax
  int v41; // edx
  int v42; // edx
  int v43; // ecx
  int v44; // r8d
  int v45; // ecx
  int v46; // r8d
  __int64 (*v47)(); // rdx
  __int64 (*v48)(); // rax
  __int64 result; // rax
  const char *v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rdx
  const char *v53; // rax
  void *v54; // rdi
  size_t v55; // r14
  int v56; // edx
  int v57; // ecx
  int v58; // r8d
  int v59; // r9d
  char v60; // al
  __int64 v61; // rcx
  const char *v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rax
  const char *v74; // rcx
  __int64 v75; // rcx
  int v76; // ecx
  int v77; // r8d
  unsigned __int64 *v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rax
  int v81; // ecx
  __int64 v82; // rsi
  __int64 v83; // rax
  __int64 not_tail; // r12
  __int64 v85; // rdi
  bool v86; // al
  __int64 v87; // rbp
  char v88; // r12
  __int64 v89; // [rsp+0h] [rbp-1E8h] BYREF
  __int64 name_ea; // [rsp+8h] [rbp-1E0h] BYREF
  __int64 v91; // [rsp+10h] [rbp-1D8h] BYREF
  __int128 v92; // [rsp+18h] [rbp-1D0h]
  __int64 v93; // [rsp+30h] [rbp-1B8h] BYREF
  __int128 v94; // [rsp+38h] [rbp-1B0h]
  __int128 v95; // [rsp+50h] [rbp-198h] BYREF
  __int128 v96; // [rsp+60h] [rbp-188h]
  __int64 v97; // [rsp+70h] [rbp-178h]
  char v98; // [rsp+78h] [rbp-170h] BYREF
  unsigned __int64 v99; // [rsp+1B8h] [rbp-30h] BYREF

  v99 = __readfsqword(0x28u);
  sub_70460(a1, (unsigned int)"GDB: handle process start %d\n", a2, (_DWORD)a4, a5);
  *(_DWORD *)(a1 + 656) = a2;
  if ( a3 && (v12 = strlen((const char *)a3), (v13 = v12) != 0) )
  {
    v54 = *(void **)(a1 + 1512);
    v55 = v12 + 1;
    if ( *(_QWORD *)(a1 + 1528) < v12 + 1 )
    {
      v83 = qvector_reserve();
      *(_QWORD *)(a1 + 1512) = v83;
      v54 = (void *)v83;
    }
    *(_QWORD *)(a1 + 1520) = v55;
    memmove(v54, a3, v13);
    *(_BYTE *)(*(_QWORD *)(a1 + 1512) + v13) = 0;
    if ( *(_BYTE *)(a1 + 1169) )
      goto LABEL_4;
  }
  else
  {
    v14 = *(_BYTE *)(a1 + 1169) == 0;
    *(_QWORD *)(a1 + 1520) = 0;
    if ( !v14 )
      goto LABEL_4;
  }
  result = sub_5F220(a1, a4);
  if ( (int)result >= 0 )
  {
    v60 = result & 1;
    v14 = *(_BYTE *)(a1 + 1168) == 0;
    *(_BYTE *)(a1 + 1169) = v60;
    if ( v14 )
    {
LABEL_58:
      v15 = *(int *)(a1 + 1176);
      v61 = qword_9AD30 + 144LL * (int)v15;
      if ( v60 )
      {
LABEL_5:
        v16 = 9 * v15;
        v17 = src;
        v18 = qword_9AD30 + 16 * v16;
        if ( *(_QWORD *)(v18 + 32) )
          v17 = *(const char **)(v18 + 24);
        sub_70460(
          a1,
          (unsigned int)"GDB: selected configuration: [%s] (cpuid %d) (addrsize %d) (is_be %d) (flags 0x%x)\n",
          (_DWORD)v17,
          *(_DWORD *)(v18 + 120),
          *(_DWORD *)(v18 + 128));
        v22 = *(_DWORD *)(a1 + 1172);
        *(_BYTE *)(a1 + 1168) = 0;
        if ( v22 >= 0 && v22 != *(_DWORD *)(a1 + 1176) )
        {
          sub_4D820(a1, 0, v19, v20, v21);
          v50 = src;
          v51 = qword_9AD30 + 144LL * *(int *)(a1 + 1172);
          if ( *(_QWORD *)(v51 + 32) )
            v50 = *(const char **)(v51 + 24);
          v52 = 144LL * *(int *)(a1 + 1176) + qword_9AD30;
          v53 = src;
          if ( *(_QWORD *)(v52 + 32) )
            v53 = *(const char **)(v52 + 24);
          if ( (unsigned int)sub_14DE0(
                               0,
                               (__int64)"AUTOHIDE DATABASE\n"
                                        "HIDECANCEL\n"
                                        "ICON WARNING\n"
                                        "The configuration reported by the GDB stub (%s)\n"
                                        "differs from the configuration in the IDB (%s).\n"
                                        "Please check that the correct gdbserver was chosen.\n"
                                        "\n"
                                        "The IDB configuration can be changed either using\n"
                                        "Options, General options, Analysis, Processor specific options,\n"
                                        "either from the command line. Example: -pARM:Cortex-M4\n"
                                        "\n"
                                        "Do you want to continue?",
                               v53,
                               v50) != 1 )
            return 0;
        }
        v23 = *(_DWORD *)(a1 + 1364);
        v24 = *(_QWORD *)(a1 + 1384);
        if ( v23 == -3 )
        {
          v25 = 0;
          if ( v24 )
          {
            v25 = *(_QWORD *)(a1 + 1376);
            if ( !(unsigned __int8)sub_63F00(*(_QWORD *)(a1 + 864)) )
              goto LABEL_15;
            goto LABEL_65;
          }
        }
        else
        {
          v25 = *(_QWORD *)(a1 + 1376);
          v26 = v25 + 112 * v24;
          if ( v25 == v26 )
          {
LABEL_90:
            v25 = 0;
          }
          else
          {
            while ( v23 != *(_DWORD *)(v25 + 24) )
            {
              v25 += 112;
              if ( v26 == v25 )
                goto LABEL_90;
            }
          }
        }
        if ( !(unsigned __int8)sub_63F00(*(_QWORD *)(a1 + 864)) )
          goto LABEL_15;
LABEL_65:
        sub_70460(a1, (unsigned int)"GDB: Testing support for 'p' packet\n", v27, v28, v29);
        sub_50EB0(a1, v25, *(_DWORD *)(a1 + 784));
LABEL_15:
        sub_70460(a1, (unsigned int)"GDB: Detecting registers present in 'g' packet\n", v27, v28, v29);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 816LL))(a1, v25);
        v30 = *(_QWORD *)(a1 + 664);
        if ( v30 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
          if ( *(_QWORD *)(a1 + 672) )
          {
            *(_QWORD *)(a1 + 680) = 0;
            qfree();
            *(_QWORD *)(a1 + 672) = 0;
            *(_QWORD *)(a1 + 688) = 0;
          }
          v31 = *(_QWORD *)(a1 + 696);
          if ( v31 )
          {
            v32 = *(_QWORD *)(a1 + 704);
            if ( v32 )
            {
              for ( i = 0; i != v32; ++i )
              {
                v34 = (_QWORD *)(v31 + 24 * i);
                if ( *v34 )
                {
                  v34[1] = 0;
                  qfree();
                  v31 = *(_QWORD *)(a1 + 696);
                }
              }
            }
            *(_QWORD *)(a1 + 704) = 0;
            qfree();
            *(_QWORD *)(a1 + 696) = 0;
            *(_QWORD *)(a1 + 712) = 0;
          }
          if ( *(_QWORD *)(a1 + 720) )
          {
            *(_QWORD *)(a1 + 728) = 0;
            qfree();
            *(_QWORD *)(a1 + 720) = 0;
            *(_QWORD *)(a1 + 736) = 0;
          }
          v35 = *(_QWORD *)(a1 + 744);
          if ( v35 )
          {
            v36 = *(_QWORD *)(a1 + 752);
            if ( v36 )
            {
              for ( j = 0; j != v36; ++j )
              {
                v38 = (_QWORD *)(v35 + 24 * j);
                if ( *v38 )
                {
                  v38[1] = 0;
                  qfree();
                  v35 = *(_QWORD *)(a1 + 744);
                }
              }
            }
            *(_QWORD *)(a1 + 752) = 0;
            qfree();
            *(_QWORD *)(a1 + 744) = 0;
            *(_QWORD *)(a1 + 760) = 0;
          }
        }
        v39 = *(_QWORD *)a1;
        *(_QWORD *)(a1 + 664) = 0;
        v40 = *(void (**)())(v39 + 592);
        if ( v40 != nullsub_3 )
          ((void (__fastcall *)(__int64))v40)(a1);
        if ( *(_DWORD *)(a1 + 780) == -1 || *(_DWORD *)(a1 + 784) == -1 )
          goto LABEL_110;
        v41 = *(_QWORD *)(a1 + 680);
        if ( !*(_QWORD *)(a1 + 680) )
          v41 = *(_DWORD *)(a1 + 776);
        if ( v41 <= 0 )
        {
LABEL_110:
          if ( !under_debugger )
            interr();
          BUG();
        }
        sub_16560(1);
        sub_4D820(a1, 1, v42, v43, v44);
        v47 = sub_18B60;
        v48 = *(__int64 (**)())(*(_QWORD *)a1 + 784LL);
        if ( v48 != sub_18B60 )
          ((void (__fastcall *)(__int64, __int64))v48)(a1, a1 + 1496);
        if ( !*(_QWORD *)(a1 + 960) || !*(_BYTE *)(a1 + 1369) )
          return 1;
        sub_70460(a1, (unsigned int)"GDB: Initializing external debugger\n", (_DWORD)v47, v45, v46);
        if ( (unsigned __int8)((__int64 (__fastcall *)(__int64, _QWORD, __int64 *, __int64 *, __int64, __int64))callui)(
                                9,
                                0,
                                &v89,
                                &name_ea,
                                v63,
                                v64) )
        {
          callui(10, 0, v65, v66, v67, v68, v89, name_ea, v91, v92);
          if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) != 0 )
          {
            not_tail = name_ea - 1;
            if ( (get_flags_ex() & 0x600) == 0x200 )
              not_tail = prev_not_tail();
            name_ea = not_tail;
          }
          v73 = v89;
        }
        else
        {
          name_ea = get_name_ea();
          v73 = get_name_ea();
          v89 = v73;
        }
        if ( v73 == -1 )
        {
          callui(11, &v93, v69, v70, v71, v72, v89, name_ea, v91, v92);
          v89 = v93;
        }
        v91 = 0;
        v92 = 0;
        if ( name_ea == -1 || (sub_15ED0(&v91), !(_QWORD)v92) )
          v74 = src;
        else
          LODWORD(v74) = v91;
        sub_70460(a1, (unsigned int)"GDB: Starting emulation at %a%s\n", v89, (_DWORD)v74, v71);
        v75 = name_ea;
        if ( name_ea != -1 )
        {
          if ( !(*(unsigned int (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))(*(_QWORD *)a1 + 312LL))(
                  a1,
                  0,
                  4,
                  name_ea,
                  0xFFFFFFFFLL) )
          {
            sub_14020((__int64)"AUTOHIDE NONE\nFailed to add the EXIT point breakpoint!");
            goto LABEL_98;
          }
          v75 = name_ea;
        }
        *(_QWORD *)(a1 + 1200) = v75;
        sub_52030(a1, v89, 0.0, *(double *)a7.m128i_i64, a8, a9);
        if ( v89 == -1 )
          goto LABEL_82;
        v96 = 0xFFFFFFFFFFFFFFFFLL;
        v78 = (unsigned __int64 *)&v98;
        v97 = 0;
        v95 = -1;
        do
        {
          *(_WORD *)v78 = 0;
          v78 += 5;
          *((_WORD *)v78 - 19) = 0;
          *((_WORD *)v78 - 18) = 0;
          *((_DWORD *)v78 - 2) = 0;
          *((_WORD *)v78 - 17) = 0;
          *((_OWORD *)v78 - 2) = 0;
          *(v78 - 2) = 0;
        }
        while ( v78 != &v99 );
        if ( !*(_BYTE *)(a1 + 1696) || (int)decode_insn() <= 0 )
        {
LABEL_81:
          sub_52830(a1, *(_DWORD *)(a1 + 1364), v89, 0.0, *(double *)a7.m128i_i64, a8, a9);
LABEL_82:
          v79 = *(_QWORD *)(a1 + 1208);
          if ( v79 != -1 )
          {
            sub_70460(a1, (unsigned int)"GDB: Setting initial SP=%a\n", v79, v76, v77);
            v80 = *(_QWORD *)(a1 + 1208);
            v81 = *(_DWORD *)(a1 + 780);
            v82 = *(unsigned int *)(a1 + 1364);
            LODWORD(v95) = -2;
            *((_QWORD *)&v95 + 1) = v80;
            v96 = 0;
            sub_51B60(a1, v82, (__int64)&v95, v81, 0.0, *(double *)a7.m128i_i64, a8, a9);
            if ( (int)v95 >= -1 )
            {
              if ( *((_QWORD *)&v95 + 1) )
              {
                *(_QWORD *)&v96 = 0;
                qfree();
              }
            }
          }
          if ( v91 )
          {
            *(_QWORD *)&v92 = 0;
            qfree();
          }
          return 1;
        }
        v85 = *(_QWORD *)(a1 + 864);
        v94 = 0;
        v93 = 0;
        sub_67CB0(v85, v89, WORD5(v96), &v93);
        v86 = (_QWORD)v94 != 0;
        v87 = 0;
        if ( WORD5(v96) )
        {
          while ( v86 )
          {
            v88 = *(_BYTE *)(v93 + v87);
            v86 = v88 == (char)get_db_byte();
            if ( ++v87 >= (unsigned __int64)WORD5(v96) )
              goto LABEL_107;
          }
        }
        else
        {
LABEL_107:
          if ( v86 )
          {
LABEL_108:
            if ( v93 )
            {
              *(_QWORD *)&v94 = 0;
              qfree();
            }
            goto LABEL_81;
          }
        }
        if ( (unsigned int)sub_14DE0(
                             0,
                             (__int64)"AUTOHIDE DATABASE\n"
                                      "HIDECANCEL\n"
                                      "ICON WARNING\n"
                                      "GDB: The code at 0x%a differs between the database and the debugger backend.\n"
                                      "Perhaps the image was loaded at a different address by the external command.\n"
                                      "The program will likely fail to load or work properly.\n"
                                      "Do you still wish to continue?",
                             0.0) == 1 )
          goto LABEL_108;
        if ( v93 )
        {
          *(_QWORD *)&v94 = 0;
          qfree();
        }
LABEL_98:
        if ( v91 )
        {
          *(_QWORD *)&v92 = 0;
          qfree();
        }
        return 0;
      }
      v62 = src;
      if ( *(_QWORD *)(v61 + 32) )
        v62 = *(const char **)(v61 + 24);
      if ( (unsigned int)sub_14DE0(
                           1u,
                           (__int64)"AUTOHIDE REGISTRY\n"
                                    "HIDECANCEL\n"
                                    "ICON WARNING\n"
                                    "The GDB stub did not report a remote target configuration.\n"
                                    "IDA will use the default configuration \"%s\" from dbg_gdb.cfg.\n"
                                    "Do you want to continue?",
                           v62) != 1 )
        return 0;
LABEL_4:
      v15 = *(int *)(a1 + 1176);
      goto LABEL_5;
    }
    sub_65C90(*(_QWORD *)(a1 + 864), (_DWORD)a4, v56, v57, v58, v59);
    result = sub_5FB20(a1, 0, 0xFFFFFFFF, a6, a7);
    if ( (_DWORD)result != -1 )
    {
      v60 = *(_BYTE *)(a1 + 1169);
      goto LABEL_58;
    }
  }
  return result;
}

