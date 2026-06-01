__int64 __fastcall sub_2B6E0(__int64 a1)
{
  int v1; // r13d
  unsigned __int64 v2; // r14
  char *v3; // r15
  unsigned int v4; // r12d
  __int64 v7; // rsi
  char *v8; // rdi
  __int64 v9; // rsi
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rcx
  int v12; // eax
  unsigned __int64 v13; // r12
  bool v14; // zf
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  bool v19; // cc
  unsigned int v20; // eax
  __int64 v21; // rsi
  char *v22; // rdi
  int v23; // eax
  char *v24; // r15
  int v25; // eax
  _QWORD *v26; // rax
  __int64 v27; // rax
  int v28; // eax
  char *s1; // [rsp+0h] [rbp-58h] BYREF
  __int64 v30; // [rsp+8h] [rbp-50h]
  __int64 v31; // [rsp+10h] [rbp-48h]
  unsigned __int64 v32; // [rsp+18h] [rbp-40h]

  v4 = 0;
  v32 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 544) )
  {
    qlseek();
    v7 = *(_QWORD *)(a1 + 480);
    v8 = *(char **)(a1 + 472);
    v9 = *(_QWORD *)(a1 + 544) + v7;
    if ( qlseek() != -1 )
    {
      v10 = *(unsigned int *)(a1 + 568);
      v11 = *(_QWORD *)(a1 + 120);
      v12 = *(_DWORD *)(a1 + 568);
      if ( v11 < v10 )
      {
        v21 = *(_QWORD *)(a1 + 112);
        if ( *(_QWORD *)(a1 + 128) < v10 )
        {
          v27 = qvector_reserve();
          *(_QWORD *)(a1 + 112) = v27;
          v11 = *(_QWORD *)(a1 + 120);
          v21 = v27;
        }
        v8 = (char *)(v21 + (v11 << 6));
        v9 = 0;
        memset(v8, 0, (v10 - v11) << 6);
        *(_QWORD *)(a1 + 120) = v10;
        v12 = *(_DWORD *)(a1 + 568);
      }
      else if ( v10 != v11 )
      {
        *(_QWORD *)(a1 + 120) = v10;
      }
      *(_BYTE *)(a1 + 248) = 1;
      v13 = 0;
      if ( !v12 )
      {
LABEL_19:
        v13 = *(_QWORD *)(a1 + 112);
        v1 = 0;
        v2 = v13 + (*(_QWORD *)(a1 + 120) << 6);
        if ( v13 == v2 )
        {
LABEL_35:
          v18 = *(unsigned int *)(a1 + 572);
          if ( (_DWORD)v18 )
          {
            if ( !*(_BYTE *)(a1 + 248) )
              sub_25DE0(v8, v9);
            v13 = *(_QWORD *)(a1 + 112);
            if ( v18 < *(_QWORD *)(a1 + 120) )
            {
              v26 = (_QWORD *)(v13 + (v18 << 6));
              *(_QWORD *)(a1 + 256) = v26[3];
              *(_QWORD *)(a1 + 264) = v26[2];
              *(_QWORD *)(a1 + 272) = v26[4];
            }
          }
          else
          {
            v13 = *(_QWORD *)(a1 + 112);
          }
          s1 = nullptr;
          v1 = 0;
          v31 = 0;
          if ( v2 != v13 )
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
                          v13 += 64LL;
                          ++v1;
                          if ( v2 == v13 )
                          {
                            v22 = s1;
                            v23 = *(_DWORD *)(a1 + 164);
                            if ( *(_DWORD *)(a1 + 168) )
                            {
                              if ( !v23 )
                                *(_DWORD *)(a1 + 168) = 0;
                            }
                            else
                            {
                              *(_DWORD *)(a1 + 168) = v23;
                            }
                            if ( v22 )
                            {
                              v30 = 0;
                              qfree();
                            }
                            goto LABEL_75;
                          }
                        }
                        while ( !v1 || !*(_QWORD *)(v13 + 32) );
                        v19 = *(_QWORD *)(a1 + 256) <= 0LL;
                        v30 = 0;
                        if ( !v19 && *(_QWORD *)(a1 + 272) )
                          sub_2AFC0(*(_QWORD *)(a1 + 240), (__int64 *)&s1, (__int64 *)(a1 + 256), *(_DWORD *)v13);
                        v20 = *(_DWORD *)(v13 + 4);
                        if ( v20 != 18 )
                          break;
                        v25 = *(_DWORD *)(v13 + 40);
                        if ( v25 )
                        {
                          if ( v25 == *(_DWORD *)(a1 + 192) )
                          {
                            *(_DWORD *)(a1 + 204) = v1;
                            v25 = *(_DWORD *)(v13 + 40);
                          }
                          if ( *(_DWORD *)(a1 + 160) == v25 )
                            *(_DWORD *)(a1 + 208) = v1;
                        }
                      }
                      if ( v20 <= 0x12 )
                        break;
                      switch ( v20 )
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
                    if ( v20 != 3 )
                      break;
                    if ( v30 )
                    {
                      v24 = s1;
                      if ( !strcmp(s1, ".strtab") )
                      {
                        sub_2B500(a1, (__int64 *)(a1 + 320), v13, 0);
                      }
                      else if ( !strcmp(v24, ".dynstr") )
                      {
                        sub_2B500(a1, (__int64 *)(a1 + 352), v13, 0);
                      }
                    }
                  }
                  if ( v20 == 8 )
                    goto LABEL_77;
                }
                while ( v20 != 1 );
                if ( v30 )
                  break;
