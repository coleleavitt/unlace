__int64 __fastcall sub_BCF0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  unsigned int v17; // eax
  _QWORD *v18; // rdx
  unsigned int v19; // edx
  __int64 v20; // rax
  __int64 v21; // rsi
  _DWORD *v22; // rbp
  __int64 v23; // rcx
  __int64 v24; // rdi
  _QWORD *v25; // rax
  unsigned int v26; // eax
  _QWORD *v27; // rdx
  unsigned int v28; // eax
  _QWORD *v29; // rdx
  unsigned int v30; // eax
  __int64 *v31; // rdx
  unsigned int v32; // eax
  _QWORD *v33; // rdx
  unsigned int v34; // edx
  __int64 v35; // rax
  __int64 v36; // rcx
  _BYTE *v37; // rdi
  __int64 *v38; // rax
  unsigned int v39; // eax
  __int64 *v40; // rdx
  unsigned int v41; // edx
  __int64 v42; // rax
  __int64 v43; // rsi
  unsigned int v44; // edx
  __int64 v45; // rax
  __int64 v46; // rsi
  unsigned int v47; // eax
  __int64 *v48; // rdx
  unsigned int v49; // edx
  __int64 v50; // rax
  __int64 v51; // rsi
  unsigned int v52; // eax
  __int64 *v53; // rdx
  unsigned int v54; // eax
  __int64 v55; // rcx
  __int64 v56; // rsi
  __int64 v57; // rdx
  _QWORD *v58; // rcx
  unsigned int v59; // eax
  unsigned int *v60; // rdx
  int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // rdi
  __int64 v64; // r14
  _QWORD *v65; // rbx
  __int64 v66; // rdi
  __int64 v67; // r12
  __int64 i; // r15
  _QWORD *v69; // r13
  const char *v70; // rsi
  unsigned int v71; // eax
  __int64 *v72; // rdx
  __int64 *v73; // rdx
  _QWORD *v74; // rax
  _QWORD *v75; // rax
  _QWORD **v76; // rax
  _QWORD **v77; // rdx
  _DWORD **v78; // rax
  __int64 *v79; // rdx
  _BYTE **v80; // rdx
  __int64 *v81; // rdx
  __int64 *v82; // rax
  __int64 *v83; // rdx
  __int64 *v84; // rax
  __int64 *v85; // rdx
  __int64 *v86; // rax
  char v87; // [rsp+0h] [rbp-1078h]
  __int64 v88; // [rsp+0h] [rbp-1078h]
  __int64 v89; // [rsp+8h] [rbp-1070h]

  switch ( a2 )
  {
    case 0LL:
      netnode_check();
      setinf_flag();
      return 0;
    case 1LL:
      v63 = *(_QWORD *)(a1 + 160);
      if ( v63 )
      {
        v89 = *(_QWORD *)(a1 + 168);
        if ( v89 )
        {
          v88 = 0;
          v64 = 0;
          do
          {
            v65 = (_QWORD *)(v63 + v64);
            v66 = *(_QWORD *)(v63 + v64 + 56);
            if ( v66 )
            {
              v67 = v65[8];
              if ( v67 )
              {
                for ( i = 0; i != v67; ++i )
                {
                  v69 = (_QWORD *)(v66 + 48 * i);
                  if ( v69[3] )
                  {
                    v69[4] = 0;
                    qfree();
                  }
                  if ( *v69 )
                  {
                    v69[1] = 0;
                    qfree();
                  }
                  v66 = v65[7];
                }
              }
              v65[8] = 0;
              qfree();
            }
            if ( v65[4] )
            {
              v65[5] = 0;
              qfree();
            }
            if ( v65[1] )
            {
              v65[2] = 0;
              qfree();
            }
            ++v88;
            v63 = *(_QWORD *)(a1 + 160);
            v64 += 88;
          }
          while ( v89 != v88 );
        }
        *(_QWORD *)(a1 + 168) = 0;
        qfree();
        *(_QWORD *)(a1 + 160) = 0;
        *(_QWORD *)(a1 + 176) = 0;
      }
      clr_module_data();
      return 0;
    case 2LL:
      v59 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v60 = *(unsigned int **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v60 + 2;
      }
      else
      {
        v60 = (unsigned int *)(*(_QWORD *)(a3 + 16) + v59);
        *(_DWORD *)a3 = v59 + 8;
      }
      v61 = *(_DWORD *)(a1 + 244);
      v62 = *v60;
      if ( v61 == -1 )
      {
        *(_DWORD *)(a1 + 244) = v62;
      }
      else if ( v61 != (_DWORD)v62 )
      {
        sub_7F70(
          (__int64)"Sorry, processor type cannot be changed after loading",
          a2,
          v62,
          a4,
          a5,
          a6,
          a7,
          a8,
          a9,
          a10,
          a11,
          a12,
          a13,
          a14,
          v87);
        return -1;
      }
      return 0;
    case 4LL:
      getinf_buf();
      qstrlwr();
      qstrncat();
      if ( (unsigned __int8)choose_ioport_device2() )
      {
        v70 = (const char *)&dword_F604;
        if ( *(_QWORD *)(a1 + 144) )
          v70 = *(const char **)(a1 + 136);
        sub_B860(a1, v70, 6);
      }
      else if ( *(_QWORD *)(a1 + 232) == -1 )
      {
        *(_QWORD *)(a1 + 232) = sub_B720(a1, *(int *)(a1 + 240), 0);
      }
      return 0;
    case 5LL:
      if ( netnode_qsupstr() >= 0 )
      {
        netnode_supset();
        netnode_supdel();
      }
      goto LABEL_4;
    case 8LL:
      v54 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v73 = *(__int64 **)(a3 + 8);
        v74 = v73 + 1;
        *(_QWORD *)(a3 + 8) = v73 + 1;
        v56 = *v73;
LABEL_106:
        v75 = v74 + 1;
LABEL_107:
        v76 = (_QWORD **)(v75 + 1);
LABEL_108:
        v77 = v76 + 1;
        *(_QWORD *)(a3 + 8) = v76 + 1;
        v58 = *v76;
        goto LABEL_109;
      }
      v55 = *(_QWORD *)(a3 + 16);
      *(_DWORD *)a3 = v54 + 8;
      v56 = *(_QWORD *)(v55 + v54);
      if ( v54 + 8 > 0x2F )
      {
        v74 = *(_QWORD **)(a3 + 8);
        goto LABEL_106;
      }
      *(_DWORD *)a3 = v54 + 16;
      if ( v54 + 16 > 0x2F )
      {
        v75 = *(_QWORD **)(a3 + 8);
        goto LABEL_107;
      }
      v57 = v54 + 24;
      *(_DWORD *)a3 = v57;
      if ( (unsigned int)v57 > 0x2F )
      {
        v76 = *(_QWORD ***)(a3 + 8);
        goto LABEL_108;
      }
      *(_DWORD *)a3 = v54 + 32;
      v58 = *(_QWORD **)(v55 + v57);
      if ( v54 + 32 <= 0x2F )
      {
        *(_DWORD *)a3 = v54 + 40;
        goto LABEL_66;
      }
      v77 = *(_QWORD ***)(a3 + 8);
