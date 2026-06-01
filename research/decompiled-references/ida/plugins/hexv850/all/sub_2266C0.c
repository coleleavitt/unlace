__int64 __fastcall sub_2266C0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  _QWORD *v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  bool v8; // zf
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  char v14; // al
  int tinfo_size; // ebx
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // r14
  __int64 v18; // r12
  int *v19; // r14
  int v20; // ebx
  int v21; // eax
  __int64 v22; // rbx
  __int64 v23; // rbx
  int v24; // edx
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  char v27; // al
  int v28; // r13d
  __int64 v29; // rsi
  char v30; // al
  int v31; // eax
  __int64 v32; // rax
  unsigned __int64 v33; // r8
  int *v34; // r9
  __int64 v35; // rbp
  __int64 v36; // r14
  __int64 v37; // r13
  signed int v38; // r12d
  signed int v39; // ebx
  __int64 v40; // rax
  __int64 v41; // rdi
  char v42; // cl
  __int64 v43; // rdx
  signed int v44; // r10d
  int v45; // ecx
  int v46; // esi
  bool v47; // al
  __int64 v48; // rdi
  int v49; // ecx
  int v50; // edi
  _QWORD *v51; // rax
  __int64 v52; // rdx
  _QWORD *v53; // rcx
  __int64 v54; // rax
  __int64 i; // rcx
  __int64 v56; // rdx
  __int64 v57; // rax
  unsigned int v58; // ebx
  __int64 v59; // rax
  unsigned int v60; // edx
  int *v62; // rbx
  int v63; // eax
  __int64 v64; // rax
  int v65; // eax
  char v66; // al
  int v67; // eax
  char v68; // al
  int v69; // eax
  __int64 v70; // rdx
  int v71; // ebx
  __int64 v72; // rdx
  __int64 v73; // rax
  signed int v74; // eax
  int v75; // eax
  char v76; // al
  int v77; // eax
  char v78; // al
  int v79; // ebp
  int v80; // r12d
  int v81; // eax
  __int64 v82; // [rsp+8h] [rbp-D0h]
  __int64 v83; // [rsp+8h] [rbp-D0h]
  __int64 v84; // [rsp+8h] [rbp-D0h]
  __int64 v85; // [rsp+8h] [rbp-D0h]
  __int64 v86; // [rsp+10h] [rbp-C8h]
  int v87; // [rsp+18h] [rbp-C0h]
  int v88; // [rsp+1Ch] [rbp-BCh]
  __int64 v89; // [rsp+20h] [rbp-B8h]
  int v90; // [rsp+20h] [rbp-B8h]
  int v91; // [rsp+20h] [rbp-B8h]
  int v92; // [rsp+20h] [rbp-B8h]
  __int64 v93; // [rsp+28h] [rbp-B0h]
  int v94; // [rsp+30h] [rbp-A8h]
  int v95; // [rsp+34h] [rbp-A4h]
  unsigned __int64 v97; // [rsp+40h] [rbp-98h]
  unsigned __int64 v98; // [rsp+40h] [rbp-98h]
  int v99; // [rsp+48h] [rbp-90h]
  int *v100; // [rsp+48h] [rbp-90h]
  int *v101; // [rsp+48h] [rbp-90h]
  unsigned __int64 v102; // [rsp+50h] [rbp-88h]
  int *v103; // [rsp+58h] [rbp-80h]
  int v104; // [rsp+64h] [rbp-74h] BYREF
  __int64 v105; // [rsp+68h] [rbp-70h] BYREF
  unsigned __int64 v106; // [rsp+70h] [rbp-68h] BYREF
  __int64 v107; // [rsp+78h] [rbp-60h] BYREF
  __int64 tinfo_property; // [rsp+80h] [rbp-58h] BYREF
  int v109; // [rsp+88h] [rbp-50h]
  int v110; // [rsp+8Ch] [rbp-4Ch]
  unsigned __int64 v111; // [rsp+98h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 8);
  v111 = __readfsqword(0x28u);
  v4 = a2;
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 936) + 40LL))(*(_QWORD *)(v3 + 936));
  v6 = *(_QWORD *)(v3 + 136);
  v7 = v5;
  if ( v6 <= v5 )
    v7 = *(_QWORD *)(v3 + 136);
  v8 = v5 == -1;
  v9 = *(_QWORD *)(a1 + 120);
  if ( !v8 )
    v6 = v7;
  if ( v9 != *(_QWORD *)(a1 + 88) )
  {
    v10 = *(_QWORD *)(v9 + 56);
    if ( v6 > v10 )
      v6 = v10;
  }
  v11 = *(_DWORD *)(a1 + 200);
  v12 = v6 - *(_QWORD *)(a1 + 176);
  v105 = v12;
  v13 = v12;
  if ( (v11 & 2) != 0
    && (v11 & 0x1418) == 0
    && *(_QWORD *)(a1 + 184) == -1
    && ((v82 = v12, v14 = get_tinfo_property(), v13 = v82, (v14 & 0xFu) <= 0xA) || (v14 & 0x3F) == 0x2D) )
  {
    tinfo_size = 0;
    v95 = *(_DWORD *)(a1 + 196);
  }
  else if ( (unsigned __int8)*(_QWORD *)(a1 + 168) )
  {
    v83 = v13;
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
    v13 = v83;
    if ( tinfo_size < 0 )
      tinfo_size = 0;
    v95 = *(_DWORD *)(a1 + 196);
  }
  else
  {
    tinfo_size = 0;
    v95 = *(_DWORD *)(a1 + 196);
    if ( v95 >= 0 )
      tinfo_size = *(_DWORD *)(a1 + 196);
    if ( (*(_BYTE *)(a1 + 200) & 1) == 0 )
      tinfo_size = 0;
  }
  v16 = *(_QWORD *)(a1 + 112);
  v104 = tinfo_size;
  v17 = v16 + 24;
  if ( (*(_BYTE *)(v16 + 80) & 2) == 0 )
    goto LABEL_99;
  v18 = v13;
  if ( *(int *)(v16 + 76) > v13 )
    goto LABEL_21;
  v84 = v13;
  v66 = get_tinfo_property();
  v13 = v84;
  if ( (v66 & 0xF) != 0xB )
  {
    v16 = *(_QWORD *)(a1 + 112);
    goto LABEL_21;
  }
  v75 = *(_DWORD *)(v16 + 80);
  if ( (v75 & 0x400) == 0
    && *(_DWORD *)(a1 + 196) == *(_DWORD *)(v16 + 76)
    && (v75 & 2) != 0
    && (v75 & 0x1018) == 0
    && *(_QWORD *)(v16 + 64) == -1
    && ((v76 = get_tinfo_property(), v13 = v84, (v76 & 0xFu) <= 0xA) || (v76 & 0x3F) == 0x2D) )
  {
    v77 = 0;
  }
  else if ( (unsigned __int8)*(_QWORD *)(v16 + 48) )
  {
    v85 = v13;
    if ( (get_tinfo_property() & 0xF) == 0xB )
    {
      tinfo_property = get_tinfo_property();
    }
    else
    {
      tinfo_property = 0;
      copy_tinfo_t();
    }
    v80 = get_tinfo_size();
    clear_tinfo_t();
    v77 = 0;
    v13 = v85;
    if ( v80 >= 0 )
      v77 = v80;
  }
  else
  {
    v77 = 0;
    if ( (*(_BYTE *)(v16 + 80) & 1) != 0 )
    {
      v77 = *(_DWORD *)(v16 + 76);
      if ( v77 < 0 )
        v77 = 0;
    }
  }
  v16 = *(_QWORD *)(a1 + 112);
  if ( tinfo_size != v77 )
  {
LABEL_99:
    v18 = v13;
    if ( v16 != *(_QWORD *)(a1 + 120) )
      goto LABEL_22;
LABEL_100:
    v94 = 0;
    v88 = 0;
LABEL_101:
    v28 = v104;
    goto LABEL_102;
  }
  v18 = *(int *)(v17 + 52);
