__int64 __fastcall sub_97A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  unsigned int v9; // eax
  _DWORD *v10; // rdx
  unsigned int v11; // eax
  int *v12; // rdx
  int v13; // r8d
  __int64 result; // rax
  unsigned int v15; // eax
  __int64 *v16; // rdx
  unsigned int v17; // edx
  __int64 *v18; // rdx
  __int64 *v19; // rax
  __int64 v20; // rsi
  unsigned int v21; // edx
  unsigned int v22; // eax
  __int64 *v23; // rdx
  unsigned int v24; // edx
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 *v28; // rax
  unsigned int v29; // eax
  __int64 *v30; // rdx
  __int64 v31; // rbp
  unsigned int v32; // eax
  _QWORD *v33; // rdx
  unsigned int v34; // edx
  const char **v35; // rax
  int *v36; // rdx
  const char *v37; // rdi
  const void **v38; // rax
  int v39; // r9d
  _QWORD **v40; // rdx
  const void *v41; // r10
  _DWORD *v42; // rax
  __int64 *v43; // r12
  __int64 v44; // rax
  unsigned int v45; // eax
  __int64 *v46; // rdx
  unsigned int v47; // eax
  __int64 *v48; // rdx
  unsigned int v49; // eax
  __int64 *v50; // rdx
  int v51; // eax
  __int64 v52; // rdi
  __int64 v53; // r14
  _QWORD *v54; // rbp
  __int64 v55; // rdi
  __int64 v56; // r12
  __int64 i; // r15
  _QWORD *v58; // r13
  __int64 *v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rsi
  __int64 v65; // rcx
  __int64 v66; // rsi
  __int64 v67; // rcx
  __int64 v68; // [rsp+0h] [rbp-E8h]
  __int64 v69; // [rsp+8h] [rbp-E0h]
  char v70[136]; // [rsp+20h] [rbp-C8h] BYREF
  unsigned __int64 v71; // [rsp+A8h] [rbp-40h]

  v71 = __readfsqword(0x28u);
  if ( a2 > 96 )
  {
    if ( a2 == 3000 )
    {
      v9 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v10 = *(_DWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v10 + 2;
      }
      else
      {
        v10 = (_DWORD *)(*(_QWORD *)(a3 + 16) + v9);
        *(_DWORD *)a3 = v9 + 8;
      }
      *(_DWORD *)(a1 + 320) = *v10;
      v11 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v12 = *(int **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v12 + 2;
      }
      else
      {
        v12 = (int *)(*(_QWORD *)(a3 + 16) + v11);
        *(_DWORD *)a3 = v11 + 8;
      }
      v13 = *v12;
      *(_BYTE *)(a1 + 349) = 1;
      *(_BYTE *)(a1 + 348) = v13 != 0;
    }
    return 0;
  }
  if ( a2 < 0 )
    return 0;
  switch ( a2 )
  {
    case 0LL:
      netnode_check();
      hook_event_listener();
      *(_QWORD *)(a1 + 288) = sub_7F40;
      *(_WORD *)(a1 + 312) = register_custom_fixup();
      v51 = register_custom_refinfo();
      *(_DWORD *)(a1 + 316) = v51;
      *(_DWORD *)(a1 + 280) = v51 | 0x40;
      return 0;
    case 1LL:
      *(_DWORD *)(a1 + 280) = 64;
      unregister_custom_refinfo();
      unregister_custom_fixup();
      unhook_event_listener();
      v52 = *(_QWORD *)(a1 + 160);
      if ( v52 )
      {
        v69 = *(_QWORD *)(a1 + 168);
        if ( v69 )
        {
          v68 = 0;
          v53 = 0;
          do
          {
            v54 = (_QWORD *)(v52 + v53);
            v55 = *(_QWORD *)(v52 + v53 + 56);
            if ( v55 )
            {
              v56 = v54[8];
              if ( v56 )
              {
                for ( i = 0; i != v56; ++i )
                {
                  v58 = (_QWORD *)(v55 + 48 * i);
                  if ( v58[3] )
                  {
                    v58[4] = 0;
                    qfree();
                  }
                  if ( *v58 )
                  {
                    v58[1] = 0;
                    qfree();
                  }
                  v55 = v54[7];
                }
              }
              v54[8] = 0;
              qfree();
            }
            if ( v54[4] )
            {
              v54[5] = 0;
              qfree();
            }
            if ( v54[1] )
            {
              v54[2] = 0;
              qfree();
            }
            ++v68;
            v52 = *(_QWORD *)(a1 + 160);
            v53 += 88;
          }
          while ( v69 != v68 );
        }
        *(_QWORD *)(a1 + 168) = 0;
        qfree();
        *(_QWORD *)(a1 + 160) = 0;
        *(_QWORD *)(a1 + 176) = 0;
      }
      clr_module_data();
      return 0;
    case 4LL:
      if ( get_first_seg() )
      {
        if ( !*(_DWORD *)(a1 + 320) )
          set_segm_name();
        ea2node();
        netnode_supset();
      }
      if ( !*(_DWORD *)(a1 + 320) || !(unsigned __int8)sub_9420(a1) )
      {
        sub_8180(a1, 4);
        if ( !*(_DWORD *)(a1 + 320) )
        {
          getinf();
          if ( *(_DWORD *)(a1 + 344) )
          {
            if ( sub_8060(0, (__int64)"*.bin", (__int64)"Please enter the binary EEPROM image file") )
            {
              add_segm();
              if ( open_linput() )
              {
                qlsize();
                file2base();
                close_linput();
              }
            }
          }
        }
      }
      return 0;
    case 5LL:
    case 86LL:
      sub_8740(a1);
      return 0;
    case 8LL:
      v34 = *(_DWORD *)a3;
      if ( v34 > 0x2F )
      {
        v35 = *(const char ***)(a3 + 8);
        v36 = (int *)(v35 + 1);
        *(_QWORD *)(a3 + 8) = v35 + 1;
        v37 = *v35;
LABEL_42:
        v38 = (const void **)(v36 + 2);
        *(_QWORD *)(a3 + 8) = v36 + 2;
        v39 = *v36;
LABEL_43:
        v40 = (_QWORD **)(v38 + 1);
        *(_QWORD *)(a3 + 8) = v38 + 1;
        v41 = *v38;
LABEL_44:
        v42 = v40 + 1;
        *(_QWORD *)(a3 + 8) = v40 + 1;
        v43 = *v40;
LABEL_45:
        *(_QWORD *)(a3 + 8) = v42 + 2;
        goto LABEL_46;
      }
      v63 = *(_QWORD *)(a3 + 16);
      v64 = v34 + 8;
      *(_DWORD *)a3 = v64;
      v37 = *(const char **)(v63 + v34);
      if ( (unsigned int)v64 > 0x2F )
      {
        v36 = *(int **)(a3 + 8);
        goto LABEL_42;
      }
      v65 = v34 + 16;
      *(_DWORD *)a3 = v65;
      v39 = *(_DWORD *)(v63 + v64);
      if ( (unsigned int)v65 > 0x2F )
      {
        v38 = *(const void ***)(a3 + 8);
        goto LABEL_43;
      }
      v66 = v34 + 24;
      *(_DWORD *)a3 = v66;
      v41 = *(const void **)(v63 + v65);
      if ( (unsigned int)v66 > 0x2F )
      {
        v40 = *(_QWORD ***)(a3 + 8);
        goto LABEL_44;
      }
      v67 = v34 + 32;
      *(_DWORD *)a3 = v67;
      v43 = *(__int64 **)(v63 + v66);
      if ( (unsigned int)v67 > 0x2F )
      {
        v42 = *(_DWORD **)(a3 + 8);
        goto LABEL_45;
      }
      v42 = (_DWORD *)(v67 + v63);
      *(_DWORD *)a3 = v34 + 40;
LABEL_46:
      v44 = sub_8530(a1, v37, v39, v41, *v42 != 0);
      if ( !v44 )
        goto LABEL_19;
      if ( v43 )
        *v43 = v44;
      return -1;
    case 10LL:
      v45 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 <= 0x2Fu )
      {
        v46 = (__int64 *)(*(_QWORD *)(a3 + 16) + v45);
        *(_DWORD *)a3 = v45 + 8;
      }
      else
      {
        v46 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v46 + 1;
      }
      return (int)sub_4980(a1, *v46);
    case 11LL:
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
      if ( !(unsigned int)sub_5960(a1, *v48, a7) )
        return -1;
      goto LABEL_19;
    case 12LL:
      v49 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 <= 0x2Fu )
      {
        v50 = (__int64 *)(*(_QWORD *)(a3 + 16) + v49);
        *(_DWORD *)a3 = v49 + 8;
      }
      else
      {
        v50 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v50 + 1;
      }
      sub_6990(a1, *v50);
      goto LABEL_19;
    case 13LL:
      v15 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v16 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v16 + 1;
      }
      else
      {
        v16 = (__int64 *)(*(_QWORD *)(a3 + 16) + v15);
        *(_DWORD *)a3 = v15 + 8;
      }
      sub_69D0(a1, *v16);
      goto LABEL_19;
    case 14LL:
      v17 = *(_DWORD *)a3;
      if ( v17 > 0x2F )
      {
        v18 = *(__int64 **)(a3 + 8);
        v19 = v18 + 1;
        *(_QWORD *)(a3 + 8) = v18 + 1;
        v20 = *v18;
LABEL_17:
        *(_QWORD *)(a3 + 8) = v19 + 1;
        goto LABEL_18;
      }
      v61 = *(_QWORD *)(a3 + 16);
      v62 = v17 + 8;
      *(_DWORD *)a3 = v62;
      v20 = *(_QWORD *)(v61 + v17);
      if ( (unsigned int)v62 > 0x2F )
      {
        v19 = *(__int64 **)(a3 + 8);
        goto LABEL_17;
      }
      v19 = (__int64 *)(v62 + v61);
      *(_DWORD *)a3 = v17 + 16;
