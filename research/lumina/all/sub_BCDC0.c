__int64 __fastcall sub_BCDC0(__int64 a1, const char *a2, int *a3, __int64 *a4)
{
  _QWORD *v5; // r14
  __int64 v6; // rdi
  int v8; // ebx
  char v9; // al
  __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rbx
  unsigned int v18; // eax
  double **v19; // rdx
  double *v20; // rbx
  const char *v21; // rdi
  unsigned int v23; // eax
  _QWORD **v24; // rdx
  __int64 v25; // rax
  _QWORD *v26; // rdx
  unsigned int v27; // eax
  _QWORD **v28; // rdx
  size_t v29; // r10
  void *v30; // rdi
  __int64 v31; // rax
  unsigned int v32; // eax
  _DWORD **v33; // rdx
  __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  unsigned int v36; // eax
  unsigned __int64 **v37; // rdx
  unsigned int v38; // eax
  __int64 **v39; // rcx
  __int64 v40; // rax
  const char *v41; // r11
  __int64 *v42; // rdi
  size_t v43; // r8
  __int64 v44; // rbx
  size_t v45; // r10
  __int64 v46; // rsi
  __int64 v47; // rdx
  unsigned int v48; // eax
  __int64 **v49; // rcx
  size_t v50; // rbx
  __int64 *v51; // r9
  void *v52; // r8
  unsigned __int64 v53; // r10
  unsigned __int64 v54; // r11
  __int64 v55; // rsi
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  size_t n; // [rsp+8h] [rbp-A0h]
  size_t na; // [rsp+8h] [rbp-A0h]
  size_t nb; // [rsp+8h] [rbp-A0h]
  size_t nd; // [rsp+8h] [rbp-A0h]
  __int64 *nc; // [rsp+8h] [rbp-A0h]
  const char *src; // [rsp+10h] [rbp-98h]
  void *srcc; // [rsp+10h] [rbp-98h]
  void *srca; // [rsp+10h] [rbp-98h]
  void *srcb; // [rsp+10h] [rbp-98h]
  __int64 *v69; // [rsp+18h] [rbp-90h]
  size_t v70; // [rsp+18h] [rbp-90h]
  void *v71; // [rsp+18h] [rbp-90h]
  unsigned __int64 v72; // [rsp+20h] [rbp-88h]
  const char *v73; // [rsp+20h] [rbp-88h]
  unsigned __int64 v74; // [rsp+20h] [rbp-88h]
  size_t v75; // [rsp+28h] [rbp-80h]
  struct tm tp; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 v77; // [rsp+68h] [rbp-40h]

  v5 = *(_QWORD **)a1;
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
  v77 = __readfsqword(0x28u);
  v8 = mysql_num_fields(v6);
  if ( v8 != strlen(a2) )
  {
    if ( !unk_2439A0 )
      sub_198E10(1592);
LABEL_136:
    BUG();
  }
  if ( v8 != v5[5] )
  {
    if ( !unk_2439A0 )
      sub_198E10(1593);
    goto LABEL_136;
  }
  v9 = *a2;
  if ( *a2 )
  {
    v10 = 0;
    while ( 1 )
    {
      v11 = (int)v10;
      v12 = v5[7];
      v13 = 32LL * (int)v10;
      v14 = v12 + v13;
      if ( a4 )
        break;
      while ( v9 == 32 )
      {
        v9 = a2[++v10];
        if ( !v9 )
          return 1;
        v11 = (int)v10;
        v14 = v12 + 32LL * (int)v10;
      }
      switch ( v9 )
      {
        case 'B':
LABEL_94:
          if ( *(_BYTE *)v14 != 7 )
          {
            if ( !unk_2439A0 )
              sub_198E10(1600);
            goto LABEL_136;
          }
          v48 = *a3;
          if ( (unsigned int)*a3 > 0x2F )
          {
            v49 = *((__int64 ***)a3 + 1);
            *((_QWORD *)a3 + 1) = v49 + 1;
          }
          else
          {
            v49 = (__int64 **)(*((_QWORD *)a3 + 2) + v48);
            *a3 = v48 + 8;
          }
          v50 = *(_QWORD *)(v5[10] + 8 * v11);
          if ( !v50 )
            goto LABEL_38;
          v51 = *v49;
          v52 = *(void **)(v14 + 8);
          v53 = (*v49)[1];
          v54 = v53 + v50;
          if ( !__CFADD__(v53, v50) )
            goto LABEL_112;
          if ( v53 <= 0x7FFFFFFFFFFFFFFELL )
          {
            v54 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_112:
            v55 = *v51;
            v56 = (*v49)[1];
            if ( v51[2] < v54 )
            {
              v74 = (*v49)[1];
              v71 = v52;
              srcb = (void *)v54;
              nc = *v49;
              v58 = sub_1987B0(*v49, v55, v54, 1);
              v51 = nc;
              v53 = v74;
              v55 = v58;
              v52 = v71;
              v54 = (unsigned __int64)srcb;
              *nc = v58;
              v56 = nc[1];
            }
            v72 = v53;
            v69 = v51;
            srcc = v52;
            nd = v54;
            memset((void *)(v55 + v56), 0, v54 - v56);
            v51 = v69;
            v52 = srcc;
            v53 = v72;
            v69[1] = nd;
          }
          else if ( v53 != 0x7FFFFFFFFFFFFFFFLL )
          {
            v51[1] = 0x7FFFFFFFFFFFFFFFLL;
          }
          memcpy((void *)(v53 + *v51), v52, v50);
          goto LABEL_38;
        case 'I':
LABEL_49:
          if ( *(_BYTE *)v14 != 9 && *(_BYTE *)v14 != 2 )
          {
            if ( !unk_2439A0 )
              sub_198E10(1598);
            goto LABEL_136;
          }
          v27 = *a3;
          if ( (unsigned int)*a3 > 0x2F )
          {
            v28 = *((_QWORD ***)a3 + 1);
            *((_QWORD *)a3 + 1) = v28 + 1;
          }
          else
          {
            v28 = (_QWORD **)(*((_QWORD *)a3 + 2) + v27);
            *a3 = v27 + 8;
          }
          **v28 = *(_QWORD *)(v14 + 8);
          goto LABEL_38;
        case 'U':
LABEL_41:
          if ( *(_BYTE *)v14 != 9 && *(_BYTE *)v14 != 2 )
          {
            if ( !unk_2439A0 )
              sub_198E10(1599);
            goto LABEL_136;
          }
          v23 = *a3;
          if ( (unsigned int)*a3 > 0x2F )
          {
            v24 = *((_QWORD ***)a3 + 1);
            *((_QWORD *)a3 + 1) = v24 + 1;
          }
          else
          {
            v24 = (_QWORD **)(*((_QWORD *)a3 + 2) + v23);
            *a3 = v23 + 8;
          }
          v25 = *(_QWORD *)(v14 + 8);
          v26 = *v24;
          if ( *(_BYTE *)v14 != 9 )
            v25 = (unsigned int)*(_QWORD *)(v14 + 8);
          *v26 = v25;
          goto LABEL_38;
        case 'd':
LABEL_32:
          if ( *(_BYTE *)v14 != 7 )
          {
            if ( !unk_2439A0 )
              sub_198E10(1602);
            goto LABEL_136;
          }
          v18 = *a3;
          if ( (unsigned int)*a3 > 0x2F )
          {
            v19 = *((double ***)a3 + 1);
            *((_QWORD *)a3 + 1) = v19 + 1;
          }
          else
          {
            v19 = (double **)(*((_QWORD *)a3 + 2) + v18);
            *a3 = v18 + 8;
          }
          v21 = s1;
          if ( *(_QWORD *)(v14 + 16) )
            v21 = *(const char **)(v14 + 8);
          v20 = *v19;
          *v20 = strtod(v21, nullptr);
          goto LABEL_38;
        case 'i':
          if ( *(_BYTE *)v14 == 2 )
            goto LABEL_68;
LABEL_26:
          if ( !unk_2439A0 )
            sub_198E10(1594);
          goto LABEL_136;
        case 's':
LABEL_84:
          if ( *(_BYTE *)v14 != 7 )
          {
            if ( !unk_2439A0 )
              sub_198E10(1601);
            goto LABEL_136;
          }
          v38 = *a3;
          if ( (unsigned int)*a3 > 0x2F )
          {
            v39 = *((__int64 ***)a3 + 1);
            *((_QWORD *)a3 + 1) = v39 + 1;
          }
          else
          {
            v39 = (__int64 **)(*((_QWORD *)a3 + 2) + v38);
            *a3 = v38 + 8;
          }
          v40 = v5[10];
          v41 = s1;
          v42 = *v39;
          v43 = *(_QWORD *)(v40 + 8 * v11);
          if ( *(_QWORD *)(v14 + 16) )
            v41 = *(const char **)(v14 + 8);
          v44 = v42[1];
          v45 = *(_QWORD *)(v40 + 8 * v11);
          if ( v44 )
          {
            --v44;
            v45 = v43 + v44;
          }
          v46 = *v42;
          v47 = v45 + 1;
          if ( v42[2] < v45 + 1 )
          {
            v75 = v45;
            v73 = v41;
            v70 = v43;
            srca = (void *)(v45 + 1);
            v57 = sub_1987B0(v42, v46, v47, 1);
            v45 = v75;
            v41 = v73;
            v43 = v70;
            v46 = v57;
            *v42 = v57;
            v47 = (__int64)srca;
          }
          v42[1] = v47;
          *(_BYTE *)(v46 + v45) = 0;
          memmove((void *)(*v42 + v44), v41, v43);
          goto LABEL_38;
        case 't':
          v16 = 0;
LABEL_14:
          if ( *(_BYTE *)v14 != 7 )
          {
            if ( !unk_2439A0 )
              sub_198E10(1660);
            goto LABEL_136;
          }
          if ( *(_QWORD *)(v14 + 16) != 41 )
          {
            if ( !unk_2439A0 )
              sub_198E10(1661);
            goto LABEL_136;
          }
          v34 = *(_QWORD *)(v14 + 8);
          if ( *(_QWORD *)v34 || *(_QWORD *)(v34 + 8) || (v35 = *(_QWORD *)(v34 + 16)) != 0 )
          {
            memset(&tp.tm_wday, 0, 32);
            tp.tm_year = *(_DWORD *)v34 - 1900;
            tp.tm_mon = *(_DWORD *)(v34 + 4) - 1;
            tp.tm_mday = *(_DWORD *)(v34 + 8);
            tp.tm_hour = *(_DWORD *)(v34 + 12);
            tp.tm_min = *(_DWORD *)(v34 + 16);
            tp.tm_sec = *(_DWORD *)(v34 + 20);
            na = *(_QWORD *)(v34 + 24);
            v35 = (int)na | (unsigned __int64)(j__timegm(&tp) << 32);
          }
          if ( v16 )
          {
            nb = v35;
            sub_176520(v16);
            *(_BYTE *)v16 = 9;
            *(_QWORD *)(v16 + 8) = nb;
          }
          else
          {
            v36 = *a3;
            if ( (unsigned int)*a3 > 0x2F )
            {
              v37 = *((unsigned __int64 ***)a3 + 1);
              *((_QWORD *)a3 + 1) = v37 + 1;
            }
            else
            {
              v37 = (unsigned __int64 **)(*((_QWORD *)a3 + 2) + v36);
              *a3 = v36 + 8;
            }
            **v37 = v35;
          }
          goto LABEL_38;
        case 'u':
          if ( *(_BYTE *)v14 == 2 )
            goto LABEL_68;
LABEL_29:
          if ( !unk_2439A0 )
            sub_198E10(1596);
          goto LABEL_136;
        case 'y':
          if ( *(_BYTE *)v14 != 2 )
          {
LABEL_109:
            if ( !unk_2439A0 )
              sub_198E10(2759);
            goto LABEL_136;
          }
LABEL_68:
          v32 = *a3;
          if ( (unsigned int)*a3 > 0x2F )
          {
            v33 = *((_DWORD ***)a3 + 1);
            *((_QWORD *)a3 + 1) = v33 + 1;
          }
          else
          {
            v33 = (_DWORD **)(*((_QWORD *)a3 + 2) + v32);
            *a3 = v32 + 8;
          }
          **v33 = *(_QWORD *)(v14 + 8);
LABEL_38:
          v9 = a2[++v10];
          if ( !v9 )
            return 1;
          break;
        default:
LABEL_116:
          if ( !unk_2439A0 )
            sub_198E10(1626);
          goto LABEL_136;
      }
    }
    v15 = *a4;
    while ( 1 )
    {
      v16 = v15 + v13;
      if ( v9 != 32 )
      {
        while ( 2 )
        {
          switch ( v9 )
          {
            case 'B':
              if ( !v16 )
                goto LABEL_94;
              n = *(_QWORD *)(v5[10] + 8 * v11);
              src = s1;
              if ( *(_QWORD *)(v14 + 16) )
                src = *(const char **)(v14 + 8);
              sub_176520(v16);
              *(_BYTE *)v16 = 7;
              *(_QWORD *)(v16 + 8) = 0;
              *(_OWORD *)(v16 + 16) = 0;
              if ( !n )
                goto LABEL_38;
              v30 = nullptr;
              v29 = n + 1;
              if ( n != -1 )
                goto LABEL_66;
              goto LABEL_60;
            case 'I':
              if ( !v16 )
                goto LABEL_49;
              goto LABEL_20;
            case 'U':
              if ( !v16 )
                goto LABEL_41;
              goto LABEL_20;
            case 'd':
              if ( !v16 )
                goto LABEL_32;
              if ( !unk_2439A0 )
                sub_198E10(1781);
              goto LABEL_136;
            case 'i':
              if ( *(_BYTE *)v14 != 2 )
                goto LABEL_26;
              goto LABEL_19;
            case 's':
              if ( !v16 )
                goto LABEL_84;
              n = *(_QWORD *)(v5[10] + 8 * v11);
              src = s1;
              if ( *(_QWORD *)(v14 + 16) )
                src = *(const char **)(v14 + 8);
              sub_176520(v16);
              *(_BYTE *)v16 = 7;
              *(_QWORD *)(v16 + 8) = 0;
              *(_OWORD *)(v16 + 16) = 0;
              if ( !n )
                goto LABEL_38;
              v29 = n + 1;
              if ( n == -1 )
              {
                v30 = nullptr;
              }
              else
              {
LABEL_66:
                v31 = sub_1987B0(v16 + 8, 0, n + 1, 1);
                *(_QWORD *)(v16 + 8) = v31;
                v29 = n + 1;
                v30 = (void *)v31;
              }
LABEL_60:
              *(_QWORD *)(v16 + 16) = v29;
              memmove(v30, src, n);
              *(_BYTE *)(*(_QWORD *)(v16 + 8) + n) = 0;
              goto LABEL_21;
            case 't':
              goto LABEL_14;
            case 'u':
              if ( *(_BYTE *)v14 != 2 )
                goto LABEL_29;
              goto LABEL_19;
            case 'y':
              if ( *(_BYTE *)v14 != 2 )
                goto LABEL_109;
LABEL_19:
              if ( !v16 )
                goto LABEL_68;
LABEL_20:
              sub_176730(v16, v14);
LABEL_21:
              v9 = a2[++v10];
              if ( !v9 )
                return 1;
              v11 = (int)v10;
              v12 = v5[7];
              v15 = *a4;
              v17 = 32LL * (int)v10;
              v14 = v12 + v17;
              v16 = *a4 + v17;
              if ( v9 == 32 )
                break;
              continue;
            default:
              goto LABEL_116;
          }
          break;
        }
      }
      v9 = a2[++v10];
      if ( !v9 )
        break;
      v11 = (int)v10;
      v13 = 32LL * (int)v10;
      v14 = v12 + v13;
    }
  }
  return 1;
}
