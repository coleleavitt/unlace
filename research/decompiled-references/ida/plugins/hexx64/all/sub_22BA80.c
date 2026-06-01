__int64 __fastcall sub_22BA80(__int64 a1, _QWORD *a2, double a3, __m128 a4)
{
  __int64 v5; // rbx
  _QWORD *v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  bool v10; // zf
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  char v16; // al
  int tinfo_size; // ebx
  unsigned __int64 v18; // r13
  unsigned __int64 v19; // r14
  __int64 v20; // r12
  int *v21; // r14
  int v22; // ebx
  int v23; // eax
  __int64 v24; // rbx
  __int64 v25; // rbx
  int v26; // edx
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  char v29; // al
  int v30; // r13d
  __int64 v31; // rsi
  char v32; // al
  int v33; // eax
  __int64 v34; // rax
  unsigned __int64 v35; // r8
  int *v36; // r9
  __int64 v37; // rbp
  __int64 v38; // r14
  __int64 v39; // r13
  signed int v40; // r12d
  signed int v41; // ebx
  __int64 v42; // rax
  __int64 v43; // rdi
  char v44; // cl
  __int64 v45; // rdx
  signed int v46; // r10d
  int v47; // ecx
  int v48; // esi
  bool v49; // al
  __int64 v50; // rdi
  int v51; // ecx
  int v52; // edi
  _QWORD *v53; // rax
  __int64 v54; // rdx
  _QWORD *v55; // rcx
  __int64 v56; // rax
  __int64 i; // rcx
  __int64 v58; // rdx
  __int64 v59; // rax
  int v60; // ebx
  __int64 v61; // rax
  unsigned int v62; // edx
  int *v64; // rbx
  int v65; // eax
  __int64 v66; // rax
  int v67; // eax
  char v68; // al
  int v69; // eax
  char v70; // al
  int v71; // eax
  __int64 v72; // rdx
  int v73; // ebx
  __int64 v74; // rdx
  __int64 v75; // rax
  signed int v76; // eax
  int v77; // eax
  char v78; // al
  int v79; // eax
  char v80; // al
  int v81; // ebp
  int v82; // r12d
  int v83; // eax
  __int64 v84; // [rsp+8h] [rbp-D0h]
  __int64 v85; // [rsp+8h] [rbp-D0h]
  __int64 v86; // [rsp+8h] [rbp-D0h]
  __int64 v87; // [rsp+8h] [rbp-D0h]
  __int64 v88; // [rsp+10h] [rbp-C8h]
  int v89; // [rsp+18h] [rbp-C0h]
  int v90; // [rsp+1Ch] [rbp-BCh]
  __int64 v91; // [rsp+20h] [rbp-B8h]
  int v92; // [rsp+20h] [rbp-B8h]
  int v93; // [rsp+20h] [rbp-B8h]
  int v94; // [rsp+20h] [rbp-B8h]
  __int64 v95; // [rsp+28h] [rbp-B0h]
  int v96; // [rsp+30h] [rbp-A8h]
  int v97; // [rsp+34h] [rbp-A4h]
  unsigned __int64 v99; // [rsp+40h] [rbp-98h]
  unsigned __int64 v100; // [rsp+40h] [rbp-98h]
  int v101; // [rsp+48h] [rbp-90h]
  int *v102; // [rsp+48h] [rbp-90h]
  int *v103; // [rsp+48h] [rbp-90h]
  unsigned __int64 v104; // [rsp+50h] [rbp-88h]
  int *v105; // [rsp+58h] [rbp-80h]
  int v106; // [rsp+64h] [rbp-74h] BYREF
  __int64 v107; // [rsp+68h] [rbp-70h] BYREF
  unsigned __int64 v108; // [rsp+70h] [rbp-68h] BYREF
  __int64 v109; // [rsp+78h] [rbp-60h] BYREF
  __int64 tinfo_property; // [rsp+80h] [rbp-58h] BYREF
  int v111; // [rsp+88h] [rbp-50h]
  int v112; // [rsp+8Ch] [rbp-4Ch]
  unsigned __int64 v113; // [rsp+98h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 8);
  v113 = __readfsqword(0x28u);
  v6 = a2;
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 936) + 40LL))(*(_QWORD *)(v5 + 936));
  v8 = *(_QWORD *)(v5 + 136);
  v9 = v7;
  if ( v8 <= v7 )
    v9 = *(_QWORD *)(v5 + 136);
  v10 = v7 == -1;
  v11 = *(_QWORD *)(a1 + 120);
  if ( !v10 )
    v8 = v9;
  if ( v11 != *(_QWORD *)(a1 + 88) )
  {
    v12 = *(_QWORD *)(v11 + 56);
    if ( v8 > v12 )
      v8 = v12;
  }
  v13 = *(_DWORD *)(a1 + 200);
  v14 = v8 - *(_QWORD *)(a1 + 176);
  v107 = v14;
  v15 = v14;
  if ( (v13 & 2) != 0
    && (v13 & 0x1418) == 0
    && *(_QWORD *)(a1 + 184) == -1
    && ((v84 = v14, v16 = get_tinfo_property(), v15 = v84, (v16 & 0xFu) <= 0xA) || (v16 & 0x3F) == 0x2D) )
  {
    tinfo_size = 0;
    v97 = *(_DWORD *)(a1 + 196);
  }
  else if ( (unsigned __int8)*(_QWORD *)(a1 + 168) )
  {
    v85 = v15;
    if ( (get_tinfo_property() & 0xF) == 0xB )
    {
      tinfo_property = get_tinfo_property();
    }
    else
    {
      tinfo_property = 0;
      copy_tinfo_t();
    }
    tinfo_size = get_tinfo_size();
    clear_tinfo_t();
    v15 = v85;
    if ( tinfo_size < 0 )
      tinfo_size = 0;
    v97 = *(_DWORD *)(a1 + 196);
  }
  else
  {
    tinfo_size = 0;
    v97 = *(_DWORD *)(a1 + 196);
    if ( v97 >= 0 )
      tinfo_size = *(_DWORD *)(a1 + 196);
    if ( (*(_BYTE *)(a1 + 200) & 1) == 0 )
      tinfo_size = 0;
  }
  v18 = *(_QWORD *)(a1 + 112);
  v106 = tinfo_size;
  v19 = v18 + 24;
  if ( (*(_BYTE *)(v18 + 80) & 2) == 0 )
    goto LABEL_99;
  v20 = v15;
  if ( *(int *)(v18 + 76) > v15 )
    goto LABEL_21;
  v86 = v15;
  v68 = get_tinfo_property();
  v15 = v86;
  if ( (v68 & 0xF) != 0xB )
  {
    v18 = *(_QWORD *)(a1 + 112);
    goto LABEL_21;
  }
  v77 = *(_DWORD *)(v18 + 80);
  if ( (v77 & 0x400) == 0
    && *(_DWORD *)(a1 + 196) == *(_DWORD *)(v18 + 76)
    && (v77 & 2) != 0
    && (v77 & 0x1018) == 0
    && *(_QWORD *)(v18 + 64) == -1
    && ((v78 = get_tinfo_property(), v15 = v86, (v78 & 0xFu) <= 0xA) || (v78 & 0x3F) == 0x2D) )
  {
    v79 = 0;
  }
  else if ( (unsigned __int8)*(_QWORD *)(v18 + 48) )
  {
    v87 = v15;
    if ( (get_tinfo_property() & 0xF) == 0xB )
    {
      tinfo_property = get_tinfo_property();
    }
    else
    {
      tinfo_property = 0;
      copy_tinfo_t();
    }
    v82 = get_tinfo_size();
    clear_tinfo_t();
    v79 = 0;
    v15 = v87;
    if ( v82 >= 0 )
      v79 = v82;
  }
  else
  {
    v79 = 0;
    if ( (*(_BYTE *)(v18 + 80) & 1) != 0 )
    {
      v79 = *(_DWORD *)(v18 + 76);
      if ( v79 < 0 )
        v79 = 0;
    }
  }
  v18 = *(_QWORD *)(a1 + 112);
  if ( tinfo_size != v79 )
  {
LABEL_99:
    v20 = v15;
    if ( v18 != *(_QWORD *)(a1 + 120) )
      goto LABEL_22;
LABEL_100:
    v96 = 0;
    v90 = 0;
LABEL_101:
    v30 = v106;
    goto LABEL_102;
  }
  v20 = *(int *)(v19 + 52);
