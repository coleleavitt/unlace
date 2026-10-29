__int64 __fastcall sub_17690(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 result; // rax
  unsigned int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rcx
  _DWORD *v12; // rbp
  __int64 *v13; // rax
  unsigned int v14; // eax
  unsigned __int64 **v15; // rdx
  unsigned int v16; // edx
  __int64 v17; // rax
  __int64 v18; // rsi
  _DWORD *v19; // rbp
  __int64 v20; // rcx
  __int64 v21; // rdi
  _QWORD *v22; // rax
  unsigned int v23; // eax
  _QWORD *v24; // rdx
  unsigned int v25; // eax
  __int64 *v26; // rdx
  unsigned int v27; // eax
  __int64 *v28; // rdx
  __int64 v29; // rbx
  char v30; // dl
  unsigned int v31; // edx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdi
  _QWORD *v35; // rax
  unsigned int v36; // edx
  __int64 v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rdi
  __int64 v40; // rcx
  __int64 v41; // rsi
  __int64 *v42; // rax
  unsigned int v43; // edx
  __int64 v44; // rax
  __int64 v45; // rcx
  _QWORD *v46; // rdi
  __int64 *v47; // rax
  unsigned int v48; // eax
  _BYTE **v49; // rdx
  unsigned int v50; // eax
  __int64 *v51; // rdx
  unsigned int v52; // edx
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rsi
  __int64 *v56; // rax
  unsigned int v57; // eax
  __int64 *v58; // rdx
  unsigned int v59; // eax
  __int64 *v60; // rdx
  unsigned int v61; // edx
  __int64 v62; // rax
  __int64 v63; // rsi
  const char *v64; // rdi
  __int64 v65; // rcx
  int v66; // r9d
  __int64 v67; // rsi
  _DWORD *v68; // r10
  __int64 v69; // rcx
  __int64 *v70; // r12
  _DWORD *v71; // rax
  __int64 v72; // rax
  __int64 v73; // rdi
  __int64 v74; // r14
  _QWORD *v75; // rbx
  __int64 v76; // rdi
  __int64 v77; // r12
  __int64 i; // r15
  _QWORD *v79; // r13
  _QWORD **v80; // rdx
  __int64 *v81; // rdx
  const char **v82; // rax
  int *v83; // rdx
  _DWORD **v84; // rax
  _QWORD **v85; // rdx
  _DWORD **v86; // rdx
  __int64 *v87; // rdx
  _DWORD **v88; // rax
  __int64 *v89; // rdx
  __int64 *v90; // rax
  __int64 *v91; // rdx
  __int64 v92; // [rsp+0h] [rbp-68h]
  __int64 v93; // [rsp+8h] [rbp-60h]

  switch ( a2 )
  {
    case 0LL:
      hook_event_listener();
      netnode_check();
      setinf_flag();
      setinf_flag();
      return 0;
    case 1LL:
      v73 = *(_QWORD *)(a1 + 160);
      if ( v73 )
      {
        v93 = *(_QWORD *)(a1 + 168);
        if ( v93 )
        {
          v92 = 0;
          v74 = 0;
          do
          {
            v75 = (_QWORD *)(v73 + v74);
            v76 = *(_QWORD *)(v73 + v74 + 56);
            if ( v76 )
            {
              v77 = v75[8];
              if ( v77 )
              {
                for ( i = 0; i != v77; ++i )
                {
                  v79 = (_QWORD *)(v76 + 48 * i);
                  if ( v79[3] )
                  {
                    v79[4] = 0;
                    qfree();
                  }
                  if ( *v79 )
                  {
                    v79[1] = 0;
                    qfree();
                  }
                  v76 = v75[7];
                }
              }
              v75[8] = 0;
              qfree();
            }
            if ( v75[4] )
            {
              v75[5] = 0;
              qfree();
            }
            if ( v75[1] )
            {
              v75[2] = 0;
              qfree();
            }
            ++v92;
            v73 = *(_QWORD *)(a1 + 160);
            v74 += 88;
          }
          while ( v93 != v92 );
        }
        *(_QWORD *)(a1 + 168) = 0;
        qfree();
        *(_QWORD *)(a1 + 160) = 0;
        *(_QWORD *)(a1 + 176) = 0;
      }
      unhook_event_listener();
      clr_module_data();
      return 0;
    case 2LL:
      if ( *(_DWORD *)a3 > 0x2Fu )
        *(_QWORD *)(a3 + 8) += 8LL;
      else
        *(_DWORD *)a3 += 8;
      *(_BYTE *)(a1 + 254) = 0;
      return 0;
    case 4LL:
      setinf_flag();
      read_ioports();
      netnode_supset();
      netnode_supset();
      setinf_flag();
      set_default_sreg_value();
      set_default_sreg_value();
      set_default_sreg_value();
      return 0;
    case 5LL:
      if ( netnode_qsupstr() >= 0 )
      {
        netnode_supset();
        netnode_supdel();
      }
      read_ioports();
      netnode_supset();
      goto LABEL_5;
    case 6LL:
    case 7LL:
      setinf_flag();
      return 0;
    case 8LL:
      v61 = *(_DWORD *)a3;
      if ( v61 > 0x2F )
      {
        v82 = *(const char ***)(a3 + 8);
        v83 = (int *)(v82 + 1);
        *(_QWORD *)(a3 + 8) = v82 + 1;
        v64 = *v82;
LABEL_122:
        v84 = (_DWORD **)(v83 + 2);
        *(_QWORD *)(a3 + 8) = v83 + 2;
        v66 = *v83;
LABEL_123:
        v85 = (_QWORD **)(v84 + 1);
        *(_QWORD *)(a3 + 8) = v84 + 1;
        v68 = *v84;
LABEL_124:
        v71 = v85 + 1;
        *(_QWORD *)(a3 + 8) = v85 + 1;
        v70 = *v85;
        goto LABEL_125;
      }
      v62 = *(_QWORD *)(a3 + 16);
      v63 = v61 + 8;
      *(_DWORD *)a3 = v63;
      v64 = *(const char **)(v62 + v61);
      if ( (unsigned int)v63 > 0x2F )
      {
        v83 = *(int **)(a3 + 8);
        goto LABEL_122;
      }
      v65 = v61 + 16;
      *(_DWORD *)a3 = v65;
      v66 = *(_DWORD *)(v62 + v63);
      if ( (unsigned int)v65 > 0x2F )
      {
        v84 = *(_DWORD ***)(a3 + 8);
        goto LABEL_123;
      }
      v67 = v61 + 24;
      *(_DWORD *)a3 = v67;
      v68 = *(_DWORD **)(v62 + v65);
      if ( (unsigned int)v67 > 0x2F )
      {
        v85 = *(_QWORD ***)(a3 + 8);
        goto LABEL_124;
      }
      v69 = v61 + 32;
      *(_DWORD *)a3 = v69;
      v70 = *(__int64 **)(v62 + v67);
      if ( (unsigned int)v69 <= 0x2F )
      {
        v71 = (_DWORD *)(v69 + v62);
        *(_DWORD *)a3 = v61 + 40;
        goto LABEL_87;
      }
      v71 = *(_DWORD **)(a3 + 8);
LABEL_125:
      *(_QWORD *)(a3 + 8) = v71 + 2;
LABEL_87:
      v72 = sub_17340(a1, v64, v66, v68, *v71 != 0);
      if ( !v72 )
        return 1;
      if ( v70 )
        *v70 = v72;
      return -1;
    case 10LL:
      v50 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v51 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v51 + 1;
      }
      else
      {
        v51 = (__int64 *)(*(_QWORD *)(a3 + 16) + v50);
        *(_DWORD *)a3 = v50 + 8;
      }
      return (int)sub_F700(a1, *v51);
    case 11LL:
      v59 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v60 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v60 + 1;
      }
      else
      {
        v60 = (__int64 *)(*(_QWORD *)(a3 + 16) + v59);
        *(_DWORD *)a3 = v59 + 8;
      }
      if ( !(unsigned int)sub_11E20(a1, *v60) )
        return -1;
      return 1;
    case 12LL:
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
      sub_15AC0(*v58);
      return 1;
    case 13LL:
      if ( *(_DWORD *)a3 > 0x2Fu )
        *(_QWORD *)(a3 + 8) += 8LL;
      else
        *(_DWORD *)a3 += 8;
      nullsub_3();
      return 1;
    case 14LL:
      v52 = *(_DWORD *)a3;
      if ( v52 > 0x2F )
      {
        v81 = *(__int64 **)(a3 + 8);
        v56 = v81 + 1;
        *(_QWORD *)(a3 + 8) = v81 + 1;
        v55 = *v81;
      }
      else
      {
        v53 = *(_QWORD *)(a3 + 16);
        v54 = v52 + 8;
        *(_DWORD *)a3 = v54;
        v55 = *(_QWORD *)(v53 + v52);
        if ( (unsigned int)v54 <= 0x2F )
        {
          v56 = (__int64 *)(v54 + v53);
          *(_DWORD *)a3 = v52 + 16;
          goto LABEL_65;
        }
        v56 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v56 + 1;
LABEL_65:
      sub_15AF0(a1, v55, *v56);
      return 1;
    case 16LL:
      if ( *(_DWORD *)a3 > 0x2Fu )
        *(_QWORD *)(a3 + 8) += 8LL;
      else
        *(_DWORD *)a3 += 8;
      sub_15C80();
      return 1;
    case 17LL:
      v48 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v49 = *(_BYTE ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v49 + 1;
      }
      else
      {
        v49 = (_BYTE **)(*(_QWORD *)(a3 + 16) + v48);
        *(_DWORD *)a3 = v48 + 8;
      }
      sub_15AB0(*v49);
      return 1;
    case 19LL:
      v43 = *(_DWORD *)a3;
      if ( v43 > 0x2F )
      {
        v80 = *(_QWORD ***)(a3 + 8);
        v47 = (__int64 *)(v80 + 1);
        *(_QWORD *)(a3 + 8) = v80 + 1;
        v46 = *v80;
      }
      else
      {
        v44 = *(_QWORD *)(a3 + 16);
        v45 = v43 + 8;
        *(_DWORD *)a3 = v45;
        v46 = *(_QWORD **)(v44 + v43);
        if ( (unsigned int)v45 <= 0x2F )
        {
          v47 = (__int64 *)(v45 + v44);
          *(_DWORD *)a3 = v43 + 16;
          goto LABEL_51;
        }
        v47 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v47 + 1;
LABEL_51:
      if ( !(unsigned __int8)sub_157A0(v46, *v47) )
        return -1;
      return 1;
    case 25LL:
      if ( *(_DWORD *)a3 > 0x2Fu )
        *(_QWORD *)(a3 + 8) += 8LL;
      else
        *(_DWORD *)a3 += 8;
      set_default_sreg_value();
      set_default_sreg_value();
      set_default_sreg_value();
      return 0;
    case 35LL:
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
      v29 = *v28;
      v30 = sub_12290(*v28, a2, (__int64)v28, a4);
      result = 1;
      if ( !v30 )
        return sub_122C0(v29) - 1;
      return result;
    case 36LL:
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
      return (int)sub_12640(*v26);
    case 40LL:
      v31 = *(_DWORD *)a3;
      if ( v31 > 0x2F )
      {
        v87 = *(__int64 **)(a3 + 8);
        v35 = v87 + 1;
        *(_QWORD *)(a3 + 8) = v87 + 1;
        v34 = *v87;
      }
      else
      {
        v32 = *(_QWORD *)(a3 + 16);
        v33 = v31 + 8;
        *(_DWORD *)a3 = v33;
        v34 = *(_QWORD *)(v32 + v31);
        if ( (unsigned int)v33 <= 0x2F )
        {
          v35 = (_QWORD *)(v33 + v32);
          *(_DWORD *)a3 = v31 + 16;
          goto LABEL_37;
        }
        v35 = *(_QWORD **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v35 + 1;
LABEL_37:
      if ( !(unsigned __int8)sub_12C70(v34, *v35) )
        return -1;
      return 1;
    case 46LL:
      v16 = *(_DWORD *)a3;
      if ( v16 > 0x2F )
      {
        v88 = *(_DWORD ***)(a3 + 8);
        v89 = (__int64 *)(v88 + 1);
        *(_QWORD *)(a3 + 8) = v88 + 1;
        v19 = *v88;
      }
      else
      {
        v17 = *(_QWORD *)(a3 + 16);
        v18 = v16 + 8;
        *(_DWORD *)a3 = v18;
        v19 = *(_DWORD **)(v17 + v16);
        if ( (unsigned int)v18 <= 0x2F )
        {
          v20 = v16 + 16;
          *(_DWORD *)a3 = v20;
          v21 = *(_QWORD *)(v17 + v18);
          if ( (unsigned int)v20 <= 0x2F )
          {
            v22 = (_QWORD *)(v20 + v17);
            *(_DWORD *)a3 = v16 + 24;
            goto LABEL_21;
          }
          v22 = *(_QWORD **)(a3 + 8);
LABEL_135:
          *(_QWORD *)(a3 + 8) = v22 + 1;
LABEL_21:
          *v19 = sub_11E10(v21, *v22);
          return 1;
        }
        v89 = *(__int64 **)(a3 + 8);
      }
      v22 = v89 + 1;
      *(_QWORD *)(a3 + 8) = v89 + 1;
      v21 = *v89;
      goto LABEL_135;
    case 59LL:
      v14 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v15 = *(unsigned __int64 ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v15 + 1;
      }
      else
      {
        v15 = (unsigned __int64 **)(*(_QWORD *)(a3 + 16) + v14);
        *(_DWORD *)a3 = v14 + 8;
      }
      sub_12440(*v15);
      return 1;
    case 60LL:
      v9 = *(_DWORD *)a3;
      if ( v9 > 0x2F )
      {
        v86 = *(_DWORD ***)(a3 + 8);
        v13 = (__int64 *)(v86 + 1);
        *(_QWORD *)(a3 + 8) = v86 + 1;
        v12 = *v86;
      }
      else
      {
        v10 = *(_QWORD *)(a3 + 16);
        v11 = v9 + 8;
        *(_DWORD *)a3 = v11;
        v12 = *(_DWORD **)(v10 + v9);
        if ( (unsigned int)v11 <= 0x2F )
        {
          v13 = (__int64 *)(v11 + v10);
          *(_DWORD *)a3 = v9 + 16;
          goto LABEL_12;
        }
        v13 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v13 + 1;
LABEL_12:
      *v12 = sub_12300(*v13);
      return 1;
    case 86LL:
LABEL_5:
      sub_174F0(a1);
      return 0;
    case 94LL:
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
      sub_18EB0(*v24, a2, (_DWORD)v24, a4, a5, a6);
      return 0;
    case 95LL:
      netnode_check();
      return 0;
    case 96LL:
      if ( !(_BYTE)byte_2A4C8 && __cxa_guard_acquire(&byte_2A4C8) )
      {
        qword_2A480 = *(_QWORD *)(a1 + 120);
        qword_2A498 = qword_2A480;
        __cxa_guard_release(&byte_2A4C8);
      }
      return (int)cvt64_node_supval_for_event();
    case 99LL:
      v36 = *(_DWORD *)a3;
      if ( v36 > 0x2F )
      {
        v90 = *(__int64 **)(a3 + 8);
        v91 = v90 + 1;
        *(_QWORD *)(a3 + 8) = v90 + 1;
        v39 = *v90;
      }
      else
      {
        v37 = *(_QWORD *)(a3 + 16);
        v38 = v36 + 8;
        *(_DWORD *)a3 = v38;
        v39 = *(_QWORD *)(v37 + v36);
        if ( (unsigned int)v38 <= 0x2F )
        {
          v40 = v36 + 16;
          *(_DWORD *)a3 = v40;
          v41 = *(_QWORD *)(v37 + v38);
          if ( (unsigned int)v40 <= 0x2F )
          {
            v42 = (__int64 *)(v40 + v37);
            *(_DWORD *)a3 = v36 + 24;
            goto LABEL_43;
          }
          v42 = *(__int64 **)(a3 + 8);
LABEL_139:
          *(_QWORD *)(a3 + 8) = v42 + 1;
LABEL_43:
          sub_15E20(v39, v41, *v42);
          return 1;
        }
        v91 = *(__int64 **)(a3 + 8);
      }
      v42 = v91 + 1;
      *(_QWORD *)(a3 + 8) = v91 + 1;
      v41 = *v91;
      goto LABEL_139;
    default:
      return 0;
  }
}

