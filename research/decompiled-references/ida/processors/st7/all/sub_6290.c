__int64 __fastcall sub_6290(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  void *v8; // rbp
  size_t v9; // rax
  size_t v10; // r13
  size_t v11; // r14
  void *v12; // rdi
  __int64 v14; // rdi
  __int64 v15; // r14
  _QWORD *v16; // rbp
  __int64 v17; // rdi
  __int64 v18; // r12
  __int64 i; // r15
  _QWORD *v20; // r13
  unsigned int v21; // eax
  _QWORD *v22; // rdx
  unsigned int v23; // eax
  _QWORD *v24; // rdx
  unsigned int v25; // edx
  __int64 v26; // rax
  __int64 v27; // rdi
  unsigned int v28; // edx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 *v31; // rdi
  __int64 *v32; // rax
  unsigned int v33; // eax
  __int64 *v34; // rdx
  unsigned int v35; // edx
  unsigned int v36; // edx
  __int64 v37; // rax
  __int64 v38; // rcx
  _QWORD *v39; // rdi
  __int64 *v40; // rax
  unsigned int v41; // eax
  __int64 *v42; // rdx
  unsigned int v43; // eax
  __int64 *v44; // rdx
  unsigned int v45; // eax
  _QWORD *v46; // rdx
  unsigned int v47; // eax
  __int64 *v48; // rdx
  unsigned int v49; // edx
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rdi
  _QWORD **v53; // rax
  unsigned int v54; // eax
  __int64 *v55; // rdx
  unsigned int v56; // eax
  __int64 v57; // rcx
  __int64 v58; // rsi
  __int64 v59; // rdx
  _QWORD *v60; // rcx
  __int64 *v61; // rdx
  __int64 *v62; // rax
  _QWORD **v63; // rdx
  __int64 **v64; // rdx
  __int64 *v65; // rdx
  _QWORD *v66; // rax
  _QWORD *v67; // rax
  _QWORD **v68; // rax
  _QWORD **v69; // rdx
  __int64 v70; // rax
  __int64 *v71; // rdx
  __int64 v72; // rax
  __int64 v73; // [rsp+0h] [rbp-1058h]
  __int64 v74; // [rsp+8h] [rbp-1050h]

  switch ( a2 )
  {
    case 0LL:
      netnode_check();
      setinf_flag();
      return 0;
    case 1LL:
      v14 = *(_QWORD *)(a1 + 160);
      if ( v14 )
      {
        v74 = *(_QWORD *)(a1 + 168);
        if ( v74 )
        {
          v73 = 0;
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
                for ( i = 0; i != v18; ++i )
                {
                  v20 = (_QWORD *)(v17 + 48 * i);
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
            ++v73;
            v14 = *(_QWORD *)(a1 + 160);
            v15 += 88;
          }
          while ( v74 != v73 );
        }
        *(_QWORD *)(a1 + 168) = 0;
        qfree();
        *(_QWORD *)(a1 + 160) = 0;
        *(_QWORD *)(a1 + 176) = 0;
      }
      clr_module_data();
      return 0;
    case 4LL:
      getinf_buf();
      qstrlwr();
      qstrncat();
      if ( !(unsigned __int8)choose_ioport_device() )
        goto LABEL_10;
      if ( *(_QWORD *)(a1 + 144) )
      {
        v8 = *(void **)(a1 + 136);
        if ( !v8 )
          goto LABEL_10;
        v9 = strlen(*(const char **)(a1 + 136));
        v10 = v9;
        if ( v9 )
        {
          v11 = v9 + 1;
          v12 = v8;
          if ( *(_QWORD *)(a1 + 152) < v9 + 1 )
          {
            v72 = qvector_reserve();
            *(_QWORD *)(a1 + 136) = v72;
            v12 = (void *)v72;
          }
          *(_QWORD *)(a1 + 144) = v11;
          memmove(v12, v8, v10);
          *(_BYTE *)(*(_QWORD *)(a1 + 136) + v10) = 0;
          goto LABEL_9;
        }
LABEL_119:
        *(_QWORD *)(a1 + 144) = 0;
LABEL_9:
        netnode_supset();
        sub_55D0((__int64 *)(a1 + 128), 7);
        goto LABEL_10;
      }
      if ( byte_8E90 )
        goto LABEL_119;
LABEL_10:
      sub_61F0(a1);
      return 0;
    case 5LL:
    case 86LL:
      if ( netnode_qsupstr() > 0 )
        sub_55D0((__int64 *)(a1 + 128), 0);
      return 0;
    case 8LL:
      v56 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v65 = *(__int64 **)(a3 + 8);
        v66 = v65 + 1;
        *(_QWORD *)(a3 + 8) = v65 + 1;
        v58 = *v65;
LABEL_102:
        v67 = v66 + 1;
LABEL_103:
        v68 = (_QWORD **)(v67 + 1);
LABEL_104:
        v69 = v68 + 1;
        *(_QWORD *)(a3 + 8) = v68 + 1;
        v60 = *v68;
        goto LABEL_105;
      }
      v57 = *(_QWORD *)(a3 + 16);
      *(_DWORD *)a3 = v56 + 8;
      v58 = *(_QWORD *)(v57 + v56);
      if ( v56 + 8 > 0x2F )
      {
        v66 = *(_QWORD **)(a3 + 8);
        goto LABEL_102;
      }
      *(_DWORD *)a3 = v56 + 16;
      if ( v56 + 16 > 0x2F )
      {
        v67 = *(_QWORD **)(a3 + 8);
        goto LABEL_103;
      }
      v59 = v56 + 24;
      *(_DWORD *)a3 = v59;
      if ( (unsigned int)v59 > 0x2F )
      {
        v68 = *(_QWORD ***)(a3 + 8);
        goto LABEL_104;
      }
      *(_DWORD *)a3 = v56 + 32;
      v60 = *(_QWORD **)(v57 + v59);
      if ( v56 + 32 <= 0x2F )
      {
        *(_DWORD *)a3 = v56 + 40;
        goto LABEL_90;
      }
      v69 = *(_QWORD ***)(a3 + 8);
LABEL_105:
      *(_QWORD *)(a3 + 8) = v69 + 1;
LABEL_90:
      if ( v58 )
      {
        if ( v60 )
          *v60 = 1;
        return -1;
      }
      else
      {
        sub_5900(a1);
        return 1;
      }
    case 10LL:
      v47 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v48 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v48 + 1;
      }
      else
      {
        v48 = (__int64 *)(*(_QWORD *)(a3 + 16) + v47);
        *(_DWORD *)a3 = v47 + 8;
      }
      return (int)sub_3880(*v48);
    case 11LL:
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
      if ( !(unsigned int)sub_42C0(a1, *v55) )
        return -1;
      return 1;
    case 12LL:
      v43 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v44 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v44 + 1;
      }
      else
      {
        v44 = (__int64 *)(*(_QWORD *)(a3 + 16) + v43);
        *(_DWORD *)a3 = v43 + 8;
      }
      sub_5130(*v44);
      return 1;
    case 13LL:
      v41 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v42 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v42 + 1;
      }
      else
      {
        v42 = (__int64 *)(*(_QWORD *)(a3 + 16) + v41);
        *(_DWORD *)a3 = v41 + 8;
      }
      sub_5160(a1, *v42);
      return 1;
    case 14LL:
      v36 = *(_DWORD *)a3;
      if ( v36 > 0x2F )
      {
        v63 = *(_QWORD ***)(a3 + 8);
        v40 = (__int64 *)(v63 + 1);
        *(_QWORD *)(a3 + 8) = v63 + 1;
        v39 = *v63;
      }
      else
      {
        v37 = *(_QWORD *)(a3 + 16);
        v38 = v36 + 8;
        *(_DWORD *)a3 = v38;
        v39 = *(_QWORD **)(v37 + v36);
        if ( (unsigned int)v38 <= 0x2F )
        {
          v40 = (__int64 *)(v38 + v37);
          *(_DWORD *)a3 = v36 + 16;
          goto LABEL_63;
        }
        v40 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v40 + 1;
LABEL_63:
      sub_4E20(v39, *v40);
      return 1;
    case 15LL:
      v35 = *(_DWORD *)a3;
      if ( v35 > 0x2F )
      {
        v70 = *(_QWORD *)(a3 + 8) + 8LL;
        *(_QWORD *)(a3 + 8) = v70;
      }
      else
      {
        *(_DWORD *)a3 = v35 + 8;
        if ( v35 + 8 <= 0x2F )
        {
          *(_DWORD *)a3 = v35 + 16;
          goto LABEL_59;
        }
        v70 = *(_QWORD *)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v70 + 8;
LABEL_59:
      nullsub_1();
      return 1;
    case 17LL:
      v33 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v34 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v34 + 1;
      }
      else
      {
        v34 = (__int64 *)(*(_QWORD *)(a3 + 16) + v33);
        *(_DWORD *)a3 = v33 + 8;
      }
      sub_4E10(*v34);
      return 1;
    case 19LL:
      v28 = *(_DWORD *)a3;
      if ( v28 > 0x2F )
      {
        v64 = *(__int64 ***)(a3 + 8);
        v32 = (__int64 *)(v64 + 1);
        *(_QWORD *)(a3 + 8) = v64 + 1;
        v31 = *v64;
      }
      else
      {
        v29 = *(_QWORD *)(a3 + 16);
        v30 = v28 + 8;
        *(_DWORD *)a3 = v30;
        v31 = *(__int64 **)(v29 + v28);
        if ( (unsigned int)v30 <= 0x2F )
        {
          v32 = (__int64 *)(v30 + v29);
          *(_DWORD *)a3 = v28 + 16;
          goto LABEL_51;
        }
        v32 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v32 + 1;
LABEL_51:
      if ( !(unsigned __int8)sub_4C20(v31, *v32) )
        return -1;
      return 1;
    case 32LL:
      v25 = *(_DWORD *)a3;
      if ( v25 > 0x2F )
      {
        v61 = *(__int64 **)(a3 + 8);
        v62 = v61 + 1;
        *(_QWORD *)(a3 + 8) = v61 + 1;
        v27 = *v61;
      }
      else
      {
        v26 = *(_QWORD *)(a3 + 16);
        *(_DWORD *)a3 = v25 + 8;
        v27 = *(_QWORD *)(v26 + v25);
        if ( v25 + 8 <= 0x2F )
        {
          *(_DWORD *)a3 = v25 + 16;
          goto LABEL_46;
        }
        v62 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v62 + 1;
LABEL_46:
      if ( (unsigned int)sub_4460(v27) == 1 )
        return 1;
      return -1;
    case 36LL:
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
      return (int)sub_4450(*v24);
    case 43LL:
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
      return (int)sub_44C0(*v22);
    case 55LL:
      v49 = *(_DWORD *)a3;
      if ( v49 > 0x2F )
      {
        v71 = *(__int64 **)(a3 + 8);
        v53 = (_QWORD **)(v71 + 1);
        *(_QWORD *)(a3 + 8) = v71 + 1;
        v52 = *v71;
      }
      else
      {
        v50 = *(_QWORD *)(a3 + 16);
        v51 = v49 + 8;
        *(_DWORD *)a3 = v51;
        v52 = *(_QWORD *)(v50 + v49);
        if ( (unsigned int)v51 <= 0x2F )
        {
          v53 = (_QWORD **)(v51 + v50);
          *(_DWORD *)a3 = v49 + 16;
          return (int)sub_4440(v52, *v53);
        }
        v53 = *(_QWORD ***)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v53 + 1;
      return (int)sub_4440(v52, *v53);
    case 94LL:
      v45 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v46 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v46 + 1;
      }
      else
      {
        v46 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v45);
        *(_DWORD *)a3 = v45 + 8;
      }
      sub_78C0(*v46, a2, (_DWORD)v46, a4, a5, a6);
      return 0;
    case 95LL:
      netnode_check();
      return 0;
    case 96LL:
      if ( !(_BYTE)byte_B368 && __cxa_guard_acquire(&byte_B368) )
      {
        qword_B330 = *(_QWORD *)(a1 + 120);
        __cxa_guard_release(&byte_B368);
      }
      return (int)cvt64_node_supval_for_event();
    default:
      return 0;
  }
}