LABEL_21:
  if ( v18 == *(_QWORD *)(a1 + 120) )
    goto LABEL_100;
LABEL_22:
  v89 = v15;
  v21 = &v106;
  v96 = 0;
  v90 = 0;
  v88 = (int)v15;
  v95 = v15;
  do
  {
    while ( 1 )
    {
LABEL_23:
      if ( (get_tinfo_property() & 0xF) == 0xB )
      {
        v90 += 2;
      }
      else if ( !*(_DWORD *)(v18 + 76) )
      {
        v91 = *(_QWORD *)(v18 + 96);
        v22 = v91;
        if ( (get_tinfo_property() & 0x2F) == 0xD )
        {
          v90 += v91;
        }
        else
        {
          v56 = *(_QWORD *)(v18 + 88);
          for ( i = v56 + 40LL * *(_QWORD *)(v18 + 96); i != v56; v56 += 40 )
          {
            while ( 1 )
            {
              v58 = *(_QWORD *)(v56 + 16);
              if ( *(_DWORD *)v58 != 12 )
                break;
              v56 += 40;
              ++v22;
              if ( i == v56 )
                goto LABEL_97;
            }
            if ( *(_BYTE *)(v58 + 64) == 8 )
              v22 += *(_DWORD *)(*(_QWORD *)(v58 + 72) + 284LL) == 2;
          }
LABEL_97:
          v90 += v22;
        }
      }
      v108 = v18;
      sub_22A6C0(a1, v21, (__int64)&v108, v89);
      v23 = *(_DWORD *)(v18 + 80);
      v24 = v88;
      if ( (v23 & 0x800) != 0 )
        goto LABEL_33;
      if ( (v23 & 2) == 0 || *(_QWORD *)(v18 + 64) == -1 )
      {
        if ( (v23 & 1) == 0 || (v34 = *(_QWORD *)(v18 + 88), v34 == v34 + 40LL * *(_QWORD *)(v18 + 96)) )
        {
          v24 = 0;
          goto LABEL_33;
        }
        v35 = v18;
        v36 = v21;
        v37 = *(_QWORD *)(v18 + 88);
        v38 = v20;
        v39 = v34 + 40LL * *(_QWORD *)(v18 + 96);
        v40 = 0;
        while ( 1 )
        {
          while ( 1 )
          {
            v42 = *(_QWORD *)(v37 + 16);
            v41 = 0;
            if ( *(_DWORD *)v42 == 12 )
              break;
LABEL_57:
            if ( v40 < v41 )
              v40 = v41;
            v37 += 40;
            if ( v39 == v37 )
            {
LABEL_78:
              v24 = v40;
              v18 = v35;
              v20 = v38;
              v21 = v36;
              goto LABEL_33;
            }
          }
          v43 = *(_QWORD *)(v37 + 24);
          v44 = *(_BYTE *)(v42 + 48);
          if ( *(_BYTE *)(v42 + 32) != 10 || (v45 = v42 + 48, v43 != *(_QWORD *)(v42 + 40)) )
          {
            v41 = 0;
            if ( v44 != 10 || v43 != *(_QWORD *)(v42 + 56) )
              goto LABEL_57;
            v45 = v42 + 32;
            v44 = *(_BYTE *)(v42 + 32);
          }
          v46 = *(_QWORD *)(*(_QWORD *)(v43 + 8) + 8LL) - *(_DWORD *)(a1 + 176);
          if ( v44 != 4 )
            goto LABEL_64;
          v64 = *(int **)(v45 + 8);
          v65 = *v64;
          if ( (unsigned int)(*v64 - 12) <= 1 )
          {
            v103 = v36;
            v100 = v35;
            v94 = *(_QWORD *)(*(_QWORD *)(v43 + 8) + 8LL) - *(_DWORD *)(a1 + 176);
            v75 = sub_11C8A0((__int64)v64, &tinfo_property);
            v46 = v94;
            v35 = v100;
            v36 = v103;
            if ( v75 && (*v64 == 12 || (int *)v75 == v64 + 8) )
            {
              v76 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v75 + 8) + 16LL), *(_DWORD *)(v75 + 4), 0);
              v35 = v100;
              v36 = v103;
              v46 = v76;
              if ( *v64 == 13 )
              {
                v41 = v76;
                goto LABEL_57;
              }
              if ( *(_BYTE *)tinfo_property == 4 )
                v64 = *(int **)(tinfo_property + 8);
            }
            v65 = *v64;
          }
          if ( v65 == 14
            && (v102 = v36,
                v99 = v35,
                v93 = v46,
                v66 = sub_11C8A0((__int64)v64, nullptr),
                v46 = v93,
                v35 = v99,
                v36 = v102,
                v66)
            && (v67 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v66 + 8) + 16LL), *(_DWORD *)(v66 + 4), 0),
                v46 = v93,
                v35 = v99,
                v36 = v102,
                (v48 = v67) != 0) )
          {
            if ( v93 )
            {
              v41 = v93 + v67;
              v47 = v93 % v67;
              if ( v93 % v67 )
              {
                if ( v67 % v47 )
                  goto LABEL_74;
              }
              else
              {
                v47 = v67;
              }
            }
            else
            {
              v41 = v67;
              v47 = v67;
            }
            if ( v47 == -1 )
              goto LABEL_74;
          }
          else
          {
LABEL_64:
            v41 = v46 + 1;
            v47 = 1;
            v48 = 1;
          }
          v105 = v36;
          v104 = v35;
          v101 = v46;
          v92 = v47;
          v49 = sub_11CA80(v47);
          v50 = v92;
          v46 = v101;
          v35 = v104;
          v36 = v105;
          v51 = v92;
          if ( !v49 )
          {
            v52 = 5;
            v51 = 16;
            while ( v48 % v51 )
            {
              v51 >>= 1;
              if ( !--v52 )
              {
                v50 = 0;
                v51 = 0;
                goto LABEL_70;
              }
            }
            v50 = v51;
          }
