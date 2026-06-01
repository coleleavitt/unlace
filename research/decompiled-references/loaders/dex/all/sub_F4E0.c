__int64 __fastcall sub_F4E0(__int64 a1)
{
  int v1; // r13d
  unsigned __int64 v2; // r14
  char *v3; // r15
  unsigned int v4; // r12d
  __int64 v7; // rax
  __int64 v8; // rsi
  char *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rbp
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rcx
  int v15; // eax
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // rsi
  bool v18; // cf
  unsigned __int64 v19; // rsi
  bool v20; // zf
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rdx
  unsigned __int64 v24; // rax
  bool v25; // cc
  unsigned int v26; // eax
  __int64 v27; // rsi
  char *v28; // rdi
  int v29; // eax
  char *v30; // r15
  int v31; // eax
  _QWORD *v32; // rax
  __int64 v33; // rax
  int v34; // eax
  char *s1; // [rsp+0h] [rbp-58h] BYREF
  __int64 v36; // [rsp+8h] [rbp-50h]
  __int64 v37; // [rsp+10h] [rbp-48h]
  unsigned __int64 v38; // [rsp+18h] [rbp-40h]

  v4 = 0;
  v38 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 544) )
  {
    v7 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
    v8 = *(_QWORD *)(a1 + 480);
    v9 = *(char **)(a1 + 472);
    v10 = v7 - v8;
    v11 = *(_QWORD *)(a1 + 544) + v8;
    v12 = v10;
    if ( qlseek(v9, v11, 0) != -1 )
    {
      v13 = *(unsigned int *)(a1 + 568);
      v14 = *(_QWORD *)(a1 + 120);
      v15 = *(_DWORD *)(a1 + 568);
      if ( v14 < v13 )
      {
        v27 = *(_QWORD *)(a1 + 112);
        if ( *(_QWORD *)(a1 + 128) < v13 )
        {
          v33 = qvector_reserve(a1 + 112, v27, *(unsigned int *)(a1 + 568), 64);
          *(_QWORD *)(a1 + 112) = v33;
          v14 = *(_QWORD *)(a1 + 120);
          v27 = v33;
        }
        v9 = (char *)(v27 + (v14 << 6));
        v11 = 0;
        memset(v9, 0, (v13 - v14) << 6);
        *(_QWORD *)(a1 + 120) = v13;
        v15 = *(_DWORD *)(a1 + 568);
      }
      else if ( v13 != v14 )
      {
        *(_QWORD *)(a1 + 120) = v13;
      }
      *(_BYTE *)(a1 + 248) = 1;
      v16 = 0;
      if ( !v15 )
      {
LABEL_19:
        v16 = *(_QWORD *)(a1 + 112);
        v1 = 0;
        v2 = v16 + (*(_QWORD *)(a1 + 120) << 6);
        if ( v16 == v2 )
        {
LABEL_35:
          v24 = *(unsigned int *)(a1 + 572);
          if ( (_DWORD)v24 )
          {
            if ( !*(_BYTE *)(a1 + 248) )
              sub_59B0(v9, v11);
            v16 = *(_QWORD *)(a1 + 112);
            if ( v24 < *(_QWORD *)(a1 + 120) )
            {
              v32 = (_QWORD *)(v16 + (v24 << 6));
              *(_QWORD *)(a1 + 256) = v32[3];
              *(_QWORD *)(a1 + 264) = v32[2];
              *(_QWORD *)(a1 + 272) = v32[4];
            }
          }
          else
          {
            v16 = *(_QWORD *)(a1 + 112);
          }
          s1 = nullptr;
          v1 = 0;
          v37 = 0;
          if ( v2 != v16 )
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
                          v16 += 64LL;
                          ++v1;
                          if ( v2 == v16 )
                          {
                            v28 = s1;
                            v29 = *(_DWORD *)(a1 + 164);
                            if ( *(_DWORD *)(a1 + 168) )
                            {
                              if ( !v29 )
                                *(_DWORD *)(a1 + 168) = 0;
                            }
                            else
                            {
                              *(_DWORD *)(a1 + 168) = v29;
                            }
                            if ( v28 )
                            {
                              v36 = 0;
                              qfree(v28);
                            }
                            goto LABEL_75;
                          }
                        }
                        while ( !v1 || !*(_QWORD *)(v16 + 32) );
                        v25 = *(_QWORD *)(a1 + 256) <= 0LL;
                        v36 = 0;
                        if ( !v25 && *(_QWORD *)(a1 + 272) )
                          sub_E7D0(*(_QWORD *)(a1 + 240), (__int64 *)&s1, (__int64 *)(a1 + 256), *(_DWORD *)v16);
                        v26 = *(_DWORD *)(v16 + 4);
                        if ( v26 != 18 )
                          break;
                        v31 = *(_DWORD *)(v16 + 40);
                        if ( v31 )
                        {
                          if ( v31 == *(_DWORD *)(a1 + 192) )
                          {
                            *(_DWORD *)(a1 + 204) = v1;
                            v31 = *(_DWORD *)(v16 + 40);
                          }
                          if ( *(_DWORD *)(a1 + 160) == v31 )
                            *(_DWORD *)(a1 + 208) = v1;
                        }
                      }
                      if ( v26 <= 0x12 )
                        break;
                      switch ( v26 )
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
                    if ( v26 != 3 )
                      break;
                    if ( v36 )
                    {
                      v30 = s1;
                      if ( !strcmp(s1, ".strtab") )
                      {
                        sub_F310(a1, (__int64 *)(a1 + 320), v16, 0);
                      }
                      else if ( !strcmp(v30, ".dynstr") )
                      {
                        sub_F310(a1, (__int64 *)(a1 + 352), v16, 0);
                      }
                    }
                  }
                  if ( v26 == 8 )
                    goto LABEL_77;
                }
                while ( v26 != 1 );
                if ( v36 )
                  break;
