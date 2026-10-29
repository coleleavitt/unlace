unsigned __int64 __fastcall sub_1E7520(__int64 a1)
{
  __int64 v1; // r13
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v5; // rbp
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // r11
  int v9; // ecx
  _QWORD *v10; // r8
  _QWORD *v11; // rax
  _QWORD *v12; // r15
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rbp
  _QWORD *v16; // r12
  int v17; // r10d
  __int64 v18; // r14
  __int64 v19; // rax
  unsigned __int64 v20; // r9
  int v21; // r15d
  int *v22; // r11
  unsigned __int64 v23; // rcx
  unsigned int v24; // edx
  int v25; // esi
  int *v26; // rdi
  int v27; // eax
  unsigned __int64 v28; // rsi
  _QWORD *v29; // rdx
  __int64 v30; // rsi
  _QWORD *v31; // rdx
  int v32; // r8d
  unsigned int v33; // r9d
  __int64 v34; // rax
  _QWORD *v35; // rcx
  unsigned __int64 v36; // rax
  __int16 v37; // si
  int v38; // edx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdi
  __int64 j; // rbp
  _QWORD *v43; // rbx
  __int64 v44; // rax
  __int64 v45; // r15
  __int64 v46; // r14
  __int64 *v47; // rbp
  __int64 v48; // rdi
  __int64 v49; // r12
  __int64 k; // r13
  __int64 v51; // rbx
  __int64 v53; // rdx
  __int64 v54; // rcx
  int v55; // edx
  __int64 v56; // rcx
  __int64 v57; // rdx
  unsigned __int64 v58; // r12
  __int64 *v59; // rbp
  __int64 v60; // r14
  int v61; // r10d
  __int64 v62; // rdx
  unsigned __int64 v63; // r9
  int *v64; // r11
  unsigned __int64 v65; // rdx
  unsigned int v66; // eax
  int v67; // esi
  int *v68; // rcx
  int v69; // edi
  unsigned __int64 v70; // rsi
  _QWORD *v71; // rax
  __int64 v72; // rsi
  __int64 v73; // rax
  __int64 v74; // rdx
  int v75; // eax
  __int64 v76; // rdx
  _QWORD *v77; // rax
  __int64 v78; // rdx
  unsigned __int64 v79; // rsi
  __int64 v80; // [rsp+0h] [rbp-150h]
  int v81; // [rsp+8h] [rbp-148h]
  char v82; // [rsp+10h] [rbp-140h]
  __int64 v83; // [rsp+18h] [rbp-138h]
  int v84; // [rsp+24h] [rbp-12Ch]
  _QWORD *v85; // [rsp+28h] [rbp-128h]
  __int64 v86; // [rsp+30h] [rbp-120h]
  _QWORD *v87; // [rsp+38h] [rbp-118h]
  int v88; // [rsp+40h] [rbp-110h]
  __int64 v89; // [rsp+48h] [rbp-108h]
  __int64 i; // [rsp+58h] [rbp-F8h]
  __int64 v91; // [rsp+60h] [rbp-F0h]
  __int64 v92; // [rsp+78h] [rbp-D8h] BYREF
  __int128 v93; // [rsp+80h] [rbp-D0h]
  __int64 v94; // [rsp+90h] [rbp-C0h]
  __int128 v95; // [rsp+98h] [rbp-B8h]
  __int64 *v96; // [rsp+A8h] [rbp-A8h] BYREF
  _BYTE v97[24]; // [rsp+B0h] [rbp-A0h] BYREF
  __int64 v98; // [rsp+C8h] [rbp-88h]
  __int128 v99; // [rsp+D0h] [rbp-80h]
  __int64 v100; // [rsp+E0h] [rbp-70h]
  __int64 v101; // [rsp+E8h] [rbp-68h]
  __int64 v102; // [rsp+F0h] [rbp-60h]
  __int128 v103; // [rsp+F8h] [rbp-58h]
  unsigned __int64 v104; // [rsp+110h] [rbp-40h]

  v1 = *(int *)(a1 + 64);
  v104 = __readfsqword(0x28u);
  v93 = 0;
  v92 = 0;
  v94 = 0;
  i = 0;
  v96 = &v92;
  memset(v97, 0, sizeof(v97));
  v98 = 0;
  v100 = 0;
  v101 = 0;
  v102 = 0;
  v95 = 0;
  v91 = 0;
  v99 = 0;
  v103 = 0;
  if ( v1 )
  {
    v3 = qvector_reserve();
    v4 = 0;
    for ( i = v3; ; v3 = i )
    {
      sub_1E73C0(v3 + 96 * v4++, (__int64 *)&v96);
      if ( v1 == v4 )
        break;
    }
    v91 = v1;
    if ( v102 )
    {
      *(_QWORD *)&v103 = 0;
      qfree();
    }
  }
  qfree();
  if ( v98 )
  {
    *(_QWORD *)&v99 = 0;
    qfree();
  }
  if ( *(_QWORD *)v97 )
  {
    *(_QWORD *)&v97[8] = 0;
    qfree();
  }
  v5 = 0;
  if ( *(int *)(a1 + 64) > 0 )
  {
    do
    {
      sub_1E70C0(*(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v5), i + 96 * v5);
      v6 = *(_DWORD *)(a1 + 64);
      if ( v6 <= (int)v5 + 1 )
        goto LABEL_13;
      ++v5;
    }
    while ( (unsigned int)v5 < v6 );
    if ( !under_debugger )
      sub_37E160(52719);
LABEL_133:
    BUG();
  }
LABEL_13:
  v7 = sub_62EE0((_QWORD *)a1);
  v83 = sub_10C140(v7, 0);
  if ( !v83 )
  {
    if ( !under_debugger )
      sub_37E160(50446);
    goto LABEL_133;
  }
  ++*(_DWORD *)(v83 + 24);
  v96 = nullptr;
  memset(v97, 0, 20);
  nullsub_40();
  sub_62A80((__int64 *)&v96);
  v8 = 0;
  v9 = 0;
  if ( *(int *)(a1 + 64) > 0 )
  {
    while ( 1 )
    {
      v10 = (_QWORD *)(v8 + *(_QWORD *)v83);
      v11 = (_QWORD *)*v10;
      if ( *v10 )
      {
        if ( v10[1] )
        {
          v12 = (_QWORD *)v11[1];
          if ( v12 != v11 )
            break;
        }
      }
LABEL_38:
      ++v9;
      v8 += 24;
      if ( *(_DWORD *)(a1 + 64) <= v9 )
        goto LABEL_39;
    }
    v89 = 4 * v8;
LABEL_19:
    if ( v12[4] != 1 )
      goto LABEL_34;
    v13 = *(int *)v12[3];
    if ( !(_DWORD)v13 )
      goto LABEL_34;
    v82 = *((_BYTE *)v12 + 56);
    if ( v82 == 1 )
    {
      v80 = *((int *)v12 + 12);
    }
    else
    {
      if ( v82 != 5 )
      {
        if ( !under_debugger )
          sub_37E160(51893);
        goto LABEL_133;
      }
      v80 = v12[6];
    }
    v14 = i + 96 * v13;
    v81 = *((_DWORD *)v12 + 16);
    v15 = *(_QWORD *)(v14 + 16);
    if ( !v15 )
      goto LABEL_34;
    v16 = *(_QWORD **)v14;
    v84 = v9;
    v17 = 0;
    v85 = v10;
    v18 = *(_QWORD *)(v14 + 8);
    v19 = 0;
    v20 = v16[4];
    v86 = v8;
    v87 = v12;
    v21 = *((_DWORD *)v12 + 16);
    while ( 1 )
    {
      v22 = (int *)(v18 + 8 * v19);
      v23 = (unsigned int)*v22;
      v24 = *v22;
      if ( v23 >= v20 )
      {
        v27 = *v22;
        v25 = 0;
      }
      else
      {
        v25 = 0;
        while ( 1 )
        {
          v26 = (int *)(v16[3] + 8 * v23);
          v27 = v24;
          v24 = *v26;
          if ( *v26 == v27 )
            break;
          v23 = v24;
          v25 += v26[1];
          if ( v24 >= v20 )
          {
            v27 = *v26;
            break;
          }
        }
      }
      v28 = (unsigned int)(v22[1] + v25);
      v29 = (_QWORD *)(*v16 + 24 * v23);
      if ( v28 >= v29[1] )
      {
        if ( !under_debugger )
          sub_37E160(51105);
        goto LABEL_133;
      }
      v30 = *v29 + (v28 << 6);
      if ( *(_BYTE *)(v30 + 56) )
      {
        v53 = *(_QWORD *)(v30 + 8);
        if ( *(_BYTE *)v53 == 1 )
        {
          v56 = *(int *)(v53 + 8);
          v55 = *(_DWORD *)(v53 + 4);
          if ( v82 != 1 )
            goto LABEL_32;
        }
        else
        {
          if ( *(_BYTE *)v53 != 5 || v82 != 5 )
            goto LABEL_32;
          v54 = *(_QWORD *)(v53 + 8);
          v55 = *(_DWORD *)(v53 + 4);
          v56 = *(_QWORD *)(v54 + 8);
        }
        if ( v80 >= v56 && v80 <= v56 && v55 >= v21 )
        {
          v9 = v84;
          v8 = v86;
          v12 = v87;
          if ( v27 == -1 )
            goto LABEL_34;
          v57 = v89 + i;
          v58 = *(_QWORD *)(v89 + i + 40);
          if ( !v58 )
            goto LABEL_34;
          v59 = *(__int64 **)v57;
          v60 = *(_QWORD *)(v57 + 32);
          v88 = v27;
          v61 = 0;
          v62 = 0;
          v63 = v59[4];
          while ( 2 )
          {
            v64 = (int *)(v60 + 8 * v62);
            v65 = (unsigned int)*v64;
            v66 = *v64;
            if ( v65 >= v63 )
            {
              v69 = *v64;
              v67 = 0;
            }
            else
            {
              v67 = 0;
              while ( 1 )
              {
                v68 = (int *)(v59[3] + 8 * v65);
                v69 = v66;
                v66 = *v68;
                if ( *v68 == v69 )
                  break;
                v65 = v66;
                v67 += v68[1];
                if ( v66 >= v63 )
                {
                  v69 = *v68;
                  break;
                }
              }
            }
            v70 = (unsigned int)(v64[1] + v67);
            v71 = (_QWORD *)(*v59 + 24 * v65);
            if ( v70 >= v71[1] )
            {
              if ( !under_debugger )
                sub_37E160(51105);
              goto LABEL_133;
            }
            v72 = *v71 + (v70 << 6);
            if ( *(_BYTE *)(v72 + 56) )
              goto LABEL_96;
            v73 = *(_QWORD *)(v72 + 8);
            if ( *(_BYTE *)v73 == 1 )
            {
              v76 = *(int *)(v73 + 8);
              v75 = *(_DWORD *)(v73 + 4);
              if ( v82 == 1 )
                goto LABEL_104;
LABEL_96:
              v62 = ++v61;
              if ( v61 >= v58 )
              {
                v9 = v84;
                v8 = v86;
                goto LABEL_34;
              }
              continue;
            }
            break;
          }
          if ( *(_BYTE *)v73 != 5 || v82 != 5 )
            goto LABEL_96;
          v74 = *(_QWORD *)(v73 + 8);
          v75 = *(_DWORD *)(v73 + 4);
          v76 = *(_QWORD *)(v74 + 8);
LABEL_104:
          if ( v80 < v76 || v80 > v76 || v75 > v81 )
            goto LABEL_96;
          v9 = v84;
          v8 = v86;
          if ( v69 != -1 )
          {
            sub_1E6890(v59, v69, v88);
            v8 = v86;
            v10 = v85;
            v9 = v84;
          }
LABEL_34:
          if ( (*v12 & 2) != 0 )
          {
LABEL_37:
            if ( (_QWORD *)*v10 == v12 )
              goto LABEL_38;
          }
          else
          {
            v31 = (_QWORD *)v12[2];
            if ( (*(_BYTE *)v31 & 2) == 0 )
            {
              do
              {
                v12 = v31;
                v31 = (_QWORD *)v31[1];
              }
              while ( (*(_BYTE *)v31 & 2) == 0 );
              goto LABEL_37;
            }
            v77 = (_QWORD *)(*v12 & 0xFFFFFFFFFFFFFFFCLL);
            v78 = *v77;
            if ( (*v77 & 2) != 0 )
            {
LABEL_111:
              v12 = v77;
              if ( (_QWORD *)*v10 == v77 )
                goto LABEL_38;
            }
            else
            {
              while ( 1 )
              {
                if ( v12 != (_QWORD *)v77[2] )
                  goto LABEL_111;
                v12 = v77;
                v79 = v78 & 0xFFFFFFFFFFFFFFFCLL;
                v78 = *(_QWORD *)(v78 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v78 & 2) != 0 )
                  break;
                v77 = (_QWORD *)v79;
              }
              v12 = (_QWORD *)v79;
              if ( *v10 == v79 )
                goto LABEL_38;
            }
          }
          goto LABEL_19;
        }
      }
LABEL_32:
      v19 = ++v17;
      if ( v17 >= v15 )
      {
        v9 = v84;
        v8 = v86;
        v12 = v87;
        goto LABEL_34;
      }
    }
  }
