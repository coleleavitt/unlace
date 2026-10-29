__int64 __fastcall sub_C8E0(_QWORD *a1, __int64 a2, __int64 a3, int a4, int a5, int a6, double a7)
{
  unsigned int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 *v13; // r12
  __int64 *v14; // rax
  unsigned int v15; // edx
  __int64 v16; // rax
  __int64 v17; // rsi
  const char **v18; // rdi
  __int64 v19; // rcx
  _DWORD *v20; // rsi
  const char **v21; // rax
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // rdi
  unsigned int v28; // r10d
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 (__fastcall *v31)(const char *, __int64); // r8
  __int64 *v32; // rdx
  unsigned int v33; // eax
  __int64 *v34; // rdx
  unsigned int v35; // eax
  __int64 *v36; // rdx
  unsigned int v37; // eax
  __int64 *v38; // rdx
  unsigned int v39; // eax
  _QWORD **v40; // rdx
  size_t v41; // rax
  size_t v42; // r13
  size_t v43; // rbx
  unsigned int v44; // eax
  __int64 v45; // rdx
  unsigned __int64 v46; // rax
  __int64 v47; // rdx
  unsigned int v48; // eax
  _QWORD *v49; // rdx
  unsigned int v50; // eax
  __int64 v51; // rcx
  __int64 v52; // rsi
  __int64 v53; // rdx
  _QWORD *v54; // rcx
  unsigned int v55; // eax
  _BYTE **v56; // rdx
  unsigned int v57; // edx
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 *v60; // rdi
  __int64 *v61; // rax
  unsigned int v62; // eax
  int *v63; // rdx
  unsigned int v64; // edx
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rsi
  __int64 *v68; // rax
  unsigned int v69; // eax
  __int64 v70; // rdx
  __int64 v71; // rcx
  _QWORD *v72; // r12
  __int64 v73; // rdi
  __int64 v74; // rsi
  __int64 v75; // rcx
  __int64 v76; // rsi
  _QWORD *v77; // rdx
  _QWORD **v78; // rdx
  int v79; // r12d
  __int64 **v80; // rdx
  __int64 *v81; // rdx
  __int64 *v82; // rax
  unsigned int *v83; // rdx
  unsigned int *v84; // rax
  __int64 (__fastcall **v85)(const char *, __int64); // rax
  __int64 *v86; // rdx
  __int64 *v87; // rdx
  _QWORD *v88; // rax
  _QWORD *v89; // rax
  _QWORD **v90; // rax
  _QWORD **v91; // rdx
  const char ***v92; // rax
  _DWORD **v93; // rdx
  _QWORD **v94; // rax
  __int64 *v95; // rdx
  _QWORD *v96; // rax
  __int64 *v97; // rax
  char *s1; // [rsp+0h] [rbp-68h]
  char s[24]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v100; // [rsp+38h] [rbp-30h]

  v100 = __readfsqword(0x28u);
  if ( a2 <= 96 )
  {
    if ( a2 >= 0 )
    {
      switch ( a2 )
      {
        case 0LL:
        case 95LL:
          netnode_check();
          return 0;
        case 1LL:
          clr_module_data();
          return 0;
        case 2LL:
          v62 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v63 = *(int **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v63 + 2;
          }
          else
          {
            v63 = (int *)(*(_QWORD *)(a3 + 16) + v62);
            *(_DWORD *)a3 = v62 + 8;
          }
          sub_C6A0((__int64)a1, *v63);
          return 0;
        case 4LL:
          if ( !getinf_buf() )
            s[0] = 0;
          v41 = strlen(s);
          v42 = v41 + 1;
          v43 = v41;
          s1 = (char *)qvector_reserve();
          memmove(s1, s, v43);
          s1[v43] = 0;
          if ( v42 )
          {
            v79 = strcmp(s1, "z180");
            if ( s1 )
              qfree();
            if ( !v79 )
              sub_C4E0((__int64)a1, 2);
          }
          else if ( s1 )
          {
            qfree();
          }
          return 0;
        case 5LL:
        case 86LL:
          sub_C710((__int64)a1);
          return 0;
        case 8LL:
          v50 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v87 = *(__int64 **)(a3 + 8);
            v88 = v87 + 1;
            *(_QWORD *)(a3 + 8) = v87 + 1;
            v52 = *v87;
          }
          else
          {
            v51 = *(_QWORD *)(a3 + 16);
            *(_DWORD *)a3 = v50 + 8;
            v52 = *(_QWORD *)(v51 + v50);
            if ( v50 + 8 <= 0x2F )
            {
              *(_DWORD *)a3 = v50 + 16;
              if ( v50 + 16 <= 0x2F )
              {
                v53 = v50 + 24;
                *(_DWORD *)a3 = v53;
                if ( (unsigned int)v53 <= 0x2F )
                {
                  *(_DWORD *)a3 = v50 + 32;
                  v54 = *(_QWORD **)(v51 + v53);
                  if ( v50 + 32 <= 0x2F )
                  {
                    *(_DWORD *)a3 = v50 + 40;
                    goto LABEL_63;
                  }
                  v91 = *(_QWORD ***)(a3 + 8);
LABEL_115:
                  *(_QWORD *)(a3 + 8) = v91 + 1;
LABEL_63:
                  if ( v52 )
                  {
                    if ( v54 )
                      *v54 = 1;
                    return -1;
                  }
                  sub_C4E0((__int64)a1, 0);
                  return 1;
                }
                v90 = *(_QWORD ***)(a3 + 8);
LABEL_114:
                v91 = v90 + 1;
                *(_QWORD *)(a3 + 8) = v90 + 1;
                v54 = *v90;
                goto LABEL_115;
              }
              v89 = *(_QWORD **)(a3 + 8);
LABEL_113:
              v90 = (_QWORD **)(v89 + 1);
              goto LABEL_114;
            }
            v88 = *(_QWORD **)(a3 + 8);
          }
          v89 = v88 + 1;
          goto LABEL_113;
        case 10LL:
          v35 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v36 = *(__int64 **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v36 + 1;
          }
          else
          {
            v36 = (__int64 *)(*(_QWORD *)(a3 + 16) + v35);
            *(_DWORD *)a3 = v35 + 8;
          }
          return (int)sub_80F0((__int64)a1, *v36, a7);
        case 11LL:
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
          if ( !(unsigned int)sub_9CC0((__int64)a1, *v34) )
            return -1;
          return 1;
        case 12LL:
          v37 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v38 = *(__int64 **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v38 + 1;
          }
          else
          {
            v38 = (__int64 *)(*(_QWORD *)(a3 + 16) + v37);
            *(_DWORD *)a3 = v37 + 8;
          }
          sub_B0D0(a1, *v38);
          return 1;
        case 13LL:
          v39 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v40 = *(_QWORD ***)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v40 + 1;
          }
          else
          {
            v40 = (_QWORD **)(*(_QWORD *)(a3 + 16) + v39);
            *(_DWORD *)a3 = v39 + 8;
          }
          sub_B430((__int64)a1, *v40);
          return 1;
        case 14LL:
          v64 = *(_DWORD *)a3;
          if ( v64 > 0x2F )
          {
            v86 = *(__int64 **)(a3 + 8);
            v68 = v86 + 1;
            *(_QWORD *)(a3 + 8) = v86 + 1;
            v67 = *v86;
          }
          else
          {
            v65 = *(_QWORD *)(a3 + 16);
            v66 = v64 + 8;
            *(_DWORD *)a3 = v66;
            v67 = *(_QWORD *)(v65 + v64);
            if ( (unsigned int)v66 <= 0x2F )
            {
              v68 = (__int64 *)(v66 + v65);
              *(_DWORD *)a3 = v64 + 16;
              goto LABEL_82;
            }
            v68 = *(__int64 **)(a3 + 8);
          }
          *(_QWORD *)(a3 + 8) = v68 + 1;
LABEL_82:
          sub_B120((__int64)a1, v67, *v68);
          return 1;
        case 17LL:
          v55 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v56 = *(_BYTE ***)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v56 + 1;
          }
          else
          {
            v56 = (_BYTE **)(*(_QWORD *)(a3 + 16) + v55);
            *(_DWORD *)a3 = v55 + 8;
          }
          sub_B0C0(*v56);
          return 1;
        case 19LL:
          v57 = *(_DWORD *)a3;
          if ( v57 > 0x2F )
          {
            v80 = *(__int64 ***)(a3 + 8);
            v61 = (__int64 *)(v80 + 1);
            *(_QWORD *)(a3 + 8) = v80 + 1;
            v60 = *v80;
          }
          else
          {
            v58 = *(_QWORD *)(a3 + 16);
            v59 = v57 + 8;
            *(_DWORD *)a3 = v59;
            v60 = *(__int64 **)(v58 + v57);
            if ( (unsigned int)v59 <= 0x2F )
            {
              v61 = (__int64 *)(v59 + v58);
              *(_DWORD *)a3 = v57 + 16;
              goto LABEL_72;
            }
            v61 = *(__int64 **)(a3 + 8);
          }
          *(_QWORD *)(a3 + 8) = v61 + 1;
LABEL_72:
          if ( !(unsigned __int8)sub_B030(v60, *v61) )
            return -1;
          return 1;
        case 47LL:
          v44 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v45 = *(_QWORD *)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v45 + 8;
          }
          else
          {
            v45 = *(_QWORD *)(a3 + 16) + v44;
            *(_DWORD *)a3 = v44 + 8;
          }
          v46 = *(unsigned __int8 *)(*(_QWORD *)v45 + 1LL);
          if ( (unsigned __int8)v46 > 8u )
            return 1;
          v47 = 267;
          if ( !_bittest64(&v47, v46) )
            return 1;
          return -1;
        case 94LL:
          v48 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v49 = *(_QWORD **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v49 + 1;
          }
          else
          {
            v49 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v48);
            *(_DWORD *)a3 = v48 + 8;
          }
          sub_DEB0(*v49, a2, (_DWORD)v49, a4, a5, a6);
          return 0;
        case 96LL:
          if ( !(_BYTE)byte_163A8 && __cxa_guard_acquire(&byte_163A8) )
          {
            qword_16370 = a1[15];
            __cxa_guard_release(&byte_163A8);
          }
          return (int)cvt64_node_supval_for_event();
        default:
          return 0;
      }
    }
    return 0;
  }
  if ( a2 == 1007 )
  {
    v22 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 > 0x2Fu )
    {
      v81 = *(__int64 **)(a3 + 8);
      v82 = v81 + 1;
      *(_QWORD *)(a3 + 8) = v81 + 1;
      v25 = *v81;
    }
    else
    {
      v23 = *(_QWORD *)(a3 + 16);
      v24 = v22 + 8;
      *(_DWORD *)a3 = v24;
      v25 = *(_QWORD *)(v23 + v22);
      if ( (unsigned int)v24 <= 0x2F )
      {
        v26 = v22 + 16;
        *(_DWORD *)a3 = v26;
        v27 = *(_QWORD *)(v23 + v24);
        if ( (unsigned int)v26 <= 0x2F )
        {
          *(_DWORD *)a3 = v22 + 24;
          v28 = *(_DWORD *)(v23 + v26);
          if ( v22 + 24 <= 0x2F )
          {
            v29 = v22 + 32;
            *(_DWORD *)a3 = v29;
            if ( (unsigned int)v29 <= 0x2F )
            {
              v30 = v22 + 40;
              *(_DWORD *)a3 = v30;
              v31 = *(__int64 (__fastcall **)(const char *, __int64))(v23 + v29);
              if ( (unsigned int)v30 <= 0x2F )
              {
                v32 = (__int64 *)(v30 + v23);
                *(_DWORD *)a3 = v22 + 48;
                return (unsigned __int8)sub_A2C0((__int64)a1, v25, v27, v28, v31, *v32);
              }
              v32 = *(__int64 **)(a3 + 8);
LABEL_108:
              *(_QWORD *)(a3 + 8) = v32 + 1;
              return (unsigned __int8)sub_A2C0((__int64)a1, v25, v27, v28, v31, *v32);
            }
            v85 = *(__int64 (__fastcall ***)(const char *, __int64))(a3 + 8);
LABEL_107:
            v32 = (__int64 *)(v85 + 1);
            *(_QWORD *)(a3 + 8) = v85 + 1;
            v31 = *v85;
            goto LABEL_108;
          }
          v84 = *(unsigned int **)(a3 + 8);
LABEL_106:
          v85 = (__int64 (__fastcall **)(const char *, __int64))(v84 + 2);
          goto LABEL_107;
        }
        v83 = *(unsigned int **)(a3 + 8);
LABEL_105:
        v84 = v83 + 2;
        *(_QWORD *)(a3 + 8) = v83 + 2;
        v28 = *v83;
        goto LABEL_106;
      }
      v82 = *(__int64 **)(a3 + 8);
    }
    v83 = (unsigned int *)(v82 + 1);
    *(_QWORD *)(a3 + 8) = v82 + 1;
    v27 = *v82;
    goto LABEL_105;
  }
  if ( a2 <= 1007 )
  {
    if ( a2 != 1000 )
    {
      if ( a2 != 1001 )
        return 0;
      v10 = *(_DWORD *)a3;
      if ( v10 > 0x2F )
      {
        v78 = *(_QWORD ***)(a3 + 8);
        v14 = (__int64 *)(v78 + 1);
        *(_QWORD *)(a3 + 8) = v78 + 1;
        v13 = *v78;
      }
      else
      {
        v11 = *(_QWORD *)(a3 + 16);
        v12 = v10 + 8;
        *(_DWORD *)a3 = v12;
        v13 = *(__int64 **)(v11 + v10);
        if ( (unsigned int)v12 <= 0x2F )
        {
          v14 = (__int64 *)(v12 + v11);
          *(_DWORD *)a3 = v10 + 16;
LABEL_13:
          *v13 = sub_9F40((__int64)a1, *v14);
          return 1;
        }
        v14 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v14 + 1;
      goto LABEL_13;
    }
    v69 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 > 0x2Fu )
    {
      v94 = *(_QWORD ***)(a3 + 8);
      v95 = (__int64 *)(v94 + 1);
      *(_QWORD *)(a3 + 8) = v94 + 1;
      v72 = *v94;
    }
    else
    {
      v70 = *(_QWORD *)(a3 + 16);
      v71 = v69 + 8;
      *(_DWORD *)a3 = v71;
      v72 = *(_QWORD **)(v70 + v69);
      if ( (unsigned int)v71 <= 0x2F )
      {
        *(_DWORD *)a3 = v69 + 16;
        v73 = *(_QWORD *)(v70 + v71);
        if ( v69 + 16 <= 0x2F )
        {
          v74 = v69 + 24;
          *(_DWORD *)a3 = v74;
          if ( (unsigned int)v74 <= 0x2F )
          {
            v75 = v69 + 32;
            *(_DWORD *)a3 = v75;
            v76 = *(_QWORD *)(v70 + v74);
            if ( (unsigned int)v75 <= 0x2F )
            {
              v77 = (_QWORD *)(v75 + v70);
              *(_DWORD *)a3 = v69 + 40;
LABEL_89:
              *v72 = sub_A540(a1, v73, v76, *v77);
              return 1;
            }
            v77 = *(_QWORD **)(a3 + 8);
LABEL_126:
            *(_QWORD *)(a3 + 8) = v77 + 1;
            goto LABEL_89;
          }
          v97 = *(__int64 **)(a3 + 8);
LABEL_125:
          v77 = v97 + 1;
          *(_QWORD *)(a3 + 8) = v97 + 1;
          v76 = *v97;
          goto LABEL_126;
        }
        v96 = *(_QWORD **)(a3 + 8);
LABEL_124:
        v97 = v96 + 1;
        goto LABEL_125;
      }
      v95 = *(__int64 **)(a3 + 8);
    }
    v96 = v95 + 1;
    *(_QWORD *)(a3 + 8) = v95 + 1;
    v73 = *v95;
    goto LABEL_124;
  }
  if ( a2 != 1008 )
    return 0;
  v15 = *(_DWORD *)a3;
  if ( v15 > 0x2F )
  {
    v92 = *(const char ****)(a3 + 8);
    v93 = (_DWORD **)(v92 + 1);
    *(_QWORD *)(a3 + 8) = v92 + 1;
    v18 = *v92;
LABEL_119:
    v21 = (const char **)(v93 + 1);
    *(_QWORD *)(a3 + 8) = v93 + 1;
    v20 = *v93;
    goto LABEL_120;
  }
  v16 = *(_QWORD *)(a3 + 16);
  v17 = v15 + 8;
  *(_DWORD *)a3 = v17;
  v18 = *(const char ***)(v16 + v15);
  if ( (unsigned int)v17 > 0x2F )
  {
    v93 = *(_DWORD ***)(a3 + 8);
    goto LABEL_119;
  }
  v19 = v15 + 16;
  *(_DWORD *)a3 = v19;
  v20 = *(_DWORD **)(v16 + v17);
  if ( (unsigned int)v19 <= 0x2F )
  {
    v21 = (const char **)(v19 + v16);
    *(_DWORD *)a3 = v15 + 24;
    goto LABEL_19;
  }
  v21 = *(const char ***)(a3 + 8);
LABEL_120:
  *(_QWORD *)(a3 + 8) = v21 + 1;
LABEL_19:
  if ( (unsigned __int8)sub_A060((__int64)a1, v18, v20, *v21) )
    return 1;
  return -1;
}