LABEL_70:
          if ( v95 / v50 > 1 && (!v96 || v51 < v96) )
            v96 = v51;
LABEL_74:
          if ( v95 < v41 )
            goto LABEL_57;
          if ( v40 < (int)((v95 - v46) / v48 * v48 + v46) )
            v40 = (v95 - v46) / v48 * v48 + v46;
          v37 += 40;
          if ( v39 == v37 )
            goto LABEL_78;
        }
      }
      v25 = *(_QWORD *)(v18 + 56);
      v26 = *(_DWORD *)(v18 + 76);
      if ( v26 != -1 )
        LODWORD(v25) = v25 + v26;
      v24 = (int)v25 - *(_DWORD *)(a1 + 176);
LABEL_33:
      v27 = *(_QWORD *)v18;
      if ( v20 < v24 )
        v20 = v24;
      if ( (v27 & 2) != 0 )
        goto LABEL_38;
      v28 = *(_QWORD *)(v18 + 16);
      if ( (*(_BYTE *)v28 & 2) != 0 )
        break;
      do
      {
        v18 = v28;
        v28 = *(_QWORD *)(v28 + 8);
      }
      while ( (*(_BYTE *)v28 & 2) == 0 );
LABEL_38:
      if ( *(_QWORD *)(a1 + 120) == v18 )
        goto LABEL_39;
    }
    v53 = (_QWORD *)(v27 & 0xFFFFFFFFFFFFFFFCLL);
    v54 = *v53;
    if ( (*v53 & 2) == 0 )
    {
      while ( v18 == v53[2] )
      {
        v18 = v54 & 0xFFFFFFFFFFFFFFFCLL;
        v54 = *(_QWORD *)(v54 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v54 & 2) != 0 )
        {
          if ( *(_QWORD *)(a1 + 120) != v18 )
            goto LABEL_23;
          goto LABEL_39;
        }
        v55 = v53;
        v53 = (_QWORD *)v18;
        v18 = (unsigned __int64)v55;
      }
    }
    v18 = (unsigned __int64)v53;
  }
  while ( *(_QWORD **)(a1 + 120) != v53 );
