__int64 __fastcall sub_27C70(_DWORD *a1, __int64 a2, unsigned __int64 **a3)
{
  unsigned __int64 *v3; // rbx
  __int64 v4; // r12
  _DWORD *v5; // r13
  int v7; // edx
  int v8; // ecx
  int v9; // eax
  unsigned __int64 *v10; // rcx
  unsigned __int64 *v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // r8
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rsi
  int v16; // edx
  __int64 v17; // rax
  _QWORD *v18; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 *v22; // r8
  _QWORD *v23; // rsi
  __int64 v24; // rax
  _QWORD *v25; // rdi
  unsigned __int64 v26; // r8
  int v27; // edx
  unsigned __int64 v28; // r8
  int v29; // edx
  unsigned __int64 v30; // r8
  int v31; // edx
  unsigned __int64 v32; // r8
  int v33; // edx
  unsigned __int64 v34; // r8
  int v35; // edx
  unsigned __int64 v36; // r8
  int v37; // edx
  unsigned int v38; // r15d
  __int16 v40; // ax
  int v41; // esi
  __int16 v42; // ax
  int v43; // esi
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rsi
  unsigned __int64 v46; // rcx
  __int64 v47; // rcx
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // rsi
  unsigned __int64 v50; // rcx
  __int64 v51; // rcx
  unsigned __int64 v52; // rcx
  unsigned __int64 v53; // rsi
  unsigned __int64 v54; // rcx
  __int64 v55; // rcx
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // rsi
  unsigned __int64 v58; // rcx
  __int64 v59; // rcx
  unsigned __int64 v60; // rcx
  unsigned __int64 v61; // rsi
  unsigned __int64 v62; // rcx
  __int64 v63; // rcx
  unsigned __int64 v64; // rcx
  unsigned __int64 v65; // rsi
  unsigned __int64 v66; // rcx
  __int64 v67; // rcx
  unsigned __int64 v68; // rdi
  unsigned __int64 v69; // rax
  int v70; // esi
  __int64 v71; // rdx
  _QWORD *v72; // rdx
  unsigned __int64 v73; // rcx
  __int64 v74; // r15
  __int64 v75; // rax
  _QWORD *v76; // rsi
  unsigned __int64 v77; // rax
  __int64 v78; // rax
  __int64 *v79; // [rsp+8h] [rbp-70h]
  _QWORD *v80; // [rsp+20h] [rbp-58h]
  __int128 v81; // [rsp+28h] [rbp-50h]

  v7 = a1[99];
  *(_WORD *)(a2 + 56) = v7;
  v8 = a1[104];
  *(_WORD *)(a2 + 88) = v8;
  v9 = a1[105];
  *(_WORD *)(a2 + 120) = v9;
  if ( (_WORD)v8 == 0 || (_WORD)v7 == 0 || !(_WORD)v9 )
  {
    if ( under_debugger )
      BUG();
    v12 = interr();
    goto LABEL_167;
  }
  v10 = a3[1];
  v11 = *a3;
  v5 = a1;
  v4 = a2;
  v81 = 0;
  v80 = nullptr;
  v3 = *a3;
  if ( !(16LL * (_QWORD)v10) )
  {
    *(_QWORD *)(a2 + 48) = 0;
    v38 = 1;
    *(_QWORD *)(a2 + 240) = 0;
    *(_QWORD *)(a2 + 272) = 0;
    *(_QWORD *)(a2 + 400) = 0;
    *(_QWORD *)(a2 + 432) = 0;
    *(_QWORD *)(a2 + 464) = 0;
    return v38;
  }
  while ( 1 )
  {
    v12 = *v3;
    if ( *v3 <= 0x20 )
      break;
    if ( v12 == 1879048176 )
    {
      v13 = 14;
      goto LABEL_10;
    }
    if ( v12 > 0x6FFFFFF0 )
    {
      if ( v12 == 1879048188 )
      {
        v13 = 12;
        goto LABEL_10;
      }
      v13 = 13;
      if ( v12 == 1879048190 )
        goto LABEL_10;
    }
    else
    {
      switch ( v12 )
      {
        case 0x60000011uLL:
          v42 = *((_WORD *)v5 + 261);
          if ( v42 == 40 || v42 == 183 )
          {
            v13 = 5;
            goto LABEL_10;
          }
          goto LABEL_19;
        case 0x6FFFFEF5uLL:
          v13 = 8;
          goto LABEL_10;
        case 0x6000000FuLL:
          v40 = *((_WORD *)v5 + 261);
          if ( v40 == 40 || v40 == 183 )
          {
            v13 = 4;
LABEL_10:
            v14 = *((_QWORD *)v5 + 73);
            v15 = v3[1];
            if ( v14 )
            {
              v16 = 0;
              v17 = 0;
              while ( 1 )
              {
                v18 = (_QWORD *)(*((_QWORD *)v5 + 72) + 24 * v17);
                v19 = v18[2];
                if ( v15 >= v19 && v15 < v19 + v18[1] )
                  break;
                v17 = ++v16;
                if ( v16 >= v14 )
                  goto LABEL_15;
              }
              v20 = *v18 + (unsigned int)(v15 - v19);
              v21 = v20;
            }
            else
            {
LABEL_15:
              v20 = -1;
              v21 = -1;
            }
            v22 = (__int64 *)(v4 + 32 * v13);
            v23 = v80;
            *v22 = v21;
            v24 = v81;
            if ( *((_QWORD *)&v81 + 1) < (unsigned __int64)(v81 + 1) )
            {
              v79 = v22;
              v80 = (_QWORD *)qvector_reserve();
              v23 = v80;
              v22 = v79;
              v24 = v81;
            }
            v23[v24] = v20;
            *(_QWORD *)&v81 = v81 + 1;
            v22[1] = v3[1];
            v11 = *a3;
            v10 = a3[1];
            goto LABEL_19;
          }
          goto LABEL_19;
        case 0x21uLL:
          v43 = 9;
LABEL_71:
          *(_QWORD *)(v4 + 32LL * v43 + 16) = v3[1];
          v11 = *a3;
          v10 = a3[1];
          goto LABEL_19;
        case 0x60000010uLL:
          v43 = 4;
          goto LABEL_71;
      }
      v43 = 5;
      if ( v12 == 1610612754 )
        goto LABEL_71;
    }
    v41 = 12;
    if ( v12 != 1879048189 )
    {
      if ( v12 != 1879048191 )
        goto LABEL_167;
      v41 = 13;
    }
    *(_DWORD *)(v4 + 32LL * v41 + 28) = v3[1];
    v11 = *a3;
    v10 = a3[1];
LABEL_19:
    v3 += 2;
    if ( v3 == &v11[2 * (_QWORD)v10] )
      goto LABEL_20;
  }
  if ( v12 > 3 )
  {
    switch ( v12 )
    {
      case 4uLL:
        v13 = 7;
        goto LABEL_10;
      case 5uLL:
        v13 = 0;
        goto LABEL_10;
      case 6uLL:
        v13 = 1;
        goto LABEL_10;
      case 7uLL:
        v13 = 3;
        goto LABEL_10;
      case 0x11uLL:
        v13 = 2;
        goto LABEL_10;
      case 0x17uLL:
        v13 = 6;
        goto LABEL_10;
      case 0x19uLL:
        v13 = 10;
        goto LABEL_10;
      case 0x1AuLL:
        v13 = 11;
        goto LABEL_10;
      case 0x20uLL:
        v13 = 9;
        goto LABEL_10;
      default:
        goto LABEL_8;
    }
  }
  if ( v12 > 1 )
  {
LABEL_8:
    switch ( v12 )
    {
      case 2uLL:
        v43 = 6;
        goto LABEL_71;
      case 8uLL:
        v43 = 3;
        goto LABEL_71;
      case 0xAuLL:
        v43 = 0;
        goto LABEL_71;
      case 0x12uLL:
        v43 = 2;
        goto LABEL_71;
      case 0x1BuLL:
        v43 = 10;
        goto LABEL_71;
      case 0x1CuLL:
        v43 = 11;
        goto LABEL_71;
      default:
        switch ( v12 )
        {
          case 0xBuLL:
            v78 = 1;
            break;
          case 0x13uLL:
            v78 = 2;
            break;
          case 9uLL:
            v78 = 3;
            break;
          default:
            if ( v12 <= 0xD )
            {
              v68 = *((_QWORD *)v5 + 73);
              v69 = v3[1];
              if ( v68 )
              {
                v70 = 0;
                v71 = 0;
                while ( 1 )
                {
                  v72 = (_QWORD *)(*((_QWORD *)v5 + 72) + 24 * v71);
                  v73 = v72[2];
                  if ( v69 >= v73 && v69 < v73 + v72[1] )
                    break;
                  v71 = ++v70;
                  if ( v70 >= v68 )
                    goto LABEL_141;
                }
                v74 = *v72 + (unsigned int)(v69 - v73);
              }
              else
              {
LABEL_141:
                v74 = -1;
              }
              v75 = v81;
              v76 = v80;
              if ( *((_QWORD *)&v81 + 1) < (unsigned __int64)(v81 + 1) )
              {
                v80 = (_QWORD *)qvector_reserve();
                v76 = v80;
                v75 = v81;
              }
              v76[v75] = v74;
              *(_QWORD *)&v81 = v81 + 1;
LABEL_154:
              v11 = *a3;
              v10 = a3[1];
              goto LABEL_19;
            }
            if ( v12 == 20 )
            {
              v77 = v3[1];
              *(_DWORD *)(v4 + 480) = v77;
              if ( (_DWORD)v77 != 17 && (_DWORD)v77 != 7 )
              {
                v38 = (*((__int64 (__fastcall **)(_DWORD *, __int64, _QWORD))v5 + 62))(v5, 15, (unsigned int)v77);
                if ( !(_BYTE)v38 )
                {
                  v25 = v80;
                  goto LABEL_40;
                }
              }
              goto LABEL_154;
            }
            goto LABEL_19;
        }
        *(_WORD *)(v4 + 32 * v78 + 24) = v3[1];
        v11 = *a3;
        v10 = a3[1];
        goto LABEL_19;
    }
  }
LABEL_167:
  if ( v12 )
    goto LABEL_19;
LABEL_20:
  v25 = v80;
  *(_QWORD *)(v4 + 48) = -1;
  if ( !(_QWORD)v81 )
  {
    *(_QWORD *)(v4 + 48) = 0;
    *(_QWORD *)(v4 + 240) = 0;
    *(_QWORD *)(v4 + 272) = 0;
    *(_QWORD *)(v4 + 400) = 0;
    *(_QWORD *)(v4 + 432) = 0;
    goto LABEL_38;
  }
  v26 = *(_QWORD *)(v4 + 32);
  v27 = 0;
  if ( v26 )
  {
    v48 = *v80;
    v49 = -1;
    while ( 1 )
    {
      if ( v26 < v48 )
      {
        v50 = v48 - v26;
        if ( v49 > v50 )
          v49 = v50;
        v51 = ++v27;
        *(_QWORD *)(v4 + 48) = v49;
        if ( v27 >= (unsigned __int64)v81 )
        {
LABEL_91:
          if ( v49 == -1 )
            goto LABEL_23;
          goto LABEL_24;
        }
      }
      else
      {
        v51 = ++v27;
        if ( v27 >= (unsigned __int64)v81 )
          goto LABEL_91;
      }
      v48 = v80[v51];
    }
  }
  do
    ++v27;
  while ( v27 < (unsigned __int64)v81 );
LABEL_23:
  *(_QWORD *)(v4 + 48) = 0;
LABEL_24:
  v28 = *(_QWORD *)(v4 + 224);
  v29 = 0;
  *(_QWORD *)(v4 + 240) = -1;
  if ( v28 )
  {
    v44 = *v80;
    v45 = -1;
    while ( 1 )
    {
      if ( v28 < v44 )
      {
        v46 = v44 - v28;
        if ( v45 > v46 )
          v45 = v46;
        v47 = ++v29;
        *(_QWORD *)(v4 + 240) = v45;
        if ( v29 >= (unsigned __int64)v81 )
        {
LABEL_82:
          if ( v45 == -1 )
            goto LABEL_26;
          goto LABEL_27;
        }
      }
      else
      {
        v47 = ++v29;
        if ( v29 >= (unsigned __int64)v81 )
          goto LABEL_82;
      }
      v44 = v80[v47];
    }
  }
  do
    ++v29;
  while ( v29 < (unsigned __int64)v81 );
LABEL_26:
  *(_QWORD *)(v4 + 240) = 0;
LABEL_27:
  v30 = *(_QWORD *)(v4 + 256);
  v31 = 0;
  *(_QWORD *)(v4 + 272) = -1;
  if ( v30 )
  {
    v64 = *v80;
    v65 = -1;
    while ( 1 )
    {
      if ( v30 < v64 )
      {
        v66 = v64 - v30;
        if ( v65 > v66 )
          v65 = v66;
        v67 = ++v31;
        *(_QWORD *)(v4 + 272) = v65;
        if ( v31 >= (unsigned __int64)v81 )
        {
LABEL_127:
          if ( v65 == -1 )
            goto LABEL_29;
          goto LABEL_30;
        }
      }
      else
      {
        v67 = ++v31;
        if ( v31 >= (unsigned __int64)v81 )
          goto LABEL_127;
      }
      v64 = v80[v67];
    }
  }
  do
    ++v31;
  while ( v31 < (unsigned __int64)v81 );
LABEL_29:
  *(_QWORD *)(v4 + 272) = 0;
LABEL_30:
  v32 = *(_QWORD *)(v4 + 384);
  v33 = 0;
  *(_QWORD *)(v4 + 400) = -1;
  if ( v32 )
  {
    v60 = *v80;
    v61 = -1;
    while ( 1 )
    {
      if ( v32 < v60 )
      {
        v62 = v60 - v32;
        if ( v61 > v62 )
          v61 = v62;
        v63 = ++v33;
        *(_QWORD *)(v4 + 400) = v61;
        if ( v33 >= (unsigned __int64)v81 )
        {
LABEL_118:
          if ( v61 == -1 )
            goto LABEL_32;
          goto LABEL_33;
        }
      }
      else
      {
        v63 = ++v33;
        if ( v33 >= (unsigned __int64)v81 )
          goto LABEL_118;
      }
      v60 = v80[v63];
    }
  }
  do
    ++v33;
  while ( v33 < (unsigned __int64)v81 );
LABEL_32:
  *(_QWORD *)(v4 + 400) = 0;
LABEL_33:
  v34 = *(_QWORD *)(v4 + 416);
  v35 = 0;
  *(_QWORD *)(v4 + 432) = -1;
  if ( v34 )
  {
    v56 = *v80;
    v57 = -1;
    while ( 1 )
    {
      if ( v34 < v56 )
      {
        v58 = v56 - v34;
        if ( v57 > v58 )
          v57 = v58;
        v59 = ++v35;
        *(_QWORD *)(v4 + 432) = v57;
        if ( v35 >= (unsigned __int64)v81 )
        {
LABEL_109:
          if ( v57 == -1 )
            goto LABEL_35;
          goto LABEL_36;
        }
      }
      else
      {
        v59 = ++v35;
        if ( v35 >= (unsigned __int64)v81 )
          goto LABEL_109;
      }
      v56 = v80[v59];
    }
  }
  do
    ++v35;
  while ( v35 < (unsigned __int64)v81 );
LABEL_35:
  *(_QWORD *)(v4 + 432) = 0;
LABEL_36:
  v36 = *(_QWORD *)(v4 + 448);
  v37 = 0;
  *(_QWORD *)(v4 + 464) = -1;
  if ( v36 )
  {
    v52 = *v80;
    v53 = -1;
    while ( 1 )
    {
      if ( v36 < v52 )
      {
        v54 = v52 - v36;
        if ( v53 > v54 )
          v53 = v54;
        v55 = ++v37;
        *(_QWORD *)(v4 + 464) = v53;
        if ( v37 >= (unsigned __int64)v81 )
        {
LABEL_100:
          if ( v53 == -1 )
            goto LABEL_38;
          goto LABEL_39;
        }
      }
      else
      {
        v55 = ++v37;
        if ( v37 >= (unsigned __int64)v81 )
          goto LABEL_100;
      }
      v52 = v80[v55];
    }
  }
  do
    ++v37;
  while ( v37 < (unsigned __int64)v81 );
LABEL_38:
  *(_QWORD *)(v4 + 464) = 0;
LABEL_39:
  v38 = 1;
LABEL_40:
  if ( v25 )
    qfree();
  return v38;
}