LABEL_39:
  v32 = 0;
  v33 = 0;
  v34 = 0;
  if ( (_QWORD)v93 )
  {
    while ( 1 )
    {
      v35 = (_QWORD *)(v92 + 24 * v34);
      v36 = v35[1];
      if ( v36 > 1 )
        break;
      v37 = 0;
      if ( v36 )
        goto LABEL_43;
LABEL_48:
      v34 = ++v32;
      if ( v32 >= (unsigned __int64)v93 )
        goto LABEL_49;
    }
    ++v33;
    v37 = 0;
    if ( v33 <= 0xFFFF )
      v37 = v33;
LABEL_43:
    v38 = 0;
    v39 = 0;
    do
    {
      while ( 1 )
      {
        v40 = *(_QWORD *)(*v35 + (v39 << 6) + 8);
        if ( *(_BYTE *)v40 == 1 && *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 60LL) == *(_DWORD *)(v40 + 8) )
          break;
        ++v38;
        *(_WORD *)(v40 + 2) = v37;
        v39 = v38;
        if ( (unsigned __int64)v38 >= v35[1] )
          goto LABEL_48;
      }
      v39 = ++v38;
    }
    while ( (unsigned __int64)v38 < v35[1] );
    goto LABEL_48;
  }
LABEL_49:
  sub_100C10(v83);
  v41 = i;
  if ( i )
  {
    if ( v91 )
    {
      for ( j = 0; j != v91; ++j )
      {
        v43 = (_QWORD *)(v41 + 96 * j);
        if ( v43[9] )
        {
          v43[10] = 0;
          qfree();
        }
        qfree();
        if ( v43[4] )
        {
          v43[5] = 0;
          qfree();
        }
        if ( v43[1] )
        {
          v43[2] = 0;
          qfree();
        }
        v41 = i;
      }
    }
    qfree();
  }
  if ( v94 )
  {
    *(_QWORD *)&v95 = 0;
    qfree();
  }
  v44 = v92;
  if ( v92 )
  {
    v45 = v93;
    if ( (_QWORD)v93 )
    {
      v46 = 0;
      do
      {
        v47 = (__int64 *)(v44 + 24 * v46);
        v48 = *v47;
        if ( *v47 )
        {
          v49 = v47[1];
          if ( v49 )
          {
            for ( k = 0; k != v49; ++k )
            {
              v51 = v48 + (k << 6);
              if ( *(_QWORD *)(v51 + 32) )
              {
                *(_QWORD *)(v51 + 40) = 0;
                qfree();
              }
              qfree();
              v48 = *v47;
            }
          }
          v47[1] = 0;
          qfree();
          v44 = v92;
        }
        ++v46;
      }
      while ( v45 != v46 );
    }
    *(_QWORD *)&v93 = 0;
    qfree();
  }
  return v104 - __readfsqword(0x28u);
}

