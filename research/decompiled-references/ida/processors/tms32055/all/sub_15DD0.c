__int64 __fastcall sub_15DD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  unsigned int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 *v16; // rax
  unsigned int v17; // eax
  _QWORD *v18; // rdx
  unsigned int v19; // eax
  unsigned __int64 **v20; // rdx
  unsigned int v21; // eax
  __int64 *v22; // rdx
  unsigned int v23; // eax
  _QWORD *v24; // rdx
  unsigned int v25; // eax
  __int64 *v26; // rdx
  unsigned int v27; // eax
  __int64 *v28; // rdx
  unsigned int v29; // eax
  __int64 **v30; // rdx
  unsigned int v31; // eax
  _BYTE **v32; // rdx
  unsigned int v33; // eax
  const __m128i **v34; // rdx
  unsigned int v35; // edx
  __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // r14
  _QWORD *v40; // rbx
  __int64 v41; // rdi
  __int64 v42; // r12
  __int64 i; // r15
  _QWORD *v44; // r13
  unsigned int v45; // edx
  __int64 v46; // rax
  __int64 *v47; // rdi
  __int64 v48; // rdx
  _BYTE **v49; // rax
  unsigned int v50; // edx
  unsigned int v51; // eax
  __int64 *v52; // rdx
  unsigned int v53; // eax
  __int64 *v54; // rdx
  unsigned int v55; // ebx
  __int64 v56; // rsi
  unsigned int v57; // edx
  __int64 v58; // rax
  __int64 v59; // rsi
  const char *v60; // rdi
  __int64 v61; // rcx
  int v62; // r9d
  __int64 v63; // rsi
  _DWORD *v64; // r10
  __int64 v65; // rcx
  __int64 *v66; // r12
  _DWORD *v67; // rax
  __int64 v68; // rax
  __int64 *v69; // rax
  __int64 *v70; // rdx
  const char **v71; // rax
  int *v72; // rdx
  _DWORD **v73; // rax
  _QWORD **v74; // rdx
  __int64 v75; // rax
  __int64 *v76; // rdx
  __int64 *v77; // rax
  __int64 **v78; // rdx
  __int64 v79; // [rsp+0h] [rbp-68h]
  __int64 v80; // [rsp+8h] [rbp-60h]

  switch ( a2 )
  {
    case 0LL:
      netnode_check();
      setinf_flag();
      return 0;
    case 1LL:
      v38 = *(_QWORD *)(a1 + 160);
      if ( v38 )
      {
        v80 = *(_QWORD *)(a1 + 168);
        if ( v80 )
        {
          v79 = 0;
          v39 = 0;
          do
          {
            v40 = (_QWORD *)(v38 + v39);
            v41 = *(_QWORD *)(v38 + v39 + 56);
            if ( v41 )
            {
              v42 = v40[8];
              if ( v42 )
              {
                for ( i = 0; i != v42; ++i )
                {
                  v44 = (_QWORD *)(v41 + 48 * i);
                  if ( v44[3] )
                  {
                    v44[4] = 0;
                    qfree();
                  }
                  if ( *v44 )
                  {
                    v44[1] = 0;
                    qfree();
                  }
                  v41 = v40[7];
                }
              }
              v40[8] = 0;
              qfree();
            }
            if ( v40[4] )
            {
              v40[5] = 0;
              qfree();
            }
            if ( v40[1] )
            {
              v40[2] = 0;
              qfree();
            }
            ++v79;
            v38 = *(_QWORD *)(a1 + 160);
            v39 += 88;
          }
          while ( v80 != v79 );
        }
        *(_QWORD *)(a1 + 168) = 0;
        qfree();
        *(_QWORD *)(a1 + 160) = 0;
        *(_QWORD *)(a1 + 176) = 0;
      }
      clr_module_data();
      return 0;
    case 2LL:
      if ( *(_DWORD *)a3 > 0x2Fu )
        *(_QWORD *)(a3 + 8) += 8LL;
      else
        *(_DWORD *)a3 += 8;
      *(_BYTE *)(a1 + 258) = 0;
      return 0;
    case 4LL:
      read_ioports();
      v55 = 136;
      netnode_supset();
      netnode_supset();
      set_default_sreg_value();
      set_default_sreg_value();
      do
      {
        v56 = v55++;
        set_default_sreg_value();
      }
      while ( v55 != 141 );
      sub_15850(
        (__int64)"AUTOHIDE REGISTRY\n"
                 "Default values of flags and registers:\n"
                 "\n"
                 "ARMS bit = 0 (DSP mode operands).\n"
                 "CPL  bit = 1 (SP direct addressing mode).\n"
                 "DP register = 0 (Data Page register)\n"
                 "DPH register = 0 (High part of EXTENDED Data Page Register)\n"
                 "PDP register = 0 (Peripheral Data Page register)\n"
                 "\n"
                 "You can change the register values by pressing Alt-G\n"
                 "(Edit, Segments, Change segment register value)\n",
        v56);
      return 0;
    case 5LL:
      if ( netnode_qsupstr() >= 0 )
      {
        netnode_supset();
        netnode_supdel();
      }
      goto LABEL_4;
    case 8LL:
      v57 = *(_DWORD *)a3;
      if ( v57 > 0x2F )
      {
        v71 = *(const char ***)(a3 + 8);
        v72 = (int *)(v71 + 1);
        *(_QWORD *)(a3 + 8) = v71 + 1;
        v60 = *v71;
LABEL_107:
        v73 = (_DWORD **)(v72 + 2);
        *(_QWORD *)(a3 + 8) = v72 + 2;
        v62 = *v72;
LABEL_108:
        v74 = (_QWORD **)(v73 + 1);
        *(_QWORD *)(a3 + 8) = v73 + 1;
        v64 = *v73;
LABEL_109:
        v67 = v74 + 1;
        *(_QWORD *)(a3 + 8) = v74 + 1;
        v66 = *v74;
        goto LABEL_110;
      }
      v58 = *(_QWORD *)(a3 + 16);
      v59 = v57 + 8;
      *(_DWORD *)a3 = v59;
      v60 = *(const char **)(v58 + v57);
      if ( (unsigned int)v59 > 0x2F )
      {
        v72 = *(int **)(a3 + 8);
        goto LABEL_107;
      }
      v61 = v57 + 16;
      *(_DWORD *)a3 = v61;
      v62 = *(_DWORD *)(v58 + v59);
      if ( (unsigned int)v61 > 0x2F )
      {
        v73 = *(_DWORD ***)(a3 + 8);
        goto LABEL_108;
      }
      v63 = v57 + 24;
      *(_DWORD *)a3 = v63;
      v64 = *(_DWORD **)(v58 + v61);
      if ( (unsigned int)v63 > 0x2F )
      {
        v74 = *(_QWORD ***)(a3 + 8);
        goto LABEL_109;
      }
      v65 = v57 + 32;
      *(_DWORD *)a3 = v65;
      v66 = *(__int64 **)(v58 + v63);
      if ( (unsigned int)v65 <= 0x2F )
      {
        v67 = (_DWORD *)(v65 + v58);
        *(_DWORD *)a3 = v57 + 40;
        goto LABEL_96;
      }
      v67 = *(_DWORD **)(a3 + 8);
LABEL_110:
      *(_QWORD *)(a3 + 8) = v67 + 2;
LABEL_96:
      v68 = sub_15A30(a1, v60, v62, v64, *v67 != 0);
      if ( !v68 )
        return 1;
      if ( v66 )
        *v66 = v68;
      return -1;
    case 10LL:
      v33 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v34 = *(const __m128i ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v34 + 1;
      }
      else
      {
        v34 = (const __m128i **)(*(_QWORD *)(a3 + 16) + v33);
        *(_DWORD *)a3 = v33 + 8;
      }
      return (int)sub_11860(a1, *v34);
    case 11LL:
      v51 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v52 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v52 + 1;
      }
      else
      {
        v52 = (__int64 *)(*(_QWORD *)(a3 + 16) + v51);
        *(_DWORD *)a3 = v51 + 8;
      }
      if ( !(unsigned int)sub_12340(a1, *v52, a7) )
        return -1;
      return 1;
    case 12LL:
      v25 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v26 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v26 + 1;
      }
      else
      {
        v26 = (__int64 *)(*(_QWORD *)(a3 + 16) + v25);
        *(_DWORD *)a3 = v25 + 8;
      }
      sub_14750(*v26);
      return 1;
    case 13LL:
      v53 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v54 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v54 + 1;
      }
      else
      {
        v54 = (__int64 *)(*(_QWORD *)(a3 + 16) + v53);
        *(_DWORD *)a3 = v53 + 8;
      }
      sub_147C0(a1, *v54);
      return 1;
    case 14LL:
      v35 = *(_DWORD *)a3;
      if ( v35 > 0x2F )
      {
        v76 = *(__int64 **)(a3 + 8);
        v77 = v76 + 1;
        *(_QWORD *)(a3 + 8) = v76 + 1;
        v37 = *v76;
      }
      else
      {
        v36 = *(_QWORD *)(a3 + 16);
        *(_DWORD *)a3 = v35 + 8;
        v37 = *(_QWORD *)(v36 + v35);
        if ( v35 + 8 <= 0x2F )
        {
          *(_DWORD *)a3 = v35 + 16;
          goto LABEL_48;
        }
        v77 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v77 + 1;
LABEL_48:
      sub_145E0(a1, v37);
      return 1;
    case 15LL:
      v50 = *(_DWORD *)a3;
      if ( v50 > 0x2F )
      {
        v75 = *(_QWORD *)(a3 + 8) + 8LL;
        *(_QWORD *)(a3 + 8) = v75;
      }
      else
      {
        *(_DWORD *)a3 = v50 + 8;
        if ( v50 + 8 <= 0x2F )
        {
          *(_DWORD *)a3 = v50 + 16;
          goto LABEL_79;
        }
        v75 = *(_QWORD *)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v75 + 8;
LABEL_79:
      nullsub_1();
      return 1;
    case 16LL:
      v27 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v28 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v28 + 1;
      }
      else
      {
        v28 = (__int64 *)(*(_QWORD *)(a3 + 16) + v27);
        *(_DWORD *)a3 = v27 + 8;
      }
      sub_14490(a1, *v28);
      return 1;
    case 17LL:
      v31 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v32 = *(_BYTE ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v32 + 1;
      }
      else
      {
        v32 = (_BYTE **)(*(_QWORD *)(a3 + 16) + v31);
        *(_DWORD *)a3 = v31 + 8;
      }
      sub_14320(*v32);
      return 1;
    case 18LL:
      v29 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v30 = *(__int64 ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v30 + 1;
      }
      else
      {
        v30 = (__int64 **)(*(_QWORD *)(a3 + 16) + v29);
        *(_DWORD *)a3 = v29 + 8;
      }
      sub_140F0(*v30);
      return 1;
    case 19LL:
      v45 = *(_DWORD *)a3;
      if ( v45 > 0x2F )
      {
        v78 = *(__int64 ***)(a3 + 8);
        v49 = (_BYTE **)(v78 + 1);
        *(_QWORD *)(a3 + 8) = v78 + 1;
        v47 = *v78;
      }
      else
      {
        v46 = *(_QWORD *)(a3 + 16);
        a4 = v45 + 8;
        *(_DWORD *)a3 = a4;
        v47 = *(__int64 **)(v46 + v45);
        if ( (unsigned int)a4 <= 0x2F )
        {
          v48 = v45 + 16;
          v49 = (_BYTE **)(a4 + v46);
          *(_DWORD *)a3 = v48;
          goto LABEL_74;
        }
        v49 = *(_BYTE ***)(a3 + 8);
      }
      v48 = (__int64)(v49 + 1);
      *(_QWORD *)(a3 + 8) = v49 + 1;
LABEL_74:
      if ( !(unsigned __int8)sub_13FE0(v47, *v49, v48, a4, a5, a6) )
        return -1;
      return 1;
    case 43LL:
      v23 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v24 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v24 + 1;
      }
      else
      {
        v24 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v23);
        *(_DWORD *)a3 = v23 + 8;
      }
      return (int)sub_12BC0(*v24);
    case 47LL:
      v21 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v22 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v22 + 1;
      }
      else
      {
        v22 = (__int64 *)(*(_QWORD *)(a3 + 16) + v21);
        *(_DWORD *)a3 = v21 + 8;
      }
      if ( !sub_12CD0(*v22) )
        return -1;
      return 1;
    case 59LL:
      v19 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v20 = *(unsigned __int64 ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v20 + 1;
      }
      else
      {
        v20 = (unsigned __int64 **)(*(_QWORD *)(a3 + 16) + v19);
        *(_DWORD *)a3 = v19 + 8;
      }
      sub_129C0(*v20);
      return 1;
    case 61LL:
      return 2;
    case 86LL:
