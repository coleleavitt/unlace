void __fastcall boost::beast::http::basic_fields<std::allocator<char>>::erase(_QWORD *a1, unsigned __int16 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbp
  _QWORD *v6; // r13
  char **v7; // r12
  char *v8; // r11
  char *v9; // r10
  char *v10; // r14
  __int64 v11; // rdx
  char *v12; // rcx
  char *v13; // rbx
  char *v14; // r9
  char *v15; // r8
  char *v16; // rdi
  char v17; // si
  int v18; // edx
  char *v19; // r9
  char *v20; // r8
  char v21; // si
  int v22; // edx
  __int64 v23; // rcx
  _QWORD *v24; // rbx
  _QWORD *v25; // r13
  unsigned __int64 v26; // rax
  char *v27; // r9
  __int64 v28; // rdx
  char *v29; // rdi
  char *v30; // r8
  char v31; // si
  int v32; // edx
  __int64 v33; // r12
  unsigned __int64 v34; // rdx
  char *v35; // rsi
  char *v36; // r8
  char *v37; // r9
  char v38; // cl
  int v39; // edx
  _QWORD *v40; // r8
  _QWORD *v41; // r9
  _QWORD *v42; // rcx
  _QWORD *v43; // rdx
  _QWORD *v44; // r12
  _QWORD *v45; // r10
  _QWORD *v46; // rdi
  _QWORD *v47; // rcx
  _QWORD *v48; // rsi
  _QWORD *v49; // r11
  _QWORD *v50; // rdx
  int v51; // r8d
  int v52; // ecx
  __int64 v53; // rdx
  _QWORD *v54; // rcx
  _QWORD *v55; // rsi
  _QWORD *v56; // rcx
  _QWORD *v57; // rdi
  _QWORD *v58; // rsi
  _QWORD *v59; // rcx
  _QWORD *v60; // rdi
  _QWORD *v61; // r9
  _QWORD *v62; // rcx
  _QWORD *v63; // r8
  _QWORD *v64; // rdi
  _QWORD *v65; // r9
  __int64 v66; // rdi
  __int64 v67; // r8
  _QWORD *v68; // rcx
  _QWORD *v69; // r8
  _QWORD *v70; // rdi
  _QWORD *v71; // r9
  __int64 v72; // rdi
  __int64 v73; // r8
  _QWORD *v74; // rdi
  _QWORD *v75; // r8
  _QWORD *v76; // r9
  _QWORD *i; // rcx
  _QWORD *v78; // r8
  _QWORD *v79; // r9
  _QWORD *v80; // r10
  _QWORD *v81; // r8
  __int64 v82; // rsi
  int **v83; // rdi
  unsigned __int64 v84; // r10
  int *v85; // r11
  int *v86; // rdx
  __int64 v87; // r13
  unsigned int v88; // eax
  int v89; // ecx
  int v90; // eax
  _QWORD *v91; // r8
  _QWORD *v92; // r9
  _QWORD *v93; // r10

  if ( !LOBYTE(`guard variable for'boost::beast::http::detail::get_field_table(void)::tab[0])
    && __cxa_guard_acquire(`guard variable for'boost::beast::http::detail::get_field_table(void)::tab) )
  {
    qmemcpy(boost::beast::http::detail::get_field_table(void)::tab, &off_448080, 0x810u);
    v82 = 1;
    memset(&boost::beast::http::detail::get_field_table(void)::tab[2064], 0, 0x550u);
    *(_DWORD *)&boost::beast::http::detail::get_field_table(void)::tab[3424] = 0;
    *(_WORD *)&boost::beast::http::detail::get_field_table(void)::tab[3428] = 0;
    boost::beast::http::detail::get_field_table(void)::tab[3430] = 0;
    v83 = (int **)&boost::beast::http::detail::get_field_table(void)::tab[16];
    do
    {
      v84 = (unsigned __int64)v83[1];
      v85 = *v83;
      if ( v84 <= 3 )
      {
        v88 = 0;
      }
      else
      {
        v86 = *v83;
        v87 = (v84 >> 2) - 1;
        v88 = 0;
        do
        {
          v89 = 5 * v88;
          v90 = *v86++;
          v88 = v89 + (v90 | 0x20202020);
        }
        while ( v86 != &v85[v84 >> 2] );
        v84 = (unsigned __int64)v83[1] & 3;
        v85 += v87 + 1;
      }
      if ( v84 )
      {
        v88 = 5 * v88 + (*(_BYTE *)v85 | 0x20);
        if ( v84 != 1 )
        {
          v88 = 5 * v88 + (*((_BYTE *)v85 + 1) | 0x20);
          if ( v84 != 2 )
            v88 = 5 * v88 + (*((_BYTE *)v85 + 2) | 0x20);
        }
      }
      v83 += 2;
      boost::beast::http::detail::get_field_table(void)::tab[v88 % 0x557 + 2064] = v82++;
    }
    while ( v82 != 129 );
    __cxa_guard_release(`guard variable for'boost::beast::http::detail::get_field_table(void)::tab);
  }
  v4 = (_QWORD *)*a1;
  if ( *a1 )
  {
    v5 = a1;
    v6 = a1;
    v7 = (char **)&boost::beast::http::detail::get_field_table(void)::tab[16 * a2];
    v8 = *v7;
    v9 = v7[1];
    v10 = &v9[(_QWORD)*v7];
    while ( 1 )
    {
      v11 = *((unsigned __int16 *)v4 + 16) - 2;
      if ( v11 < (unsigned __int64)v9 )
        goto LABEL_16;
      if ( (unsigned __int64)v9 < v11 )
        goto LABEL_20;
      v12 = (char *)(v4 + 5);
      v13 = (char *)v4 + v11 + 40;
      if ( (__int64)v9 >= v11 )
        break;
      v14 = &v9[(_QWORD)v12];
      if ( v12 != &v9[(_QWORD)v12] )
        goto LABEL_8;
      v19 = *v7;
      if ( v8 == v10 )
        goto LABEL_26;
LABEL_16:
      v4 = (_QWORD *)v4[2];
LABEL_17:
      if ( !v4 )
        return;
    }
    if ( v12 == v13 )
    {
      v15 = *v7;
LABEL_37:
      if ( v10 == v15 )
        goto LABEL_24;
      goto LABEL_16;
    }
    v14 = (char *)v4 + v11 + 40;
LABEL_8:
    v15 = *v7;
    v16 = (char *)(v4 + 5);
    while ( 1 )
    {
      v17 = *v15;
      v18 = *v16;
      if ( (unsigned int)(v18 - 65) < 0x1A )
        LOBYTE(v18) = v18 + 32;
      if ( (unsigned int)(v17 - 65) < 0x1A )
        v17 += 32;
      if ( v17 > (char)v18 )
        goto LABEL_16;
      if ( v17 < (char)v18 )
        break;
      ++v16;
      ++v15;
      if ( v16 == v14 )
      {
        v11 = *((unsigned __int16 *)v4 + 16) - 2;
        goto LABEL_37;
      }
    }
    v11 = *((unsigned __int16 *)v4 + 16) - 2;
LABEL_24:
    v19 = &v8[v11];
    if ( (__int64)v9 <= v11 )
      v19 = &v9[(_QWORD)*v7];
LABEL_26:
    v20 = *v7;
    if ( v8 != v19 )
    {
      do
      {
        v21 = *v12;
        v22 = *v20;
        if ( (unsigned int)(v22 - 65) < 0x1A )
          LOBYTE(v22) = v22 + 32;
        if ( (unsigned int)(v21 - 65) < 0x1A )
          v21 += 32;
        if ( v21 > (char)v22 )
          goto LABEL_20;
        if ( v21 < (char)v22 )
          goto LABEL_39;
        ++v20;
        ++v12;
      }
      while ( v20 != v19 );
    }
    if ( v13 != v12 )
    {
LABEL_20:
      v5 = v4;
      v4 = (_QWORD *)v4[1];
      goto LABEL_17;
    }
LABEL_39:
    v23 = v4[2];
    v24 = v6;
    if ( !v23 )
      goto LABEL_57;
    v25 = v4;
    while ( 2 )
    {
      v26 = *(unsigned __int16 *)(v23 + 32) - 2;
      if ( (unsigned __int64)v9 < v26 )
      {
LABEL_54:
        v5 = (_QWORD *)v23;
        v23 = *(_QWORD *)(v23 + 8);
      }
      else
      {
        if ( v26 >= (unsigned __int64)v9 )
        {
          v27 = &v8[v26];
          v28 = v23 + 40;
          v29 = *v7;
          if ( (__int64)v26 >= (__int64)v9 )
            v27 = &v9[(_QWORD)*v7];
          v30 = (char *)(v23 + 40);
          if ( v8 != v27 )
          {
            while ( 1 )
            {
              v31 = *v30;
              v32 = *v29;
              if ( (unsigned int)(v32 - 65) < 0x1A )
                LOBYTE(v32) = v32 + 32;
              if ( (unsigned int)(v31 - 65) < 0x1A )
                v31 += 32;
              if ( v31 > (char)v32 )
                goto LABEL_54;
              if ( v31 < (char)v32 )
                goto LABEL_144;
              ++v29;
              ++v30;
              if ( v29 == v27 )
              {
                v28 = v23 + 40;
                break;
              }
            }
          }
          if ( v30 != (char *)(v26 + v28) )
            goto LABEL_54;
        }
LABEL_144:
        v23 = *(_QWORD *)(v23 + 16);
      }
      if ( v23 )
        continue;
      break;
    }
    v4 = v25;
LABEL_57:
    v33 = v4[1];
    while ( v33 )
    {
      v34 = *(unsigned __int16 *)(v33 + 32) - 2;
      if ( v34 >= (unsigned __int64)v9 )
      {
        if ( (unsigned __int64)v9 < v34 )
          goto LABEL_146;
        v35 = (char *)(v33 + 40);
        v36 = v8;
        v37 = &v9[v33 + 40];
        if ( (__int64)v34 <= (__int64)v9 )
          v37 = (char *)(v33 + 40 + v34);
        if ( v35 == v37 )
        {
LABEL_145:
          if ( v36 == v10 )
          {
LABEL_146:
            v4 = (_QWORD *)v33;
            v33 = *(_QWORD *)(v33 + 8);
            continue;
          }
        }
        else
        {
          while ( 1 )
          {
            v38 = *v36;
            v39 = *v35;
            if ( (unsigned int)(v39 - 65) < 0x1A )
              LOBYTE(v39) = v39 + 32;
            if ( (unsigned int)(v38 - 65) < 0x1A )
              v38 += 32;
            if ( v38 > (char)v39 )
              break;
            if ( v38 < (char)v39 )
              goto LABEL_146;
            ++v35;
            ++v36;
            if ( v35 == v37 )
              goto LABEL_145;
          }
        }
      }
      v33 = *(_QWORD *)(v33 + 16);
    }
    if ( v5 != v4 )
    {
      v40 = (_QWORD *)v4[2];
      if ( !v40 )
        goto LABEL_92;
LABEL_75:
      v41 = (_QWORD *)v40[1];
      v42 = v41;
      if ( v41 )
      {
        v43 = (_QWORD *)v40[1];
        do
        {
          v44 = v43;
          v43 = (_QWORD *)v43[1];
        }
        while ( v43 );
        v45 = (_QWORD *)v4[1];
        if ( !v45 )
        {
          v50 = (_QWORD *)*v4;
          v46 = v4;
          v48 = v40;
          v49 = *(_QWORD **)(*v4 + 8LL);
          *v40 = *v4;
          if ( v24 == v50 )
          {
            *v24 = v40;
            if ( v4 == (_QWORD *)v24[1] )
              goto LABEL_156;
            goto LABEL_104;
          }
          goto LABEL_102;
        }
        do
        {
          v46 = v42;
          v42 = (_QWORD *)v42[1];
        }
        while ( v42 );
        v47 = (_QWORD *)*v4;
        v48 = (_QWORD *)v46[2];
        v49 = *(_QWORD **)(*v4 + 8LL);
        if ( v4 != v46 )
        {
          *v45 = v46;
          v50 = v46;
          v46[1] = v45;
          if ( v40 != v46 )
          {
            v46[2] = v40;
            *v40 = v46;
            v50 = (_QWORD *)*v46;
            if ( v48 )
              *v48 = v50;
            v50[1] = v48;
          }
          goto LABEL_85;
        }
        goto LABEL_234;
      }
      v45 = (_QWORD *)v4[1];
      if ( v45 )
      {
        v47 = (_QWORD *)*v4;
        v48 = (_QWORD *)v40[2];
        v44 = v4;
        v46 = v4;
        v49 = *(_QWORD **)(*v4 + 8LL);
        if ( v40 != v4 )
        {
          *v45 = v40;
          v46 = v40;
          v44 = v40;
          v50 = v40;
          v40[1] = v45;
LABEL_85:
          *v46 = v47;
          if ( v24 == v47 )
          {
            *v24 = v46;
            v51 = *((_DWORD *)v4 + 6);
          }
          else
          {
            if ( v49 == v4 )
              v47[1] = v46;
            else
              v47[2] = v46;
            v51 = *((_DWORD *)v4 + 6);
          }
          goto LABEL_89;
        }
LABEL_234:
        if ( v48 )
        {
          *v48 = v47;
          v50 = v47;
          if ( v24 == v47 )
          {
            *v24 = v48;
            if ( (_QWORD *)v24[1] == v4 )
              goto LABEL_156;
            goto LABEL_104;
          }
        }
        else
        {
          v50 = v47;
          if ( v24 == v47 )
          {
            *v24 = 0;
            if ( (_QWORD *)v24[1] == v4 )
              goto LABEL_156;
            goto LABEL_104;
          }
        }
        goto LABEL_102;
      }
      v50 = (_QWORD *)*v4;
      v49 = *(_QWORD **)(*v4 + 8LL);
      *v40 = *v4;
      if ( v24 == v50 )
      {
        *v24 = v40;
        v46 = v4;
        v44 = v40;
        if ( v4 == (_QWORD *)v24[1] )
        {
          v48 = v40;
          goto LABEL_156;
        }
        v48 = v40;
        goto LABEL_104;
      }
      v46 = v4;
      v44 = v40;
      v48 = v40;
LABEL_102:
      if ( v49 == v4 )
      {
        v50[1] = v48;
        if ( (_QWORD *)v24[1] == v4 )
          goto LABEL_166;
      }
      else
      {
        v50[2] = v48;
        if ( (_QWORD *)v24[1] == v4 )
        {
LABEL_166:
          if ( v40 )
          {
            v41 = (_QWORD *)v40[1];
LABEL_156:
            while ( v41 )
            {
              v40 = v41;
              v41 = (_QWORD *)v41[1];
            }
          }
          else
          {
            v40 = v50;
          }
          v24[1] = v40;
LABEL_159:
          if ( (_QWORD *)v24[2] != v4 )
            goto LABEL_105;
LABEL_160:
          if ( v45 )
          {
            for ( i = (_QWORD *)v45[2]; i; i = (_QWORD *)i[2] )
              v45 = i;
            v24[2] = v45;
          }
          else
          {
            v24[2] = v50;
          }
          goto LABEL_105;
        }
      }
      while ( 1 )
      {
LABEL_104:
        if ( (_QWORD *)v24[2] == v4 )
          goto LABEL_160;
LABEL_105:
        v51 = *((_DWORD *)v4 + 6);
        if ( v46 == v4 )
        {
          if ( !*((_DWORD *)v4 + 6) )
            goto LABEL_90;
        }
        else
        {
LABEL_89:
          v52 = *((_DWORD *)v46 + 6);
          *((_DWORD *)v46 + 6) = v51;
          if ( !v52 )
            goto LABEL_90;
        }
        if ( v24 == v50 )
          goto LABEL_140;
        if ( !v48 )
        {
          v62 = (_QWORD *)v50[1];
          if ( !v62 )
            goto LABEL_123;
          goto LABEL_110;
        }
        v68 = v50;
        v50 = v48;
        while ( 1 )
        {
          if ( *((_DWORD *)v50 + 6) != 1 )
            goto LABEL_141;
          v48 = v50;
          v50 = v68;
          v62 = (_QWORD *)v68[1];
          if ( v48 == v62 )
          {
LABEL_123:
            v62 = (_QWORD *)v50[2];
            if ( !*((_DWORD *)v62 + 6) )
            {
              v69 = (_QWORD *)v62[1];
              v70 = (_QWORD *)*v50;
              *((_DWORD *)v62 + 6) = 1;
              *((_DWORD *)v50 + 6) = 0;
              v71 = (_QWORD *)v70[1];
              v50[2] = v69;
              if ( v69 )
                *v69 = v50;
              v62[1] = v50;
              *v50 = v62;
              *v62 = v70;
              if ( v24 == v70 )
              {
                *v24 = v62;
              }
              else
              {
                if ( v50 != v71 )
                {
                  v70[2] = v62;
                  v62 = (_QWORD *)v50[2];
                  goto LABEL_130;
                }
                v70[1] = v62;
              }
              v62 = v69;
            }
LABEL_130:
            v72 = v62[1];
            v73 = v62[2];
            if ( v72 && *(_DWORD *)(v72 + 24) != 1 )
            {
              if ( v73 && *(_DWORD *)(v73 + 24) != 1 )
              {
LABEL_134:
                *((_DWORD *)v62 + 6) = *((_DWORD *)v50 + 6);
                *((_DWORD *)v50 + 6) = 1;
                goto LABEL_135;
              }
              v91 = (_QWORD *)*v62;
              v92 = *(_QWORD **)(v72 + 16);
              *(_DWORD *)(v72 + 24) = 1;
              *((_DWORD *)v62 + 6) = 0;
              v93 = (_QWORD *)v91[1];
              v62[1] = v92;
              if ( v92 )
                *v92 = v62;
              *(_QWORD *)(v72 + 16) = v62;
              *v62 = v72;
              *(_QWORD *)v72 = v91;
              if ( v24 == v91 )
              {
                *v24 = v72;
              }
              else if ( v62 == v93 )
              {
                v91[1] = v72;
              }
              else
              {
                v91[2] = v72;
              }
              v62 = (_QWORD *)v50[2];
              v73 = v62[2];
              *((_DWORD *)v62 + 6) = *((_DWORD *)v50 + 6);
              *((_DWORD *)v50 + 6) = 1;
              if ( v73 )
LABEL_135:
                *(_DWORD *)(v73 + 24) = 1;
              v74 = (_QWORD *)*v50;
              v75 = (_QWORD *)v62[1];
              v76 = *(_QWORD **)(*v50 + 8LL);
              v50[2] = v75;
              if ( v75 )
                *v75 = v50;
              v62[1] = v50;
              *v50 = v62;
              *v62 = v74;
              if ( v24 == v74 )
                goto LABEL_139;
              goto LABEL_190;
            }
            if ( v73 && *(_DWORD *)(v73 + 24) != 1 )
              goto LABEL_134;
            goto LABEL_120;
          }
LABEL_110:
          if ( !*((_DWORD *)v62 + 6) )
          {
            v63 = (_QWORD *)v62[2];
            v64 = (_QWORD *)*v50;
            *((_DWORD *)v62 + 6) = 1;
            *((_DWORD *)v50 + 6) = 0;
            v65 = (_QWORD *)v64[1];
            v50[1] = v63;
            if ( v63 )
              *v63 = v50;
            v62[2] = v50;
            *v50 = v62;
            *v62 = v64;
            if ( v24 == v64 )
            {
              *v24 = v62;
              goto LABEL_148;
            }
            if ( v50 != v65 )
            {
              v64[2] = v62;
LABEL_148:
              v62 = v63;
              goto LABEL_116;
            }
            v64[1] = v62;
            v62 = (_QWORD *)v50[1];
          }
LABEL_116:
          v66 = v62[2];
          v67 = v62[1];
          if ( v66 )
          {
            if ( *(_DWORD *)(v66 + 24) != 1 )
              break;
          }
          if ( v67 && *(_DWORD *)(v67 + 24) != 1 )
            goto LABEL_185;
LABEL_120:
          *((_DWORD *)v62 + 6) = 0;
          v68 = (_QWORD *)*v50;
          if ( v24 == (_QWORD *)*v50 )
            goto LABEL_141;
        }
        if ( v67 && *(_DWORD *)(v67 + 24) != 1 )
        {
LABEL_185:
          *((_DWORD *)v62 + 6) = *((_DWORD *)v50 + 6);
          *((_DWORD *)v50 + 6) = 1;
          goto LABEL_186;
        }
        v78 = (_QWORD *)*v62;
        v79 = *(_QWORD **)(v66 + 8);
        *(_DWORD *)(v66 + 24) = 1;
        *((_DWORD *)v62 + 6) = 0;
        v80 = (_QWORD *)v78[1];
        v62[2] = v79;
        if ( v79 )
          *v79 = v62;
        *(_QWORD *)(v66 + 8) = v62;
        *v62 = v66;
        *(_QWORD *)v66 = v78;
        if ( v24 == v78 )
        {
          *v24 = v66;
        }
        else if ( v62 == v80 )
        {
          v78[1] = v66;
        }
        else
        {
          v78[2] = v66;
        }
        v62 = (_QWORD *)v50[1];
        v67 = v62[1];
        *((_DWORD *)v62 + 6) = *((_DWORD *)v50 + 6);
        *((_DWORD *)v50 + 6) = 1;
        if ( v67 )
LABEL_186:
          *(_DWORD *)(v67 + 24) = 1;
        v74 = (_QWORD *)*v50;
        v81 = (_QWORD *)v62[2];
        v76 = *(_QWORD **)(*v50 + 8LL);
        v50[1] = v81;
        if ( v81 )
          *v81 = v50;
        v62[2] = v50;
        *v50 = v62;
        *v62 = v74;
        if ( v24 == v74 )
        {
LABEL_139:
          *v24 = v62;
LABEL_140:
          v50 = v48;
          if ( !v48 )
            goto LABEL_90;
LABEL_141:
          *((_DWORD *)v50 + 6) = 1;
          goto LABEL_90;
        }
LABEL_190:
        if ( v50 == v76 )
        {
          v74[1] = v62;
          v50 = v48;
          if ( v48 )
            goto LABEL_141;
        }
        else
        {
          v74[2] = v62;
          v50 = v48;
          if ( v48 )
            goto LABEL_141;
        }
LABEL_90:
        v53 = *(v4 - 2);
        v54 = (_QWORD *)*(v4 - 1);
        *v54 = v53;
        *(_QWORD *)(v53 + 8) = v54;
        operator delete(v4 - 2, (*((unsigned __int16 *)v4 + 16) + *((unsigned __int16 *)v4 + 17) + 65) & 0x3FFF8);
        if ( v5 == v44 )
          return;
        v4 = v44;
        v40 = (_QWORD *)v44[2];
        if ( v40 )
          goto LABEL_75;
LABEL_92:
        v50 = (_QWORD *)*v4;
        if ( *(_QWORD **)(*v4 + 16LL) != v4 )
        {
          v45 = (_QWORD *)v4[1];
          v49 = (_QWORD *)v50[1];
          v44 = (_QWORD *)*v4;
LABEL_100:
          if ( v45 )
          {
            *v45 = v50;
            v46 = v4;
            v48 = v45;
            if ( v24 != v50 )
              goto LABEL_102;
            *v24 = v45;
            if ( v4 == (_QWORD *)v24[1] )
              goto LABEL_196;
            continue;
          }
LABEL_174:
          if ( v24 != v50 )
          {
            v46 = v4;
            v48 = nullptr;
            v45 = nullptr;
            goto LABEL_102;
          }
          *v24 = 0;
          v46 = v4;
          v48 = nullptr;
          v45 = nullptr;
          if ( v4 == (_QWORD *)v24[1] )
            goto LABEL_196;
          continue;
        }
        v55 = v4;
        v56 = (_QWORD *)*v4;
        do
        {
          v44 = v56;
          v56 = (_QWORD *)*v56;
          v57 = v55;
          v55 = (_QWORD *)v56[2];
        }
        while ( v44 == v55 );
        v58 = v4;
        if ( v56 != v57 )
          v44 = v56;
        v59 = (_QWORD *)*v4;
        do
        {
          v60 = v59;
          v59 = (_QWORD *)*v59;
          v61 = v58;
          v58 = (_QWORD *)v59[2];
        }
        while ( v60 == v58 );
        v45 = (_QWORD *)v4[1];
        v49 = (_QWORD *)v50[1];
        if ( v59 != v61 )
          goto LABEL_100;
        if ( !v45 )
          goto LABEL_174;
        *v45 = v50;
        if ( v24 != v50 )
        {
          v46 = v4;
          v48 = v45;
          goto LABEL_102;
        }
        *v24 = v45;
        v46 = v4;
        v48 = v45;
        if ( v4 == (_QWORD *)v24[1] )
        {
LABEL_196:
          v24[1] = v24;
          goto LABEL_159;
        }
      }
    }
  }
}