LABEL_21:
  if ( v16 == *(_QWORD *)(a1 + 120) )
    goto LABEL_100;
LABEL_22:
  v87 = v13;
  v19 = &v104;
  v94 = 0;
  v88 = 0;
  v86 = (int)v13;
  v93 = v13;
  do
  {
    while ( 1 )
    {
LABEL_23:
      if ( (get_tinfo_property() & 0xF) == 0xB )
      {
        v88 += 2;
      }
      else if ( !*(_DWORD *)(v16 + 76) )
      {
        v89 = *(_QWORD *)(v16 + 96);
        v20 = v89;
        if ( (get_tinfo_property() & 0x2F) == 0xD )
        {
          v88 += v89;
        }
        else
        {
          v54 = *(_QWORD *)(v16 + 88);
          for ( i = v54 + 40LL * *(_QWORD *)(v16 + 96); i != v54; v54 += 40 )
          {
            while ( 1 )
            {
              v56 = *(_QWORD *)(v54 + 16);
              if ( *(_DWORD *)v56 != 12 )
                break;
              v54 += 40;
              ++v20;
              if ( i == v54 )
                goto LABEL_97;
            }
            if ( *(_BYTE *)(v56 + 64) == 8 )
              v20 += *(_DWORD *)(*(_QWORD *)(v56 + 72) + 284LL) == 2;
          }
LABEL_97:
          v88 += v20;
        }
      }
      v106 = v16;
      sub_225300(a1, v19, (__int64)&v106, v87);
      v21 = *(_DWORD *)(v16 + 80);
      v22 = v86;
      if ( (v21 & 0x800) != 0 )
        goto LABEL_33;
      if ( (v21 & 2) == 0 || *(_QWORD *)(v16 + 64) == -1 )
      {
        if ( (v21 & 1) == 0 || (v32 = *(_QWORD *)(v16 + 88), v32 == v32 + 40LL * *(_QWORD *)(v16 + 96)) )
        {
          v22 = 0;
          goto LABEL_33;
        }
        v33 = v16;
        v34 = v19;
        v35 = *(_QWORD *)(v16 + 88);
        v36 = v18;
        v37 = v32 + 40LL * *(_QWORD *)(v16 + 96);
        v38 = 0;
        while ( 1 )
        {
          while ( 1 )
          {
            v40 = *(_QWORD *)(v35 + 16);
            v39 = 0;
            if ( *(_DWORD *)v40 == 12 )
              break;
LABEL_57:
            if ( v38 < v39 )
              v38 = v39;
            v35 += 40;
            if ( v37 == v35 )
            {
LABEL_78:
              v22 = v38;
              v16 = v33;
              v18 = v36;
              v19 = v34;
              goto LABEL_33;
            }
          }
          v41 = *(_QWORD *)(v35 + 24);
          v42 = *(_BYTE *)(v40 + 48);
          if ( *(_BYTE *)(v40 + 32) != 10 || (v43 = v40 + 48, v41 != *(_QWORD *)(v40 + 40)) )
          {
            v39 = 0;
            if ( v42 != 10 || v41 != *(_QWORD *)(v40 + 56) )
              goto LABEL_57;
            v43 = v40 + 32;
            v42 = *(_BYTE *)(v40 + 32);
          }
          v44 = *(_QWORD *)(*(_QWORD *)(v41 + 8) + 8LL) - *(_DWORD *)(a1 + 176);
          if ( v42 != 4 )
            goto LABEL_64;
          v62 = *(int **)(v43 + 8);
          v63 = *v62;
          if ( (unsigned int)(*v62 - 12) <= 1 )
          {
            v101 = v34;
            v98 = v33;
            v92 = *(_QWORD *)(*(_QWORD *)(v41 + 8) + 8LL) - *(_DWORD *)(a1 + 176);
            v73 = sub_117CE0((__int64)v62, &tinfo_property);
            v44 = v92;
            v33 = v98;
            v34 = v101;
            if ( v73 && (*v62 == 12 || (int *)v73 == v62 + 8) )
            {
              v74 = sub_325150(*(_QWORD *)(*(_QWORD *)(v73 + 8) + 16LL), *(unsigned int *)(v73 + 4), 0);
              v33 = v98;
              v34 = v101;
              v44 = v74;
              if ( *v62 == 13 )
              {
                v39 = v74;
                goto LABEL_57;
              }
              if ( *(_BYTE *)tinfo_property == 4 )
                v62 = *(int **)(tinfo_property + 8);
            }
            v63 = *v62;
          }
          if ( v63 == 14
            && (v100 = v34,
                v97 = v33,
                v91 = v44,
                v64 = sub_117CE0((__int64)v62, nullptr),
                v44 = v91,
                v33 = v97,
                v34 = v100,
                v64)
            && (v65 = sub_325150(*(_QWORD *)(*(_QWORD *)(v64 + 8) + 16LL), *(unsigned int *)(v64 + 4), 0),
                v44 = v91,
                v33 = v97,
                v34 = v100,
                (v46 = v65) != 0) )
          {
            if ( v91 )
            {
              v39 = v91 + v65;
              v45 = v91 % v65;
              if ( v91 % v65 )
              {
                if ( v65 % v45 )
                  goto LABEL_74;
              }
              else
              {
                v45 = v65;
              }
            }
            else
            {
              v39 = v65;
              v45 = v65;
            }
            if ( v45 == -1 )
              goto LABEL_74;
          }
          else
          {
LABEL_64:
            v39 = v44 + 1;
            v45 = 1;
            v46 = 1;
          }
          v103 = v34;
          v102 = v33;
          v99 = v44;
          v90 = v45;
          v47 = sub_117EC0(v45);
          v48 = v90;
          v44 = v99;
          v33 = v102;
          v34 = v103;
          v49 = v90;
          if ( !v47 )
          {
            v50 = 5;
            v49 = 16;
            while ( v46 % v49 )
            {
              v49 >>= 1;
              if ( !--v50 )
              {
                v48 = 0;
                v49 = 0;
                goto LABEL_70;
              }
            }
            v48 = v49;
          }
LABEL_70:
          if ( v93 / v48 > 1 && (!v94 || v49 < v94) )
            v94 = v49;
LABEL_74:
          if ( v93 < v39 )
            goto LABEL_57;
          if ( v38 < (int)((v93 - v44) / v46 * v46 + v44) )
            v38 = (v93 - v44) / v46 * v46 + v44;
          v35 += 40;
          if ( v37 == v35 )
            goto LABEL_78;
        }
      }
      v23 = *(_QWORD *)(v16 + 56);
      v24 = *(_DWORD *)(v16 + 76);
      if ( v24 != -1 )
        LODWORD(v23) = v23 + v24;
      v22 = (int)v23 - *(_DWORD *)(a1 + 176);
LABEL_33:
      v25 = *(_QWORD *)v16;
      if ( v18 < v22 )
        v18 = v22;
      if ( (v25 & 2) != 0 )
        goto LABEL_38;
      v26 = *(_QWORD *)(v16 + 16);
      if ( (*(_BYTE *)v26 & 2) != 0 )
        break;
      do
      {
        v16 = v26;
        v26 = *(_QWORD *)(v26 + 8);
      }
      while ( (*(_BYTE *)v26 & 2) == 0 );
LABEL_38:
      if ( *(_QWORD *)(a1 + 120) == v16 )
        goto LABEL_39;
    }
    v51 = (_QWORD *)(v25 & 0xFFFFFFFFFFFFFFFCLL);
    v52 = *v51;
    if ( (*v51 & 2) == 0 )
    {
      while ( v16 == v51[2] )
      {
        v16 = v52 & 0xFFFFFFFFFFFFFFFCLL;
        v52 = *(_QWORD *)(v52 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v52 & 2) != 0 )
        {
          if ( *(_QWORD *)(a1 + 120) != v16 )
            goto LABEL_23;
          goto LABEL_39;
        }
        v53 = v51;
        v51 = (_QWORD *)v16;
        v16 = (unsigned __int64)v53;
      }
    }
    v16 = (unsigned __int64)v51;
  }
  while ( *(_QWORD **)(a1 + 120) != v51 );
