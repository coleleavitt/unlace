__int64 __fastcall sub_B610(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, double a7)
{
  __int64 v9; // rdi
  __int64 v10; // r14
  __int64 v11; // r13
  __int64 i; // r12
  _QWORD *v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // r14
  _QWORD *v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // r12
  __int64 j; // r15
  _QWORD *v20; // r13
  unsigned int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rdx
  _QWORD *v26; // rcx
  unsigned int v27; // eax
  _QWORD *v28; // rdx
  unsigned int v29; // eax
  unsigned __int64 **v30; // rdx
  unsigned int v31; // eax
  _QWORD *v32; // rdx
  unsigned int v33; // edx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rdi
  _QWORD **v37; // rax
  unsigned int v38; // edx
  __int64 v39; // rax
  __int64 v40; // rdi
  unsigned int v41; // eax
  __m128i **v42; // rdx
  __m128i *v43; // rbx
  unsigned __int64 v44; // rdx
  unsigned int v45; // eax
  __int64 v46; // rdx
  unsigned __int64 v47; // rax
  __int64 v48; // rdx
  unsigned int v49; // eax
  _QWORD *v50; // rdx
  unsigned int v51; // edx
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rsi
  _DWORD *v55; // rax
  _QWORD *v56; // rax
  bool v57; // al
  unsigned int v58; // eax
  __int64 v59; // rdx
  __int64 v60; // rcx
  int v61; // r12d
  int *v62; // rdx
  unsigned int v63; // edx
  __int64 v64; // rax
  __int64 v65; // rdi
  unsigned int v66; // eax
  __int64 *v67; // rdx
  unsigned int v68; // eax
  __int64 *v69; // rdx
  unsigned int v70; // eax
  __int64 *v71; // rdx
  unsigned int v72; // eax
  _QWORD **v73; // rdx
  unsigned int v74; // edx
  __int64 v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rsi
  __int64 *v78; // rax
  unsigned int v79; // edx
  __int64 v80; // rax
  __int64 v81; // rcx
  __int64 *v82; // rdi
  __int64 *v83; // rax
  unsigned int v84; // eax
  __int64 *v85; // rdx
  unsigned int v86; // eax
  __int64 *v87; // rdx
  __int64 *v88; // rdx
  __int64 *v89; // rax
  __int64 **v90; // rdx
  __int64 *v91; // rdx
  __int64 *v92; // rdx
  int *v93; // rax
  __int64 *v94; // rdx
  __int64 *v95; // rax
  __int64 *v96; // rdx
  _QWORD *v97; // rax
  _QWORD *v98; // rax
  _QWORD **v99; // rax
  _QWORD **v100; // rdx
  __int64 *v101; // rdx
  unsigned __int64 v102; // rax
  int v103; // r15d
  const char *v104; // r14
  size_t v105; // rbx
  const char *v106; // rdi
  __int64 *first_seg; // rax
  __int64 v108; // rdi
  __int64 v109; // r12
  __int64 v110; // rax
  char v111; // r13
  __int64 v112; // rbx
  __int64 v113; // [rsp+0h] [rbp-88h]
  __int64 v114; // [rsp+8h] [rbp-80h]
  void *v115; // [rsp+10h] [rbp-78h]
  char s[24]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v117; // [rsp+48h] [rbp-40h]

  v117 = __readfsqword(0x28u);
  switch ( a2 )
  {
    case 0LL:
      netnode_check();
      *(_DWORD *)(a1 + 276) = register_custom_refinfo();
      return 0;
    case 1LL:
      unregister_custom_refinfo();
      v9 = *(_QWORD *)(a1 + 240);
      if ( v9 )
      {
        v10 = *(_QWORD *)(a1 + 248);
        if ( v10 )
        {
          v11 = 0;
          for ( i = 0; i != v10; ++i )
          {
            v13 = (_QWORD *)(v9 + v11);
            if ( *(_QWORD *)(v9 + v11 + 24) )
            {
              v13[4] = 0;
              qfree();
            }
            if ( *v13 )
            {
              v13[1] = 0;
              qfree();
            }
            v9 = *(_QWORD *)(a1 + 240);
            v11 += 56;
          }
        }
        *(_QWORD *)(a1 + 248) = 0;
        qfree();
        *(_QWORD *)(a1 + 240) = 0;
        *(_QWORD *)(a1 + 256) = 0;
      }
      v14 = *(_QWORD *)(a1 + 160);
      if ( v14 )
      {
        v114 = *(_QWORD *)(a1 + 168);
        if ( v114 )
        {
          v113 = 0;
          v15 = 0;
          do
          {
            v16 = (_QWORD *)(v14 + v15);
            v17 = *(_QWORD *)(v14 + v15 + 56);
            if ( v17 )
            {
              v18 = v16[8];
              if ( v18 )
              {
                for ( j = 0; j != v18; ++j )
                {
                  v20 = (_QWORD *)(v17 + 48 * j);
                  if ( v20[3] )
                  {
                    v20[4] = 0;
                    qfree();
                  }
                  if ( *v20 )
                  {
                    v20[1] = 0;
                    qfree();
                  }
                  v17 = v16[7];
                }
              }
              v16[8] = 0;
              qfree();
            }
            if ( v16[4] )
            {
              v16[5] = 0;
              qfree();
            }
            if ( v16[1] )
            {
              v16[2] = 0;
              qfree();
            }
            ++v113;
            v14 = *(_QWORD *)(a1 + 160);
            v15 += 88;
          }
          while ( v114 != v113 );
        }
        *(_QWORD *)(a1 + 168) = 0;
        qfree();
        *(_QWORD *)(a1 + 160) = 0;
        *(_QWORD *)(a1 + 176) = 0;
      }
      clr_module_data();
      return 0;
    case 2LL:
      v58 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v93 = *(int **)(a3 + 8);
        v62 = v93 + 2;
        *(_QWORD *)(a3 + 8) = v93 + 2;
        v61 = *v93;
      }
      else
      {
        v59 = *(_QWORD *)(a3 + 16);
        v60 = v58 + 8;
        *(_DWORD *)a3 = v60;
        v61 = *(_DWORD *)(v59 + v58);
        if ( (unsigned int)v60 <= 0x2F )
        {
          v62 = (int *)(v60 + v59);
          *(_DWORD *)a3 = v58 + 16;
          goto LABEL_90;
        }
        v62 = *(int **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v62 + 2;
LABEL_90:
      if ( *(_BYTE *)(a1 + 282) )
      {
        v103 = *v62;
        v104 = *(const char **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 8LL * v61);
        if ( !getinf_buf() )
          s[0] = 0;
        v105 = strlen(s);
        v115 = (void *)qvector_reserve();
        memmove(v115, s, v105);
        *((_BYTE *)v115 + v105) = 0;
        v106 = (const char *)v115;
        if ( v105 == -1 )
          v106 = s1;
        if ( !strcasecmp(v106, v104) )
        {
          if ( v115 )
            qfree();
        }
        else
        {
          v111 = *(_BYTE *)(a1 + 280);
          if ( v115 )
            qfree();
          if ( v111 )
          {
            if ( !v103 && v104 )
            {
              strlen(v104);
              setinf_buf();
            }
            sub_AFA0((_QWORD *)a1, 5);
          }
        }
      }
      *(_DWORD *)(a1 + 272) = v61;
      *(_BYTE *)(a1 + 282) = 1;
      return 0;
    case 4LL:
      if ( sub_97C0()
        && (unsigned int)sub_AB50(1u, (__int64)"Do you want to split the loaded file contents into 64K banks?") == 1 )
      {
        first_seg = (__int64 *)get_first_seg();
        if ( first_seg )
        {
          v108 = *first_seg;
          v109 = first_seg[1] - *first_seg;
          if ( (unsigned __int16)*first_seg )
          {
            v112 = *first_seg;
            LOWORD(v112) = 0;
            set_segm_start();
            v108 = v112;
          }
          while ( 1 )
          {
            v109 -= (__int64)qword_10000;
            set_segm_end();
            if ( v109 <= 0 )
              break;
            add_segm();
            v110 = getseg();
            if ( *(_BYTE *)(v110 + 43) )
            {
              *(_BYTE *)(v110 + 43) = 0;
              update_segm();
            }
            v108 += (__int64)qword_10000;
          }
        }
      }
      v56 = (_QWORD *)get_first_seg();
      if ( !v56 || *v56 > (unsigned __int64)qword_10000 )
        add_segm();
      v57 = sub_97C0();
      sub_AFA0((_QWORD *)a1, !v57 ? 5 : 7);
      *(_BYTE *)(a1 + 280) = 1;
      return 0;
    case 5LL:
    case 86LL:
      sub_B3A0(a1);
      return 0;
    case 8LL:
      v22 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v96 = *(__int64 **)(a3 + 8);
        v97 = v96 + 1;
        *(_QWORD *)(a3 + 8) = v96 + 1;
        v24 = *v96;
LABEL_147:
        v98 = v97 + 1;
LABEL_148:
        v99 = (_QWORD **)(v98 + 1);
LABEL_149:
        v100 = v99 + 1;
        *(_QWORD *)(a3 + 8) = v99 + 1;
        v26 = *v99;
        goto LABEL_150;
      }
      v23 = *(_QWORD *)(a3 + 16);
      *(_DWORD *)a3 = v22 + 8;
      v24 = *(_QWORD *)(v23 + v22);
      if ( v22 + 8 > 0x2F )
      {
        v97 = *(_QWORD **)(a3 + 8);
        goto LABEL_147;
      }
      *(_DWORD *)a3 = v22 + 16;
      if ( v22 + 16 > 0x2F )
      {
        v98 = *(_QWORD **)(a3 + 8);
        goto LABEL_148;
      }
      v25 = v22 + 24;
      *(_DWORD *)a3 = v25;
      if ( (unsigned int)v25 > 0x2F )
      {
        v99 = *(_QWORD ***)(a3 + 8);
        goto LABEL_149;
      }
      *(_DWORD *)a3 = v22 + 32;
      v26 = *(_QWORD **)(v23 + v25);
      if ( v22 + 32 <= 0x2F )
      {
        *(_DWORD *)a3 = v22 + 40;
        goto LABEL_38;
      }
      v100 = *(_QWORD ***)(a3 + 8);
LABEL_150:
      *(_QWORD *)(a3 + 8) = v100 + 1;
LABEL_38:
      if ( v24 )
      {
        if ( v26 )
          *v26 = 1;
        return -1;
      }
      else
      {
        sub_AA80(
          (__int64)"HELP\n"
                   "In this dialog box the device can be selected and\n"
                   "the memory mapping can be changed.\n"
                   "\n"
                   "Different devices represent microprocessors of the C166 family.\n"
                   "They differ in the memory layout, I/O port names,\n"
                   "and interrupt vector names. The information about them is\n"
                   "stored in the configuration file c166.cfg (or st10.cfg). The user\n"
                   "can modify these files with a simple text editor as he wishes.\n"
                   "\n"
                   "The memory mapping is special for C166. Here the user can\n"
                   "specify how the processor memory is organized.\n"
                   "\n"
                   "C166 memory banks of 64KB can be mapped to several\n"
                   "virtual addresses. This situation is reflected in the disassembly\n"
                   "by adding a mapping. Adding a mapping makes the references to an\n"
                   "unexisting segment be redirected to an existing segment. For example,\n"
                   "if the segment 0 (the first 64KBs) is mapped to 0x400000, then we\n"
                   "need to add mapping 0x400000 -> 0x000000 with the size of 0x10000.\n"
                   "This mapping will redirect all references to 0x400000..0x410000\n"
                   "to the address range 0x00000..0x10000.\n"
                   "\n"
                   "ENDHELP\n"
                   "C166 options\n"
                   "%*\n"
                   "  <~S~elect device:B:0:0::>\n"
                   "  Current device: %q\n"
                   "\n",
          a1,
          sub_B370,
          a1 + 136);
        return 1;
      }
    case 10LL:
      v86 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v87 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v87 + 1;
      }
      else
      {
        v87 = (__int64 *)(*(_QWORD *)(a3 + 16) + v86);
        *(_DWORD *)a3 = v86 + 8;
      }
      return (int)sub_6380(a1, *v87, a7);
    case 11LL:
      v70 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v71 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v71 + 1;
      }
      else
      {
        v71 = (__int64 *)(*(_QWORD *)(a3 + 16) + v70);
        *(_DWORD *)a3 = v70 + 8;
      }
      if ( !(unsigned int)sub_7800(a1, *v71, a7) )
        return -1;
      return 1;
    case 12LL:
      v68 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v69 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v69 + 1;
      }
      else
      {
        v69 = (__int64 *)(*(_QWORD *)(a3 + 16) + v68);
        *(_DWORD *)a3 = v68 + 8;
      }
      sub_9240(a1, *v69);
      return 1;
    case 13LL:
      v66 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v67 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v67 + 1;
      }
      else
      {
        v67 = (__int64 *)(*(_QWORD *)(a3 + 16) + v66);
        *(_DWORD *)a3 = v66 + 8;
      }
      sub_9290(a1, *v67);
      return 1;
    case 14LL:
      v74 = *(_DWORD *)a3;
      if ( v74 > 0x2F )
      {
        v92 = *(__int64 **)(a3 + 8);
        v78 = v92 + 1;
        *(_QWORD *)(a3 + 8) = v92 + 1;
        v77 = *v92;
      }
      else
      {
        v75 = *(_QWORD *)(a3 + 16);
        v76 = v74 + 8;
        *(_DWORD *)a3 = v76;
        v77 = *(_QWORD *)(v75 + v74);
        if ( (unsigned int)v76 <= 0x2F )
        {
          v78 = (__int64 *)(v76 + v75);
          *(_DWORD *)a3 = v74 + 16;
          goto LABEL_112;
        }
        v78 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v78 + 1;
LABEL_112:
      sub_8DC0(a1, v77, *v78);
      return 1;
    case 15LL:
      v63 = *(_DWORD *)a3;
      if ( v63 > 0x2F )
      {
        v88 = *(__int64 **)(a3 + 8);
        v89 = v88 + 1;
        *(_QWORD *)(a3 + 8) = v88 + 1;
        v65 = *v88;
      }
      else
      {
        v64 = *(_QWORD *)(a3 + 16);
        *(_DWORD *)a3 = v63 + 8;
        v65 = *(_QWORD *)(v64 + v63);
        if ( v63 + 8 <= 0x2F )
        {
          *(_DWORD *)a3 = v63 + 16;
          goto LABEL_95;
        }
        v89 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v89 + 1;
LABEL_95:
      sub_9140(v65);
      return 1;
    case 16LL:
      v84 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v85 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v85 + 1;
      }
      else
      {
        v85 = (__int64 *)(*(_QWORD *)(a3 + 16) + v84);
        *(_DWORD *)a3 = v84 + 8;
      }
      sub_8FC0((_QWORD *)a1, *v85);
      return 1;
    case 17LL:
      v72 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v73 = *(_QWORD ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v73 + 1;
      }
      else
      {
        v73 = (_QWORD **)(*(_QWORD *)(a3 + 16) + v72);
        *(_DWORD *)a3 = v72 + 8;
      }
      sub_8DB0(*v73);
      return 1;
    case 19LL:
      v79 = *(_DWORD *)a3;
      if ( v79 > 0x2F )
      {
        v90 = *(__int64 ***)(a3 + 8);
        v83 = (__int64 *)(v90 + 1);
        *(_QWORD *)(a3 + 8) = v90 + 1;
        v82 = *v90;
      }
      else
      {
        v80 = *(_QWORD *)(a3 + 16);
        v81 = v79 + 8;
        *(_DWORD *)a3 = v81;
        v82 = *(__int64 **)(v80 + v79);
        if ( (unsigned int)v81 <= 0x2F )
        {
          v83 = (__int64 *)(v81 + v80);
          *(_DWORD *)a3 = v79 + 16;
          goto LABEL_116;
        }
        v83 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v83 + 1;
LABEL_116:
      if ( !(unsigned __int8)sub_8A10(v82, *v83, a7) )
        return -1;
      return 1;
    case 20LL:
      v51 = *(_DWORD *)a3;
      if ( v51 > 0x2F )
      {
        v91 = *(__int64 **)(a3 + 8);
        v55 = v91 + 1;
        *(_QWORD *)(a3 + 8) = v91 + 1;
        v54 = *v91;
      }
      else
      {
        v52 = *(_QWORD *)(a3 + 16);
        v53 = v51 + 8;
        *(_DWORD *)a3 = v53;
        v54 = *(_QWORD *)(v52 + v51);
        if ( (unsigned int)v53 <= 0x2F )
        {
          v55 = (_DWORD *)(v53 + v52);
          *(_DWORD *)a3 = v51 + 16;
          goto LABEL_81;
        }
        v55 = *(_DWORD **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v55 + 2;
LABEL_81:
      sub_9380(a1, v54, *v55 != 0);
      return 1;
    case 25LL:
      v41 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v42 = *(__m128i ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v42 + 1;
      }
      else
      {
        v42 = (__m128i **)(*(_QWORD *)(a3 + 16) + v41);
        *(_DWORD *)a3 = v41 + 8;
      }
      v43 = *v42;
      if ( !(unsigned int)get_segm_qty() )
      {
        v44 = v43->m128i_u64[1];
        if ( v43->m128i_i64[0] && v44 <= 0xFFFF )
        {
          *v43 = _mm_load_si128((const __m128i *)&xmmword_FC20);
        }
        else
        {
          v102 = v43->m128i_i64[0] + 0x10000;
          if ( v102 < v44 )
            v102 = v43->m128i_u64[1];
          v43->m128i_i64[1] = v102;
        }
      }
      v43[3].m128i_i64[47 - *(_DWORD *)(*(_QWORD *)(a1 + 16) + 68LL) + 1] = 0;
      v43[3].m128i_i64[48 - *(_DWORD *)(*(_QWORD *)(a1 + 16) + 68LL) + 1] = 1;
      v43[3].m128i_i64[49 - *(_DWORD *)(*(_QWORD *)(a1 + 16) + 68LL) + 1] = 2;
      v43[3].m128i_i64[50 - *(_DWORD *)(*(_QWORD *)(a1 + 16) + 68LL) + 1] = 3;
      v43[2].m128i_i8[8] = 2;
      return 0;
    case 32LL:
      v38 = *(_DWORD *)a3;
      if ( v38 > 0x2F )
      {
        v94 = *(__int64 **)(a3 + 8);
        v95 = v94 + 1;
        *(_QWORD *)(a3 + 8) = v94 + 1;
        v40 = *v94;
      }
      else
      {
        v39 = *(_QWORD *)(a3 + 16);
        *(_DWORD *)a3 = v38 + 8;
        v40 = *(_QWORD *)(v39 + v38);
        if ( v38 + 8 <= 0x2F )
        {
          *(_DWORD *)a3 = v38 + 16;
          goto LABEL_59;
        }
        v95 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v95 + 1;
LABEL_59:
      if ( (unsigned int)sub_7A90(v40) != 1 )
        return -1;
      return 1;
    case 36LL:
      v49 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v50 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v50 + 1;
      }
      else
      {
        v50 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v49);
        *(_DWORD *)a3 = v49 + 8;
      }
      return (int)sub_7A80(*v50);
    case 43LL:
      v31 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v32 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v32 + 1;
      }
      else
      {
        v32 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v31);
        *(_DWORD *)a3 = v31 + 8;
      }
      return (int)sub_7B00(*v32);
    case 47LL:
      v45 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v46 = *(_QWORD *)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v46 + 8;
      }
      else
      {
        v46 = *(_QWORD *)(a3 + 16) + v45;
        *(_DWORD *)a3 = v45 + 8;
      }
      v47 = *(unsigned __int8 *)(*(_QWORD *)v46 + 1LL);
      if ( (unsigned __int8)v47 > 0xDu )
        return 1;
      v48 = 14083;
      if ( !_bittest64(&v48, v47) )
        return 1;
      return -1;
    case 55LL:
      v33 = *(_DWORD *)a3;
      if ( v33 > 0x2F )
      {
        v101 = *(__int64 **)(a3 + 8);
        v37 = (_QWORD **)(v101 + 1);
        *(_QWORD *)(a3 + 8) = v101 + 1;
        v36 = *v101;
      }
      else
      {
        v34 = *(_QWORD *)(a3 + 16);
        v35 = v33 + 8;
        *(_DWORD *)a3 = v35;
        v36 = *(_QWORD *)(v34 + v33);
        if ( (unsigned int)v35 <= 0x2F )
        {
          v37 = (_QWORD **)(v35 + v34);
          *(_DWORD *)a3 = v33 + 16;
          return (int)sub_7A70(v36, *v37);
        }
        v37 = *(_QWORD ***)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v37 + 1;
      return (int)sub_7A70(v36, *v37);
    case 59LL:
      v29 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v30 = *(unsigned __int64 ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v30 + 1;
      }
      else
      {
        v30 = (unsigned __int64 **)(*(_QWORD *)(a3 + 16) + v29);
        *(_DWORD *)a3 = v29 + 8;
      }
      sub_7C40(*v30);
      return 1;
    case 94LL:
      v27 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v28 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v28 + 1;
      }
      else
      {
        v28 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v27);
        *(_DWORD *)a3 = v27 + 8;
      }
      sub_D010(*v28, a2, (_DWORD)v28, a4, a5, a6);
      return 0;
    case 95LL:
      netnode_check();
      return 0;
    case 96LL:
      if ( !(_BYTE)byte_14488 && __cxa_guard_acquire(&byte_14488) )
      {
        qword_14450 = *(_QWORD *)(a1 + 120);
        __cxa_guard_release(&byte_14488);
      }
      return (int)cvt64_node_supval_for_event();
    default:
      return 0;
  }
}