LABEL_77:
                if ( v36 )
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
          v34 = *(_DWORD *)(a1 + 164);
          if ( *(_DWORD *)(a1 + 168) )
          {
            if ( !v34 )
              *(_DWORD *)(a1 + 168) = 0;
          }
          else
          {
            *(_DWORD *)(a1 + 168) = v34;
          }
LABEL_75:
          v4 = 1;
LABEL_18:
          qlseek(*(_QWORD *)(a1 + 472), v12 + *(_QWORD *)(a1 + 480), 0);
          return v4;
        }
        while ( 1 )
        {
          if ( !v1 || !*(_QWORD *)(v16 + 32) )
            goto LABEL_26;
          v22 = *(_DWORD *)(v16 + 4);
          if ( v22 == 6 )
          {
            v11 = *(unsigned int *)(v16 + 40);
            if ( !*(_BYTE *)(a1 + 248) )
            {
              sub_59B0(v9, v11);
LABEL_112:
              sub_59B0(v9, v11);
              goto LABEL_113;
            }
            if ( (unsigned __int64)(unsigned int)v11 >= *(_QWORD *)(a1 + 120)
              || (v23 = *(_QWORD *)(a1 + 112) + ((unsigned __int64)(unsigned int)v11 << 6)) == 0 )
            {
              v9 = "Illegal link section %d of the dynamic linking information section\n";
              sub_5860((__int64)"Illegal link section %d of the dynamic linking information section\n", v11);
              goto LABEL_26;
            }
            if ( *(_DWORD *)(v23 + 4) == 11 )
            {
              *(_DWORD *)(v23 + 40) = 0;
              goto LABEL_26;
            }
          }
          else
          {
            if ( v22 != 11 )
            {
              if ( v22 == 2 )
              {
                v20 = *(_BYTE *)(a1 + 248) == 0;
                *(_DWORD *)(a1 + 192) = v1;
                v11 = *(unsigned int *)(v16 + 40);
                if ( v20 )
                  sub_59B0(v9, v11);
                if ( (unsigned __int64)(unsigned int)v11 < *(_QWORD *)(a1 + 120)
                  && (v21 = *(_QWORD *)(a1 + 112) + ((unsigned __int64)(unsigned int)v11 << 6)) != 0 )
                {
                  v11 = a1 + 320;
                  v9 = (char *)a1;
                  sub_F310(a1, (__int64 *)(a1 + 320), v21, 1);
                }
                else
                {
                  v9 = "Illegal link section %d of the string table for symbols\n";
                  sub_5860((__int64)"Illegal link section %d of the string table for symbols\n", v11);
                }
              }
              goto LABEL_26;
            }
            v20 = *(_BYTE *)(a1 + 248) == 0;
            *(_DWORD *)(a1 + 160) = v1;
            v11 = *(unsigned int *)(v16 + 40);
            if ( v20 )
              goto LABEL_112;
            if ( (unsigned __int64)(unsigned int)v11 >= *(_QWORD *)(a1 + 120)
              || (v23 = *(_QWORD *)(a1 + 112) + ((unsigned __int64)(unsigned int)v11 << 6)) == 0 )
            {
              v9 = "Illegal link section %d of the string table for dynamic linking symbols\n";
              sub_5860((__int64)"Illegal link section %d of the string table for dynamic linking symbols\n", v11);
              goto LABEL_26;
            }
          }
          v11 = a1 + 352;
          v9 = (char *)a1;
          sub_F310(a1, (__int64 *)(a1 + 352), v23, 1);
LABEL_26:
          v16 += 64LL;
          ++v1;
          if ( v2 == v16 )
            goto LABEL_35;
        }
      }
      while ( 1 )
      {
        v17 = v16 * *(unsigned __int16 *)(a1 + 562);
        v18 = __CFADD__(*(_QWORD *)(a1 + 544), v17);
        v19 = *(_QWORD *)(a1 + 544) + v17;
        if ( v18 || qlseek(*(_QWORD *)(a1 + 472), *(_QWORD *)(a1 + 480) + v19, 0) == -1 )
          break;
        if ( !*(_BYTE *)(a1 + 248) )
        {
          if ( under_debugger )
            BUG();
          interr(20099);
          goto LABEL_110;
        }
        v11 = v16 < *(_QWORD *)(a1 + 120) ? *(_QWORD *)(a1 + 112) + (v16 << 6) : 0LL;
        v9 = (char *)a1;
        if ( !sub_B410((int *)a1, v11) )
          break;
        if ( (unsigned int)++v16 >= *(_DWORD *)(a1 + 568) )
          goto LABEL_19;
      }
    }
    v4 = 0;
    goto LABEL_18;
  }
  return v4;
}