LABEL_39:
  v6 = a2;
  if ( v106 < v96 || v96 > 0 && v106 % v96 )
    v106 = v96;
  if ( v90 <= 0 )
    goto LABEL_101;
  v29 = sub_22AF40(a1, &v107, v21, v96, a3, a4);
  v30 = v106;
  if ( !v29 )
  {
    if ( (get_tinfo_property() & 0xF) == 0xB )
    {
      if ( v30 )
      {
        if ( *(_DWORD *)(a1 + 196) > v30 )
          v90 = 2;
        goto LABEL_104;
      }
LABEL_103:
      v106 = 1;
      goto LABEL_104;
    }
LABEL_102:
    if ( v30 )
      goto LABEL_104;
    goto LABEL_103;
  }
  v20 = v107;
  tinfo_property = v107;
  if ( !v106 )
  {
    v96 = 1;
    v90 = 2;
    goto LABEL_103;
  }
  v31 = v107;
  while ( v31 % v30 )
  {
    do
      v30 /= 2;
    while ( v31 % v30 );
    v106 = v30;
    v32 = sub_22AF40(a1, &tinfo_property, v21, v96, a3, a4);
    v30 = v106;
    if ( !v32 )
    {
      v20 = v107;
      goto LABEL_50;
    }
    v31 = tinfo_property;
    v107 = tinfo_property;
    if ( !v106 )
    {
      v20 = tinfo_property;
LABEL_50:
      v33 = 1;
      v90 = 2;
      if ( v106 > 0 )
        v33 = v106;
      v96 = v33;
      goto LABEL_102;
    }
  }
  v83 = 1;
  v20 = v107;
  v90 = 2;
  if ( v30 > 0 )
    v83 = v30;
  v96 = v83;