LABEL_4:
      sub_15BA0(a1);
      return 0;
    case 94LL:
      v17 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v18 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v18 + 1;
      }
      else
      {
        v18 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v17);
        *(_DWORD *)a3 = v17 + 8;
      }
      sub_173E0(*v18, a2, (_DWORD)v18, a4, a5, a6);
      return 0;
    case 95LL:
      netnode_check();
      return 0;
    case 96LL:
      if ( !(_BYTE)byte_393E8 && __cxa_guard_acquire(&byte_393E8) )
      {
        qword_393A0 = *(_QWORD *)(a1 + 120);
        qword_393B8 = qword_393A0;
        __cxa_guard_release(&byte_393E8);
      }
      return (int)cvt64_node_supval_for_event();
    case 99LL:
      v10 = *(_DWORD *)a3;
      if ( v10 > 0x2F )
      {
        v69 = *(__int64 **)(a3 + 8);
        v70 = v69 + 1;
        *(_QWORD *)(a3 + 8) = v69 + 1;
        v13 = *v69;
      }
      else
      {
        v11 = *(_QWORD *)(a3 + 16);
        v12 = v10 + 8;
        *(_DWORD *)a3 = v12;
        v13 = *(_QWORD *)(v11 + v10);
        if ( (unsigned int)v12 <= 0x2F )
        {
          v14 = v10 + 16;
          *(_DWORD *)a3 = v14;
          v15 = *(_QWORD *)(v11 + v12);
          if ( (unsigned int)v14 <= 0x2F )
          {
            v16 = (__int64 *)(v14 + v11);
            *(_DWORD *)a3 = v10 + 24;
            goto LABEL_12;
          }
          v16 = *(__int64 **)(a3 + 8);
LABEL_105:
          *(_QWORD *)(a3 + 8) = v16 + 1;
LABEL_12:
          sub_147F0(a1, v13, v15, *v16);
          return 1;
        }
        v70 = *(__int64 **)(a3 + 8);
      }
      v16 = v70 + 1;
      *(_QWORD *)(a3 + 8) = v70 + 1;
      v15 = *v70;
      goto LABEL_105;
    default:
      return 0;
  }
}

