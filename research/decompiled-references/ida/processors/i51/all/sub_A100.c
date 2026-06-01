__int64 __fastcall sub_A100(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, double a7)
{
  unsigned int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdi
  int *v14; // rax
  unsigned int v15; // eax
  _QWORD *v16; // rdx
  unsigned int v17; // eax
  __int64 *v18; // rdx
  __int64 v19; // rbp
  __int64 v20; // rax
  unsigned int v21; // eax
  __int64 *v22; // rdx
  unsigned int v23; // eax
  __int64 *v24; // rdx
  unsigned int v25; // edx
  __int64 v26; // rax
  __int64 v27; // rcx
  _QWORD *v28; // rsi
  __int64 *v29; // rax
  unsigned int v30; // eax
  _QWORD **v31; // rdx
  unsigned int v32; // eax
  __int64 *v33; // rdx
  unsigned int v34; // edx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rsi
  _DWORD *v38; // rax
  __int64 *first_seg; // rax
  __int64 v40; // r12
  __int64 v41; // rbp
  int v42; // r14d
  void *v43; // r15
  size_t v44; // rax
  size_t v45; // r8
  size_t v46; // rdx
  void *v47; // rdi
  unsigned int v48; // edx
  __int64 v49; // rax
  __int64 v50; // rcx
  _QWORD *v51; // rdi
  __int64 *v52; // rax
  unsigned int v53; // eax
  __int64 v54; // rcx
  __int64 v55; // rsi
  __int64 v56; // rdx
  _QWORD *v57; // rcx
  unsigned int v58; // eax
  int *v59; // rdx
  int v60; // eax
  __int64 v61; // rdi
  __int64 v62; // r14
  _QWORD *v63; // rbp
  __int64 v64; // rdi
  __int64 v65; // r12
  __int64 i; // r15
  _QWORD *v67; // r13
  unsigned int v68; // eax
  __int64 *v69; // rdx
  __int64 *v70; // rdx
  _QWORD *v71; // rax
  _QWORD *v72; // rax
  _QWORD **v73; // rax
  _QWORD **v74; // rdx
  _DWORD *v75; // rsi
  _QWORD **v76; // rdx
  __int64 *v77; // rdx
  __int64 *v78; // rdx
  _QWORD **v79; // rdx
  __int64 v80; // rax
  char byte; // r14
  char *v82; // r13
  char v83; // al
  char v84; // r14
  const char *v85; // rdx
  __int64 v86; // rax
  size_t v87; // [rsp+0h] [rbp-88h]
  __int64 v88; // [rsp+0h] [rbp-88h]
  size_t v89; // [rsp+0h] [rbp-88h]
  __int64 v90; // [rsp+8h] [rbp-80h]
  size_t v91; // [rsp+8h] [rbp-80h]
  int v92; // [rsp+1Ch] [rbp-6Ch] BYREF
  __int64 (__fastcall **v93)(); // [rsp+20h] [rbp-68h]
  __int64 v94; // [rsp+28h] [rbp-60h]
  char s[24]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v96; // [rsp+48h] [rbp-40h]

  v96 = __readfsqword(0x28u);
  switch ( a2 )
  {
    case 0LL:
      hook_event_listener();
      netnode_check();
      setinf_flag();
      return 0;
    case 1LL:
      v61 = *(_QWORD *)(a1 + 160);
      if ( v61 )
      {
        v90 = *(_QWORD *)(a1 + 168);
        if ( v90 )
        {
          v88 = 0;
          v62 = 0;
          do
          {
            v63 = (_QWORD *)(v61 + v62);
            v64 = *(_QWORD *)(v61 + v62 + 56);
            if ( v64 )
            {
              v65 = v63[8];
              if ( v65 )
              {
                for ( i = 0; i != v65; ++i )
                {
                  v67 = (_QWORD *)(v64 + 48 * i);
                  if ( v67[3] )
                  {
                    v67[4] = 0;
                    qfree();
                  }
                  if ( *v67 )
                  {
                    v67[1] = 0;
                    qfree();
                  }
                  v64 = v63[7];
                }
              }
              v63[8] = 0;
              qfree();
            }
            if ( v63[4] )
            {
              v63[5] = 0;
              qfree();
            }
            if ( v63[1] )
            {
              v63[2] = 0;
              qfree();
            }
            ++v88;
            v61 = *(_QWORD *)(a1 + 160);
            v62 += 88;
          }
          while ( v90 != v88 );
        }
        *(_QWORD *)(a1 + 168) = 0;
        qfree();
        *(_QWORD *)(a1 + 160) = 0;
        *(_QWORD *)(a1 + 176) = 0;
      }
      unhook_event_listener();
      clr_module_data();
      return 0;
    case 2LL:
      v58 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v59 = *(int **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v59 + 2;
      }
      else
      {
        v59 = (int *)(*(_QWORD *)(a3 + 16) + v58);
        *(_DWORD *)a3 = v58 + 8;
      }
      v60 = *v59;
      if ( !*(_BYTE *)(a1 + 281) && *(_DWORD *)(a1 + 256) != v60 )
      {
        sub_6740((__int64)"Sorry, it is not possible to change the processor mode on the fly. Please reload the input fil"
                          "e if you want to change the processor.");
        return -1;
      }
      *(_DWORD *)(a1 + 256) = v60;
      return 0;
    case 3LL:
      if ( netnode_qsupstr() > 0 )
        sub_8940((__int64 *)(a1 + 128), 0);
      return 0;
    case 4LL:
      first_seg = (__int64 *)get_first_seg();
      if ( first_seg )
      {
        v40 = *first_seg;
        if ( v40 == get_segm_base() )
        {
          setinf();
          setinf();
        }
      }
      v41 = get_first_seg();
      set_segm_class();
      if ( *(int *)(a1 + 256) <= 0 )
        goto LABEL_46;
      sub_9CC0(a1, 65152, 384);
      if ( !v41 || v41 != getseg() )
        goto LABEL_132;
      byte = get_byte();
      getinf_buf();
      v82 = &s[strlen(s)];
      v83 = *(v82 - 1);
      if ( (byte & 1) != 0 )
      {
        v84 = 115;
        v85 = "source";
        if ( v83 == 115 )
          goto LABEL_132;
      }
      else
      {
        if ( v83 == 98 )
          goto LABEL_132;
        v84 = 98;
        v85 = "binary";
      }
      if ( (int)sub_9AE0(
                  1u,
                  (__int64)"HIDECANCEL\n"
                           "The input file seems to be for the %s mode of the processor.\n"
                           "Do you want to change the current processor type?",
                  v85) > 0 )
      {
        *(v82 - 1) = v84;
        *(_BYTE *)(a1 + 281) = 1;
        set_processor_type();
      }
LABEL_132:
      *(_BYTE *)(a1 + 281) = 0;
LABEL_46:
      if ( getseg() )
        set_default_dataseg();
      v93 = off_FE28;
      v94 = a1 + 128;
      if ( (unsigned __int8)choose_ioport_device2() )
      {
        v92 = 7;
        if ( !(unsigned __int8)sub_9560(7, &v92) )
          goto LABEL_57;
        v42 = v92;
        if ( *(_QWORD *)(a1 + 144) )
        {
          v43 = *(void **)(a1 + 136);
          if ( !v43 )
            goto LABEL_57;
          v44 = strlen(*(const char **)(a1 + 136));
          v45 = v44;
          if ( v44 )
          {
            v46 = v44 + 1;
            v47 = v43;
            if ( *(_QWORD *)(a1 + 152) < v44 + 1 )
            {
              v89 = v44 + 1;
              v91 = v44;
              v86 = qvector_reserve();
              v45 = v91;
              v46 = v89;
              *(_QWORD *)(a1 + 136) = v86;
              v47 = (void *)v86;
            }
            *(_QWORD *)(a1 + 144) = v46;
            v87 = v45;
            memmove(v47, v43, v45);
            *(_BYTE *)(*(_QWORD *)(a1 + 136) + v87) = 0;
            goto LABEL_56;
          }
LABEL_137:
          *(_QWORD *)(a1 + 144) = 0;
LABEL_56:
          netnode_supset();
          sub_8940((__int64 *)(a1 + 128), v42);
          goto LABEL_57;
        }
        if ( byte_CF28 )
          goto LABEL_137;
      }
      else
      {
        v75 = *(_DWORD **)(a1 + 136);
        if ( *(_QWORD *)(a1 + 152) <= 4u )
        {
          v80 = qvector_reserve();
          *(_QWORD *)(a1 + 136) = v80;
          v75 = (_DWORD *)v80;
        }
        *(_QWORD *)(a1 + 144) = 5;
        *v75 = 1162760014;
        *(_BYTE *)(*(_QWORD *)(a1 + 136) + 4LL) = 0;
      }
LABEL_57:
      if ( !get_segm_by_name() )
        sub_9CC0(a1, 256, 0);
      if ( !get_segm_by_name() )
        sub_9CC0(a1, 128, 128);
      sub_9E70(a1);
      return 0;
    case 5LL:
      *(_BYTE *)(a1 + 281) = 0;
      goto LABEL_3;
    case 8LL:
      v53 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v70 = *(__int64 **)(a3 + 8);
        v71 = v70 + 1;
        *(_QWORD *)(a3 + 8) = v70 + 1;
        v55 = *v70;
LABEL_108:
        v72 = v71 + 1;
LABEL_109:
        v73 = (_QWORD **)(v72 + 1);
LABEL_110:
        v74 = v73 + 1;
        *(_QWORD *)(a3 + 8) = v73 + 1;
        v57 = *v73;
        goto LABEL_111;
      }
      v54 = *(_QWORD *)(a3 + 16);
      *(_DWORD *)a3 = v53 + 8;
      v55 = *(_QWORD *)(v54 + v53);
      if ( v53 + 8 > 0x2F )
      {
        v71 = *(_QWORD **)(a3 + 8);
        goto LABEL_108;
      }
      *(_DWORD *)a3 = v53 + 16;
      if ( v53 + 16 > 0x2F )
      {
        v72 = *(_QWORD **)(a3 + 8);
        goto LABEL_109;
      }
      v56 = v53 + 24;
      *(_DWORD *)a3 = v56;
      if ( (unsigned int)v56 > 0x2F )
      {
        v73 = *(_QWORD ***)(a3 + 8);
        goto LABEL_110;
      }
      *(_DWORD *)a3 = v53 + 32;
      v57 = *(_QWORD **)(v54 + v56);
      if ( v53 + 32 <= 0x2F )
      {
        *(_DWORD *)a3 = v53 + 40;
        goto LABEL_75;
      }
      v74 = *(_QWORD ***)(a3 + 8);
LABEL_111:
      *(_QWORD *)(a3 + 8) = v74 + 1;
LABEL_75:
      if ( v55 )
      {
        if ( v57 )
          *v57 = 1;
        return -1;
      }
      else
      {
        sub_9930(a1);
        return 1;
      }
    case 10LL:
      v68 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v69 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v69 + 1;
      }
      else
      {
        v69 = (__int64 *)(*(_QWORD *)(a3 + 16) + v68);
        *(_DWORD *)a3 = v68 + 8;
      }
      return (int)sub_6590(a1, *v69);
    case 11LL:
      v21 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v22 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v22 + 1;
      }
      else
      {
        v22 = (__int64 *)(*(_QWORD *)(a3 + 16) + v21);
        *(_DWORD *)a3 = v21 + 8;
      }
      if ( !(unsigned int)sub_6B60(a1, *v22, a7) )
        return -1;
      return 1;
    case 12LL:
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
      sub_7840((_QWORD *)a1, *v33);
      return 1;
    case 13LL:
      v30 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v31 = *(_QWORD ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v31 + 1;
      }
      else
      {
        v31 = (_QWORD **)(*(_QWORD *)(a3 + 16) + v30);
        *(_DWORD *)a3 = v30 + 8;
      }
      sub_7B20(a1, *v31);
      return 1;
    case 14LL:
      v25 = *(_DWORD *)a3;
      if ( v25 > 0x2F )
      {
        v76 = *(_QWORD ***)(a3 + 8);
        v29 = (__int64 *)(v76 + 1);
        *(_QWORD *)(a3 + 8) = v76 + 1;
        v28 = *v76;
      }
      else
      {
        v26 = *(_QWORD *)(a3 + 16);
        v27 = v25 + 8;
        *(_DWORD *)a3 = v27;
        v28 = *(_QWORD **)(v26 + v25);
        if ( (unsigned int)v27 <= 0x2F )
        {
          v29 = (__int64 *)(v27 + v26);
          *(_DWORD *)a3 = v25 + 16;
          goto LABEL_31;
        }
        v29 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v29 + 1;
LABEL_31:
      sub_7890(a1, v28, *v29);
      return 1;
    case 17LL:
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
      sub_7830(*v24);
      return 1;
    case 19LL:
      v48 = *(_DWORD *)a3;
      if ( v48 > 0x2F )
      {
        v79 = *(_QWORD ***)(a3 + 8);
        v52 = (__int64 *)(v79 + 1);
        *(_QWORD *)(a3 + 8) = v79 + 1;
        v51 = *v79;
      }
      else
      {
        v49 = *(_QWORD *)(a3 + 16);
        v50 = v48 + 8;
        *(_DWORD *)a3 = v50;
        v51 = *(_QWORD **)(v49 + v48);
        if ( (unsigned int)v50 <= 0x2F )
        {
          v52 = (__int64 *)(v50 + v49);
          *(_DWORD *)a3 = v48 + 16;
          goto LABEL_67;
        }
        v52 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v52 + 1;
LABEL_67:
      if ( !(unsigned __int8)sub_7640(v51, *v52) )
        return -1;
      return 1;
    case 20LL:
      v34 = *(_DWORD *)a3;
      if ( v34 > 0x2F )
      {
        v78 = *(__int64 **)(a3 + 8);
        v38 = v78 + 1;
        *(_QWORD *)(a3 + 8) = v78 + 1;
        v37 = *v78;
      }
      else
      {
        v35 = *(_QWORD *)(a3 + 16);
        v36 = v34 + 8;
        *(_DWORD *)a3 = v36;
        v37 = *(_QWORD *)(v35 + v34);
        if ( (unsigned int)v36 <= 0x2F )
        {
          v38 = (_DWORD *)(v36 + v35);
          *(_DWORD *)a3 = v34 + 16;
          goto LABEL_41;
        }
        v38 = *(_DWORD **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v38 + 2;
LABEL_41:
      sub_8580(a1, v37, *v38 != 0);
      return 1;
    case 25LL:
      v17 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v18 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v18 + 1;
      }
      else
      {
        v18 = (__int64 *)(*(_QWORD *)(a3 + 16) + v17);
        *(_DWORD *)a3 = v17 + 8;
      }
      v19 = *v18;
      v20 = getseg();
      if ( v20 )
        *(_QWORD *)(v19 + 8LL * (58 - *(_DWORD *)(*(_QWORD *)(a1 + 16) + 68LL)) + 56) = *(_QWORD *)(v20 + 48);
      return 0;
    case 32LL:
      v10 = *(_DWORD *)a3;
      if ( v10 > 0x2F )
      {
        v77 = *(__int64 **)(a3 + 8);
        v14 = (int *)(v77 + 1);
        *(_QWORD *)(a3 + 8) = v77 + 1;
        v13 = *v77;
      }
      else
      {
        v11 = *(_QWORD *)(a3 + 16);
        v12 = v10 + 8;
        *(_DWORD *)a3 = v12;
        v13 = *(_QWORD *)(v11 + v10);
        if ( (unsigned int)v12 <= 0x2F )
        {
          v14 = (int *)(v12 + v11);
          *(_DWORD *)a3 = v10 + 16;
          goto LABEL_11;
        }
        v14 = *(int **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v14 + 2;
LABEL_11:
      if ( sub_6F00(v13, *v14) )
        return 1;
      return -1;
    case 86LL:
LABEL_3:
      sub_9F50(a1);
      return 0;
    case 94LL:
      v15 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v16 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v16 + 1;
      }
      else
      {
        v16 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v15);
        *(_DWORD *)a3 = v15 + 8;
      }
      sub_B980(*v16, a2, (_DWORD)v16, a4, a5, a6);
      return 0;
    case 95LL:
      netnode_check();
      return 0;
    case 96LL:
      if ( !(_BYTE)byte_11408 && __cxa_guard_acquire(&byte_11408) )
      {
        qword_113D0 = *(_QWORD *)(a1 + 120);
        __cxa_guard_release(&byte_11408);
      }
      return (int)cvt64_node_supval_for_event();
    default:
      return 0;
  }
}

