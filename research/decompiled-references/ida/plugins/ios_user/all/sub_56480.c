__int64 __fastcall sub_56480(
        __int64 a1,
        int a2,
        const void *a3,
        __int64 *a4,
        int a5,
        int a6,
        double a7,
        __m128i a8,
        double a9,
        __m128 a10)
{
  size_t v13; // rax
  size_t v14; // rbp
  bool v15; // zf
  __int64 v16; // rdx
  __int64 v17; // rax
  const char *v18; // rdx
  __int64 v19; // rax
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  int v24; // eax
  int v25; // edx
  __int64 v26; // rcx
  __int64 v27; // rbp
  __int64 v28; // rax
  int v29; // edx
  int v30; // ecx
  int v31; // r8d
  int v32; // r9d
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // r12
  __int64 i; // rbp
  _QWORD *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r12
  __int64 j; // rbp
  _QWORD *v41; // rax
  __int64 v42; // rax
  void (*v43)(); // rax
  int v44; // edx
  int v45; // edx
  int v46; // ecx
  int v47; // r8d
  int v48; // r9d
  int v49; // ecx
  int v50; // r8d
  int v51; // r9d
  __int64 (*v52)(); // rdx
  __int64 (*v53)(); // rax
  __int64 result; // rax
  const char *v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rdx
  const char *v58; // rax
  void *v59; // rdi
  size_t v60; // r14
  int v61; // edx
  int v62; // ecx
  int v63; // r8d
  int v64; // r9d
  char v65; // al
  __int64 v66; // rcx
  const char *v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rax
  const char *v79; // rcx
  __int64 v80; // rcx
  int v81; // ecx
  int v82; // r8d
  int v83; // r9d
  unsigned __int64 *v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rax
  int v87; // ecx
  __int64 v88; // rsi
  __int64 v89; // rax
  __int64 not_tail; // r12
  __int64 v91; // rdi
  bool v92; // al
  __int64 v93; // rbp
  char v94; // r12
  __int64 v95; // [rsp+0h] [rbp-1E8h] BYREF
  __int64 name_ea; // [rsp+8h] [rbp-1E0h] BYREF
  __int64 v97; // [rsp+10h] [rbp-1D8h] BYREF
  __int128 v98; // [rsp+18h] [rbp-1D0h]
  __int64 v99; // [rsp+30h] [rbp-1B8h] BYREF
  __int128 v100; // [rsp+38h] [rbp-1B0h]
  __int128 v101; // [rsp+50h] [rbp-198h] BYREF
  __int128 v102; // [rsp+60h] [rbp-188h]
  __int64 v103; // [rsp+70h] [rbp-178h]
  char v104; // [rsp+78h] [rbp-170h] BYREF
  unsigned __int64 v105; // [rsp+1B8h] [rbp-30h] BYREF

  v105 = __readfsqword(0x28u);
  sub_65BB0(a1, (unsigned int)"GDB: handle process start %d\n", a2, (_DWORD)a4, a5, a6);
  *(_DWORD *)(a1 + 656) = a2;
  if ( a3 && (v13 = strlen((const char *)a3), (v14 = v13) != 0) )
  {
    v59 = *(void **)(a1 + 1512);
    v60 = v13 + 1;
    if ( *(_QWORD *)(a1 + 1528) < v13 + 1 )
    {
      v89 = qvector_reserve();
      *(_QWORD *)(a1 + 1512) = v89;
      v59 = (void *)v89;
    }
    *(_QWORD *)(a1 + 1520) = v60;
    memmove(v59, a3, v14);
    *(_BYTE *)(*(_QWORD *)(a1 + 1512) + v14) = 0;
    if ( *(_BYTE *)(a1 + 1169) )
      goto LABEL_4;
  }
  else
  {
    v15 = *(_BYTE *)(a1 + 1169) == 0;
    *(_QWORD *)(a1 + 1520) = 0;
    if ( !v15 )
      goto LABEL_4;
  }
  result = sub_54360(a1, a4);
  if ( (int)result >= 0 )
  {
    v65 = result & 1;
    v15 = *(_BYTE *)(a1 + 1168) == 0;
    *(_BYTE *)(a1 + 1169) = v65;
    if ( v15 )
    {
LABEL_58:
      v16 = *(int *)(a1 + 1176);
      v66 = qword_8FB50 + 144LL * (int)v16;
      if ( v65 )
      {
LABEL_5:
        v17 = 9 * v16;
        v18 = s;
        v19 = qword_8FB50 + 16 * v17;
        if ( *(_QWORD *)(v19 + 32) )
          v18 = *(const char **)(v19 + 24);
        sub_65BB0(
          a1,
          (unsigned int)"GDB: selected configuration: [%s] (cpuid %d) (addrsize %d) (is_be %d) (flags 0x%x)\n",
          (_DWORD)v18,
          *(_DWORD *)(v19 + 120),
          *(_DWORD *)(v19 + 128),
          *(_DWORD *)(v19 + 124));
        v24 = *(_DWORD *)(a1 + 1172);
        *(_BYTE *)(a1 + 1168) = 0;
        if ( v24 >= 0 && v24 != *(_DWORD *)(a1 + 1176) )
        {
          sub_42AE0(a1, 0, v20, v21, v22, v23);
          v55 = s;
          v56 = qword_8FB50 + 144LL * *(int *)(a1 + 1172);
          if ( *(_QWORD *)(v56 + 32) )
            v55 = *(const char **)(v56 + 24);
          v57 = 144LL * *(int *)(a1 + 1176) + qword_8FB50;
          v58 = s;
          if ( *(_QWORD *)(v57 + 32) )
            v58 = *(const char **)(v57 + 24);
          if ( (unsigned int)sub_13E80(
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
                               v58,
                               v55) != 1 )
            return 0;
        }
        v25 = *(_DWORD *)(a1 + 1364);
        v26 = *(_QWORD *)(a1 + 1384);
        if ( v25 == -3 )
        {
          v27 = 0;
          if ( v26 )
          {
            v27 = *(_QWORD *)(a1 + 1376);
            if ( !(unsigned __int8)sub_593B0(*(_QWORD *)(a1 + 864)) )
              goto LABEL_15;
            goto LABEL_65;
          }
        }
        else
        {
          v27 = *(_QWORD *)(a1 + 1376);
          v28 = v27 + 112 * v26;
          if ( v27 == v28 )
          {
LABEL_90:
            v27 = 0;
          }
          else
          {
            while ( v25 != *(_DWORD *)(v27 + 24) )
            {
              v27 += 112;
              if ( v28 == v27 )
                goto LABEL_90;
            }
          }
        }
        if ( !(unsigned __int8)sub_593B0(*(_QWORD *)(a1 + 864)) )
          goto LABEL_15;
LABEL_65:
        sub_65BB0(a1, (unsigned int)"GDB: Testing support for 'p' packet\n", v29, v30, v31, v32);
        sub_461F0(a1, v27, *(_DWORD *)(a1 + 784));
LABEL_15:
        sub_65BB0(a1, (unsigned int)"GDB: Detecting registers present in 'g' packet\n", v29, v30, v31, v32);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 816LL))(a1, v27);
        v33 = *(_QWORD *)(a1 + 664);
        if ( v33 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 8LL))(v33);
          if ( *(_QWORD *)(a1 + 672) )
          {
            *(_QWORD *)(a1 + 680) = 0;
            qfree();
            *(_QWORD *)(a1 + 672) = 0;
            *(_QWORD *)(a1 + 688) = 0;
          }
          v34 = *(_QWORD *)(a1 + 696);
          if ( v34 )
          {
            v35 = *(_QWORD *)(a1 + 704);
            if ( v35 )
            {
              for ( i = 0; i != v35; ++i )
              {
                v37 = (_QWORD *)(v34 + 24 * i);
                if ( *v37 )
                {
                  v37[1] = 0;
                  qfree();
                  v34 = *(_QWORD *)(a1 + 696);
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
          v38 = *(_QWORD *)(a1 + 744);
          if ( v38 )
          {
            v39 = *(_QWORD *)(a1 + 752);
            if ( v39 )
            {
              for ( j = 0; j != v39; ++j )
              {
                v41 = (_QWORD *)(v38 + 24 * j);
                if ( *v41 )
                {
                  v41[1] = 0;
                  qfree();
                  v38 = *(_QWORD *)(a1 + 744);
                }
              }
            }
            *(_QWORD *)(a1 + 752) = 0;
            qfree();
            *(_QWORD *)(a1 + 744) = 0;
            *(_QWORD *)(a1 + 760) = 0;
          }
        }
        v42 = *(_QWORD *)a1;
        *(_QWORD *)(a1 + 664) = 0;
        v43 = *(void (**)())(v42 + 592);
        if ( v43 != nullsub_8 )
          ((void (__fastcall *)(__int64))v43)(a1);
        if ( *(_DWORD *)(a1 + 780) == -1 || *(_DWORD *)(a1 + 784) == -1 )
          goto LABEL_110;
        v44 = *(_QWORD *)(a1 + 680);
        if ( !*(_QWORD *)(a1 + 680) )
          v44 = *(_DWORD *)(a1 + 776);
        if ( v44 <= 0 )
        {
LABEL_110:
          if ( !under_debugger )
            interr();
          BUG();
        }
        sub_15DB0(1);
        sub_42AE0(a1, 1, v45, v46, v47, v48);
        v52 = sub_18400;
        v53 = *(__int64 (**)())(*(_QWORD *)a1 + 784LL);
        if ( v53 != sub_18400 )
          ((void (__fastcall *)(__int64, __int64))v53)(a1, a1 + 1496);
        if ( !*(_QWORD *)(a1 + 960) || !*(_BYTE *)(a1 + 1369) )
          return 1;
        sub_65BB0(a1, (unsigned int)"GDB: Initializing external debugger\n", (_DWORD)v52, v49, v50, v51);
        if ( (unsigned __int8)((__int64 (__fastcall *)(__int64, _QWORD, __int64 *, __int64 *, __int64, __int64))callui)(
                                9,
                                0,
                                &v95,
                                &name_ea,
                                v68,
                                v69) )
        {
          callui(10, 0, v70, v71, v72, v73, v95, name_ea, v97, v98);
          if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) != 0 )
          {
            not_tail = name_ea - 1;
            if ( (get_flags_ex() & 0x600) == 0x200 )
              not_tail = prev_not_tail();
            name_ea = not_tail;
          }
          v78 = v95;
        }
        else
        {
          name_ea = get_name_ea();
          v78 = get_name_ea();
          v95 = v78;
        }
        if ( v78 == -1 )
        {
          callui(11, &v99, v74, v75, v76, v77, v95, name_ea, v97, v98);
          v95 = v99;
        }
        v97 = 0;
        v98 = 0;
        if ( name_ea == -1 || (sub_15620(&v97), !(_QWORD)v98) )
          v79 = s;
        else
          LODWORD(v79) = v97;
        sub_65BB0(a1, (unsigned int)"GDB: Starting emulation at %a%s\n", v95, (_DWORD)v79, v76, v77);
        v80 = name_ea;
        if ( name_ea != -1 )
        {
          if ( !(*(unsigned int (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))(*(_QWORD *)a1 + 312LL))(
                  a1,
                  0,
                  4,
                  name_ea,
                  0xFFFFFFFFLL) )
          {
            sub_130A0((__int64)"AUTOHIDE NONE\nFailed to add the EXIT point breakpoint!");
            goto LABEL_98;
          }
          v80 = name_ea;
        }
        *(_QWORD *)(a1 + 1200) = v80;
        sub_47370(a1, v95, 0.0, *(double *)a8.m128i_i64, a9, a10);
        if ( v95 == -1 )
          goto LABEL_82;
        v102 = 0xFFFFFFFFFFFFFFFFLL;
        v84 = (unsigned __int64 *)&v104;
        v103 = 0;
        v101 = -1;
        do
        {
          *(_WORD *)v84 = 0;
          v84 += 5;
          *((_WORD *)v84 - 19) = 0;
          *((_WORD *)v84 - 18) = 0;
          *((_DWORD *)v84 - 2) = 0;
          *((_WORD *)v84 - 17) = 0;
          *((_OWORD *)v84 - 2) = 0;
          *(v84 - 2) = 0;
        }
        while ( v84 != &v105 );
        if ( !*(_BYTE *)(a1 + 1696) || (int)decode_insn() <= 0 )
        {
LABEL_81:
          sub_47B70(a1, *(_DWORD *)(a1 + 1364), v95, 0.0, *(double *)a8.m128i_i64, a9, a10);
LABEL_82:
          v85 = *(_QWORD *)(a1 + 1208);
          if ( v85 != -1 )
          {
            sub_65BB0(a1, (unsigned int)"GDB: Setting initial SP=%a\n", v85, v81, v82, v83);
            v86 = *(_QWORD *)(a1 + 1208);
            v87 = *(_DWORD *)(a1 + 780);
            v88 = *(unsigned int *)(a1 + 1364);
            LODWORD(v101) = -2;
            *((_QWORD *)&v101 + 1) = v86;
            v102 = 0;
            sub_46EA0(a1, v88, (__int64)&v101, v87, 0.0, *(double *)a8.m128i_i64, a9, a10);
            if ( (int)v101 >= -1 )
            {
              if ( *((_QWORD *)&v101 + 1) )
              {
                *(_QWORD *)&v102 = 0;
                qfree();
              }
            }
          }
          if ( v97 )
          {
            *(_QWORD *)&v98 = 0;
            qfree();
          }
          return 1;
        }
        v91 = *(_QWORD *)(a1 + 864);
        v100 = 0;
        v99 = 0;
        sub_5D4E0(v91, v95, WORD5(v102), &v99);
        v92 = (_QWORD)v100 != 0;
        v93 = 0;
        if ( WORD5(v102) )
        {
          while ( v92 )
          {
            v94 = *(_BYTE *)(v99 + v93);
            v92 = v94 == (char)get_db_byte();
            if ( ++v93 >= (unsigned __int64)WORD5(v102) )
              goto LABEL_107;
          }
        }
        else
        {
LABEL_107:
          if ( v92 )
          {
LABEL_108:
            if ( v99 )
            {
              *(_QWORD *)&v100 = 0;
              qfree();
            }
            goto LABEL_81;
          }
        }
        if ( (unsigned int)sub_13E80(
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
        if ( v99 )
        {
          *(_QWORD *)&v100 = 0;
          qfree();
        }
LABEL_98:
        if ( v97 )
        {
          *(_QWORD *)&v98 = 0;
          qfree();
        }
        return 0;
      }
      v67 = s;
      if ( *(_QWORD *)(v66 + 32) )
        v67 = *(const char **)(v66 + 24);
      if ( (unsigned int)sub_13E80(
                           1u,
                           (__int64)"AUTOHIDE REGISTRY\n"
                                    "HIDECANCEL\n"
                                    "ICON WARNING\n"
                                    "The GDB stub did not report a remote target configuration.\n"
                                    "IDA will use the default configuration \"%s\" from dbg_gdb.cfg.\n"
                                    "Do you want to continue?",
                           v67) != 1 )
        return 0;
LABEL_4:
      v16 = *(int *)(a1 + 1176);
      goto LABEL_5;
    }
    sub_5B150(*(_QWORD *)(a1 + 864), (_DWORD)a4, v61, v62, v63, v64);
    result = sub_54C60(a1, 0, 0xFFFFFFFF, a7, a8);
    if ( (_DWORD)result != -1 )
    {
      v65 = *(_BYTE *)(a1 + 1169);
      goto LABEL_58;
    }
  }
  return result;
}