LABEL_18:
      sub_67B0(a1, v20, *v19);
LABEL_19:
      result = 1;
      break;
    case 15LL:
      v21 = *(_DWORD *)a3;
      if ( v21 > 0x2F )
      {
        v60 = *(_QWORD *)(a3 + 8) + 8LL;
        *(_QWORD *)(a3 + 8) = v60;
      }
      else
      {
        *(_DWORD *)a3 = v21 + 8;
        if ( v21 + 8 <= 0x2F )
        {
          *(_DWORD *)a3 = v21 + 16;
          goto LABEL_23;
        }
        v60 = *(_QWORD *)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v60 + 8;
LABEL_23:
      nullsub_1();
      goto LABEL_19;
    case 17LL:
      v22 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v23 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v23 + 1;
      }
      else
      {
        v23 = (__int64 *)(*(_QWORD *)(a3 + 16) + v22);
        *(_DWORD *)a3 = v22 + 8;
      }
      sub_67A0(*v23);
      goto LABEL_19;
    case 19LL:
      v24 = *(_DWORD *)a3;
      if ( v24 > 0x2F )
      {
        v59 = *(__int64 **)(a3 + 8);
        v28 = v59 + 1;
        *(_QWORD *)(a3 + 8) = v59 + 1;
        v26 = *v59;
      }
      else
      {
        v25 = *(_QWORD *)(a3 + 16);
        a4 = v24 + 8;
        *(_DWORD *)a3 = a4;
        v26 = *(_QWORD *)(v25 + v24);
        if ( (unsigned int)a4 <= 0x2F )
        {
          v27 = v24 + 16;
          v28 = (__int64 *)(a4 + v25);
          *(_DWORD *)a3 = v27;
          goto LABEL_30;
        }
        v28 = *(__int64 **)(a3 + 8);
      }
      v27 = (__int64)(v28 + 1);
      *(_QWORD *)(a3 + 8) = v28 + 1;
