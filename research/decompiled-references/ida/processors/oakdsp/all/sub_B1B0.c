__int64 __fastcall sub_B1B0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, double a7)
{
  unsigned int v10; // eax
  __int64 *v11; // rdx
  unsigned int v12; // eax
  unsigned __int64 **v13; // rdx
  unsigned int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rsi
  _DWORD *v17; // rbp
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 *v20; // rax
  unsigned int v21; // eax
  _QWORD *v22; // rdx
  unsigned int v23; // eax
  _QWORD *v24; // rdx
  unsigned int v25; // edx
  __int64 v26; // rax
  __int64 v27; // rcx
  _DWORD *v28; // rbp
  _QWORD *v29; // rax
  unsigned int v30; // eax
  _QWORD *v31; // rdx
  unsigned int v32; // edx
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rdi
  __int64 v36; // rcx
  __int64 v37; // rsi
  __int64 *v38; // rax
  unsigned int v39; // edx
  __int64 v40; // rax
  __int64 v41; // rcx
  _QWORD *v42; // rdi
  __int64 *v43; // rax
  unsigned int v44; // eax
  __int64 **v45; // rdx
  unsigned int v46; // eax
  __int64 *v47; // rdx
  unsigned int v48; // eax
  __int64 *v49; // rdx
  unsigned int v50; // eax
  __int64 v51; // rdi
  __int64 v52; // rsi
  __int64 v53; // rdx
  _QWORD *v54; // rdx
  unsigned int v55; // edx
  __int64 v56; // rax
  __int64 v57; // rsi
  unsigned int v58; // edx
  __int64 v59; // rax
  __int64 v60; // rsi
  unsigned int v61; // eax
  __int64 *v62; // rdx
  unsigned int v63; // eax
  int *v64; // rdx
  int v65; // eax
  int v66; // edx
  unsigned int v67; // edx
  __int64 v68; // rax
  __int64 v69; // rsi
  unsigned int v70; // eax
  __int64 *v71; // rdx
  const char *v72; // rsi
  int v73; // ebx
  __int64 v74; // rdi
  __int64 v75; // r14
  _QWORD *v76; // rbx
  __int64 v77; // rdi
  __int64 v78; // r12
  __int64 i; // r15
  _QWORD *v80; // r13
  __int64 *v81; // rdx
  __int64 *v82; // rax
  _DWORD **v83; // rdx
  __int64 *v84; // rdx
  __int64 *v85; // rax
  __int64 *v86; // rax
  __int64 *v87; // rdx
  __int64 *v88; // rdx
  _QWORD *v89; // rax
  _QWORD *v90; // rax
  _QWORD **v91; // rax
  _QWORD **v92; // rcx
  _DWORD **v93; // rax
  __int64 *v94; // rdx
  _QWORD **v95; // rdx
  __int64 *v96; // rdx
  __int64 *v97; // rax
  __int64 v98; // [rsp+0h] [rbp-1068h]
  __int64 v99; // [rsp+8h] [rbp-1060h]

  switch ( a2 )
  {
    case 0LL:
      netnode_check();
      sub_7BF0(a1);
      return 0;
    case 1LL:
      v74 = *(_QWORD *)(a1 + 160);
      if ( v74 )
      {
        v99 = *(_QWORD *)(a1 + 168);
        if ( v99 )
        {
          v98 = 0;
          v75 = 0;
          do
          {
            v76 = (_QWORD *)(v74 + v75);
            v77 = *(_QWORD *)(v74 + v75 + 56);
            if ( v77 )
            {
              v78 = v76[8];
              if ( v78 )
              {
                for ( i = 0; i != v78; ++i )
                {
                  v80 = (_QWORD *)(v77 + 48 * i);
                  if ( v80[3] )
                  {
                    v80[4] = 0;
                    qfree();
                  }
                  if ( *v80 )
                  {
                    v80[1] = 0;
                    qfree();
                  }
                  v77 = v76[7];
                }
              }
              v76[8] = 0;
              qfree();
            }
            if ( v76[4] )
            {
              v76[5] = 0;
              qfree();
            }
            if ( v76[1] )
            {
              v76[2] = 0;
              qfree();
            }
            ++v98;
            v74 = *(_QWORD *)(a1 + 160);
            v75 += 88;
          }
          while ( v99 != v98 );
        }
        *(_QWORD *)(a1 + 168) = 0;
        qfree();
        *(_QWORD *)(a1 + 160) = 0;
        *(_QWORD *)(a1 + 176) = 0;
      }
      clr_module_data();
      return 0;
    case 2LL:
      v63 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v64 = *(int **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v64 + 2;
      }
      else
      {
        v64 = (int *)(*(_QWORD *)(a3 + 16) + v63);
        *(_DWORD *)a3 = v63 + 8;
      }
      v65 = *(_DWORD *)(a1 + 244);
      v66 = *v64;
      if ( v65 == -1 )
      {
        *(_DWORD *)(a1 + 244) = v66;
      }
      else if ( v65 != v66 )
      {
        sub_52C0((__int64)"Sorry, processor type cannot be changed after loading");
        return -1;
      }
      return 0;
    case 4LL:
      getinf_buf();
      qstrlwr();
      qstrncat();
      if ( (unsigned __int8)choose_ioport_device2() )
      {
        v72 = (const char *)&qword_E058;
        if ( *(_QWORD *)(a1 + 144) )
          v72 = *(const char **)(a1 + 136);
        sub_AE70(a1, v72, 6);
      }
      else if ( *(_QWORD *)(a1 + 232) == -1 )
      {
        *(_QWORD *)(a1 + 232) = sub_AD30(a1, *(int *)(a1 + 240), 0);
      }
      if ( get_first_seg() )
      {
        v73 = 44;
        get_next_seg();
        do
        {
          set_default_sreg_value();
          ++v73;
          set_default_sreg_value();
        }
        while ( v73 != 47 );
      }
      return 0;
    case 5LL:
      goto LABEL_3;
    case 8LL:
      v50 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v88 = *(__int64 **)(a3 + 8);
        v89 = v88 + 1;
        *(_QWORD *)(a3 + 8) = v88 + 1;
        v52 = *v88;
LABEL_134:
        v90 = v89 + 1;
LABEL_135:
        v91 = (_QWORD **)(v90 + 1);
LABEL_136:
        v92 = v91 + 1;
        *(_QWORD *)(a3 + 8) = v91 + 1;
        v54 = *v91;
        goto LABEL_137;
      }
      v51 = *(_QWORD *)(a3 + 16);
      *(_DWORD *)a3 = v50 + 8;
      v52 = *(_QWORD *)(v51 + v50);
      if ( v50 + 8 > 0x2F )
      {
        v89 = *(_QWORD **)(a3 + 8);
        goto LABEL_134;
      }
      *(_DWORD *)a3 = v50 + 16;
      if ( v50 + 16 > 0x2F )
      {
        v90 = *(_QWORD **)(a3 + 8);
        goto LABEL_135;
      }
      v53 = v50 + 24;
      *(_DWORD *)a3 = v53;
      if ( (unsigned int)v53 > 0x2F )
      {
        v91 = *(_QWORD ***)(a3 + 8);
        goto LABEL_136;
      }
      *(_DWORD *)a3 = v50 + 32;
      v54 = *(_QWORD **)(v51 + v53);
      if ( v50 + 32 <= 0x2F )
      {
        *(_DWORD *)a3 = v50 + 40;
        goto LABEL_61;
      }
      v92 = *(_QWORD ***)(a3 + 8);
LABEL_137:
      *(_QWORD *)(a3 + 8) = v92 + 1;
LABEL_61:
      if ( !v52 )
      {
        sub_B060(a1);
        return 1;
      }
      if ( v54 )
        *v54 = 1;
      return -1;
    case 10LL:
      v46 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v47 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v47 + 1;
      }
      else
      {
        v47 = (__int64 *)(*(_QWORD *)(a3 + 16) + v46);
        *(_DWORD *)a3 = v46 + 8;
      }
      return (int)sub_5440(a1, *v47);
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
      if ( !(unsigned int)sub_7F00(a1, *v71) )
        return -1;
      return 1;
    case 12LL:
      v10 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v11 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v11 + 1;
      }
      else
      {
        v11 = (__int64 *)(*(_QWORD *)(a3 + 16) + v10);
        *(_DWORD *)a3 = v10 + 8;
      }
      sub_9A80(a1, *v11);
      return 1;
    case 13LL:
      v61 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v62 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v62 + 1;
      }
      else
      {
        v62 = (__int64 *)(*(_QWORD *)(a3 + 16) + v61);
        *(_DWORD *)a3 = v61 + 8;
      }
      sub_9AC0(a1, *v62);
      return 1;
    case 14LL:
      v58 = *(_DWORD *)a3;
      if ( v58 > 0x2F )
      {
        v81 = *(__int64 **)(a3 + 8);
        v82 = v81 + 1;
        *(_QWORD *)(a3 + 8) = v81 + 1;
        v60 = *v81;
      }
      else
      {
        v59 = *(_QWORD *)(a3 + 16);
        *(_DWORD *)a3 = v58 + 8;
        v60 = *(_QWORD *)(v59 + v58);
        if ( v58 + 8 <= 0x2F )
        {
          *(_DWORD *)a3 = v58 + 16;
          goto LABEL_72;
        }
        v82 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v82 + 1;
LABEL_72:
      sub_9490(a1, v60);
      return 1;
    case 15LL:
      v67 = *(_DWORD *)a3;
      if ( v67 > 0x2F )
      {
        v84 = *(__int64 **)(a3 + 8);
        v85 = v84 + 1;
        *(_QWORD *)(a3 + 8) = v84 + 1;
        v69 = *v84;
      }
      else
      {
        v68 = *(_QWORD *)(a3 + 16);
        *(_DWORD *)a3 = v67 + 8;
        v69 = *(_QWORD *)(v68 + v67);
        if ( v67 + 8 <= 0x2F )
        {
          *(_DWORD *)a3 = v67 + 16;
          goto LABEL_84;
        }
        v85 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v85 + 1;
LABEL_84:
      sub_9990(a1, v69);
      return 1;
    case 16LL:
      v48 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v49 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v49 + 1;
      }
      else
      {
        v49 = (__int64 *)(*(_QWORD *)(a3 + 16) + v48);
        *(_DWORD *)a3 = v48 + 8;
      }
      sub_9840(a1, *v49);
      return 1;
    case 17LL:
      v44 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v45 = *(__int64 ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v45 + 1;
      }
      else
      {
        v45 = (__int64 **)(*(_QWORD *)(a3 + 16) + v44);
        *(_DWORD *)a3 = v44 + 8;
      }
      sub_9480(*v45);
      return 1;
    case 19LL:
      v39 = *(_DWORD *)a3;
      if ( v39 > 0x2F )
      {
        v95 = *(_QWORD ***)(a3 + 8);
        v43 = (__int64 *)(v95 + 1);
        *(_QWORD *)(a3 + 8) = v95 + 1;
        v42 = *v95;
      }
      else
      {
        v40 = *(_QWORD *)(a3 + 16);
        v41 = v39 + 8;
        *(_DWORD *)a3 = v41;
        v42 = *(_QWORD **)(v40 + v39);
        if ( (unsigned int)v41 <= 0x2F )
        {
          v43 = (__int64 *)(v41 + v40);
          *(_DWORD *)a3 = v39 + 16;
          goto LABEL_44;
        }
        v43 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v43 + 1;
LABEL_44:
      if ( !(unsigned __int8)sub_9300(v42, *v43, a7) )
        return -1;
      return 1;
    case 32LL:
      v55 = *(_DWORD *)a3;
      if ( v55 > 0x2F )
      {
        v96 = *(__int64 **)(a3 + 8);
        v97 = v96 + 1;
        *(_QWORD *)(a3 + 8) = v96 + 1;
        v57 = *v96;
      }
      else
      {
        v56 = *(_QWORD *)(a3 + 16);
        *(_DWORD *)a3 = v55 + 8;
        v57 = *(_QWORD *)(v56 + v55);
        if ( v55 + 8 <= 0x2F )
        {
          *(_DWORD *)a3 = v55 + 16;
          goto LABEL_67;
        }
        v97 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v97 + 1;
LABEL_67:
      if ( (unsigned int)sub_8560(a1, v57) != 1 )
        return -1;
      return 1;
    case 36LL:
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
      return (int)sub_8550(*v31);
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
      return (int)sub_8600(*v24);
    case 46LL:
      v14 = *(_DWORD *)a3;
      if ( v14 > 0x2F )
      {
        v93 = *(_DWORD ***)(a3 + 8);
        v94 = (__int64 *)(v93 + 1);
        *(_QWORD *)(a3 + 8) = v93 + 1;
        v17 = *v93;
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
            v20 = (__int64 *)(v18 + v15);
            *(_DWORD *)a3 = v14 + 24;
            goto LABEL_21;
          }
          v20 = *(__int64 **)(a3 + 8);
LABEL_143:
          *(_QWORD *)(a3 + 8) = v20 + 1;
LABEL_21:
          *v17 = sub_7C10(v19, *v20);
          return 1;
        }
        v94 = *(__int64 **)(a3 + 8);
      }
      v20 = v94 + 1;
      *(_QWORD *)(a3 + 8) = v94 + 1;
      v19 = *v94;
      goto LABEL_143;
    case 47LL:
      if ( *(_DWORD *)a3 > 0x2Fu )
        *(_QWORD *)(a3 + 8) += 8LL;
      else
        *(_DWORD *)a3 += 8;
      return 1;
    case 59LL:
      v12 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v13 = *(unsigned __int64 ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v13 + 1;
      }
      else
      {
        v13 = (unsigned __int64 **)(*(_QWORD *)(a3 + 16) + v12);
        *(_DWORD *)a3 = v12 + 8;
      }
      sub_8700(*v13);
      return 1;
    case 60LL:
      v25 = *(_DWORD *)a3;
      if ( v25 > 0x2F )
      {
        v83 = *(_DWORD ***)(a3 + 8);
        v29 = v83 + 1;
        *(_QWORD *)(a3 + 8) = v83 + 1;
        v28 = *v83;
      }
      else
      {
        v26 = *(_QWORD *)(a3 + 16);
        v27 = v25 + 8;
        *(_DWORD *)a3 = v27;
        v28 = *(_DWORD **)(v26 + v25);
        if ( (unsigned int)v27 <= 0x2F )
        {
          v29 = (_QWORD *)(v27 + v26);
          *(_DWORD *)a3 = v25 + 16;
          goto LABEL_31;
        }
        v29 = *(_QWORD **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v29 + 1;
LABEL_31:
      *v28 = sub_8910(*v29);
      return 1;
    case 86LL:
      *(_DWORD *)(a1 + 244) = sub_ABA0(*(_QWORD *)(a1 + 16));
LABEL_3:
      sub_B110(a1);
      return 0;
    case 94LL:
      v21 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v22 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v22 + 1;
      }
      else
      {
        v22 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v21);
        *(_DWORD *)a3 = v21 + 8;
      }
      sub_C8B0(*v22, a2, (_DWORD)v22, a4, a5, a6);
      return 0;
    case 95LL:
      netnode_check();
      return 0;
    case 96LL:
      if ( !(_BYTE)byte_18148 && __cxa_guard_acquire(&byte_18148) )
      {
        qword_123F0 = *(_QWORD *)(a1 + 120);
        __cxa_guard_release(&byte_18148);
      }
      return (int)cvt64_node_supval_for_event();
    case 99LL:
      v32 = *(_DWORD *)a3;
      if ( v32 > 0x2F )
      {
        v86 = *(__int64 **)(a3 + 8);
        v87 = v86 + 1;
        *(_QWORD *)(a3 + 8) = v86 + 1;
        v35 = *v86;
      }
      else
      {
        v33 = *(_QWORD *)(a3 + 16);
        v34 = v32 + 8;
        *(_DWORD *)a3 = v34;
        v35 = *(_QWORD *)(v33 + v32);
        if ( (unsigned int)v34 <= 0x2F )
        {
          v36 = v32 + 16;
          *(_DWORD *)a3 = v36;
          v37 = *(_QWORD *)(v33 + v34);
          if ( (unsigned int)v36 <= 0x2F )
          {
            v38 = (__int64 *)(v36 + v33);
            *(_DWORD *)a3 = v32 + 24;
            goto LABEL_39;
          }
          v38 = *(__int64 **)(a3 + 8);
LABEL_132:
          *(_QWORD *)(a3 + 8) = v38 + 1;
LABEL_39:
          sub_9BB0(a1, v35, v37, *v38);
          return 1;
        }
        v87 = *(__int64 **)(a3 + 8);
      }
      v38 = v87 + 1;
      *(_QWORD *)(a3 + 8) = v87 + 1;
      v37 = *v87;
      goto LABEL_132;
    default:
      return 0;
  }
}

