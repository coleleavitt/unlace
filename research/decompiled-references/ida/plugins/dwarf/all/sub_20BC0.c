__int64 __fastcall sub_20BC0(__int64 a1)
{
  int v1; // r13d
  unsigned __int64 v2; // r14
  char *v3; // r15
  unsigned int v4; // r12d
  __int64 v7; // rax
  __int64 v8; // rsi
  char *v9; // rdi
  __int64 v10; // rbp
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rcx
  int v13; // eax
  unsigned __int64 v14; // r12
  __int64 v15; // rsi
  unsigned __int64 v16; // rsi
  bool v17; // cf
  unsigned __int64 v18; // rsi
  bool v19; // zf
  unsigned int v20; // esi
  __int64 v21; // rdx
  int v22; // eax
  unsigned int v23; // esi
  __int64 v24; // rdx
  unsigned __int64 v25; // rax
  bool v26; // cc
  unsigned int v27; // eax
  __int64 v28; // rsi
  unsigned int v29; // esi
  char *v30; // rdi
  int v31; // eax
  char *v32; // r15
  int v33; // eax
  _QWORD *v34; // rax
  __int64 v35; // rax
  int v36; // eax
  char *s1; // [rsp+0h] [rbp-58h] BYREF
  __int64 v38; // [rsp+8h] [rbp-50h]
  __int64 v39; // [rsp+10h] [rbp-48h]
  unsigned __int64 v40; // [rsp+18h] [rbp-40h]

  v4 = 0;
  v40 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 544) )
  {
    v7 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
    v8 = *(_QWORD *)(a1 + 480);
    v9 = *(char **)(a1 + 472);
    v10 = v7 - v8;
    if ( qlseek(v9, *(_QWORD *)(a1 + 544) + v8, 0) != -1 )
    {
      v11 = *(unsigned int *)(a1 + 568);
      v12 = *(_QWORD *)(a1 + 120);
      v13 = *(_DWORD *)(a1 + 568);
      if ( v12 < v11 )
      {
        v28 = *(_QWORD *)(a1 + 112);
        if ( *(_QWORD *)(a1 + 128) < v11 )
        {
          v35 = qvector_reserve(a1 + 112, v28, *(unsigned int *)(a1 + 568), 64);
          *(_QWORD *)(a1 + 112) = v35;
          v12 = *(_QWORD *)(a1 + 120);
          v28 = v35;
        }
        v9 = (char *)(v28 + (v12 << 6));
        memset(v9, 0, (v11 - v12) << 6);
        *(_QWORD *)(a1 + 120) = v11;
        v13 = *(_DWORD *)(a1 + 568);
      }
      else if ( v11 != v12 )
      {
        *(_QWORD *)(a1 + 120) = v11;
      }
      *(_BYTE *)(a1 + 248) = 1;
      v14 = 0;
      if ( !v13 )
      {
LABEL_19:
        v14 = *(_QWORD *)(a1 + 112);
        v1 = 0;
        v2 = v14 + (*(_QWORD *)(a1 + 120) << 6);
        if ( v14 == v2 )
        {
LABEL_35:
          v25 = *(unsigned int *)(a1 + 572);
          if ( (_DWORD)v25 )
          {
            if ( !*(_BYTE *)(a1 + 248) )
              sub_13620(v9);
            v14 = *(_QWORD *)(a1 + 112);
            if ( v25 < *(_QWORD *)(a1 + 120) )
            {
              v34 = (_QWORD *)(v14 + (v25 << 6));
              *(_QWORD *)(a1 + 256) = v34[3];
              *(_QWORD *)(a1 + 264) = v34[2];
              *(_QWORD *)(a1 + 272) = v34[4];
            }
          }
          else
          {
            v14 = *(_QWORD *)(a1 + 112);
          }
          s1 = nullptr;
          v1 = 0;
          v39 = 0;
          if ( v2 != v14 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                do
                {
                  while ( 1 )
                  {
                    while ( 1 )
                    {
                      while ( 1 )
                      {
                        do
                        {
                          v14 += 64LL;
                          ++v1;
                          if ( v2 == v14 )
                          {
                            v30 = s1;
                            v31 = *(_DWORD *)(a1 + 164);
                            if ( *(_DWORD *)(a1 + 168) )
                            {
                              if ( !v31 )
                                *(_DWORD *)(a1 + 168) = 0;
                            }
                            else
                            {
                              *(_DWORD *)(a1 + 168) = v31;
                            }
                            if ( v30 )
                            {
                              v38 = 0;
                              qfree(v30);
                            }
                            goto LABEL_75;
                          }
                        }
                        while ( !v1 || !*(_QWORD *)(v14 + 32) );
                        v26 = *(_QWORD *)(a1 + 256) <= 0LL;
                        v38 = 0;
                        if ( !v26 && *(_QWORD *)(a1 + 272) )
                          sub_20460(*(_QWORD *)(a1 + 240), (__int64 *)&s1, (__int64 *)(a1 + 256), *(_DWORD *)v14);
                        v27 = *(_DWORD *)(v14 + 4);
                        if ( v27 != 18 )
                          break;
                        v33 = *(_DWORD *)(v14 + 40);
                        if ( v33 )
                        {
                          if ( v33 == *(_DWORD *)(a1 + 192) )
                          {
                            *(_DWORD *)(a1 + 204) = v1;
                            v33 = *(_DWORD *)(v14 + 40);
                          }
                          if ( *(_DWORD *)(a1 + 160) == v33 )
                            *(_DWORD *)(a1 + 208) = v1;
                        }
                      }
                      if ( v27 <= 0x12 )
                        break;
                      switch ( v27 )
                      {
                        case 0x6FFFFFFEu:
                          *(_DWORD *)(a1 + 220) = v1;
                          break;
                        case 0x6FFFFFFFu:
                          *(_DWORD *)(a1 + 224) = v1;
                          break;
                        case 0x6FFFFFFDu:
                          *(_DWORD *)(a1 + 216) = v1;
                          break;
                      }
                    }
                    if ( v27 != 3 )
                      break;
                    if ( v38 )
                    {
                      v32 = s1;
                      if ( !strcmp(s1, ".strtab") )
                      {
                        sub_209E0(a1, (__int64 *)(a1 + 320), v14, 0);
                      }
                      else if ( !strcmp(v32, ".dynstr") )
                      {
                        sub_209E0(a1, (__int64 *)(a1 + 352), v14, 0);
                      }
                    }
                  }
                  if ( v27 == 8 )
                    goto LABEL_77;
                }
                while ( v27 != 1 );
                if ( v38 )
                  break;
LABEL_77:
                if ( v38 )
                {
                  v3 = s1;
LABEL_79:
                  if ( !strcmp(v3, ".plt") )
                    *(_DWORD *)(a1 + 184) = v1;
                }
              }
              v3 = s1;
              if ( !strcmp(s1, ".interp") )
              {
                *(_DWORD *)(a1 + 176) = v1;
              }
              else if ( !strcmp(v3, ".got") )
              {
                *(_DWORD *)(a1 + 164) = v1;
                *(_BYTE *)(a1 + 249) = 1;
              }
              else if ( !strcmp(v3, ".got.plt") )
              {
                *(_DWORD *)(a1 + 168) = v1;
              }
              else if ( !strcmp(v3, ".plt.got") )
              {
                *(_DWORD *)(a1 + 212) = v1;
              }
              else if ( !strcmp(v3, ".plt.sec") )
              {
                *(_DWORD *)(a1 + 228) = v1;
              }
              else if ( !strcmp(v3, ".gnu_debugdata") )
              {
LABEL_110:
                *(_DWORD *)(a1 + 232) = v1;
              }
              else if ( !strcmp(v3, ".eh_frame") )
              {
                *(_DWORD *)(a1 + 236) = v1;
              }
              else
              {
LABEL_113:
                if ( !*(_BYTE *)(a1 + 617) )
                  goto LABEL_79;
                if ( strcmp(v3, ".opd") )
                  goto LABEL_77;
                *(_DWORD *)(a1 + 200) = v1;
              }
            }
          }
          v36 = *(_DWORD *)(a1 + 164);
          if ( *(_DWORD *)(a1 + 168) )
          {
            if ( !v36 )
              *(_DWORD *)(a1 + 168) = 0;
          }
          else
          {
            *(_DWORD *)(a1 + 168) = v36;
          }
LABEL_75:
          v4 = 1;
LABEL_18:
          qlseek(*(_QWORD *)(a1 + 472), v10 + *(_QWORD *)(a1 + 480), 0);
          return v4;
        }
        while ( 1 )
        {
          if ( !v1 || !*(_QWORD *)(v14 + 32) )
            goto LABEL_26;
          v22 = *(_DWORD *)(v14 + 4);
          if ( v22 == 6 )
          {
            v29 = *(_DWORD *)(v14 + 40);
            if ( !*(_BYTE *)(a1 + 248) )
            {
              sub_13620(v9);
LABEL_112:
              sub_13620(v9);
              goto LABEL_113;
            }
            if ( (unsigned __int64)v29 >= *(_QWORD *)(a1 + 120)
              || (v24 = *(_QWORD *)(a1 + 112) + ((unsigned __int64)v29 << 6)) == 0 )
            {
              v9 = "Illegal link section %d of the dynamic linking information section\n";
              sub_17110((__int64)"Illegal link section %d of the dynamic linking information section\n");
              goto LABEL_26;
            }
            if ( *(_DWORD *)(v24 + 4) == 11 )
            {
              *(_DWORD *)(v24 + 40) = 0;
              goto LABEL_26;
            }
          }
          else
          {
            if ( v22 != 11 )
            {
              if ( v22 == 2 )
              {
                v19 = *(_BYTE *)(a1 + 248) == 0;
                *(_DWORD *)(a1 + 192) = v1;
                v20 = *(_DWORD *)(v14 + 40);
                if ( v19 )
                  sub_13620(v9);
                if ( (unsigned __int64)v20 < *(_QWORD *)(a1 + 120)
                  && (v21 = *(_QWORD *)(a1 + 112) + ((unsigned __int64)v20 << 6)) != 0 )
                {
                  v9 = (char *)a1;
                  sub_209E0(a1, (__int64 *)(a1 + 320), v21, 1);
                }
                else
                {
                  v9 = "Illegal link section %d of the string table for symbols\n";
                  sub_17110((__int64)"Illegal link section %d of the string table for symbols\n");
                }
              }
              goto LABEL_26;
            }
            v19 = *(_BYTE *)(a1 + 248) == 0;
            *(_DWORD *)(a1 + 160) = v1;
            v23 = *(_DWORD *)(v14 + 40);
            if ( v19 )
              goto LABEL_112;
            if ( (unsigned __int64)v23 >= *(_QWORD *)(a1 + 120)
              || (v24 = *(_QWORD *)(a1 + 112) + ((unsigned __int64)v23 << 6)) == 0 )
            {
              v9 = "Illegal link section %d of the string table for dynamic linking symbols\n";
              sub_17110((__int64)"Illegal link section %d of the string table for dynamic linking symbols\n");
              goto LABEL_26;
            }
          }
          v9 = (char *)a1;
          sub_209E0(a1, (__int64 *)(a1 + 352), v24, 1);
LABEL_26:
          v14 += 64LL;
          ++v1;
          if ( v2 == v14 )
            goto LABEL_35;
        }
      }
      while ( 1 )
      {
        v16 = v14 * *(unsigned __int16 *)(a1 + 562);
        v17 = __CFADD__(*(_QWORD *)(a1 + 544), v16);
        v18 = *(_QWORD *)(a1 + 544) + v16;
        if ( v17 || qlseek(*(_QWORD *)(a1 + 472), *(_QWORD *)(a1 + 480) + v18, 0) == -1 )
          break;
        if ( !*(_BYTE *)(a1 + 248) )
        {
          if ( under_debugger )
            BUG();
          interr(20099);
          goto LABEL_110;
        }
        v15 = v14 < *(_QWORD *)(a1 + 120) ? *(_QWORD *)(a1 + 112) + (v14 << 6) : 0LL;
        v9 = (char *)a1;
        if ( !sub_185A0((int *)a1, v15) )
          break;
        if ( (unsigned int)++v14 >= *(_DWORD *)(a1 + 568) )
          goto LABEL_19;
      }
    }
    v4 = 0;
    goto LABEL_18;
  }
  return v4;
}