LABEL_39:
  v4 = a2;
  if ( v104 < v94 || v94 > 0 && v104 % v94 )
    v104 = v94;
  if ( v88 <= 0 )
    goto LABEL_101;
  v27 = sub_225B80(a1, &v105, v19, v94);
  v28 = v104;
  if ( !v27 )
  {
    if ( (get_tinfo_property() & 0xF) == 0xB )
    {
      if ( v28 )
      {
        if ( *(_DWORD *)(a1 + 196) > v28 )
          v88 = 2;
        goto LABEL_104;
      }
LABEL_103:
      v104 = 1;
      goto LABEL_104;
    }
LABEL_102:
    if ( v28 )
      goto LABEL_104;
    goto LABEL_103;
  }
  v18 = v105;
  tinfo_property = v105;
  if ( !v104 )
  {
    v94 = 1;
    v88 = 2;
    goto LABEL_103;
  }
  v29 = v105;
  while ( v29 % v28 )
  {
    do
      v28 /= 2;
    while ( v29 % v28 );
    v104 = v28;
    v30 = sub_225B80(a1, &tinfo_property, v19, v94);
    v28 = v104;
    if ( !v30 )
    {
      v18 = v105;
      goto LABEL_50;
    }
    v29 = tinfo_property;
    v105 = tinfo_property;
    if ( !v104 )
    {
      v18 = tinfo_property;
LABEL_50:
      v31 = 1;
      v88 = 2;
      if ( v104 > 0 )
        v31 = v104;
      v94 = v31;
      goto LABEL_102;
    }
  }
  v81 = 1;
  v18 = v105;
  v88 = 2;
  if ( v28 > 0 )
    v81 = v28;
  v94 = v81;
