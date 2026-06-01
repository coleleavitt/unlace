__int64 __fastcall sub_A320(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  __int64 result; // rax
  unsigned int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 *v16; // rax
  unsigned int v17; // eax
  unsigned __int64 **v18; // rdx
  unsigned int v19; // eax
  _QWORD *v20; // rdx
  unsigned int v21; // edx
  __int64 v22; // rax
  __int64 v23; // rsi
  unsigned int *v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // rsi
  __int16 *v27; // rax
  unsigned int v28; // eax
  __int64 *v29; // rdx
  unsigned int v30; // eax
  _QWORD *v31; // rdx
  unsigned int v32; // edx
  __int64 v33; // rax
  __int64 v34; // rcx
  _DWORD *v35; // rax
  __int64 wide_byte; // rdx
  unsigned int v37; // edx
  __int64 v38; // rax
  __int64 v39; // rcx
  _DWORD *v40; // rbp
  _QWORD *v41; // rax
  unsigned int v42; // edx
  __int64 v43; // rax
  __int64 *v44; // rdi
  __int64 v45; // rdx
  __int64 *v46; // rax
  unsigned int v47; // eax
  _BYTE **v48; // rdx
  unsigned int v49; // eax
  __int64 *v50; // rdx
  unsigned int v51; // edx
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rsi
  __int64 *v55; // rax
  int j; // ebx
  unsigned int v57; // eax
  __int64 *v58; // rdx
  unsigned int v59; // edx
  unsigned int v60; // eax
  __int64 *v61; // rdx
  unsigned int v62; // eax
  __int64 *v63; // rdx
  unsigned int v64; // eax
  __int64 *v65; // rdx
  unsigned int v66; // edx
  __int64 v67; // rax
  __int64 v68; // rsi
  const char *v69; // rdi
  __int64 v70; // rcx
  int v71; // r9d
  __int64 v72; // rsi
  _QWORD *v73; // r10
  __int64 v74; // rcx
  __int64 *v75; // r12
  _DWORD *v76; // rax
  __int64 v77; // rax
  __int64 v78; // rdi
  __int64 v79; // r14
  _QWORD *v80; // rbx
  __int64 v81; // rdi
  __int64 v82; // r12
  __int64 i; // r15
  _QWORD *v84; // r13
  unsigned int v85; // eax
  _QWORD *v86; // rdx
  __int64 v87; // rax
  __int64 *v88; // rax
  __int64 *v89; // rdx
  __int64 **v90; // rdx
  unsigned int **v91; // rax
  __int64 *v92; // rdx
  _DWORD **v93; // rdx
  __int64 *v94; // rdx
  const char **v95; // rax
  int *v96; // rdx
  _QWORD **v97; // rax
  _QWORD **v98; // rdx
  __int64 v99; // [rsp+0h] [rbp-68h]
  __int64 v100; // [rsp+8h] [rbp-60h]

  if ( a2 > 99 )
  {
    if ( a2 == 3002 )
    {
      v85 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v86 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v86 + 1;
      }
      else
      {
        v86 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v85);
        *(_DWORD *)a3 = v85 + 8;
      }
      *(_QWORD *)(a1 + 224) = *v86;
      netnode_supset();
    }
    return 0;
  }
  if ( a2 < 0 )
    return 0;
  switch ( a2 )
  {
    case 0LL:
      netnode_check();
      setinf_flag();
      setinf_flag();
      *(_QWORD *)(a1 + 224) = netnode_altval();
      return 0;
    case 1LL:
      v78 = *(_QWORD *)(a1 + 160);
      if ( v78 )
      {
        v100 = *(_QWORD *)(a1 + 168);
        if ( v100 )
        {
          v99 = 0;
          v79 = 0;
          do
          {
            v80 = (_QWORD *)(v78 + v79);
            v81 = *(_QWORD *)(v78 + v79 + 56);
            if ( v81 )
            {
              v82 = v80[8];
              if ( v82 )
              {
                for ( i = 0; i != v82; ++i )
                {
                  v84 = (_QWORD *)(v81 + 48 * i);
                  if ( v84[3] )
                  {
                    v84[4] = 0;
                    qfree();
                  }
                  if ( *v84 )
                  {
                    v84[1] = 0;
                    qfree();
                  }
                  v81 = v80[7];
                }
              }
              v80[8] = 0;
              qfree();
            }
            if ( v80[4] )
            {
              v80[5] = 0;
              qfree();
            }
            if ( v80[1] )
            {
              v80[2] = 0;
              qfree();
            }
            ++v99;
            v78 = *(_QWORD *)(a1 + 160);
            v79 += 88;
          }
          while ( v100 != v99 );
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
      *(_BYTE *)(a1 + 234) = 0;
      return 0;
    case 4LL:
      read_ioports();
      netnode_supset();
      netnode_supset();
      netnode_supset();
      setinf_flag();
      if ( get_first_seg() )
      {
        sub_9C80(a1);
        do
        {
          get_segm_class();
          for ( j = 45; j != 50; ++j )
            set_default_sreg_value();
        }
        while ( get_next_seg() );
      }
      return 0;
    case 5LL:
      if ( netnode_qsupstr() >= 0 )
      {
        netnode_supset();
        netnode_supdel();
      }
      goto LABEL_6;
    case 6LL:
    case 7LL:
      setinf_flag();
      return 0;
    case 8LL:
      v66 = *(_DWORD *)a3;
      if ( v66 > 0x2F )
      {
        v95 = *(const char ***)(a3 + 8);
        v96 = (int *)(v95 + 1);
        *(_QWORD *)(a3 + 8) = v95 + 1;
        v69 = *v95;
      }
      else
      {
        v67 = *(_QWORD *)(a3 + 16);
        v68 = v66 + 8;
        *(_DWORD *)a3 = v68;
        v69 = *(const char **)(v67 + v66);
        if ( (unsigned int)v68 <= 0x2F )
        {
          v70 = v66 + 16;
          *(_DWORD *)a3 = v70;
          v71 = *(_DWORD *)(v67 + v68);
          if ( (unsigned int)v70 <= 0x2F )
          {
            v72 = v66 + 24;
            *(_DWORD *)a3 = v72;
            v73 = *(_QWORD **)(v67 + v70);
            if ( (unsigned int)v72 <= 0x2F )
            {
              v74 = v66 + 32;
              *(_DWORD *)a3 = v74;
              v75 = *(__int64 **)(v67 + v72);
              if ( (unsigned int)v74 <= 0x2F )
              {
                v76 = (_DWORD *)(v74 + v67);
                *(_DWORD *)a3 = v66 + 40;
                goto LABEL_95;
              }
              v76 = *(_DWORD **)(a3 + 8);
LABEL_153:
              *(_QWORD *)(a3 + 8) = v76 + 2;
LABEL_95:
              v77 = sub_9EF0(a1, v69, v71, v73, *v76 != 0);
              if ( v77 )
              {
                if ( v75 )
                  *v75 = v77;
                return -1;
              }
              return 1;
            }
            v98 = *(_QWORD ***)(a3 + 8);
LABEL_152:
            v76 = v98 + 1;
            *(_QWORD *)(a3 + 8) = v98 + 1;
            v75 = *v98;
            goto LABEL_153;
          }
          v97 = *(_QWORD ***)(a3 + 8);
LABEL_151:
          v98 = v97 + 1;
          *(_QWORD *)(a3 + 8) = v97 + 1;
          v73 = *v97;
          goto LABEL_152;
        }
        v96 = *(int **)(a3 + 8);
      }
      v97 = (_QWORD **)(v96 + 2);
      *(_QWORD *)(a3 + 8) = v96 + 2;
      v71 = *v96;
      goto LABEL_151;
    case 10LL:
      v49 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v50 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v50 + 1;
      }
      else
      {
        v50 = (__int64 *)(*(_QWORD *)(a3 + 16) + v49);
        *(_DWORD *)a3 = v49 + 8;
      }
      return (int)sub_6B70(a1, *v50, (__int64)v50, a4, a5, a6);
    case 11LL:
      v62 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v63 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v63 + 1;
      }
      else
      {
        v63 = (__int64 *)(*(_QWORD *)(a3 + 16) + v62);
        *(_DWORD *)a3 = v62 + 8;
      }
      if ( !(unsigned int)sub_7280(a1, *v63, a7) )
        return -1;
      return 1;
    case 12LL:
      v60 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v61 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v61 + 1;
      }
      else
      {
        v61 = (__int64 *)(*(_QWORD *)(a3 + 16) + v60);
        *(_DWORD *)a3 = v60 + 8;
      }
      sub_8B70(*v61);
      return 1;
    case 13LL:
      v64 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v65 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v65 + 1;
      }
      else
      {
        v65 = (__int64 *)(*(_QWORD *)(a3 + 16) + v64);
        *(_DWORD *)a3 = v64 + 8;
      }
      sub_8BA0(a1, *v65);
      return 1;
    case 14LL:
      v51 = *(_DWORD *)a3;
      if ( v51 > 0x2F )
      {
        v94 = *(__int64 **)(a3 + 8);
        v55 = v94 + 1;
        *(_QWORD *)(a3 + 8) = v94 + 1;
        v54 = *v94;
      }
      else
      {
        v52 = *(_QWORD *)(a3 + 16);
        v53 = v51 + 8;
        *(_DWORD *)a3 = v53;
        v54 = *(_QWORD *)(v52 + v51);
        if ( (unsigned int)v53 <= 0x2F )
        {
          v55 = (__int64 *)(v53 + v52);
          *(_DWORD *)a3 = v51 + 16;
          goto LABEL_61;
        }
        v55 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v55 + 1;
LABEL_61:
      sub_8A00(a1, v54, *v55);
      return 1;
    case 15LL:
      v59 = *(_DWORD *)a3;
      if ( v59 > 0x2F )
      {
        v87 = *(_QWORD *)(a3 + 8) + 8LL;
        *(_QWORD *)(a3 + 8) = v87;
      }
      else
      {
        *(_DWORD *)a3 = v59 + 8;
        if ( v59 + 8 <= 0x2F )
        {
          *(_DWORD *)a3 = v59 + 16;
          goto LABEL_74;
        }
        v87 = *(_QWORD *)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v87 + 8;
LABEL_74:
      nullsub_1();
      return 1;
    case 16LL:
      v57 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v58 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v58 + 1;
      }
      else
      {
        v58 = (__int64 *)(*(_QWORD *)(a3 + 16) + v57);
        *(_DWORD *)a3 = v57 + 8;
      }
      sub_88B0(a1, *v58);
      return 1;
    case 17LL:
      v47 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v48 = *(_BYTE ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v48 + 1;
      }
      else
      {
        v48 = (_BYTE **)(*(_QWORD *)(a3 + 16) + v47);
        *(_DWORD *)a3 = v47 + 8;
      }
      sub_87D0(*v48);
      return 1;
    case 19LL:
      v42 = *(_DWORD *)a3;
      if ( v42 > 0x2F )
      {
        v90 = *(__int64 ***)(a3 + 8);
        v46 = (__int64 *)(v90 + 1);
        *(_QWORD *)(a3 + 8) = v90 + 1;
        v44 = *v90;
      }
      else
      {
        v43 = *(_QWORD *)(a3 + 16);
        a4 = v42 + 8;
        *(_DWORD *)a3 = a4;
        v44 = *(__int64 **)(v43 + v42);
        if ( (unsigned int)a4 <= 0x2F )
        {
          v45 = v42 + 16;
          v46 = (__int64 *)(a4 + v43);
          *(_DWORD *)a3 = v45;
          goto LABEL_50;
        }
        v46 = *(__int64 **)(a3 + 8);
      }
      v45 = (__int64)(v46 + 1);
      *(_QWORD *)(a3 + 8) = v46 + 1;
LABEL_50:
      if ( !(unsigned __int8)sub_83D0(v44, *v46, v45, a4, a5, a6) )
        return -1;
      return 1;
    case 32LL:
      v32 = *(_DWORD *)a3;
      if ( v32 > 0x2F )
      {
        v35 = (_DWORD *)(*(_QWORD *)(a3 + 8) + 8LL);
        *(_QWORD *)(a3 + 8) = v35;
      }
      else
      {
        v33 = *(_QWORD *)(a3 + 16);
        v34 = v32 + 8;
        *(_DWORD *)a3 = v34;
        if ( (unsigned int)v34 <= 0x2F )
        {
          v35 = (_DWORD *)(v34 + v33);
          *(_DWORD *)a3 = v32 + 16;
          goto LABEL_40;
        }
        v35 = *(_DWORD **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v35 + 2;
LABEL_40:
      if ( !*v35 )
        return 1;
      wide_byte = get_wide_byte();
      result = -1;
      if ( wide_byte )
        return 1;
      return result;
    case 37LL:
      v28 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v29 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v29 + 1;
      }
      else
      {
        v29 = (__int64 *)(*(_QWORD *)(a3 + 16) + v28);
        *(_DWORD *)a3 = v28 + 8;
      }
      if ( !sub_7230(*v29) )
        return -1;
      return 1;
    case 43LL:
      v19 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v20 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v20 + 1;
      }
      else
      {
        v20 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v19);
        *(_DWORD *)a3 = v19 + 8;
      }
      return (int)sub_7880(*v20);
    case 59LL:
      v17 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v18 = *(unsigned __int64 ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v18 + 1;
      }
      else
      {
        v18 = (unsigned __int64 **)(*(_QWORD *)(a3 + 16) + v17);
        *(_DWORD *)a3 = v17 + 8;
      }
      sub_7680(a1, *v18);
      return 1;
    case 60LL:
      v37 = *(_DWORD *)a3;
      if ( v37 > 0x2F )
      {
        v93 = *(_DWORD ***)(a3 + 8);
        v41 = v93 + 1;
        *(_QWORD *)(a3 + 8) = v93 + 1;
        v40 = *v93;
      }
      else
      {
        v38 = *(_QWORD *)(a3 + 16);
        v39 = v37 + 8;
        *(_DWORD *)a3 = v39;
        v40 = *(_DWORD **)(v38 + v37);
        if ( (unsigned int)v39 <= 0x2F )
        {
          v41 = (_QWORD *)(v39 + v38);
          *(_DWORD *)a3 = v37 + 16;
          goto LABEL_46;
        }
        v41 = *(_QWORD **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v41 + 1;
LABEL_46:
      *v40 = sub_7850(*v41);
      return 1;
    case 75LL:
      v21 = *(_DWORD *)a3;
      if ( v21 > 0x2F )
      {
        v91 = *(unsigned int ***)(a3 + 8);
        v92 = (__int64 *)(v91 + 1);
        *(_QWORD *)(a3 + 8) = v91 + 1;
        v24 = *v91;
LABEL_134:
        v27 = (__int16 *)(v92 + 1);
        *(_QWORD *)(a3 + 8) = v92 + 1;
        v26 = *v92;
        goto LABEL_135;
      }
      v22 = *(_QWORD *)(a3 + 16);
      v23 = v21 + 8;
      *(_DWORD *)a3 = v23;
      v24 = *(unsigned int **)(v22 + v21);
      if ( (unsigned int)v23 > 0x2F )
      {
        v92 = *(__int64 **)(a3 + 8);
        goto LABEL_134;
      }
      v25 = v21 + 16;
      *(_DWORD *)a3 = v25;
      v26 = *(_QWORD *)(v22 + v23);
      if ( (unsigned int)v25 <= 0x2F )
      {
        v27 = (__int16 *)(v25 + v22);
        *(_DWORD *)a3 = v21 + 24;
        return (int)sub_9E40(v24, v26, *v27);
      }
      v27 = *(__int16 **)(a3 + 8);
LABEL_135:
      *(_QWORD *)(a3 + 8) = v27 + 4;
      return (int)sub_9E40(v24, v26, *v27);
    case 86LL:
LABEL_6:
      sub_A0C0(a1);
      return 0;
    case 94LL:
      v30 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v31 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v31 + 1;
      }
      else
      {
        v31 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v30);
        *(_DWORD *)a3 = v30 + 8;
      }
      sub_BBF0(*v31, a2, (_DWORD)v31, a4, a5, a6);
      return 0;
    case 95LL:
      netnode_check();
      return 0;
    case 96LL:
      if ( !(_BYTE)byte_11428 && __cxa_guard_acquire(&byte_11428) )
      {
        qword_113C0 = *(_QWORD *)(a1 + 120);
        qword_113D8 = qword_113C0;
        qword_113F0 = qword_113C0;
        __cxa_guard_release(&byte_11428);
      }
      return (int)cvt64_node_supval_for_event();
    case 99LL:
      v10 = *(_DWORD *)a3;
      if ( v10 > 0x2F )
      {
        v88 = *(__int64 **)(a3 + 8);
        v89 = v88 + 1;
        *(_QWORD *)(a3 + 8) = v88 + 1;
        v13 = *v88;
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
            goto LABEL_14;
          }
          v16 = *(__int64 **)(a3 + 8);
LABEL_129:
          *(_QWORD *)(a3 + 8) = v16 + 1;
LABEL_14:
          sub_8BD0(a1, v13, v15, *v16);
          return 1;
        }
        v89 = *(__int64 **)(a3 + 8);
      }
      v16 = v89 + 1;
      *(_QWORD *)(a3 + 8) = v89 + 1;
      v15 = *v89;
      goto LABEL_129;
    default:
      return 0;
  }
}

