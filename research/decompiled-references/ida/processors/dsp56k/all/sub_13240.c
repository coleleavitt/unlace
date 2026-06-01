__int64 __fastcall sub_13240(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, double a7)
{
  int v10; // eax
  __int64 v11; // rdx
  __int64 *v12; // rax
  __int64 *segm_by_name; // rax
  __int64 v14; // rax
  bool v15; // zf
  __int64 *v16; // rax
  __int64 v17; // rax
  const char *v18; // rsi
  unsigned int v19; // eax
  __int64 *v20; // rdx
  unsigned int v21; // eax
  unsigned __int16 **v22; // rdx
  unsigned int v23; // eax
  __int64 *v24; // rdx
  unsigned int v25; // eax
  int *v26; // rdx
  int v27; // eax
  int v28; // edx
  unsigned int v29; // edx
  __int64 v30; // rax
  __int64 v31; // rcx
  _QWORD *v32; // rdi
  __int64 *v33; // rax
  unsigned int v34; // eax
  unsigned __int16 **v35; // rdx
  unsigned int v36; // eax
  _QWORD *v37; // rdx
  unsigned int v38; // edx
  __int64 v39; // rax
  __int64 v40; // rsi
  _DWORD *v41; // rbp
  __int64 v42; // rcx
  __int64 v43; // rdi
  __int64 *v44; // rax
  unsigned int v45; // edx
  __int64 v46; // rax
  __int64 v47; // rsi
  unsigned int v48; // eax
  __int64 v49; // rdi
  __int64 v50; // rsi
  __int64 v51; // rdx
  _QWORD *v52; // rdx
  unsigned int v53; // eax
  _QWORD *v54; // rdx
  unsigned int v55; // eax
  _BYTE **v56; // rdx
  unsigned int v57; // edx
  __int64 v58; // rax
  __int64 v59; // rsi
  unsigned int v60; // edx
  __int64 v61; // rax
  __int64 v62; // rsi
  unsigned int v63; // eax
  __int64 *v64; // rdx
  _QWORD **v65; // rdx
  _DWORD **v66; // rax
  __int64 *v67; // rdx
  __int64 *v68; // rdx
  __int64 *v69; // rax
  __int64 *v70; // rdx
  __int64 *v71; // rax
  __int64 *v72; // rdx
  _QWORD *v73; // rax
  _QWORD *v74; // rax
  _QWORD **v75; // rax
  _QWORD **v76; // rcx
  __int64 *v77; // rdx
  __int64 *v78; // rax
  __int64 *v79; // rax

  switch ( a2 )
  {
    case 0LL:
    case 95LL:
      netnode_check();
      return 0;
    case 1LL:
      clr_module_data();
      return 0;
    case 2LL:
      v25 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v26 = *(int **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v26 + 2;
      }
      else
      {
        v26 = (int *)(*(_QWORD *)(a3 + 16) + v25);
        *(_DWORD *)a3 = v25 + 8;
      }
      v27 = *(_DWORD *)(a1 + 600);
      v28 = *v26;
      if ( v27 == -1 )
      {
        *(_DWORD *)(a1 + 600) = v28;
        *(_DWORD *)(*(_QWORD *)(a1 + 16) + 16LL) = 8 * (v28 != 1) + 16;
        *(_DWORD *)(*(_QWORD *)(a1 + 16) + 20LL) = 8 * ((*(_DWORD *)(a1 + 600) & 0xFFFFFFFD) != 1) + 16;
        v79 = &qword_1BA40;
        if ( *(_DWORD *)(a1 + 600) == 1 )
          v79 = &qword_1BA00;
        *(_QWORD *)(*(_QWORD *)(a1 + 16) + 96LL) = v79;
      }
      else if ( v27 != v28 )
      {
        sub_DF80((__int64)"Sorry, processor type cannot be changed after loading");
        return -1;
      }
      return 0;
    case 4LL:
      segm_by_name = (__int64 *)get_segm_by_name();
      if ( segm_by_name )
        v14 = *segm_by_name;
      else
        v14 = -1;
      v15 = *(_DWORD *)(a1 + 600) == 1;
      *(_QWORD *)(a1 + 232) = v14;
      if ( !v15 )
      {
        v16 = (__int64 *)get_segm_by_name();
        if ( v16 )
          v17 = *v16;
        else
          v17 = -1;
        *(_QWORD *)(a1 + 240) = v17;
      }
      getinf_buf();
      qstrlwr();
      qstrncat();
      if ( (unsigned __int8)choose_ioport_device2() )
      {
        v18 = byte_17A50;
        if ( *(_QWORD *)(a1 + 144) )
          v18 = *(const char **)(a1 + 136);
        sub_12F10((__int64 *)a1, v18, 6);
      }
      else
      {
        sub_12EA0(a1);
      }
      return 0;
    case 5LL:
      goto LABEL_7;
    case 8LL:
      v48 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v72 = *(__int64 **)(a3 + 8);
        v73 = v72 + 1;
        *(_QWORD *)(a3 + 8) = v72 + 1;
        v50 = *v72;
LABEL_97:
        v74 = v73 + 1;
LABEL_98:
        v75 = (_QWORD **)(v74 + 1);
LABEL_99:
        v76 = v75 + 1;
        *(_QWORD *)(a3 + 8) = v75 + 1;
        v52 = *v75;
        goto LABEL_100;
      }
      v49 = *(_QWORD *)(a3 + 16);
      *(_DWORD *)a3 = v48 + 8;
      v50 = *(_QWORD *)(v49 + v48);
      if ( v48 + 8 > 0x2F )
      {
        v73 = *(_QWORD **)(a3 + 8);
        goto LABEL_97;
      }
      *(_DWORD *)a3 = v48 + 16;
      if ( v48 + 16 > 0x2F )
      {
        v74 = *(_QWORD **)(a3 + 8);
        goto LABEL_98;
      }
      v51 = v48 + 24;
      *(_DWORD *)a3 = v51;
      if ( (unsigned int)v51 > 0x2F )
      {
        v75 = *(_QWORD ***)(a3 + 8);
        goto LABEL_99;
      }
      *(_DWORD *)a3 = v48 + 32;
      v52 = *(_QWORD **)(v49 + v51);
      if ( v48 + 32 <= 0x2F )
      {
        *(_DWORD *)a3 = v48 + 40;
        goto LABEL_65;
      }
      v76 = *(_QWORD ***)(a3 + 8);
LABEL_100:
      *(_QWORD *)(a3 + 8) = v76 + 1;
LABEL_65:
      if ( !v50 )
      {
        sub_130D0((__int64 *)a1);
        return 1;
      }
      if ( v52 )
        *v52 = 1;
      return -1;
    case 10LL:
      v23 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v24 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v24 + 1;
      }
      else
      {
        v24 = (__int64 *)(*(_QWORD *)(a3 + 16) + v23);
        *(_DWORD *)a3 = v23 + 8;
      }
      return (int)sub_103E0(a1, *v24);
    case 11LL:
      v21 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v22 = *(unsigned __int16 ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v22 + 1;
      }
      else
      {
        v22 = (unsigned __int16 **)(*(_QWORD *)(a3 + 16) + v21);
        *(_DWORD *)a3 = v21 + 8;
      }
      if ( !(unsigned int)sub_10700(a1, *v22) )
        return -1;
      return 1;
    case 12LL:
      v19 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v20 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v20 + 1;
      }
      else
      {
        v20 = (__int64 *)(*(_QWORD *)(a3 + 16) + v19);
        *(_DWORD *)a3 = v19 + 8;
      }
      sub_11AB0(a1, *v20);
      return 1;
    case 13LL:
      v63 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v64 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v64 + 1;
      }
      else
      {
        v64 = (__int64 *)(*(_QWORD *)(a3 + 16) + v63);
        *(_DWORD *)a3 = v63 + 8;
      }
      sub_11AF0(a1, *v64);
      return 1;
    case 14LL:
      v57 = *(_DWORD *)a3;
      if ( v57 > 0x2F )
      {
        v70 = *(__int64 **)(a3 + 8);
        v71 = v70 + 1;
        *(_QWORD *)(a3 + 8) = v70 + 1;
        v59 = *v70;
      }
      else
      {
        v58 = *(_QWORD *)(a3 + 16);
        *(_DWORD *)a3 = v57 + 8;
        v59 = *(_QWORD *)(v58 + v57);
        if ( v57 + 8 <= 0x2F )
        {
          *(_DWORD *)a3 = v57 + 16;
          goto LABEL_77;
        }
        v71 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v71 + 1;
LABEL_77:
      sub_116C0(a1, v59);
      return 1;
    case 15LL:
      v45 = *(_DWORD *)a3;
      if ( v45 > 0x2F )
      {
        v68 = *(__int64 **)(a3 + 8);
        v69 = v68 + 1;
        *(_QWORD *)(a3 + 8) = v68 + 1;
        v47 = *v68;
      }
      else
      {
        v46 = *(_QWORD *)(a3 + 16);
        *(_DWORD *)a3 = v45 + 8;
        v47 = *(_QWORD *)(v46 + v45);
        if ( v45 + 8 <= 0x2F )
        {
          *(_DWORD *)a3 = v45 + 16;
          goto LABEL_58;
        }
        v69 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v69 + 1;
LABEL_58:
      sub_119B0(a1, v47);
      return 1;
    case 17LL:
      v55 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v56 = *(_BYTE ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v56 + 1;
      }
      else
      {
        v56 = (_BYTE **)(*(_QWORD *)(a3 + 16) + v55);
        *(_DWORD *)a3 = v55 + 8;
      }
      sub_116B0(*v56, a7);
      return 1;
    case 18LL:
      v34 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v35 = *(unsigned __int16 ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v35 + 1;
      }
      else
      {
        v35 = (unsigned __int16 **)(*(_QWORD *)(a3 + 16) + v34);
        *(_DWORD *)a3 = v34 + 8;
      }
      sub_11590(*v35);
      return 1;
    case 19LL:
      v29 = *(_DWORD *)a3;
      if ( v29 > 0x2F )
      {
        v65 = *(_QWORD ***)(a3 + 8);
        v33 = (__int64 *)(v65 + 1);
        *(_QWORD *)(a3 + 8) = v65 + 1;
        v32 = *v65;
      }
      else
      {
        v30 = *(_QWORD *)(a3 + 16);
        v31 = v29 + 8;
        *(_DWORD *)a3 = v31;
        v32 = *(_QWORD **)(v30 + v29);
        if ( (unsigned int)v31 <= 0x2F )
        {
          v33 = (__int64 *)(v31 + v30);
          *(_DWORD *)a3 = v29 + 16;
          goto LABEL_38;
        }
        v33 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v33 + 1;
LABEL_38:
      if ( !(unsigned __int8)sub_11310(v32, *v33, a7) )
        return -1;
      return 1;
    case 32LL:
      v60 = *(_DWORD *)a3;
      if ( v60 > 0x2F )
      {
        v77 = *(__int64 **)(a3 + 8);
        v78 = v77 + 1;
        *(_QWORD *)(a3 + 8) = v77 + 1;
        v62 = *v77;
      }
      else
      {
        v61 = *(_QWORD *)(a3 + 16);
        *(_DWORD *)a3 = v60 + 8;
        v62 = *(_QWORD *)(v61 + v60);
        if ( v60 + 8 <= 0x2F )
        {
          *(_DWORD *)a3 = v60 + 16;
          goto LABEL_81;
        }
        v78 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v78 + 1;
LABEL_81:
      if ( (unsigned int)sub_10A10((_QWORD *)a1, v62) != 1 )
        return -1;
      return 1;
    case 43LL:
      v36 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v37 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v37 + 1;
      }
      else
      {
        v37 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v36);
        *(_DWORD *)a3 = v36 + 8;
      }
      return (int)sub_10A80(*v37);
    case 46LL:
      v38 = *(_DWORD *)a3;
      if ( v38 > 0x2F )
      {
        v66 = *(_DWORD ***)(a3 + 8);
        v67 = (__int64 *)(v66 + 1);
        *(_QWORD *)(a3 + 8) = v66 + 1;
        v41 = *v66;
      }
      else
      {
        v39 = *(_QWORD *)(a3 + 16);
        v40 = v38 + 8;
        *(_DWORD *)a3 = v40;
        v41 = *(_DWORD **)(v39 + v38);
        if ( (unsigned int)v40 <= 0x2F )
        {
          v42 = v38 + 16;
          *(_DWORD *)a3 = v42;
          v43 = *(_QWORD *)(v39 + v40);
          if ( (unsigned int)v42 <= 0x2F )
          {
            v44 = (__int64 *)(v42 + v39);
            *(_DWORD *)a3 = v38 + 24;
            goto LABEL_52;
          }
          v44 = *(__int64 **)(a3 + 8);
LABEL_91:
          *(_QWORD *)(a3 + 8) = v44 + 1;
LABEL_52:
          *v41 = sub_104A0(v43, *v44);
          return 1;
        }
        v67 = *(__int64 **)(a3 + 8);
      }
      v44 = v67 + 1;
      *(_QWORD *)(a3 + 8) = v67 + 1;
      v43 = *v67;
      goto LABEL_91;
    case 47LL:
      if ( *(_DWORD *)a3 > 0x2Fu )
        *(_QWORD *)(a3 + 8) += 8LL;
      else
        *(_DWORD *)a3 += 8;
      return 1;
    case 86LL:
      v10 = sub_12BC0(*(_QWORD *)(a1 + 16));
      v11 = *(_QWORD *)(a1 + 16);
      *(_DWORD *)(a1 + 600) = v10;
      *(_DWORD *)(v11 + 16) = 8 * (v10 != 1) + 16;
      *(_DWORD *)(*(_QWORD *)(a1 + 16) + 20LL) = 8 * ((*(_DWORD *)(a1 + 600) & 0xFFFFFFFD) != 1) + 16;
      v12 = &qword_1BA40;
      if ( *(_DWORD *)(a1 + 600) == 1 )
        v12 = &qword_1BA00;
      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 96LL) = v12;
LABEL_7:
      sub_13180(a1);
      return 0;
    case 94LL:
      v53 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v54 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v54 + 1;
      }
      else
      {
        v54 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v53);
        *(_DWORD *)a3 = v53 + 8;
      }
      sub_147C0(*v54, a2, (_DWORD)v54, a4, a5, a6);
      return 0;
    case 96LL:
      if ( !(_BYTE)byte_38C48 && __cxa_guard_acquire(&byte_38C48) )
      {
        qword_2AA30 = *(_QWORD *)(a1 + 120);
        __cxa_guard_release(&byte_38C48);
      }
      return (int)cvt64_node_supval_for_event();
    default:
      return 0;
  }
}

