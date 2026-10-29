__int64 __fastcall sub_7320(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, double a7)
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
  _QWORD *v30; // rdi
  __int64 *v31; // rax
  void *v32; // rbp
  size_t v33; // rax
  size_t v34; // r14
  size_t v35; // r15
  void *v36; // rdi
  unsigned int v37; // edx
  unsigned int v38; // eax
  __int64 **v39; // rdx
  __int64 v40; // rax
  _QWORD **v41; // rdx
  __int64 v42; // rax
  __int64 v43; // [rsp+0h] [rbp-1068h]
  __int64 v44; // [rsp+8h] [rbp-1060h]

  switch ( a2 )
  {
    case 0LL:
      setinf_flag();
      goto LABEL_3;
    case 1LL:
      v18 = *(_QWORD *)(a1 + 160);
      if ( v18 )
      {
        v44 = *(_QWORD *)(a1 + 168);
        if ( v44 )
        {
          v43 = 0;
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
            ++v43;
            v18 = *(_QWORD *)(a1 + 160);
            v19 += 88;
          }
          while ( v44 != v43 );
        }
        *(_QWORD *)(a1 + 168) = 0;
        qfree();
        *(_QWORD *)(a1 + 160) = 0;
        *(_QWORD *)(a1 + 176) = 0;
      }
      clr_module_data();
      return 0;
    case 4LL:
      setinf_flag();
      getinf_buf();
      qstrlwr();
      qstrncat();
      if ( !(unsigned __int8)choose_ioport_device2() )
        return 0;
      if ( *(_QWORD *)(a1 + 144) )
      {
        v32 = *(void **)(a1 + 136);
        if ( !v32 )
          return 0;
        v33 = strlen(*(const char **)(a1 + 136));
        v34 = v33;
        if ( v33 )
        {
          v35 = v33 + 1;
          v36 = v32;
          if ( *(_QWORD *)(a1 + 152) < v33 + 1 )
          {
            v42 = qvector_reserve();
            *(_QWORD *)(a1 + 136) = v42;
            v36 = (void *)v42;
          }
          *(_QWORD *)(a1 + 144) = v35;
          memmove(v36, v32, v34);
          *(_BYTE *)(*(_QWORD *)(a1 + 136) + v34) = 0;
          goto LABEL_58;
        }
LABEL_82:
        *(_QWORD *)(a1 + 144) = 0;
LABEL_58:
        netnode_supset();
        sub_6B60((__int64 *)(a1 + 128), 7);
        return 0;
      }
      if ( &dword_99AC )
        goto LABEL_82;
      return 0;
    case 5LL:
    case 86LL:
      if ( netnode_qsupstr() > 0 )
        sub_6B60((__int64 *)(a1 + 128), 0);
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
      return (int)sub_36A0(*v11);
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
      if ( !(unsigned int)sub_5A80(a1, *v13, a7) )
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
      sub_6410(a1, *v15);
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
      sub_6600(a1, *v17);
      return 1;
    case 14LL:
      v37 = *(_DWORD *)a3;
      if ( v37 > 0x2F )
      {
        v40 = *(_QWORD *)(a3 + 8) + 8LL;
        *(_QWORD *)(a3 + 8) = v40;
      }
      else
      {
        *(_DWORD *)a3 = v37 + 8;
        if ( v37 + 8 <= 0x2F )
        {
          *(_DWORD *)a3 = v37 + 16;
          goto LABEL_64;
        }
        v40 = *(_QWORD *)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v40 + 8;
LABEL_64:
      nullsub_1();
      return 1;
    case 17LL:
      v38 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v39 = *(__int64 ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v39 + 1;
      }
      else
      {
        v39 = (__int64 **)(*(_QWORD *)(a3 + 16) + v38);
        *(_DWORD *)a3 = v38 + 8;
      }
      sub_6400(*v39);
      return 1;
    case 19LL:
      v27 = *(_DWORD *)a3;
      if ( v27 > 0x2F )
      {
        v41 = *(_QWORD ***)(a3 + 8);
        v31 = (__int64 *)(v41 + 1);
        *(_QWORD *)(a3 + 8) = v41 + 1;
        v30 = *v41;
      }
      else
      {
        v28 = *(_QWORD *)(a3 + 16);
        v29 = v27 + 8;
        *(_DWORD *)a3 = v29;
        v30 = *(_QWORD **)(v28 + v27);
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
      if ( (unsigned __int8)sub_6210(v30, *v31, a7) )
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
      sub_8740(*v26, a2, (_DWORD)v26, a4, a5, a6);
      return 0;
    case 95LL:
LABEL_3:
      netnode_check();
      return 0;
    case 96LL:
      if ( !(_BYTE)byte_C328 && __cxa_guard_acquire(&byte_C328) )
      {
        qword_C2F0 = *(_QWORD *)(a1 + 120);
        __cxa_guard_release(&byte_C328);
      }
      return (int)cvt64_node_supval_for_event();
    default:
      return 0;
  }
}