LABEL_104:
  if ( (get_tinfo_property() & 0xF) == 0xB )
    goto LABEL_110;
  if ( !v94 || (get_tinfo_property() & 0x2F) == 0xD )
  {
    if ( (unsigned __int8)*v4 )
    {
      v70 = get_tinfo_size();
      v57 = *(int *)(a1 + 196);
      if ( v57 != v70 )
        goto LABEL_110;
    }
    else
    {
      v57 = *(int *)(a1 + 196);
    }
    if ( v57 >= v105 || v105 == *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL) + 80LL) )
      return 0;
LABEL_110:
    if ( v88 > 1 || v94 )
      goto LABEL_112;
    return 0;
  }
LABEL_112:
  v58 = v104;
  if ( v105 <= v18 )
    v18 = v105;
  if ( v18 % v104 )
  {
    v18 = v105 - v105 % v104;
    if ( v18 + *(_QWORD *)(a1 + 176) < *(_QWORD *)(a1 + 128) )
      return 0;
  }
  v59 = v95;
  if ( v95 < (__int64)v104 )
    v59 = v104;
  v60 = 0;
  if ( v18 >= v59 )
  {
    if ( !(unsigned __int8)*(_QWORD *)(a1 + 168) )
      goto LABEL_160;
    v67 = *(_DWORD *)(a1 + 200);
    if ( (v67 & 2) == 0 || (v67 & 0x1418) != 0 || *(_QWORD *)(a1 + 184) != -1 )
      goto LABEL_188;
    v68 = get_tinfo_property();
    if ( (v68 & 0xFu) <= 0xA || (v68 & 0x3F) == 0x2D )
    {
      v69 = 0;
      goto LABEL_192;
    }
    if ( (unsigned __int8)*(_QWORD *)(a1 + 168) )
    {
LABEL_188:
      v78 = get_tinfo_property();
      tinfo_property = 0;
      if ( (v78 & 0xF) == 0xB )
        tinfo_property = get_tinfo_property();
      else
        copy_tinfo_t();
      v79 = get_tinfo_size();
      clear_tinfo_t();
      v69 = 0;
      if ( v79 >= 0 )
        v69 = v79;
    }
    else
    {
      v69 = 0;
      if ( (*(_BYTE *)(a1 + 200) & 1) != 0 )
      {
        v69 = *(_DWORD *)(a1 + 196);
        if ( v69 < 0 )
          v69 = 0;
      }
    }
LABEL_192:
    if ( v58 == v69 )
    {
      v107 = 0;
      copy_tinfo_t();
      goto LABEL_161;
    }
LABEL_160:
    sub_326800(&v107, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL), v58);
LABEL_161:
    if ( (get_tinfo_property() & 0xF) == 0xB )
    {
      tinfo_property = 0;
      tinfo_property = get_tinfo_property();
      copy_tinfo_t();
      clear_tinfo_t();
    }
    v71 = get_tinfo_size();
    clear_tinfo_t();
    if ( v71 > 0 )
    {
      if ( v71 == v18 )
      {
        v72 = v107;
        v107 = *(_QWORD *)(a1 + 168);
        *(_QWORD *)(a1 + 168) = v72;
      }
      else
      {
        v109 = 0;
        tinfo_property = 0;
        v110 = v18 / v71;
        copy_tinfo_t();
        create_tinfo();
        clear_tinfo_t();
      }
    }
    *(_DWORD *)(a1 + 196) = v18;
    clear_tinfo_t();
    return 1;
  }
  return v60;
}