LABEL_109:
      *(_QWORD *)(a3 + 8) = v77 + 1;
LABEL_66:
      if ( !v56 )
      {
        sub_BA50(a1);
        return 1;
      }
      if ( v58 )
        *v58 = 1;
      return -1;
    case 10LL:
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
      return (int)sub_8580((_QWORD *)a1, *v53);
    case 11LL:
      v71 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v72 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v72 + 1;
      }
      else
      {
        v72 = (__int64 *)(*(_QWORD *)(a3 + 16) + v71);
        *(_DWORD *)a3 = v71 + 8;
      }
      if ( !(unsigned int)sub_8A30(a1, *v72) )
        return -1;
      return 1;
    case 12LL:
      v30 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v31 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v31 + 1;
      }
      else
      {
        v31 = (__int64 *)(*(_QWORD *)(a3 + 16) + v30);
        *(_DWORD *)a3 = v30 + 8;
      }
      sub_A5F0(a1, *v31);
      return 1;
    case 13LL:
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
      sub_A630(a1, *v48);
      return 1;
    case 14LL:
      v44 = *(_DWORD *)a3;
      if ( v44 > 0x2F )
      {
        v83 = *(__int64 **)(a3 + 8);
        v84 = v83 + 1;
        *(_QWORD *)(a3 + 8) = v83 + 1;
        v46 = *v83;
      }
      else
      {
        v45 = *(_QWORD *)(a3 + 16);
        *(_DWORD *)a3 = v44 + 8;
        v46 = *(_QWORD *)(v45 + v44);
        if ( v44 + 8 <= 0x2F )
        {
          *(_DWORD *)a3 = v44 + 16;
          goto LABEL_49;
        }
        v84 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v84 + 1;
LABEL_49:
      sub_A1F0(a1, v46);
      return 1;
    case 15LL:
      v49 = *(_DWORD *)a3;
      if ( v49 > 0x2F )
      {
        v85 = *(__int64 **)(a3 + 8);
        v86 = v85 + 1;
        *(_QWORD *)(a3 + 8) = v85 + 1;
        v51 = *v85;
      }
      else
      {
        v50 = *(_QWORD *)(a3 + 16);
        *(_DWORD *)a3 = v49 + 8;
        v51 = *(_QWORD *)(v50 + v49);
        if ( v49 + 8 <= 0x2F )
        {
          *(_DWORD *)a3 = v49 + 16;
          goto LABEL_56;
        }
        v86 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v86 + 1;
LABEL_56:
      sub_A4F0(a1, v51);
      return 1;
    case 16LL:
      v32 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v33 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v33 + 1;
      }
      else
      {
        v33 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v32);
        *(_DWORD *)a3 = v32 + 8;
      }
      sub_A4E0(*v33);
      return 1;
    case 17LL:
      v39 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v40 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v40 + 1;
      }
      else
      {
        v40 = (__int64 *)(*(_QWORD *)(a3 + 16) + v39);
        *(_DWORD *)a3 = v39 + 8;
      }
      sub_A1E0(*v40);
      return 1;
    case 19LL:
      v34 = *(_DWORD *)a3;
      if ( v34 > 0x2F )
      {
        v80 = *(_BYTE ***)(a3 + 8);
        v38 = (__int64 *)(v80 + 1);
        *(_QWORD *)(a3 + 8) = v80 + 1;
        v37 = *v80;
      }
      else
      {
        v35 = *(_QWORD *)(a3 + 16);
        v36 = v34 + 8;
        *(_DWORD *)a3 = v36;
        v37 = *(_BYTE **)(v35 + v34);
        if ( (unsigned int)v36 <= 0x2F )
        {
          v38 = (__int64 *)(v36 + v35);
          *(_DWORD *)a3 = v34 + 16;
          goto LABEL_36;
        }
        v38 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v38 + 1;
LABEL_36:
      if ( !(unsigned __int8)sub_93A0(v37, *v38) )
        return -1;
      return 1;
    case 32LL:
      v41 = *(_DWORD *)a3;
      if ( v41 > 0x2F )
      {
        v81 = *(__int64 **)(a3 + 8);
        v82 = v81 + 1;
        *(_QWORD *)(a3 + 8) = v81 + 1;
        v43 = *v81;
      }
      else
      {
        v42 = *(_QWORD *)(a3 + 16);
        *(_DWORD *)a3 = v41 + 8;
        v43 = *(_QWORD *)(v42 + v41);
        if ( v41 + 8 <= 0x2F )
        {
          *(_DWORD *)a3 = v41 + 16;
          goto LABEL_44;
        }
        v82 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v82 + 1;
LABEL_44:
      if ( (unsigned int)sub_8CF0(a1, v43) != 1 )
        return -1;
      return 1;
    case 36LL:
      v28 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v29 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v29 + 1;
      }
      else
      {
        v29 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v28);
        *(_DWORD *)a3 = v28 + 8;
      }
      return (int)sub_8CE0(*v29);
    case 43LL:
      v26 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v27 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v27 + 1;
      }
      else
      {
        v27 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v26);
        *(_DWORD *)a3 = v26 + 8;
      }
      return (int)sub_8D40(*v27);
    case 46LL:
      v19 = *(_DWORD *)a3;
      if ( v19 > 0x2F )
      {
        v78 = *(_DWORD ***)(a3 + 8);
        v79 = (__int64 *)(v78 + 1);
        *(_QWORD *)(a3 + 8) = v78 + 1;
        v22 = *v78;
      }
      else
      {
        v20 = *(_QWORD *)(a3 + 16);
        v21 = v19 + 8;
        *(_DWORD *)a3 = v21;
        v22 = *(_DWORD **)(v20 + v19);
        if ( (unsigned int)v21 <= 0x2F )
        {
          v23 = v19 + 16;
          *(_DWORD *)a3 = v23;
          v24 = *(_QWORD *)(v20 + v21);
          if ( (unsigned int)v23 <= 0x2F )
          {
            v25 = (_QWORD *)(v23 + v20);
            *(_DWORD *)a3 = v19 + 24;
            goto LABEL_17;
          }
          v25 = *(_QWORD **)(a3 + 8);
LABEL_112:
          *(_QWORD *)(a3 + 8) = v25 + 1;
LABEL_17:
          *v22 = sub_8850(v24, *v25);
          return 1;
        }
        v79 = *(__int64 **)(a3 + 8);
      }
      v25 = v79 + 1;
      *(_QWORD *)(a3 + 8) = v79 + 1;
      v24 = *v79;
      goto LABEL_112;
    case 47LL:
      if ( *(_DWORD *)a3 > 0x2Fu )
        *(_QWORD *)(a3 + 8) += 8LL;
      else
        *(_DWORD *)a3 += 8;
      return 1;
    case 86LL:
LABEL_4:
      sub_BB00(a1);
      return 0;
    case 94LL:
      v17 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v18 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v18 + 1;
      }
      else
      {
        v18 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v17);
        *(_DWORD *)a3 = v17 + 8;
      }
      sub_D390(*v18, a2, (_DWORD)v18, a4, a5, a6);
      return 0;
    case 95LL:
      netnode_check();
      return 0;
    case 96LL:
      if ( !(_BYTE)byte_1CC58 && __cxa_guard_acquire(&byte_1CC58) )
      {
        qword_1CC10 = *(_QWORD *)(a1 + 120);
        __cxa_guard_release(&byte_1CC58);
      }
      return (int)cvt64_node_supval_for_event();
    default:
      return 0;
  }
}