LABEL_77:
                if ( v30 )
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
          v28 = *(_DWORD *)(a1 + 164);
          if ( *(_DWORD *)(a1 + 168) )
          {
            if ( !v28 )
              *(_DWORD *)(a1 + 168) = 0;
          }
          else
          {
            *(_DWORD *)(a1 + 168) = v28;
          }
LABEL_75:
          v4 = 1;
LABEL_18:
          qlseek();
          return v4;
        }
        while ( 1 )
        {
          if ( !v1 || !*(_QWORD *)(v13 + 32) )
            goto LABEL_26;
          v16 = *(_DWORD *)(v13 + 4);
          if ( v16 == 6 )
          {
            v9 = *(unsigned int *)(v13 + 40);
            if ( !*(_BYTE *)(a1 + 248) )
            {
              sub_25DE0(v8, v9);
LABEL_112:
              sub_25DE0(v8, v9);
              goto LABEL_113;
            }
            if ( (unsigned __int64)(unsigned int)v9 >= *(_QWORD *)(a1 + 120)
              || (v17 = *(_QWORD *)(a1 + 112) + ((unsigned __int64)(unsigned int)v9 << 6)) == 0 )
            {
              v8 = "Illegal link section %d of the dynamic linking information section\n";
              sub_B0B0((__int64)"Illegal link section %d of the dynamic linking information section\n", v9);
              goto LABEL_26;
            }
            if ( *(_DWORD *)(v17 + 4) == 11 )
            {
              *(_DWORD *)(v17 + 40) = 0;
              goto LABEL_26;
            }
          }
          else
          {
            if ( v16 != 11 )
            {
              if ( v16 == 2 )
              {
                v14 = *(_BYTE *)(a1 + 248) == 0;
                *(_DWORD *)(a1 + 192) = v1;
                v9 = *(unsigned int *)(v13 + 40);
                if ( v14 )
                  sub_25DE0(v8, v9);
                if ( (unsigned __int64)(unsigned int)v9 < *(_QWORD *)(a1 + 120)
                  && (v15 = *(_QWORD *)(a1 + 112) + ((unsigned __int64)(unsigned int)v9 << 6)) != 0 )
                {
                  v9 = a1 + 320;
                  v8 = (char *)a1;
                  sub_2B500(a1, (__int64 *)(a1 + 320), v15, 1);
                }
                else
                {
                  v8 = "Illegal link section %d of the string table for symbols\n";
                  sub_B0B0((__int64)"Illegal link section %d of the string table for symbols\n", v9);
                }
              }
              goto LABEL_26;
            }
            v14 = *(_BYTE *)(a1 + 248) == 0;
            *(_DWORD *)(a1 + 160) = v1;
            v9 = *(unsigned int *)(v13 + 40);
            if ( v14 )
              goto LABEL_112;
            if ( (unsigned __int64)(unsigned int)v9 >= *(_QWORD *)(a1 + 120)
              || (v17 = *(_QWORD *)(a1 + 112) + ((unsigned __int64)(unsigned int)v9 << 6)) == 0 )
            {
              v8 = "Illegal link section %d of the string table for dynamic linking symbols\n";
              sub_B0B0((__int64)"Illegal link section %d of the string table for dynamic linking symbols\n", v9);
              goto LABEL_26;
            }
          }
          v9 = a1 + 352;
          v8 = (char *)a1;
          sub_2B500(a1, (__int64 *)(a1 + 352), v17, 1);
LABEL_26:
          v13 += 64LL;
          ++v1;
          if ( v2 == v13 )
            goto LABEL_35;
        }
      }
      while ( !__CFADD__(*(_QWORD *)(a1 + 544), v13 * *(unsigned __int16 *)(a1 + 562)) && qlseek() != -1 )
      {
        if ( !*(_BYTE *)(a1 + 248) )
        {
          if ( under_debugger )
            BUG();
          interr();
          goto LABEL_110;
        }
        v9 = v13 < *(_QWORD *)(a1 + 120) ? *(_QWORD *)(a1 + 112) + (v13 << 6) : 0LL;
        v8 = (char *)a1;
        if ( !sub_27330((int *)a1, v9) )
          break;
        if ( (unsigned int)++v13 >= *(_DWORD *)(a1 + 568) )
          goto LABEL_19;
      }
    }
    v4 = 0;
    goto LABEL_18;
  }
  return v4;
}