LABEL_30:
      if ( !(unsigned __int8)sub_65A0(v26, *v28, a7, v27, a4, a5, a6) )
        return -1;
      goto LABEL_19;
    case 21LL:
      v29 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 <= 0x2Fu )
      {
        v30 = (__int64 *)(*(_QWORD *)(a3 + 16) + v29);
        *(_DWORD *)a3 = v29 + 8;
      }
      else
      {
        v30 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v30 + 1;
      }
      v31 = *v30;
      if ( netnode_altval() )
      {
        btoa64();
        sub_5E40(v31, 0xFFFF, (__int64)&unk_B359, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL), v70);
      }
      return 0;
    case 94LL:
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
      sub_A190(*v33, a2, (_DWORD)v33, a4, a5, a6);
      return 0;
    case 95LL:
      netnode_check();
      return 0;
    case 96LL:
      if ( !(_BYTE)byte_F4E8 && __cxa_guard_acquire(&byte_F4E8) )
      {
        qword_F440 = *(_QWORD *)(a1 + 120);
        qword_F458 = qword_F440;
        qword_F470 = qword_F440;
        qword_F488 = qword_F440;
        __cxa_guard_release(&byte_F4E8);
      }
      return (int)cvt64_node_supval_for_event();
    default:
      return 0;
  }
  return result;
}

