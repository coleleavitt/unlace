__int64 __fastcall sub_C720(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  unsigned int v10; // eax
  _QWORD *v11; // rdx
  unsigned int v12; // eax
  _QWORD **v13; // rdx
  unsigned int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rsi
  _DWORD *v17; // rbp
  __int64 v18; // rcx
  __int64 v19; // rdi
  _QWORD *v20; // rax
  int v21; // r12d
  __int64 v22; // rdi
  __int64 v23; // r14
  _QWORD *v24; // rbx
  __int64 v25; // rdi
  __int64 v26; // r12
  __int64 i; // r15
  _QWORD *v28; // r13
  unsigned int v29; // edx
  unsigned int v30; // edx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rsi
  __int64 *v34; // rax
  unsigned int v35; // eax
  __int64 *v36; // rdx
  unsigned int v37; // eax
  _QWORD *v38; // rdx
  unsigned int v39; // eax
  _BYTE **v40; // rdx
  unsigned int v41; // eax
  int *v42; // rdx
  char v43; // al
  const char *v44; // rax
  unsigned int v45; // eax
  __int64 *v46; // rdx
  unsigned int v47; // edx
  __int64 v48; // rax
  __int64 v49; // rsi
  const char *v50; // rdi
  __int64 v51; // rcx
  int v52; // r9d
  __int64 v53; // rsi
  _DWORD *v54; // r10
  __int64 v55; // rcx
  __int64 *v56; // r12
  _DWORD *v57; // rax
  __int64 v58; // rax
  unsigned int v59; // edx
  __int64 v60; // rax
  _QWORD *v61; // rdi
  __int64 v62; // rdx
  unsigned __int8 **v63; // rax
  unsigned int v64; // eax
  __int64 *v65; // rdx
  unsigned int v66; // eax
  __int64 *v67; // rdx
  __int64 v68; // rax
  _QWORD **v69; // rdx
  _DWORD **v70; // rax
  __int64 *v71; // rdx
  __int64 *v72; // rdx
  const char **v73; // rax
  int *v74; // rdx
  _DWORD **v75; // rax
  _QWORD **v76; // rdx
  char v77; // [rsp+0h] [rbp-68h]
  __int64 v78; // [rsp+0h] [rbp-68h]
  __int64 v79; // [rsp+8h] [rbp-60h]

  switch ( a2 )
  {
    case 0LL:
      netnode_check();
      setinf_flag();
      return 0;
    case 1LL:
      v22 = *(_QWORD *)(a1 + 160);
      if ( v22 )
      {
        v79 = *(_QWORD *)(a1 + 168);
        if ( v79 )
        {
          v78 = 0;
          v23 = 0;
          do
          {
            v24 = (_QWORD *)(v22 + v23);
            v25 = *(_QWORD *)(v22 + v23 + 56);
            if ( v25 )
            {
              v26 = v24[8];
              if ( v26 )
              {
                for ( i = 0; i != v26; ++i )
                {
                  v28 = (_QWORD *)(v25 + 48 * i);
                  if ( v28[3] )
                  {
                    v28[4] = 0;
                    qfree();
                  }
                  if ( *v28 )
                  {
                    v28[1] = 0;
                    qfree();
                  }
                  v25 = v24[7];
                }
              }
              v24[8] = 0;
              qfree();
            }
            if ( v24[4] )
            {
              v24[5] = 0;
              qfree();
            }
            if ( v24[1] )
            {
              v24[2] = 0;
              qfree();
            }
            ++v78;
            v22 = *(_QWORD *)(a1 + 160);
            v23 += 88;
          }
          while ( v79 != v78 );
        }
        *(_QWORD *)(a1 + 168) = 0;
        qfree();
        *(_QWORD *)(a1 + 160) = 0;
        *(_QWORD *)(a1 + 176) = 0;
      }
      clr_module_data();
      return 0;
    case 2LL:
      v41 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v42 = *(int **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v42 + 2;
      }
      else
      {
        v42 = (int *)(*(_QWORD *)(a3 + 16) + v41);
        *(_DWORD *)a3 = v41 + 8;
      }
      v43 = aKgf[*v42 + 3];
      *(_BYTE *)(a1 + 240) = v43;
      if ( v43 )
      {
        if ( v43 != 1 )
          sub_81B0((__int64)"interr: setprc", a2, (__int64)"", a4, a5, a6, v77);
        v44 = "f2mc16lx.cfg";
      }
      else
      {
        v44 = "f2mc16l.cfg";
      }
      *(_QWORD *)(a1 + 232) = v44;
      *(_QWORD *)(a1 + 144) = 0;
      if ( get_first_seg() )
        sub_C4C0(a1, 5);
      return 0;
    case 4LL:
      get_first_seg();
      v21 = 26;
      set_segm_name();
      sub_C4C0(a1, 7);
      do
      {
        if ( get_first_seg() )
        {
          do
            set_default_sreg_value();
          while ( get_next_seg() );
        }
        ++v21;
      }
      while ( v21 != 34 );
      netnode_supset();
      return 0;
    case 5LL:
      goto LABEL_3;
    case 8LL:
      v47 = *(_DWORD *)a3;
      if ( v47 > 0x2F )
      {
        v73 = *(const char ***)(a3 + 8);
        v74 = (int *)(v73 + 1);
        *(_QWORD *)(a3 + 8) = v73 + 1;
        v50 = *v73;
LABEL_113:
        v75 = (_DWORD **)(v74 + 2);
        *(_QWORD *)(a3 + 8) = v74 + 2;
        v52 = *v74;
LABEL_114:
        v76 = (_QWORD **)(v75 + 1);
        *(_QWORD *)(a3 + 8) = v75 + 1;
        v54 = *v75;
LABEL_115:
        v57 = v76 + 1;
        *(_QWORD *)(a3 + 8) = v76 + 1;
        v56 = *v76;
        goto LABEL_116;
      }
      v48 = *(_QWORD *)(a3 + 16);
      v49 = v47 + 8;
      *(_DWORD *)a3 = v49;
      v50 = *(const char **)(v48 + v47);
      if ( (unsigned int)v49 > 0x2F )
      {
        v74 = *(int **)(a3 + 8);
        goto LABEL_113;
      }
      v51 = v47 + 16;
      *(_DWORD *)a3 = v51;
      v52 = *(_DWORD *)(v48 + v49);
      if ( (unsigned int)v51 > 0x2F )
      {
        v75 = *(_DWORD ***)(a3 + 8);
        goto LABEL_114;
      }
      v53 = v47 + 24;
      *(_DWORD *)a3 = v53;
      v54 = *(_DWORD **)(v48 + v51);
      if ( (unsigned int)v53 > 0x2F )
      {
        v76 = *(_QWORD ***)(a3 + 8);
        goto LABEL_115;
      }
      v55 = v47 + 32;
      *(_DWORD *)a3 = v55;
      v56 = *(__int64 **)(v48 + v53);
      if ( (unsigned int)v55 <= 0x2F )
      {
        v57 = (_DWORD *)(v55 + v48);
        *(_DWORD *)a3 = v47 + 40;
        goto LABEL_81;
      }
      v57 = *(_DWORD **)(a3 + 8);
LABEL_116:
      *(_QWORD *)(a3 + 8) = v57 + 2;
LABEL_81:
      v58 = sub_C5B0(a1, v50, v52, v54, *v57 != 0);
      if ( !v58 )
        return 1;
      if ( v56 )
        *v56 = v58;
      return -1;
    case 10LL:
      v37 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v38 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v38 + 1;
      }
      else
      {
        v38 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v37);
        *(_DWORD *)a3 = v37 + 8;
      }
      return (int)sub_9310(a1, *v38);
    case 11LL:
      v35 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v36 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v36 + 1;
      }
      else
      {
        v36 = (__int64 *)(*(_QWORD *)(a3 + 16) + v35);
        *(_DWORD *)a3 = v35 + 8;
      }
      if ( !(unsigned int)sub_9780(a1, *v36, a7) )
        return -1;
      return 1;
    case 12LL:
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
      sub_AE80((_QWORD *)a1, *v65);
      return 1;
    case 13LL:
      v45 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v46 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v46 + 1;
      }
      else
      {
        v46 = (__int64 *)(*(_QWORD *)(a3 + 16) + v45);
        *(_DWORD *)a3 = v45 + 8;
      }
      sub_AF10(a1, *v46);
      return 1;
    case 14LL:
      v30 = *(_DWORD *)a3;
      if ( v30 > 0x2F )
      {
        v72 = *(__int64 **)(a3 + 8);
        v34 = v72 + 1;
        *(_QWORD *)(a3 + 8) = v72 + 1;
        v33 = *v72;
      }
      else
      {
        v31 = *(_QWORD *)(a3 + 16);
        v32 = v30 + 8;
        *(_DWORD *)a3 = v32;
        v33 = *(_QWORD *)(v31 + v30);
        if ( (unsigned int)v32 <= 0x2F )
        {
          v34 = (__int64 *)(v32 + v31);
          *(_DWORD *)a3 = v30 + 16;
          goto LABEL_54;
        }
        v34 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v34 + 1;
LABEL_54:
      sub_ACB0(a1, v33, *v34);
      return 1;
    case 15LL:
      v29 = *(_DWORD *)a3;
      if ( v29 > 0x2F )
      {
        v68 = *(_QWORD *)(a3 + 8) + 8LL;
        *(_QWORD *)(a3 + 8) = v68;
      }
      else
      {
        *(_DWORD *)a3 = v29 + 8;
        if ( v29 + 8 <= 0x2F )
        {
          *(_DWORD *)a3 = v29 + 16;
          goto LABEL_50;
        }
        v68 = *(_QWORD *)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v68 + 8;
LABEL_50:
      nullsub_1();
      return 1;
    case 16LL:
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
      sub_AB00(a1, *v67);
      return 1;
    case 17LL:
      v39 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v40 = *(_BYTE ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v40 + 1;
      }
      else
      {
        v40 = (_BYTE **)(*(_QWORD *)(a3 + 16) + v39);
        *(_DWORD *)a3 = v39 + 8;
      }
      sub_AAF0(*v40);
      return 1;
    case 19LL:
      v59 = *(_DWORD *)a3;
      if ( v59 > 0x2F )
      {
        v69 = *(_QWORD ***)(a3 + 8);
        v63 = (unsigned __int8 **)(v69 + 1);
        *(_QWORD *)(a3 + 8) = v69 + 1;
        v61 = *v69;
      }
      else
      {
        v60 = *(_QWORD *)(a3 + 16);
        a4 = v59 + 8;
        *(_DWORD *)a3 = a4;
        v61 = *(_QWORD **)(v60 + v59);
        if ( (unsigned int)a4 <= 0x2F )
        {
          v62 = v59 + 16;
          v63 = (unsigned __int8 **)(a4 + v60);
          *(_DWORD *)a3 = v62;
          goto LABEL_87;
        }
        v63 = *(unsigned __int8 ***)(a3 + 8);
      }
      v62 = (__int64)(v63 + 1);
      *(_QWORD *)(a3 + 8) = v63 + 1;
LABEL_87:
      if ( !(unsigned __int8)sub_A920(v61, *v63, v62, a4, a5, a6) )
        return -1;
      return 1;
    case 46LL:
      v14 = *(_DWORD *)a3;
      if ( v14 > 0x2F )
      {
        v70 = *(_DWORD ***)(a3 + 8);
        v71 = (__int64 *)(v70 + 1);
        *(_QWORD *)(a3 + 8) = v70 + 1;
        v17 = *v70;
      }
      else
      {
        v15 = *(_QWORD *)(a3 + 16);
        v16 = v14 + 8;
        *(_DWORD *)a3 = v16;
        v17 = *(_DWORD **)(v15 + v14);
        if ( (unsigned int)v16 <= 0x2F )
        {
          v18 = v14 + 16;
          *(_DWORD *)a3 = v18;
          v19 = *(_QWORD *)(v15 + v16);
          if ( (unsigned int)v18 <= 0x2F )
          {
            v20 = (_QWORD *)(v18 + v15);
            *(_DWORD *)a3 = v14 + 24;
            goto LABEL_21;
          }
          v20 = *(_QWORD **)(a3 + 8);
LABEL_106:
          *(_QWORD *)(a3 + 8) = v20 + 1;
LABEL_21:
          *v17 = sub_9F00(v19, *v20);
          return 1;
        }
        v71 = *(__int64 **)(a3 + 8);
      }
      v20 = v71 + 1;
      *(_QWORD *)(a3 + 8) = v71 + 1;
      v19 = *v71;
      goto LABEL_106;
    case 59LL:
      v12 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v13 = *(_QWORD ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v13 + 1;
      }
      else
      {
        v13 = (_QWORD **)(*(_QWORD *)(a3 + 16) + v12);
        *(_DWORD *)a3 = v12 + 8;
      }
      sub_9DC0(*v13);
      return 1;
    case 86LL:
      *(_BYTE *)(a1 + 240) = aKgf[(int)sub_C2B0(*(_QWORD *)(a1 + 16)) + 3];
LABEL_3:
      if ( netnode_qsupstr() >= 0 )
      {
        netnode_supset();
        netnode_supdel();
      }
      sub_C6B0(a1);
      return 0;
    case 94LL:
      v10 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v11 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v11 + 1;
      }
      else
      {
        v11 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v10);
        *(_DWORD *)a3 = v10 + 8;
      }
      sub_DFD0(*v11, a2, (_DWORD)v11, a4, a5, a6);
      return 0;
    case 95LL:
      netnode_check();
      return 0;
    case 96LL:
      if ( !(_BYTE)byte_18448 && __cxa_guard_acquire(&byte_18448) )
      {
        qword_18400 = *(_QWORD *)(a1 + 120);
        qword_18418 = qword_18400;
        __cxa_guard_release(&byte_18448);
      }
      return (int)cvt64_node_supval_for_event();
    default:
      return 0;
  }
}