LABEL_104:
  if ( (get_tinfo_property() & 0xF) == 0xB )
    goto LABEL_110;
  if ( !v96 || (get_tinfo_property() & 0x2F) == 0xD )
  {
    if ( (unsigned __int8)*v6 )
    {
      v72 = get_tinfo_size();
      v59 = *(int *)(a1 + 196);
      if ( v59 != v72 )
        goto LABEL_110;
    }
    else
    {
      v59 = *(int *)(a1 + 196);
    }
    if ( v59 >= v107 || v107 == *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL) + 80LL) )
      return 0;
LABEL_110:
    if ( v90 > 1 || v96 )
      goto LABEL_112;
    return 0;
  }
LABEL_112:
  v60 = v106;
  if ( v107 <= v20 )
    v20 = v107;
  if ( v20 % v106 )
  {
    v20 = v107 - v107 % v106;
    if ( v20 + *(_QWORD *)(a1 + 176) < *(_QWORD *)(a1 + 128) )
      return 0;
  }
  v61 = v97;
  if ( v97 < (__int64)v106 )
    v61 = v106;
  v62 = 0;
  if ( v20 >= v61 )
  {
    if ( !(unsigned __int8)*(_QWORD *)(a1 + 168) )
      goto LABEL_160;
    v69 = *(_DWORD *)(a1 + 200);
    if ( (v69 & 2) == 0 || (v69 & 0x1418) != 0 || *(_QWORD *)(a1 + 184) != -1 )
      goto LABEL_188;
    v70 = get_tinfo_property();
    if ( (v70 & 0xFu) <= 0xA || (v70 & 0x3F) == 0x2D )
    {
      v71 = 0;
      goto LABEL_192;
    }
    if ( (unsigned __int8)*(_QWORD *)(a1 + 168) )
    {
LABEL_188:
      v80 = get_tinfo_property();
      tinfo_property = 0;
      if ( (v80 & 0xF) == 0xB )
        tinfo_property = get_tinfo_property();
      else
        copy_tinfo_t();
      v81 = get_tinfo_size();
      clear_tinfo_t();
      v71 = 0;
      if ( v81 >= 0 )
        v71 = v81;
    }
    else
    {
      v71 = 0;
      if ( (*(_BYTE *)(a1 + 200) & 1) != 0 )
      {
        v71 = *(_DWORD *)(a1 + 196);
        if ( v71 < 0 )
          v71 = 0;
      }
    }
LABEL_192:
    if ( v60 == v71 )
    {
      v109 = 0;
      copy_tinfo_t();
      goto LABEL_161;
    }
LABEL_160:
    sub_32C270(&v109, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL), v60);
LABEL_161:
    if ( (get_tinfo_property() & 0xF) == 0xB )
    {
      tinfo_property = 0;
      tinfo_property = get_tinfo_property();
      copy_tinfo_t();
      clear_tinfo_t();
    }
    v73 = get_tinfo_size();
    clear_tinfo_t();
    if ( v73 > 0 )
    {
      if ( v73 == v20 )
      {
        v74 = v109;
        v109 = *(_QWORD *)(a1 + 168);
        *(_QWORD *)(a1 + 168) = v74;
      }
      else
      {
        v111 = 0;
        tinfo_property = 0;
        v112 = v20 / v73;
        copy_tinfo_t();
        create_tinfo();
        clear_tinfo_t();
      }
    }
    *(_DWORD *)(a1 + 196) = v20;
    clear_tinfo_t();
    return 1;
  }
  return v62;
}

