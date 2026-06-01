__int64 __fastcall sub_8380(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, double a7)
{
  unsigned int v10; // eax
  __int64 *v11; // rdx
  unsigned int v12; // eax
  __int64 *v13; // rdx
  unsigned int v14; // eax
  __int64 *v15; // rdx
  unsigned int v16; // eax
  _QWORD **v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // r14
  _QWORD *v20; // rbp
  __int64 v21; // rdi
  __int64 v22; // r12
  __int64 i; // r15
  _QWORD *v24; // r13
  unsigned int v25; // eax
  _QWORD *v26; // rdx
  unsigned int v27; // edx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 *v31; // rax
  __int64 *v32; // r12
  void *v33; // rbp
  size_t v34; // rax
  size_t v35; // r14
  size_t v36; // r15
  void *v37; // rdi
  unsigned int v38; // edx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rsi
  __int64 *v42; // rax
  unsigned int v43; // eax
  _BYTE **v44; // rdx
  __int64 *v45; // rdx
  __int64 *v46; // rdx
  __int64 v47; // rax
  __int64 v48; // [rsp+0h] [rbp-1068h]
  __int64 v49; // [rsp+8h] [rbp-1060h]

  switch ( a2 )
  {
    case 0LL:
      setinf_flag();
      setinf_flag();
      goto LABEL_3;
    case 1LL:
      v18 = *(_QWORD *)(a1 + 160);
      if ( v18 )
      {
        v49 = *(_QWORD *)(a1 + 168);
        if ( v49 )
        {
          v48 = 0;
          v19 = 0;
          do
          {
            v20 = (_QWORD *)(v18 + v19);
            v21 = *(_QWORD *)(v18 + v19 + 56);
            if ( v21 )
            {
              v22 = v20[8];
              if ( v22 )
              {
                for ( i = 0; i != v22; ++i )
                {
                  v24 = (_QWORD *)(v21 + 48 * i);
                  if ( v24[3] )
                  {
                    v24[4] = 0;
                    qfree();
                  }
                  if ( *v24 )
                  {
                    v24[1] = 0;
                    qfree();
                  }
                  v21 = v20[7];
                }
              }
              v20[8] = 0;
              qfree();
            }
            if ( v20[4] )
            {
              v20[5] = 0;
              qfree();
            }
            if ( v20[1] )
            {
              v20[2] = 0;
              qfree();
            }
            ++v48;
            v18 = *(_QWORD *)(a1 + 160);
            v19 += 88;
          }
          while ( v49 != v48 );
        }
        *(_QWORD *)(a1 + 168) = 0;
        qfree();
        *(_QWORD *)(a1 + 160) = 0;
        *(_QWORD *)(a1 + 176) = 0;
      }
      clr_module_data();
      return 0;
    case 4LL:
      v32 = (__int64 *)(a1 + 128);
      getinf_buf();
      qstrlwr();
      qstrncat();
      if ( !(unsigned __int8)choose_ioport_device2() )
        goto LABEL_59;
      if ( *(_QWORD *)(a1 + 144) )
      {
        v33 = *(void **)(a1 + 136);
        if ( !v33 )
          goto LABEL_59;
        v34 = strlen(*(const char **)(a1 + 136));
        v35 = v34;
        if ( v34 )
        {
          v36 = v34 + 1;
          v37 = v33;
          if ( *(_QWORD *)(a1 + 152) < v34 + 1 )
          {
            v47 = qvector_reserve();
            *(_QWORD *)(a1 + 136) = v47;
            v37 = (void *)v47;
          }
          *(_QWORD *)(a1 + 144) = v36;
          memmove(v37, v33, v35);
          *(_BYTE *)(*(_QWORD *)(a1 + 136) + v35) = 0;
          goto LABEL_58;
        }
LABEL_83:
        *(_QWORD *)(a1 + 144) = 0;
LABEL_58:
        netnode_supset();
        sub_7A80(v32, 7);
        goto LABEL_59;
      }
      if ( &qword_A918 )
        goto LABEL_83;
LABEL_59:
      sub_8290();
      return 0;
    case 5LL:
    case 86LL:
      if ( netnode_qsupstr() > 0 )
        sub_7A80((__int64 *)(a1 + 128), 0);
      return 0;
    case 10LL:
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
      return (int)sub_3690(*v11);
    case 11LL:
      v12 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v13 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v13 + 1;
      }
      else
      {
        v13 = (__int64 *)(*(_QWORD *)(a3 + 16) + v12);
        *(_DWORD *)a3 = v12 + 8;
      }
      if ( !(unsigned int)sub_6A10(a1, *v13, a7) )
        return -1;
      return 1;
    case 12LL:
      v14 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v15 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v15 + 1;
      }
      else
      {
        v15 = (__int64 *)(*(_QWORD *)(a3 + 16) + v14);
        *(_DWORD *)a3 = v14 + 8;
      }
      sub_7380((_QWORD *)a1, *v15);
      return 1;
    case 13LL:
      v16 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v17 = *(_QWORD ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v17 + 1;
      }
      else
      {
        v17 = (_QWORD **)(*(_QWORD *)(a3 + 16) + v16);
        *(_DWORD *)a3 = v16 + 8;
      }
      sub_7520(a1, *v17);
      return 1;
    case 14LL:
      v38 = *(_DWORD *)a3;
      if ( v38 > 0x2F )
      {
        v45 = *(__int64 **)(a3 + 8);
        v42 = v45 + 1;
        *(_QWORD *)(a3 + 8) = v45 + 1;
        v41 = *v45;
      }
      else
      {
        v39 = *(_QWORD *)(a3 + 16);
        v40 = v38 + 8;
        *(_DWORD *)a3 = v40;
        v41 = *(_QWORD *)(v39 + v38);
        if ( (unsigned int)v40 <= 0x2F )
        {
          v42 = (__int64 *)(v40 + v39);
          *(_DWORD *)a3 = v38 + 16;
          goto LABEL_65;
        }
        v42 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v42 + 1;
LABEL_65:
      sub_73D0(a1, v41, *v42);
      return 1;
    case 17LL:
      v43 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v44 = *(_BYTE ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v44 + 1;
      }
      else
      {
        v44 = (_BYTE **)(*(_QWORD *)(a3 + 16) + v43);
        *(_DWORD *)a3 = v43 + 8;
      }
      sub_7370(*v44);
      return 1;
    case 19LL:
      v27 = *(_DWORD *)a3;
      if ( v27 > 0x2F )
      {
        v46 = *(__int64 **)(a3 + 8);
        v31 = v46 + 1;
        *(_QWORD *)(a3 + 8) = v46 + 1;
        v30 = *v46;
      }
      else
      {
        v28 = *(_QWORD *)(a3 + 16);
        v29 = v27 + 8;
        *(_DWORD *)a3 = v29;
        v30 = *(_QWORD *)(v28 + v27);
        if ( (unsigned int)v29 <= 0x2F )
        {
          v31 = (__int64 *)(v29 + v28);
          *(_DWORD *)a3 = v27 + 16;
          goto LABEL_46;
        }
        v31 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v31 + 1;
LABEL_46:
      if ( (unsigned __int8)sub_7250(v30, *v31) )
        return 1;
      else
        return -1;
    case 25LL:
      if ( *(_DWORD *)a3 > 0x2Fu )
        *(_QWORD *)(a3 + 8) += 8LL;
      else
        *(_DWORD *)a3 += 8;
      set_default_dataseg();
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
      sub_9750(*v26, a2, (_DWORD)v26, a4, a5, a6);
      return 0;
    case 95LL:
LABEL_3:
      netnode_check();
      return 0;
    case 96LL:
      if ( !(_BYTE)byte_D328 && __cxa_guard_acquire(&byte_D328) )
      {
        qword_D2F0 = *(_QWORD *)(a1 + 120);
        __cxa_guard_release(&byte_D328);
      }
      return (int)cvt64_node_supval_for_event();
    default:
      return 0;
  }
}

