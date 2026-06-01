__int64 __fastcall sub_5F60(_QWORD *a1, __int64 a2, __int64 a3, double a4, __int64 a5, int a6, int a7)
{
  unsigned int v10; // edx
  __int64 v11; // rcx
  int v12; // edx
  _QWORD *v13; // rcx
  unsigned int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // r8
  __int64 v18; // rsi
  char v19; // r9
  _QWORD *v20; // rcx
  unsigned int v21; // edx
  unsigned int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // rdi
  _DWORD *v25; // rbx
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 *v28; // rdx
  unsigned int v29; // edx
  _QWORD *v30; // rcx
  unsigned int v31; // ecx
  __int64 v32; // rdx
  __int64 v33; // rdi
  unsigned int v34; // ecx
  __int64 v35; // rdx
  __int64 v36; // rsi
  _QWORD *v37; // rdi
  __int64 *v38; // rdx
  unsigned int v39; // edx
  __int64 *v40; // rcx
  unsigned int v41; // edx
  __int64 *v42; // rcx
  unsigned int v43; // edx
  _BYTE **v44; // rcx
  unsigned int v45; // edx
  __int64 v46; // r8
  __int64 v47; // rdi
  __int64 v48; // rcx
  _QWORD *v49; // rcx
  unsigned int v50; // edx
  _QWORD *v51; // rcx
  unsigned int v52; // ecx
  unsigned int v53; // edx
  __int64 *v54; // rcx
  unsigned int v55; // ecx
  __int64 v56; // rdx
  __int64 v57; // rsi
  __int64 v58; // rdi
  __int64 *v59; // rdx
  unsigned int v60; // edx
  __int64 *v61; // rcx
  unsigned int v62; // edx
  __int64 *v63; // rcx
  __int64 *v64; // r12
  int v65; // ebp
  __int64 v66; // rdi
  __int64 v67; // r14
  _QWORD *v68; // rbp
  __int64 v69; // rdi
  __int64 v70; // r12
  __int64 i; // r15
  _QWORD *v72; // r13
  _QWORD **v73; // rcx
  __int64 *v74; // rcx
  _DWORD **v75; // rdx
  __int64 *v76; // rcx
  __int64 *v77; // rcx
  _QWORD *v78; // rdx
  _QWORD *v79; // rdx
  _QWORD **v80; // rdx
  _QWORD **v81; // rsi
  _QWORD *v82; // rcx
  _BYTE *v83; // rdx
  __int64 *v84; // rcx
  __int64 *v85; // rdx
  __int64 v86; // rdx
  int *v87; // rsi
  __int64 v88; // [rsp+0h] [rbp-138h]
  __int64 v89; // [rsp+8h] [rbp-130h]
  __int64 free_chunk; // [rsp+30h] [rbp-108h]

  switch ( a2 )
  {
    case 0LL:
      netnode_check();
      nullsub_1();
      setinf_flag();
      return 0;
    case 1LL:
      v66 = a1[15];
      if ( v66 )
      {
        v89 = a1[16];
        if ( v89 )
        {
          v88 = 0;
          v67 = 0;
          do
          {
            v68 = (_QWORD *)(v66 + v67);
            v69 = *(_QWORD *)(v66 + v67 + 56);
            if ( v69 )
            {
              v70 = v68[8];
              if ( v70 )
              {
                for ( i = 0; i != v70; ++i )
                {
                  v72 = (_QWORD *)(v69 + 48 * i);
                  if ( v72[3] )
                  {
                    v72[4] = 0;
                    qfree();
                  }
                  if ( *v72 )
                  {
                    v72[1] = 0;
                    qfree();
                  }
                  v69 = v68[7];
                }
              }
              v68[8] = 0;
              qfree();
            }
            if ( v68[4] )
            {
              v68[5] = 0;
              qfree();
            }
            if ( v68[1] )
            {
              v68[2] = 0;
              qfree();
            }
            ++v88;
            v66 = a1[15];
            v67 += 88;
          }
          while ( v89 != v88 );
        }
        a1[16] = 0;
        qfree();
        a1[15] = 0;
        a1[17] = 0;
      }
      clr_module_data();
      return 0;
    case 4LL:
      v64 = &qword_9B20;
      do
      {
        getinf();
        if ( (unsigned __int8)is_loaded() )
          add_entry();
        v64 += 2;
      }
      while ( algn_9B90 != (_BYTE *)v64 );
      if ( get_first_seg() )
      {
        v65 = 10;
        get_next_seg();
        set_segm_name();
        do
        {
          set_default_sreg_value();
          ++v65;
          set_default_sreg_value();
        }
        while ( v65 != 16 );
      }
      free_chunk = find_free_chunk();
      allocate_selector();
      add_segm_ex();
      a1[22] = free_chunk;
      sub_5D40(a1);
      return 0;
    case 5LL:
      if ( netnode_qsupstr() >= 0 )
      {
        netnode_supset();
        netnode_supdel();
      }
      goto LABEL_4;
    case 8LL:
      v45 = *(_DWORD *)a3;
      if ( v45 > 0x2F )
      {
        v77 = *(__int64 **)(a3 + 8);
        v78 = v77 + 1;
        *(_QWORD *)(a3 + 8) = v77 + 1;
        v47 = *v77;
LABEL_117:
        v79 = v78 + 1;
LABEL_118:
        v80 = (_QWORD **)(v79 + 1);
LABEL_119:
        v81 = v80 + 1;
        *(_QWORD *)(a3 + 8) = v80 + 1;
        v49 = *v80;
        goto LABEL_120;
      }
      v46 = *(_QWORD *)(a3 + 16);
      *(_DWORD *)a3 = v45 + 8;
      v47 = *(_QWORD *)(v46 + v45);
      if ( v45 + 8 > 0x2F )
      {
        v78 = *(_QWORD **)(a3 + 8);
        goto LABEL_117;
      }
      *(_DWORD *)a3 = v45 + 16;
      if ( v45 + 16 > 0x2F )
      {
        v79 = *(_QWORD **)(a3 + 8);
        goto LABEL_118;
      }
      v48 = v45 + 24;
      *(_DWORD *)a3 = v48;
      if ( (unsigned int)v48 > 0x2F )
      {
        v80 = *(_QWORD ***)(a3 + 8);
        goto LABEL_119;
      }
      *(_DWORD *)a3 = v45 + 32;
      v49 = *(_QWORD **)(v46 + v48);
      if ( v45 + 32 <= 0x2F )
      {
        *(_DWORD *)a3 = v45 + 40;
        goto LABEL_55;
      }
      v81 = *(_QWORD ***)(a3 + 8);
LABEL_120:
      *(_QWORD *)(a3 + 8) = v81 + 1;
LABEL_55:
      if ( !v47 )
      {
        if ( (unsigned __int8)choose_ioport_device() )
        {
          v87 = &dword_764C;
          if ( a1[19] )
            v87 = (int *)a1[18];
          if ( v87 )
            sub_5E30(a1, v87);
        }
        return 1;
      }
      if ( v49 )
        *v49 = 1;
      return -1;
    case 10LL:
      v62 = *(_DWORD *)a3;
      if ( v62 > 0x2F )
      {
        v63 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v63 + 1;
      }
      else
      {
        v63 = (__int64 *)(*(_QWORD *)(a3 + 16) + v62);
        *(_DWORD *)a3 = v62 + 8;
      }
      return (int)sub_46E0((__int64)a1, *v63);
    case 11LL:
      v60 = *(_DWORD *)a3;
      if ( v60 > 0x2F )
      {
        v61 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v61 + 1;
      }
      else
      {
        v61 = (__int64 *)(*(_QWORD *)(a3 + 16) + v60);
        *(_DWORD *)a3 = v60 + 8;
      }
      if ( !(unsigned int)sub_4AD0((__int64)a1, *v61, a4) )
        return -1;
      return 1;
    case 12LL:
      v41 = *(_DWORD *)a3;
      if ( v41 > 0x2F )
      {
        v42 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v42 + 1;
      }
      else
      {
        v42 = (__int64 *)(*(_QWORD *)(a3 + 16) + v41);
        *(_DWORD *)a3 = v41 + 8;
      }
      sub_5860(*v42);
      return 1;
    case 13LL:
      v39 = *(_DWORD *)a3;
      if ( v39 > 0x2F )
      {
        v40 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v40 + 1;
      }
      else
      {
        v40 = (__int64 *)(*(_QWORD *)(a3 + 16) + v39);
        *(_DWORD *)a3 = v39 + 8;
      }
      sub_5880((__int64)a1, *v40);
      return 1;
    case 14LL:
      v55 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v74 = *(__int64 **)(a3 + 8);
        v59 = v74 + 1;
        *(_QWORD *)(a3 + 8) = v74 + 1;
        v58 = *v74;
      }
      else
      {
        v56 = *(_QWORD *)(a3 + 16);
        v57 = v55 + 8;
        *(_DWORD *)a3 = v57;
        v58 = *(_QWORD *)(v56 + v55);
        if ( (unsigned int)v57 <= 0x2F )
        {
          v59 = (__int64 *)(v57 + v56);
          *(_DWORD *)a3 = v55 + 16;
          goto LABEL_71;
        }
        v59 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v59 + 1;
LABEL_71:
      sub_56F0((__int64)a1, v58, *v59);
      return 1;
    case 15LL:
      v52 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v86 = *(_QWORD *)(a3 + 8) + 8LL;
        *(_QWORD *)(a3 + 8) = v86;
      }
      else
      {
        *(_DWORD *)a3 = v52 + 8;
        if ( v52 + 8 <= 0x2F )
        {
          *(_DWORD *)a3 = v52 + 16;
          goto LABEL_64;
        }
        v86 = *(_QWORD *)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v86 + 8;
LABEL_64:
      nullsub_2();
      return 1;
    case 16LL:
      v53 = *(_DWORD *)a3;
      if ( v53 > 0x2F )
      {
        v54 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v54 + 1;
      }
      else
      {
        v54 = (__int64 *)(*(_QWORD *)(a3 + 16) + v53);
        *(_DWORD *)a3 = v53 + 8;
      }
      sub_55A0((__int64)a1, *v54);
      return 1;
    case 17LL:
      v43 = *(_DWORD *)a3;
      if ( v43 > 0x2F )
      {
        v44 = *(_BYTE ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v44 + 1;
      }
      else
      {
        v44 = (_BYTE **)(*(_QWORD *)(a3 + 16) + v43);
        *(_DWORD *)a3 = v43 + 8;
      }
      sub_54C0(*v44);
      return 1;
    case 19LL:
      v34 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v73 = *(_QWORD ***)(a3 + 8);
        v38 = (__int64 *)(v73 + 1);
        *(_QWORD *)(a3 + 8) = v73 + 1;
        v37 = *v73;
      }
      else
      {
        v35 = *(_QWORD *)(a3 + 16);
        v36 = v34 + 8;
        *(_DWORD *)a3 = v36;
        v37 = *(_QWORD **)(v35 + v34);
        if ( (unsigned int)v36 <= 0x2F )
        {
          v38 = (__int64 *)(v36 + v35);
          *(_DWORD *)a3 = v34 + 16;
          goto LABEL_38;
        }
        v38 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v38 + 1;
LABEL_38:
      if ( !(unsigned __int8)sub_5410(v37, *v38, a4) )
        return -1;
      return 1;
    case 32LL:
      v31 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v84 = *(__int64 **)(a3 + 8);
        v85 = v84 + 1;
        *(_QWORD *)(a3 + 8) = v84 + 1;
        v33 = *v84;
      }
      else
      {
        v32 = *(_QWORD *)(a3 + 16);
        *(_DWORD *)a3 = v31 + 8;
        v33 = *(_QWORD *)(v32 + v31);
        if ( v31 + 8 <= 0x2F )
        {
          *(_DWORD *)a3 = v31 + 16;
          goto LABEL_33;
        }
        v85 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v85 + 1;
LABEL_33:
      if ( (unsigned int)sub_4D50(v33) != 1 )
        return -1;
      return 1;
    case 36LL:
      v50 = *(_DWORD *)a3;
      if ( v50 > 0x2F )
      {
        v51 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v51 + 1;
      }
      else
      {
        v51 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v50);
        *(_DWORD *)a3 = v50 + 8;
      }
      return (int)sub_4D40(*v51);
    case 43LL:
      v29 = *(_DWORD *)a3;
      if ( v29 > 0x2F )
      {
        v30 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v30 + 1;
      }
      else
      {
        v30 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v29);
        *(_DWORD *)a3 = v29 + 8;
      }
      return (int)sub_4D80(*v30);
    case 46LL:
      v22 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v75 = *(_DWORD ***)(a3 + 8);
        v76 = (__int64 *)(v75 + 1);
        *(_QWORD *)(a3 + 8) = v75 + 1;
        v25 = *v75;
      }
      else
      {
        v23 = *(_QWORD *)(a3 + 16);
        v24 = v22 + 8;
        *(_DWORD *)a3 = v24;
        v25 = *(_DWORD **)(v23 + v22);
        if ( (unsigned int)v24 <= 0x2F )
        {
          v26 = v22 + 16;
          *(_DWORD *)a3 = v26;
          v27 = *(_QWORD *)(v23 + v24);
          if ( (unsigned int)v26 <= 0x2F )
          {
            v28 = (__int64 *)(v26 + v23);
            *(_DWORD *)a3 = v22 + 24;
            goto LABEL_26;
          }
          v28 = *(__int64 **)(a3 + 8);
LABEL_115:
          *(_QWORD *)(a3 + 8) = v28 + 1;
LABEL_26:
          *v25 = sub_4870(v27, *v28);
          return 1;
        }
        v76 = *(__int64 **)(a3 + 8);
      }
      v28 = v76 + 1;
      *(_QWORD *)(a3 + 8) = v76 + 1;
      v27 = *v76;
      goto LABEL_115;
    case 47LL:
      v21 = *(_DWORD *)a3;
      if ( v21 > 0x2F )
        *(_QWORD *)(a3 + 8) += 8LL;
      else
        *(_DWORD *)a3 = v21 + 8;
      return 1;
    case 86LL:
LABEL_4:
      sub_5EF0(a1);
      return 0;
    case 94LL:
      v10 = *(_DWORD *)a3;
      if ( v10 > 0x2F )
      {
        v13 = *(_QWORD **)(a3 + 8);
        v12 = (_DWORD)v13 + 8;
        *(_QWORD *)(a3 + 8) = v13 + 1;
      }
      else
      {
        v11 = v10;
        v12 = v10 + 8;
        v13 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v11);
        *(_DWORD *)a3 = v12;
      }
      sub_6AF0(*v13, a2, v12, (_DWORD)v13, a6, a7);
      return 0;
    case 95LL:
      netnode_check();
      return 0;
    case 96LL:
      v14 = *(_DWORD *)a3;
      if ( v14 > 0x2F )
      {
        v82 = *(_QWORD **)(a3 + 8);
        v83 = v82 + 1;
        *(_QWORD *)(a3 + 8) = v82 + 1;
        v17 = *v82;
      }
      else
      {
        v15 = *(_QWORD *)(a3 + 16);
        v16 = v14 + 8;
        *(_DWORD *)a3 = v16;
        v17 = *(_QWORD *)(v15 + v14);
        if ( (unsigned int)v16 <= 0x2F )
        {
          v18 = v14 + 16;
          *(_DWORD *)a3 = v18;
          v19 = *(_BYTE *)(v15 + v16);
          if ( (unsigned int)v18 <= 0x2F )
          {
            v20 = (_QWORD *)(v18 + v15);
            *(_DWORD *)a3 = v14 + 24;
            goto LABEL_15;
          }
          v20 = *(_QWORD **)(a3 + 8);
LABEL_125:
          *(_QWORD *)(a3 + 8) = v20 + 1;
LABEL_15:
          if ( v17 != a1[21] || *v20 != 0xFFFFFFFFLL || v19 != 83 )
            return 0;
          netnode_supset();
          return 1;
        }
        v83 = *(_BYTE **)(a3 + 8);
      }
      v20 = v83 + 8;
      *(_QWORD *)(a3 + 8) = v83 + 8;
      v19 = *v83;
      goto LABEL_125;
    default:
      return 0;
  }
}

