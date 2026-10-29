__int64 __fastcall sub_AB60(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        double a8)
{
  int v10; // eax
  unsigned int v12; // eax
  _QWORD *v13; // rdx
  unsigned int v14; // eax
  __int64 *v15; // rdx
  unsigned int v16; // eax
  __int64 *v17; // rdx
  unsigned int v18; // edx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rsi
  _DWORD *v22; // rax
  unsigned int v23; // eax
  __int64 *v24; // rdx
  unsigned int v25; // eax
  __int64 *v26; // rdx
  unsigned int v27; // eax
  __int64 *v28; // rdx
  unsigned int v29; // eax
  _QWORD **v30; // rdx
  unsigned int v31; // eax
  int *v32; // rdx
  int v33; // esi
  unsigned int v34; // edx
  __int64 v35; // rax
  __int64 v36; // rcx
  _DWORD *v37; // rbx
  _QWORD *v38; // rax
  unsigned int v39; // edx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rsi
  __int64 *v43; // rax
  unsigned int v44; // edx
  __int64 v45; // rax
  __int64 v46; // rcx
  _QWORD *v47; // rdi
  __int64 *v48; // rax
  __int64 v49; // rdi
  __int64 v50; // r14
  _QWORD *v51; // rbp
  __int64 v52; // rdi
  __int64 v53; // r12
  __int64 i; // r15
  _QWORD *v55; // r13
  unsigned int v56; // edx
  __int64 v57; // rax
  __int64 v58; // rsi
  _DWORD *v59; // rbx
  __int64 v60; // rcx
  __int64 v61; // rdi
  __int64 *v62; // rax
  unsigned int v63; // eax
  __int64 v64; // rdi
  __int64 v65; // rsi
  __int64 v66; // rdx
  _QWORD *v67; // rdx
  __int64 *v68; // rdx
  _QWORD *v69; // rax
  _QWORD *v70; // rax
  _QWORD **v71; // rax
  _QWORD **v72; // rcx
  __int64 *v73; // rdx
  _QWORD **v74; // rdx
  _DWORD **v75; // rdx
  __int64 *v76; // rdx
  _DWORD **v77; // rax
  __int64 *v78; // rdx
  __int64 v79; // [rsp+0h] [rbp-58h]
  __int64 v80; // [rsp+8h] [rbp-50h]

  *(_DWORD *)(a1 + 284) = *(_DWORD *)(a1 + 200);
  switch ( a2 )
  {
    case 0LL:
    case 95LL:
      netnode_check();
      return 0;
    case 1LL:
      if ( *(_QWORD *)(a1 + 248) )
      {
        *(_QWORD *)(a1 + 256) = 0;
        qfree();
        *(_QWORD *)(a1 + 248) = 0;
        *(_QWORD *)(a1 + 264) = 0;
      }
      v49 = *(_QWORD *)(a1 + 152);
      if ( v49 )
      {
        v80 = *(_QWORD *)(a1 + 160);
        if ( v80 )
        {
          v79 = 0;
          v50 = 0;
          do
          {
            v51 = (_QWORD *)(v49 + v50);
            v52 = *(_QWORD *)(v49 + v50 + 56);
            if ( v52 )
            {
              v53 = v51[8];
              if ( v53 )
              {
                for ( i = 0; i != v53; ++i )
                {
                  v55 = (_QWORD *)(v52 + 48 * i);
                  if ( v55[3] )
                  {
                    v55[4] = 0;
                    qfree();
                  }
                  if ( *v55 )
                  {
                    v55[1] = 0;
                    qfree();
                  }
                  v52 = v51[7];
                }
              }
              v51[8] = 0;
              qfree();
            }
            if ( v51[4] )
            {
              v51[5] = 0;
              qfree();
            }
            if ( v51[1] )
            {
              v51[2] = 0;
              qfree();
            }
            ++v79;
            v49 = *(_QWORD *)(a1 + 152);
            v50 += 88;
          }
          while ( v80 != v79 );
        }
        *(_QWORD *)(a1 + 160) = 0;
        qfree();
        *(_QWORD *)(a1 + 152) = 0;
        *(_QWORD *)(a1 + 168) = 0;
      }
      clr_module_data();
      return 0;
    case 2LL:
      v31 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v32 = *(int **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v32 + 2;
      }
      else
      {
        v32 = (int *)(*(_QWORD *)(a3 + 16) + v31);
        *(_DWORD *)a3 = v31 + 8;
      }
      if ( !*(_BYTE *)(a1 + 280) )
      {
        v33 = *v32;
        *(_BYTE *)(a1 + 280) = 1;
        sub_AA60(a1, v33);
      }
      return 0;
    case 4LL:
      if ( get_first_seg() )
      {
        set_segm_name();
        *(_QWORD *)(a1 + 240) = sub_A950(a1, 0x10000, 0);
        sub_A750(a1, 5, a7, a8);
      }
      ea2node();
      netnode_supset();
      return 0;
    case 5LL:
      goto LABEL_3;
    case 8LL:
      v63 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v68 = *(__int64 **)(a3 + 8);
        v69 = v68 + 1;
        *(_QWORD *)(a3 + 8) = v68 + 1;
        v65 = *v68;
LABEL_91:
        v70 = v69 + 1;
LABEL_92:
        v71 = (_QWORD **)(v70 + 1);
LABEL_93:
        v72 = v71 + 1;
        *(_QWORD *)(a3 + 8) = v71 + 1;
        v67 = *v71;
        goto LABEL_94;
      }
      v64 = *(_QWORD *)(a3 + 16);
      *(_DWORD *)a3 = v63 + 8;
      v65 = *(_QWORD *)(v64 + v63);
      if ( v63 + 8 > 0x2F )
      {
        v69 = *(_QWORD **)(a3 + 8);
        goto LABEL_91;
      }
      *(_DWORD *)a3 = v63 + 16;
      if ( v63 + 16 > 0x2F )
      {
        v70 = *(_QWORD **)(a3 + 8);
        goto LABEL_92;
      }
      v66 = v63 + 24;
      *(_DWORD *)a3 = v66;
      if ( (unsigned int)v66 > 0x2F )
      {
        v71 = *(_QWORD ***)(a3 + 8);
        goto LABEL_93;
      }
      *(_DWORD *)a3 = v63 + 32;
      v67 = *(_QWORD **)(v64 + v66);
      if ( v63 + 32 <= 0x2F )
      {
        *(_DWORD *)a3 = v63 + 40;
        goto LABEL_86;
      }
      v72 = *(_QWORD ***)(a3 + 8);
LABEL_94:
      *(_QWORD *)(a3 + 8) = v72 + 1;
LABEL_86:
      if ( !v65 )
      {
        sub_97E0((__int64)"PIC specific options\n%*\n <~C~hoose device name:B:0::>\n\n\n", a1, sub_A550);
        return 1;
      }
      if ( v67 )
        *v67 = 1;
      return -1;
    case 10LL:
      v16 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v17 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v17 + 1;
      }
      else
      {
        v17 = (__int64 *)(*(_QWORD *)(a3 + 16) + v16);
        *(_DWORD *)a3 = v16 + 8;
      }
      return (int)sub_4BA0(a1, *v17);
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
      if ( (unsigned int)sub_6D40(a1, *v15, *(double *)a7.m128_u64, (__int64)v15, a4, a5, a6) )
        return 1;
      return -1;
    case 12LL:
      v25 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v26 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v26 + 1;
      }
      else
      {
        v26 = (__int64 *)(*(_QWORD *)(a3 + 16) + v25);
        *(_DWORD *)a3 = v25 + 8;
      }
      sub_8510(a1, *v26);
      return 1;
    case 13LL:
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
      sub_85B0(a1, *v24);
      return 1;
    case 14LL:
      v39 = *(_DWORD *)a3;
      if ( v39 > 0x2F )
      {
        v73 = *(__int64 **)(a3 + 8);
        v43 = v73 + 1;
        *(_QWORD *)(a3 + 8) = v73 + 1;
        v42 = *v73;
      }
      else
      {
        v40 = *(_QWORD *)(a3 + 16);
        v41 = v39 + 8;
        *(_DWORD *)a3 = v41;
        v42 = *(_QWORD *)(v40 + v39);
        if ( (unsigned int)v41 <= 0x2F )
        {
          v43 = (__int64 *)(v41 + v40);
          *(_DWORD *)a3 = v39 + 16;
          goto LABEL_48;
        }
        v43 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v43 + 1;
LABEL_48:
      sub_8350(a1, v42, *v43);
      return 1;
    case 17LL:
      v29 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v30 = *(_QWORD ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v30 + 1;
      }
      else
      {
        v30 = (_QWORD **)(*(_QWORD *)(a3 + 16) + v29);
        *(_DWORD *)a3 = v29 + 8;
      }
      sub_8340(*v30);
      return 1;
    case 19LL:
      v44 = *(_DWORD *)a3;
      if ( v44 > 0x2F )
      {
        v74 = *(_QWORD ***)(a3 + 8);
        v48 = (__int64 *)(v74 + 1);
        *(_QWORD *)(a3 + 8) = v74 + 1;
        v47 = *v74;
      }
      else
      {
        v45 = *(_QWORD *)(a3 + 16);
        v46 = v44 + 8;
        *(_DWORD *)a3 = v46;
        v47 = *(_QWORD **)(v45 + v44);
        if ( (unsigned int)v46 <= 0x2F )
        {
          v48 = (__int64 *)(v46 + v45);
          *(_DWORD *)a3 = v44 + 16;
          goto LABEL_52;
        }
        v48 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v48 + 1;
LABEL_52:
      if ( !(unsigned __int8)sub_8020(v47, *v48) )
        return -1;
      return 1;
    case 20LL:
      v18 = *(_DWORD *)a3;
      if ( v18 > 0x2F )
      {
        v76 = *(__int64 **)(a3 + 8);
        v22 = v76 + 1;
        *(_QWORD *)(a3 + 8) = v76 + 1;
        v21 = *v76;
      }
      else
      {
        v19 = *(_QWORD *)(a3 + 16);
        v20 = v18 + 8;
        *(_DWORD *)a3 = v20;
        v21 = *(_QWORD *)(v19 + v18);
        if ( (unsigned int)v20 <= 0x2F )
        {
          v22 = (_DWORD *)(v20 + v19);
          *(_DWORD *)a3 = v18 + 16;
          goto LABEL_22;
        }
        v22 = *(_DWORD **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v22 + 2;
LABEL_22:
      sub_8860(a1, v21, *v22 != 0);
      return 1;
    case 46LL:
      v56 = *(_DWORD *)a3;
      if ( v56 > 0x2F )
      {
        v77 = *(_DWORD ***)(a3 + 8);
        v78 = (__int64 *)(v77 + 1);
        *(_QWORD *)(a3 + 8) = v77 + 1;
        v59 = *v77;
      }
      else
      {
        v57 = *(_QWORD *)(a3 + 16);
        v58 = v56 + 8;
        *(_DWORD *)a3 = v58;
        v59 = *(_DWORD **)(v57 + v56);
        if ( (unsigned int)v58 <= 0x2F )
        {
          v60 = v56 + 16;
          *(_DWORD *)a3 = v60;
          v61 = *(_QWORD *)(v57 + v58);
          if ( (unsigned int)v60 <= 0x2F )
          {
            v62 = (__int64 *)(v60 + v57);
            *(_DWORD *)a3 = v56 + 24;
            goto LABEL_79;
          }
          v62 = *(__int64 **)(a3 + 8);
LABEL_112:
          *(_QWORD *)(a3 + 8) = v62 + 1;
LABEL_79:
          *v59 = sub_74F0(v61, *v62);
          return 1;
        }
        v78 = *(__int64 **)(a3 + 8);
      }
      v62 = v78 + 1;
      *(_QWORD *)(a3 + 8) = v78 + 1;
      v61 = *v78;
      goto LABEL_112;
    case 59LL:
      v27 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v28 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v28 + 1;
      }
      else
      {
        v28 = (__int64 *)(*(_QWORD *)(a3 + 16) + v27);
        *(_DWORD *)a3 = v27 + 8;
      }
      sub_73C0(*v28);
      return 1;
    case 60LL:
      v34 = *(_DWORD *)a3;
      if ( v34 > 0x2F )
      {
        v75 = *(_DWORD ***)(a3 + 8);
        v38 = v75 + 1;
        *(_QWORD *)(a3 + 8) = v75 + 1;
        v37 = *v75;
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
          goto LABEL_44;
        }
        v38 = *(_QWORD **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v38 + 1;
LABEL_44:
      *v37 = sub_7500(*v38);
      return 1;
    case 86LL:
      v10 = sub_9C90(*(_QWORD *)(a1 + 16));
      sub_AA60(a1, v10);
      *(_DWORD *)(a1 + 200) = 0;
LABEL_3:
      sub_AAE0(a1, a7, a8);
      return 0;
    case 94LL:
      v12 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v13 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v13 + 1;
      }
      else
      {
        v13 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v12);
        *(_DWORD *)a3 = v12 + 8;
      }
      sub_C0B0(*v13, a2, (_DWORD)v13, a4, a5, a6);
      return 0;
    case 96LL:
      if ( !(_BYTE)byte_11408 && __cxa_guard_acquire(&byte_11408) )
      {
        qword_113C0 = *(_QWORD *)(a1 + 224);
        qword_113D8 = qword_113C0;
        __cxa_guard_release(&byte_11408);
      }
      return (int)cvt64_node_supval_for_event();
    default:
      return 0;
  }
}

