__int64 __fastcall sub_17EC0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  _DWORD *v6; // r12
  int v9; // eax
  unsigned int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rsi
  _DWORD *v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 *v17; // rax
  unsigned int v18; // edx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 *v22; // rax
  unsigned int v23; // eax
  __int64 v24; // rdx
  unsigned int v25; // eax
  _QWORD *v26; // rdx
  unsigned int v27; // edx
  __int64 v28; // rax
  unsigned int v29; // eax
  __int64 v30; // rdx
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  unsigned int v33; // eax
  __int64 v34; // rdx
  unsigned int v35; // eax
  __int64 *v36; // rdx
  unsigned int v37; // eax
  __int64 *v38; // rdx
  void *v39; // rbp
  size_t v40; // rax
  size_t v41; // r14
  size_t v42; // r15
  void *v43; // rdi
  unsigned int v44; // edx
  __int64 v45; // rax
  __int64 v46; // rcx
  _QWORD *v47; // rsi
  _DWORD *v48; // rax
  unsigned int v49; // edx
  __int64 v50; // rax
  __int64 v51; // rsi
  unsigned int v52; // eax
  __int64 *v53; // rdx
  unsigned int v54; // eax
  __int64 *v55; // rdx
  unsigned int v56; // eax
  __int64 *v57; // rdx
  unsigned int v58; // edx
  __int64 v59; // rax
  __int64 v60; // rcx
  _QWORD *v61; // rdi
  __int64 *v62; // rax
  unsigned int v63; // eax
  __int64 *v64; // rdx
  unsigned int v65; // eax
  _DWORD *v66; // rdx
  _DWORD **v67; // rax
  __int64 *v68; // rdx
  __int64 *v69; // rdx
  __int64 *v70; // rdx
  __int64 *v71; // rax
  _QWORD **v72; // rdx
  _DWORD **v73; // rdx
  _DWORD **v74; // rax
  _QWORD **v75; // rdx
  __int64 v76; // rax

  *(_DWORD *)(a1 + 4368) = *(_DWORD *)(a1 + 208);
  switch ( a2 )
  {
    case 0LL:
      netnode_check();
      setinf_flag();
      *(_DWORD *)(a1 + 4332) = register_custom_data_type();
      *(_DWORD *)(a1 + 4336) = register_custom_data_format();
      attach_custom_data_format();
      return 0;
    case 1LL:
      if ( *(_DWORD *)(a1 + 4332) != -1 )
        unregister_custom_data_type();
      if ( *(_DWORD *)(a1 + 4336) != -1 )
        unregister_custom_data_format();
      clr_module_data();
      return 0;
    case 2LL:
      v65 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v66 = *(_DWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v66 + 2;
      }
      else
      {
        v66 = (_DWORD *)(*(_QWORD *)(a3 + 16) + v65);
        *(_DWORD *)a3 = v65 + 8;
      }
      if ( *v66 <= 6u )
      {
        *(_DWORD *)(a1 + 4328) = *v66;
        return 0;
      }
      if ( under_debugger )
        BUG();
      interr();
      goto LABEL_134;
    case 4LL:
      set_default_sreg_value();
      set_default_sreg_value();
      getinf_buf();
      qstrlwr();
      qstrncat();
      if ( !(unsigned __int8)choose_ioport_device2() )
        return 0;
      if ( !get_segm_by_name() )
      {
        allocate_selector();
        if ( !(unsigned __int8)add_segm_ex() )
          sub_179E0((__int64)"Failed creating SFR segment", "SFR");
      }
      if ( *(_QWORD *)(a1 + 144) )
      {
        v39 = *(void **)(a1 + 136);
        if ( !v39 )
          return 0;
        v40 = strlen(*(const char **)(a1 + 136));
        v41 = v40;
        if ( v40 )
        {
          v42 = v40 + 1;
          v43 = v39;
          if ( *(_QWORD *)(a1 + 152) < v40 + 1 )
          {
            v76 = qvector_reserve();
            *(_QWORD *)(a1 + 136) = v76;
            v43 = (void *)v76;
          }
          *(_QWORD *)(a1 + 144) = v42;
          memmove(v43, v39, v41);
          *(_BYTE *)(*(_QWORD *)(a1 + 136) + v41) = 0;
          goto LABEL_55;
        }
LABEL_123:
        *(_QWORD *)(a1 + 144) = 0;
LABEL_55:
        netnode_supset();
        sub_16FA0((__int64 *)(a1 + 128), 7);
        return 0;
      }
      if ( &dword_1C204 )
        goto LABEL_123;
      return 0;
    case 5LL:
      set_default_sreg_value();
      set_default_sreg_value();
      if ( netnode_qsupstr() >= 0 )
      {
        netnode_supset();
        netnode_supdel();
      }
      goto LABEL_3;
    case 10LL:
      v54 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v55 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v55 + 1;
      }
      else
      {
        v55 = (__int64 *)(*(_QWORD *)(a3 + 16) + v54);
        *(_DWORD *)a3 = v54 + 8;
      }
      return (int)sub_11EF0(a1, *v55);
    case 11LL:
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
      if ( !(unsigned int)sub_15130(a1, *v64) )
        return -1;
      return 1;
    case 12LL:
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
      sub_16250(a1, *v36);
      return 1;
    case 13LL:
      v52 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v53 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v53 + 1;
      }
      else
      {
        v53 = (__int64 *)(*(_QWORD *)(a3 + 16) + v52);
        *(_DWORD *)a3 = v52 + 8;
      }
      sub_164E0(a1, *v53);
      return 1;
    case 14LL:
      v49 = *(_DWORD *)a3;
      if ( v49 > 0x2F )
      {
        v70 = *(__int64 **)(a3 + 8);
        v71 = v70 + 1;
        *(_QWORD *)(a3 + 8) = v70 + 1;
        v51 = *v70;
      }
      else
      {
        v50 = *(_QWORD *)(a3 + 16);
        *(_DWORD *)a3 = v49 + 8;
        v51 = *(_QWORD *)(v50 + v49);
        if ( v49 + 8 <= 0x2F )
        {
          *(_DWORD *)a3 = v49 + 16;
          goto LABEL_63;
        }
        v71 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v71 + 1;
LABEL_63:
      sub_163B0(a1, v51);
      return 1;
    case 17LL:
      v56 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v57 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v57 + 1;
      }
      else
      {
        v57 = (__int64 *)(*(_QWORD *)(a3 + 16) + v56);
        *(_DWORD *)a3 = v56 + 8;
      }
      sub_16240(*v57);
      return 1;
    case 18LL:
      v37 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v38 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v38 + 1;
      }
      else
      {
        v38 = (__int64 *)(*(_QWORD *)(a3 + 16) + v37);
        *(_DWORD *)a3 = v37 + 8;
      }
      sub_15B00(*v38);
      return 1;
    case 19LL:
      v58 = *(_DWORD *)a3;
      if ( v58 > 0x2F )
      {
        v75 = *(_QWORD ***)(a3 + 8);
        v62 = (__int64 *)(v75 + 1);
        *(_QWORD *)(a3 + 8) = v75 + 1;
        v61 = *v75;
      }
      else
      {
        v59 = *(_QWORD *)(a3 + 16);
        v60 = v58 + 8;
        *(_DWORD *)a3 = v60;
        v61 = *(_QWORD **)(v59 + v58);
        if ( (unsigned int)v60 <= 0x2F )
        {
          v62 = (__int64 *)(v60 + v59);
          *(_DWORD *)a3 = v58 + 16;
          goto LABEL_76;
        }
        v62 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v62 + 1;
LABEL_76:
      if ( !(unsigned __int8)sub_15FD0(v61, *v62) )
        return -1;
      return 1;
    case 20LL:
      v44 = *(_DWORD *)a3;
      if ( v44 > 0x2F )
      {
        v72 = *(_QWORD ***)(a3 + 8);
        v48 = v72 + 1;
        *(_QWORD *)(a3 + 8) = v72 + 1;
        v47 = *v72;
      }
      else
      {
        v45 = *(_QWORD *)(a3 + 16);
        v46 = v44 + 8;
        *(_DWORD *)a3 = v46;
        v47 = *(_QWORD **)(v45 + v44);
        if ( (unsigned int)v46 <= 0x2F )
        {
          v48 = (_DWORD *)(v46 + v45);
          *(_DWORD *)a3 = v44 + 16;
          goto LABEL_59;
        }
        v48 = *(_DWORD **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v48 + 2;
LABEL_59:
      sub_168A0(a1, v47, *v48 != 0);
      return 1;
    case 34LL:
      v33 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v34 = *(_QWORD *)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v34 + 8;
      }
      else
      {
        v34 = *(_QWORD *)(a3 + 16) + v33;
        *(_DWORD *)a3 = v33 + 8;
      }
      if ( (unsigned int)*(unsigned __int16 *)(*(_QWORD *)v34 + 24LL) - 71 > 2 )
        return -1;
      return 1;
    case 35LL:
      v29 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v30 = *(_QWORD *)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v30 + 8;
      }
      else
      {
        v30 = *(_QWORD *)(a3 + 16) + v29;
        *(_DWORD *)a3 = v29 + 8;
      }
      v31 = (unsigned int)*(unsigned __int16 *)(*(_QWORD *)v30 + 24LL) - 46;
      if ( (unsigned __int16)(*(_WORD *)(*(_QWORD *)v30 + 24LL) - 46) > 0x39u )
        return -1;
      v32 = 0x210000000000001LL;
      if ( !_bittest64(&v32, v31) )
        return -1;
      return 1;
    case 38LL:
      v23 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v24 = *(_QWORD *)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v24 + 8;
      }
      else
      {
        v24 = *(_QWORD *)(a3 + 16) + v23;
        *(_DWORD *)a3 = v23 + 8;
      }
      return (2 * (*(_WORD *)(*(_QWORD *)v24 + 24LL) == 72 || *(_WORD *)(*(_QWORD *)v24 + 24LL) == 69)) & 2;
    case 40LL:
      v18 = *(_DWORD *)a3;
      if ( v18 > 0x2F )
      {
        v69 = *(__int64 **)(a3 + 8);
        v22 = v69 + 1;
        *(_QWORD *)(a3 + 8) = v69 + 1;
        v21 = *v69;
      }
      else
      {
        v19 = *(_QWORD *)(a3 + 16);
        v20 = v18 + 8;
        *(_DWORD *)a3 = v20;
        v21 = *(_QWORD *)(v19 + v18);
        if ( (unsigned int)v20 <= 0x2F )
        {
          v22 = (__int64 *)(v20 + v19);
          *(_DWORD *)a3 = v18 + 16;
          goto LABEL_20;
        }
        v22 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v22 + 1;
LABEL_20:
      if ( (unsigned __int8)sub_15390(v21, *v22) )
        return 1;
      return -1;
    case 43LL:
      if ( *(_DWORD *)a3 > 0x2Fu )
        *(_QWORD *)(a3 + 8) += 8LL;
      else
        *(_DWORD *)a3 += 8;
      return sub_15320(a1);
    case 46LL:
      v11 = *(_DWORD *)a3;
      if ( v11 > 0x2F )
      {
        v67 = *(_DWORD ***)(a3 + 8);
        v68 = (__int64 *)(v67 + 1);
        *(_QWORD *)(a3 + 8) = v67 + 1;
        v14 = *v67;
LABEL_97:
        v17 = v68 + 1;
        *(_QWORD *)(a3 + 8) = v68 + 1;
        v16 = *v68;
        goto LABEL_98;
      }
      v12 = *(_QWORD *)(a3 + 16);
      v13 = v11 + 8;
      *(_DWORD *)a3 = v13;
      v14 = *(_DWORD **)(v12 + v11);
      if ( (unsigned int)v13 > 0x2F )
      {
        v68 = *(__int64 **)(a3 + 8);
        goto LABEL_97;
      }
      v15 = v11 + 16;
      *(_DWORD *)a3 = v15;
      v16 = *(_QWORD *)(v12 + v13);
      if ( (unsigned int)v15 <= 0x2F )
      {
        v17 = (__int64 *)(v15 + v12);
        *(_DWORD *)a3 = v11 + 24;
        goto LABEL_12;
      }
      v17 = *(__int64 **)(a3 + 8);
LABEL_98:
      *(_QWORD *)(a3 + 8) = v17 + 1;
LABEL_12:
      *v14 = sub_166C0(v16, *v17);
      return 1;
    case 60LL:
      v27 = *(_DWORD *)a3;
      if ( v27 > 0x2F )
      {
        v73 = *(_DWORD ***)(a3 + 8);
        v74 = v73 + 1;
        *(_QWORD *)(a3 + 8) = v73 + 1;
        v6 = *v73;
      }
      else
      {
        v28 = *(_QWORD *)(a3 + 16);
        *(_DWORD *)a3 = v27 + 8;
        v6 = *(_DWORD **)(v28 + v27);
        if ( v27 + 8 <= 0x2F )
        {
          *(_DWORD *)a3 = v27 + 16;
          goto LABEL_31;
        }
LABEL_134:
        v74 = *(_DWORD ***)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v74 + 1;
LABEL_31:
      *v6 = sub_15370(a1);
      return 1;
    case 86LL:
      v9 = sub_17AB0(*(_QWORD *)(a1 + 16));
      *(_DWORD *)(a1 + 208) = 0;
      *(_DWORD *)(a1 + 4328) = v9;
LABEL_3:
      sub_17CA0(a1);
      return 0;
    case 94LL:
      v25 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v26 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v26 + 1;
      }
      else
      {
        v26 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v25);
        *(_DWORD *)a3 = v25 + 8;
      }
      sub_19720(*v26, a2, (_DWORD)v26, a4, a5, a6);
      return 0;
    case 95LL:
      netnode_check();
      return 0;
    case 96LL:
      if ( !(_BYTE)byte_2C428 && __cxa_guard_acquire(&byte_2C428) )
      {
        qword_2C3F0 = *(_QWORD *)(a1 + 120);
        __cxa_guard_release(&byte_2C428);
      }
      return (int)cvt64_node_supval_for_event();
    default:
      return 0;
  }
}

