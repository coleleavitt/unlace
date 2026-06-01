__int64 __fastcall sub_CF20(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  unsigned int v8; // eax
  _QWORD *v9; // rdx
  unsigned int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // r12
  __int64 v15; // rcx
  __int64 v16; // r13
  _DWORD *v17; // rax
  __int64 v18; // r12
  char v19; // al
  int v20; // edx
  char v21; // r13
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rsi
  _DWORD *v25; // r8
  __int64 v26; // rcx
  char **v27; // r15
  __int64 v28; // rsi
  size_t v29; // r12
  __int64 v30; // rcx
  int v31; // r14d
  _DWORD *v32; // rdx
  int v33; // eax
  __int64 v34; // rdi
  char v35; // al
  _DWORD *v36; // r8
  unsigned int v37; // edx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r12
  _QWORD *v41; // rax
  __int64 v42; // rbx
  char v43; // dl
  unsigned int v44; // eax
  unsigned int v45; // eax
  __int64 v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // rcx
  char v49; // r8
  __int64 v50; // rdi
  __int64 v51; // rcx
  __int64 v52; // rsi
  unsigned int *v53; // rdi
  __int64 *v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rdi
  unsigned int v57; // edx
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // r12
  _DWORD *v61; // rax
  unsigned int v62; // eax
  __int64 *v63; // rdx
  __int64 v64; // rbx
  char v65; // dl
  unsigned int v66; // eax
  __int64 *v67; // rdx
  _QWORD *v68; // rdx
  _BYTE *v69; // rax
  _QWORD *v70; // rdx
  unsigned int **v71; // rax
  _QWORD *v72; // rdx
  __int64 *v73; // rax
  _QWORD *v74; // rdx
  _QWORD *v75; // rdx
  char ***v76; // rax
  _QWORD *v77; // rdx
  int *v78; // rax
  __int64 v79; // rax
  int v80; // ecx
  int v81; // r8d
  int v82; // r9d
  size_t v83; // rax
  _DWORD *v84; // r8
  size_t v85; // rbx
  size_t v86; // rcx
  size_t i; // rax
  __int64 v88; // rdi
  void *v89; // r12
  const char *v90; // rdx
  char v91; // al
  char v92; // bl
  _DWORD *v93; // [rsp+8h] [rbp-60h]
  _DWORD *v94; // [rsp+8h] [rbp-60h]
  void *v95; // [rsp+10h] [rbp-58h] BYREF
  __int128 v96; // [rsp+18h] [rbp-50h]
  unsigned __int64 v97; // [rsp+28h] [rbp-40h]

  v97 = __readfsqword(0x28u);
  if ( a2 == 2004 )
  {
    v57 = *(_DWORD *)a3;
    if ( v57 > 0x2F )
    {
      v72 = *(_QWORD **)(a3 + 8);
      v61 = v72 + 1;
      *(_QWORD *)(a3 + 8) = v72 + 1;
      v60 = *v72;
    }
    else
    {
      v58 = *(_QWORD *)(a3 + 16);
      v59 = v57 + 8;
      *(_DWORD *)a3 = v59;
      v60 = *(_QWORD *)(v58 + v57);
      if ( (unsigned int)v59 <= 0x2F )
      {
        v61 = (_DWORD *)(v59 + v58);
        *(_DWORD *)a3 = v57 + 16;
LABEL_69:
        if ( *v61 != 144 )
          return 0;
        if ( (unsigned __int8)getinf_flag(3, 4)
          && (!*(_DWORD *)(get_ph() + 4) || *(_DWORD *)(get_ph() + 4) == 13)
          && (unsigned __int8)sub_1CF60(*(_QWORD *)(a1 + 16), v60) )
        {
          return 1;
        }
        return -1;
      }
      v61 = *(_DWORD **)(a3 + 8);
    }
    *(_QWORD *)(a3 + 8) = v61 + 2;
    goto LABEL_69;
  }
  if ( a2 <= 2004 )
  {
    if ( a2 == 95 )
    {
      v56 = *(_QWORD *)(a1 + 16);
      if ( *(_QWORD *)(v56 + 104) != -1 )
        netnode_check(v56 + 104, "$ swift", 0, 1);
      return 0;
    }
    if ( a2 <= 95 )
    {
      if ( a2 != 62 )
      {
        if ( a2 == 94 )
        {
          v8 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v9 = *(_QWORD **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v9 + 1;
          }
          else
          {
            v9 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v8);
            *(_DWORD *)a3 = v8 + 8;
          }
          sub_1EBD0(*v9, 94, (_DWORD)v9, a4, a5, a6);
        }
        return 0;
      }
      v18 = *(_QWORD *)(a1 + 16);
      if ( !*(_BYTE *)(v18 + 244) )
      {
        *(_BYTE *)(v18 + 244) = 1;
        v19 = sub_CBD0(v18);
        v20 = *(_DWORD *)(v18 + 240);
        if ( (v20 & 2) != 0 )
        {
          if ( v19 )
          {
            *(_DWORD *)(v18 + 240) = v20 | 1;
            v18 = *(_QWORD *)(a1 + 16);
            goto LABEL_26;
          }
          *(_DWORD *)(v18 + 240) = v20 & 0xFFFFFFFE;
        }
        v18 = *(_QWORD *)(a1 + 16);
      }
LABEL_26:
      v21 = *(_BYTE *)(v18 + 240) & 1;
      if ( !v21 || !*(_QWORD *)(v18 + 136) )
        return 0;
      v22 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v75 = *(_QWORD **)(a3 + 8);
        v76 = (char ***)(v75 + 1);
        *(_QWORD *)(a3 + 8) = v75 + 1;
        v25 = (_DWORD *)*v75;
      }
      else
      {
        v23 = *(_QWORD *)(a3 + 16);
        v24 = v22 + 8;
        *(_DWORD *)a3 = v24;
        v25 = *(_DWORD **)(v23 + v22);
        if ( (unsigned int)v24 <= 0x2F )
        {
          v26 = v22 + 16;
          *(_DWORD *)a3 = v26;
          v27 = *(char ***)(v23 + v24);
          if ( (unsigned int)v26 <= 0x2F )
          {
            v28 = v22 + 24;
            *(_DWORD *)a3 = v28;
            v29 = *(_QWORD *)(v23 + v26);
            if ( (unsigned int)v28 <= 0x2F )
            {
              v30 = v22 + 32;
              *(_DWORD *)a3 = v30;
              v31 = *(_DWORD *)(v23 + v28);
              if ( (unsigned int)v30 <= 0x2F )
              {
                v32 = (_DWORD *)(v30 + v23);
                *(_DWORD *)a3 = v22 + 40;
LABEL_34:
                if ( v29 && *(_BYTE *)v29 && *v32 == 2 )
                {
                  v93 = v25;
                  v33 = getinf(36);
                  v34 = *(_QWORD *)(a1 + 16);
                  if ( v31 != v33 )
                    v21 = (v31 & 8) != 0;
                  v35 = sub_9D10(v34, v27, (__int16 *)v29, v21);
                  v36 = v93;
                  if ( v35 )
                  {
LABEL_40:
                    *v36 = 1;
                    return 1;
                  }
                  if ( (v31 & 0x4000000) != 0 )
                  {
                    while ( *(_BYTE *)v29 == 106 && *(_BYTE *)(v29 + 1) == 95 )
                      v29 += 2LL;
                  }
                  if ( *(_BYTE *)v29 == 95 && *(_BYTE *)(v29 + 1) == 95 )
                    ++v29;
                  v83 = strlen((const char *)v29);
                  v84 = v93;
                  v85 = v83;
                  if ( (v31 & 0x2000000) != 0 )
                  {
                    v86 = v29 + v83;
                    for ( i = v29 + v83; v29 < i; --i )
                    {
                      if ( (unsigned __int8)(*(_BYTE *)(i - 1) - 48) > 9u )
                      {
                        if ( v86 != i && *(_BYTE *)(i - 1) == 95 )
                          v85 = i - v29 - 1;
                        break;
                      }
                    }
                  }
                  v95 = nullptr;
                  v96 = 0;
                  if ( v85 )
                  {
                    v95 = (void *)qvector_reserve(&v95, 0, v85 + 1, 1);
                    *(_QWORD *)&v96 = v85 + 1;
                    memmove(v95, (const void *)v29, v85);
                    v84 = v93;
                    *((_BYTE *)v95 + v85) = 0;
                    v89 = v95;
                    v88 = *(_QWORD *)(a1 + 16);
                    v90 = (const char *)v95;
                    if ( (_QWORD)v96 )
                    {
LABEL_137:
                      v94 = v84;
                      v91 = sub_9BF0(v88, (__int64 *)v27, v90, v21);
                      v36 = v94;
                      v92 = v91;
                      if ( v89 )
                      {
                        qfree(v89);
                        v36 = v94;
                      }
                      if ( !v92 )
                        return 0;
                      goto LABEL_40;
                    }
                  }
                  else
                  {
                    v88 = *(_QWORD *)(a1 + 16);
                    v89 = nullptr;
                  }
                  v90 = s1;
                  goto LABEL_137;
                }
                return 0;
              }
              v32 = *(_DWORD **)(a3 + 8);
LABEL_105:
              *(_QWORD *)(a3 + 8) = v32 + 2;
              goto LABEL_34;
            }
            v78 = *(int **)(a3 + 8);
LABEL_104:
            v32 = v78 + 2;
            *(_QWORD *)(a3 + 8) = v78 + 2;
            v31 = *v78;
            goto LABEL_105;
          }
          v77 = *(_QWORD **)(a3 + 8);
LABEL_103:
          v78 = (int *)(v77 + 1);
          *(_QWORD *)(a3 + 8) = v77 + 1;
          v29 = *v77;
          goto LABEL_104;
        }
        v76 = *(char ****)(a3 + 8);
      }
      v77 = v76 + 1;
      *(_QWORD *)(a3 + 8) = v76 + 1;
      v27 = *v76;
      goto LABEL_103;
    }
    if ( a2 != 96 )
      return 0;
    v45 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 > 0x2Fu )
    {
      v68 = *(_QWORD **)(a3 + 8);
      v69 = v68 + 1;
      *(_QWORD *)(a3 + 8) = v68 + 1;
      if ( *v68 != *(_QWORD *)(*(_QWORD *)(a1 + 16) + 104LL) )
        return 0;
    }
    else
    {
      v46 = v45 + 8;
      v47 = *(_QWORD *)(a3 + 16);
      *(_DWORD *)a3 = v46;
      if ( *(_QWORD *)(v47 + v45) != *(_QWORD *)(*(_QWORD *)(a1 + 16) + 104LL) )
        return 0;
      if ( (unsigned int)v46 <= 0x2F )
      {
        v48 = v45 + 16;
        *(_DWORD *)a3 = v48;
        v49 = *(_BYTE *)(v47 + v46);
        if ( (unsigned int)v48 <= 0x2F )
        {
          v50 = v45 + 24;
          *(_DWORD *)a3 = v50;
          v51 = *(_QWORD *)(v47 + v48);
          if ( (unsigned int)v50 <= 0x2F )
          {
            v52 = v45 + 32;
            *(_DWORD *)a3 = v52;
            v53 = *(unsigned int **)(v47 + v50);
            if ( (unsigned int)v52 <= 0x2F )
            {
              v54 = (__int64 *)(v52 + v47);
              *(_DWORD *)a3 = v45 + 40;
              goto LABEL_60;
            }
            v54 = *(__int64 **)(a3 + 8);
LABEL_92:
            *(_QWORD *)(a3 + 8) = v54 + 1;
LABEL_60:
            v55 = *v54;
            if ( (_DWORD)v51 == -1 )
            {
              if ( v49 == 65 && (_DWORD)v55 == 4 )
              {
                v79 = *(_QWORD *)(a1 + 16);
                v95 = (void *)*v53;
                netnode_supset(*(_QWORD *)(v79 + 104), -1, &v95, 8, 65);
                return 1;
              }
            }
            else if ( v49 == 83 && (unsigned __int64)((int)v51 + 4LL) <= 2 )
            {
              netnode_supset(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 104LL), (int)v51, v53, (int)v55, 83);
              return 1;
            }
            return 0;
          }
          v71 = *(unsigned int ***)(a3 + 8);
LABEL_91:
          v54 = (__int64 *)(v71 + 1);
          *(_QWORD *)(a3 + 8) = v71 + 1;
          v53 = *v71;
          goto LABEL_92;
        }
        v70 = *(_QWORD **)(a3 + 8);
LABEL_90:
        v71 = (unsigned int **)(v70 + 1);
        *(_QWORD *)(a3 + 8) = v70 + 1;
        v51 = *v70;
        goto LABEL_91;
      }
      v69 = *(_BYTE **)(a3 + 8);
    }
    v70 = v69 + 8;
    *(_QWORD *)(a3 + 8) = v69 + 8;
    v49 = *v69;
    goto LABEL_90;
  }
  if ( a2 == 2009 )
  {
    v62 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 > 0x2Fu )
    {
      v63 = *(__int64 **)(a3 + 8);
      *(_QWORD *)(a3 + 8) = v63 + 1;
    }
    else
    {
      v63 = (__int64 *)(*(_QWORD *)(a3 + 16) + v62);
      *(_DWORD *)a3 = v62 + 8;
    }
    v64 = *v63;
    v65 = *(_BYTE *)(*v63 + 88);
    v66 = v65 & 0xF0;
    if ( (v65 & 0xF0) == 0xC0 )
      v66 = *(_DWORD *)(v64 + 28);
    if ( v66 <= 0x10 )
      v66 = getinf(99);
    if ( v66 != 144 )
      return 0;
    if ( (unsigned __int8)getinf_flag(3, 4)
      && (!*(_DWORD *)(get_ph() + 4) || *(_DWORD *)(get_ph() + 4) == 13)
      && (unsigned __int8)sub_1DEC0(*(_QWORD *)(a1 + 16), v64) )
    {
      return 1;
    }
    return -1;
  }
  if ( a2 != 2012 )
  {
    if ( a2 != 2008 )
      return 0;
    v11 = *(_DWORD *)a3;
    if ( v11 > 0x2F )
    {
      v73 = *(__int64 **)(a3 + 8);
      v74 = v73 + 1;
      *(_QWORD *)(a3 + 8) = v73 + 1;
      v14 = *v73;
    }
    else
    {
      v12 = *(_QWORD *)(a3 + 16);
      v13 = v11 + 8;
      *(_DWORD *)a3 = v13;
      v14 = *(_QWORD *)(v12 + v11);
      if ( (unsigned int)v13 <= 0x2F )
      {
        v15 = v11 + 16;
        *(_DWORD *)a3 = v15;
        v16 = *(_QWORD *)(v12 + v13);
        if ( (unsigned int)v15 <= 0x2F )
        {
          v17 = (_DWORD *)(v15 + v12);
          *(_DWORD *)a3 = v11 + 24;
LABEL_18:
          if ( *v17 != 144 )
            return 0;
          if ( (unsigned __int8)getinf_flag(3, 4)
            && (!*(_DWORD *)(get_ph() + 4) || *(_DWORD *)(get_ph() + 4) == 13)
            && (unsigned __int8)sub_1DE70(*(_QWORD *)(a1 + 16), v14, v16) )
          {
            return 1;
          }
          return -1;
        }
        v17 = *(_DWORD **)(a3 + 8);
LABEL_98:
        *(_QWORD *)(a3 + 8) = v17 + 2;
        goto LABEL_18;
      }
      v74 = *(_QWORD **)(a3 + 8);
    }
    v17 = v74 + 1;
    *(_QWORD *)(a3 + 8) = v74 + 1;
    v16 = *v74;
    goto LABEL_98;
  }
  v37 = *(_DWORD *)a3;
  if ( v37 > 0x2F )
  {
    v67 = *(__int64 **)(a3 + 8);
    v41 = v67 + 1;
    *(_QWORD *)(a3 + 8) = v67 + 1;
    v40 = *v67;
  }
  else
  {
    v38 = *(_QWORD *)(a3 + 16);
    v39 = v37 + 8;
    *(_DWORD *)a3 = v39;
    v40 = *(_QWORD *)(v38 + v37);
    if ( (unsigned int)v39 <= 0x2F )
    {
      v41 = (_QWORD *)(v39 + v38);
      *(_DWORD *)a3 = v37 + 16;
      goto LABEL_45;
    }
    v41 = *(_QWORD **)(a3 + 8);
  }
  *(_QWORD *)(a3 + 8) = v41 + 1;
LABEL_45:
  v42 = *v41;
  v43 = *(_BYTE *)(*v41 + 88LL);
  v44 = v43 & 0xF0;
  if ( (v43 & 0xF0) == 0xC0 )
    v44 = *(_DWORD *)(v42 + 28);
  if ( v44 <= 0x10 )
    v44 = getinf(99);
  if ( v44 != 144 )
    return 0;
  if ( !(unsigned __int8)getinf_flag(3, 4) || *(_DWORD *)(get_ph() + 4) && *(_DWORD *)(get_ph() + 4) != 13 )
    return -1;
  return (unsigned __int8)sub_1D750(*(_QWORD *)(a1 + 16), v40, v42, v80, v81, v82) + 1LL;
}

