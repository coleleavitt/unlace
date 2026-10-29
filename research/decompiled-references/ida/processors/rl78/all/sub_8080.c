__int64 __fastcall sub_8080(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        __m128 a9)
{
  __int64 result; // rax
  unsigned int v12; // eax
  __int64 *v13; // rdx
  unsigned int v14; // eax
  __int64 *v15; // rdx
  unsigned int v16; // eax
  __int64 **v17; // rdx
  unsigned int v18; // edx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 *v21; // rsi
  __int64 *v22; // rax
  __int64 v23; // rdi
  __int64 v24; // r14
  _QWORD *v25; // rbp
  __int64 v26; // rdi
  __int64 v27; // r12
  __int64 i; // r15
  _QWORD *v29; // r13
  unsigned int v30; // eax
  _QWORD *v31; // rdx
  unsigned int v32; // eax
  __int64 *v33; // rdx
  unsigned int v34; // edx
  __int64 v35; // rax
  __int64 v36; // rcx
  _DWORD *v37; // r12
  _QWORD *v38; // rax
  __int64 *v39; // r12
  int v40; // r14d
  unsigned __int64 v41; // rax
  __int64 v42; // rdx
  void *v43; // rbp
  size_t v44; // rax
  size_t v45; // r15
  size_t v46; // rdx
  void *v47; // rdi
  unsigned int v48; // eax
  __int64 *v49; // rdx
  __int64 v50; // rdx
  unsigned int v51; // eax
  __int64 *v52; // rdx
  __int64 **v53; // rdx
  _DWORD **v54; // rdx
  __int64 v55; // rax
  __int64 v56; // [rsp+0h] [rbp-1068h]
  size_t v57; // [rsp+0h] [rbp-1068h]
  __int64 v58; // [rsp+8h] [rbp-1060h]

  switch ( a2 )
  {
    case 0LL:
      setinf_flag();
      goto LABEL_3;
    case 1LL:
      v23 = *(_QWORD *)(a1 + 160);
      if ( v23 )
      {
        v58 = *(_QWORD *)(a1 + 168);
        if ( v58 )
        {
          v56 = 0;
          v24 = 0;
          do
          {
            v25 = (_QWORD *)(v23 + v24);
            v26 = *(_QWORD *)(v23 + v24 + 56);
            if ( v26 )
            {
              v27 = v25[8];
              if ( v27 )
              {
                for ( i = 0; i != v27; ++i )
                {
                  v29 = (_QWORD *)(v26 + 48 * i);
                  if ( v29[3] )
                  {
                    v29[4] = 0;
                    qfree();
                  }
                  if ( *v29 )
                  {
                    v29[1] = 0;
                    qfree();
                  }
                  v26 = v25[7];
                }
              }
              v25[8] = 0;
              qfree();
            }
            if ( v25[4] )
            {
              v25[5] = 0;
              qfree();
            }
            if ( v25[1] )
            {
              v25[2] = 0;
              qfree();
            }
            ++v56;
            v23 = *(_QWORD *)(a1 + 160);
            v24 += 88;
          }
          while ( v58 != v56 );
        }
        *(_QWORD *)(a1 + 168) = 0;
        qfree();
        *(_QWORD *)(a1 + 160) = 0;
        *(_QWORD *)(a1 + 176) = 0;
      }
      clr_module_data();
      return 0;
    case 4LL:
      v39 = (__int64 *)(a1 + 128);
      v40 = 5;
      getinf_buf();
      qstrlwr();
      qstrncat();
      v41 = getinf();
      if ( (unsigned int)v41 <= 0xD )
      {
        v42 = -8293;
        if ( !_bittest64(&v42, v41) )
          v40 = 7;
      }
      if ( !(unsigned __int8)choose_ioport_device2() )
        goto LABEL_62;
      if ( *(_QWORD *)(a1 + 144) )
      {
        v43 = *(void **)(a1 + 136);
        if ( !v43 )
          goto LABEL_62;
        v44 = strlen(*(const char **)(a1 + 136));
        v45 = v44;
        if ( v44 )
        {
          v46 = v44 + 1;
          v47 = v43;
          if ( *(_QWORD *)(a1 + 152) < v44 + 1 )
          {
            v57 = v44 + 1;
            v55 = qvector_reserve();
            v46 = v57;
            *(_QWORD *)(a1 + 136) = v55;
            v47 = (void *)v55;
          }
          *(_QWORD *)(a1 + 144) = v46;
          memmove(v47, v43, v45);
          *(_BYTE *)(*(_QWORD *)(a1 + 136) + v45) = 0;
          goto LABEL_61;
        }
LABEL_85:
        *(_QWORD *)(a1 + 144) = 0;
LABEL_61:
        netnode_supset();
        sub_7D90(v39, v40);
        goto LABEL_62;
      }
      if ( &dword_B0AC )
        goto LABEL_85;
LABEL_62:
      add_mapping();
      return 0;
    case 5LL:
    case 86LL:
      if ( netnode_qsupstr() > 0 )
        sub_7D90((__int64 *)(a1 + 128), 0);
      return 0;
    case 10LL:
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
      LOBYTE(result) = sub_4660(a1, *v13);
      return (int)result;
    case 11LL:
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
      if ( !(unsigned int)sub_60B0(a1, *v15) )
        return -1;
      return 1;
    case 17LL:
      v16 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v17 = *(__int64 ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v17 + 1;
      }
      else
      {
        v17 = (__int64 **)(*(_QWORD *)(a3 + 16) + v16);
        *(_DWORD *)a3 = v16 + 8;
      }
      sub_7120(*v17);
      return 1;
    case 19LL:
      v18 = *(_DWORD *)a3;
      if ( v18 > 0x2F )
      {
        v53 = *(__int64 ***)(a3 + 8);
        v22 = (__int64 *)(v53 + 1);
        *(_QWORD *)(a3 + 8) = v53 + 1;
        v21 = *v53;
      }
      else
      {
        v19 = *(_QWORD *)(a3 + 16);
        v20 = v18 + 8;
        *(_DWORD *)a3 = v20;
        v21 = *(__int64 **)(v19 + v18);
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
      if ( (unsigned __int8)sub_7600(a1, v21, *v22, a7) )
        return 1;
      return -1;
    case 25LL:
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
      v50 = *v49;
      *(_QWORD *)(v50 + 8LL * (18 - *(_DWORD *)(*(_QWORD *)(a1 + 16) + 68LL)) + 56) = 15;
      *(_QWORD *)(v50 + 8LL * (19 - *(_DWORD *)(*(_QWORD *)(a1 + 16) + 68LL)) + 56) = 0;
      *(_QWORD *)(v50 + 8LL * (17 - *(_DWORD *)(*(_QWORD *)(a1 + 16) + 68LL)) + 56) = 0;
      return 0;
    case 36LL:
      v51 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v52 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v52 + 1;
      }
      else
      {
        v52 = (__int64 *)(*(_QWORD *)(a3 + 16) + v51);
        *(_DWORD *)a3 = v51 + 8;
      }
      return (int)sub_5AC0(a1, *v52);
    case 59LL:
      v32 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v33 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v33 + 1;
      }
      else
      {
        v33 = (__int64 *)(*(_QWORD *)(a3 + 16) + v32);
        *(_DWORD *)a3 = v32 + 8;
      }
      sub_6F20(a1, *v33, 0, a4, a5, a6, a7, a8, a9);
      return 1;
    case 60LL:
      v34 = *(_DWORD *)a3;
      if ( v34 > 0x2F )
      {
        v54 = *(_DWORD ***)(a3 + 8);
        v38 = v54 + 1;
        *(_QWORD *)(a3 + 8) = v54 + 1;
        v37 = *v54;
      }
      else
      {
        v35 = *(_QWORD *)(a3 + 16);
        v36 = v34 + 8;
        *(_DWORD *)a3 = v36;
        v37 = *(_DWORD **)(v35 + v34);
        if ( (unsigned int)v36 <= 0x2F )
        {
          v38 = (_QWORD *)(v36 + v35);
          *(_DWORD *)a3 = v34 + 16;
          goto LABEL_50;
        }
        v38 = *(_QWORD **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v38 + 1;
LABEL_50:
      *v37 = sub_5FB0(a1, *v38);
      return 1;
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
      sub_9C40(*v31, a2, (_DWORD)v31, a4, a5, a6);
      return 0;
    case 95LL:
LABEL_3:
      netnode_check();
      return 0;
    case 96LL:
      if ( !(_BYTE)byte_E410 && __cxa_guard_acquire(&byte_E410) )
      {
        qword_E390 = *(_QWORD *)(a1 + 120);
        __cxa_guard_release(&byte_E410);
      }
      return (int)cvt64_node_supval_for_event();
    default:
      return 0;
  }
}

