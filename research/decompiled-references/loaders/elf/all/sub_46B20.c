__int64 __fastcall sub_46B20(__int64 a1)
{
  int v1; // r13d
  unsigned __int64 v2; // r14
  char *v3; // r15
  unsigned int v4; // r12d
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rbp
  int v10; // esi
  unsigned __int64 v11; // r12
  __int64 v12; // rsi
  unsigned __int64 v13; // rsi
  bool v14; // cf
  unsigned __int64 v15; // rsi
  bool v16; // zf
  unsigned int v17; // esi
  __int64 v18; // rdx
  int v19; // eax
  unsigned int v20; // esi
  __int64 v21; // rdx
  unsigned __int64 v22; // rax
  bool v23; // cc
  unsigned int v24; // eax
  unsigned int v25; // esi
  char *v26; // rdi
  int v27; // eax
  char *v28; // r15
  int v29; // eax
  _QWORD *v30; // rax
  int v31; // eax
  char *s1; // [rsp+0h] [rbp-58h] BYREF
  __int64 v33; // [rsp+8h] [rbp-50h]
  __int64 v34; // [rsp+10h] [rbp-48h]
  unsigned __int64 v35; // [rsp+18h] [rbp-40h]

  v4 = 0;
  v35 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 544) )
  {
    v7 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
    v8 = *(_QWORD *)(a1 + 480);
    v9 = v7 - v8;
    if ( qlseek(*(_QWORD *)(a1 + 472), *(_QWORD *)(a1 + 544) + v8, 0) != -1 )
    {
      sub_45450((__int64 *)(a1 + 112), *(unsigned int *)(a1 + 568));
      v10 = *(_DWORD *)(a1 + 568);
      *(_BYTE *)(a1 + 248) = 1;
      v11 = 0;
      if ( !v10 )
      {
LABEL_16:
        v11 = *(_QWORD *)(a1 + 112);
        v1 = 0;
        v2 = v11 + (*(_QWORD *)(a1 + 120) << 6);
        if ( v11 == v2 )
        {
LABEL_32:
          v22 = *(unsigned int *)(a1 + 572);
          if ( (_DWORD)v22 )
          {
            if ( !*(_BYTE *)(a1 + 248) )
            {
LABEL_106:
              sub_30AC0();
              goto LABEL_107;
            }
            v11 = *(_QWORD *)(a1 + 112);
            if ( v22 < *(_QWORD *)(a1 + 120) )
            {
              v30 = (_QWORD *)(v11 + (v22 << 6));
              *(_QWORD *)(a1 + 256) = v30[3];
              *(_QWORD *)(a1 + 264) = v30[2];
              *(_QWORD *)(a1 + 272) = v30[4];
            }
          }
          else
          {
            v11 = *(_QWORD *)(a1 + 112);
          }
          s1 = nullptr;
          v1 = 0;
          v34 = 0;
          if ( v2 != v11 )
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
                          v11 += 64LL;
                          ++v1;
                          if ( v2 == v11 )
                          {
                            v26 = s1;
                            v27 = *(_DWORD *)(a1 + 164);
                            if ( *(_DWORD *)(a1 + 168) )
                            {
                              if ( !v27 )
                                *(_DWORD *)(a1 + 168) = 0;
                            }
                            else
                            {
                              *(_DWORD *)(a1 + 168) = v27;
                            }
                            if ( v26 )
                            {
                              v33 = 0;
                              qfree(v26);
                            }
                            goto LABEL_69;
                          }
                        }
                        while ( !v1 || !*(_QWORD *)(v11 + 32) );
                        v23 = *(_QWORD *)(a1 + 256) <= 0LL;
                        v33 = 0;
                        if ( !v23 && *(_QWORD *)(a1 + 272) )
                          sub_461E0(*(_QWORD *)(a1 + 240), (__int64 *)&s1, (__int64 *)(a1 + 256), *(_DWORD *)v11);
                        v24 = *(_DWORD *)(v11 + 4);
                        if ( v24 != 18 )
                          break;
                        v29 = *(_DWORD *)(v11 + 40);
                        if ( v29 )
                        {
                          if ( v29 == *(_DWORD *)(a1 + 192) )
                          {
                            *(_DWORD *)(a1 + 204) = v1;
                            v29 = *(_DWORD *)(v11 + 40);
                          }
                          if ( *(_DWORD *)(a1 + 160) == v29 )
                            *(_DWORD *)(a1 + 208) = v1;
                        }
                      }
                      if ( v24 <= 0x12 )
                        break;
                      switch ( v24 )
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
                    if ( v24 != 3 )
                      break;
                    if ( v33 )
                    {
                      v28 = s1;
                      if ( !strcmp(s1, ".strtab") )
                      {
                        sub_46940(a1, (__int64 *)(a1 + 320), v11, 0);
                      }
                      else if ( !strcmp(v28, ".dynstr") )
                      {
                        sub_46940(a1, (__int64 *)(a1 + 352), v11, 0);
                      }
                    }
                  }
                  if ( v24 == 8 )
                    goto LABEL_71;
                }
                while ( v24 != 1 );
                if ( v33 )
                  break;
LABEL_71:
                if ( v33 )
                {
                  v3 = s1;
LABEL_73:
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
LABEL_104:
                *(_DWORD *)(a1 + 232) = v1;
              }
              else if ( !strcmp(v3, ".eh_frame") )
              {
                *(_DWORD *)(a1 + 236) = v1;
              }
              else
              {
LABEL_107:
                if ( !*(_BYTE *)(a1 + 617) )
                  goto LABEL_73;
                if ( strcmp(v3, ".opd") )
                  goto LABEL_71;
                *(_DWORD *)(a1 + 200) = v1;
              }
            }
          }
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
LABEL_69:
          v4 = 1;
LABEL_15:
          qlseek(*(_QWORD *)(a1 + 472), v9 + *(_QWORD *)(a1 + 480), 0);
          return v4;
        }
        while ( 1 )
        {
          if ( !v1 || !*(_QWORD *)(v11 + 32) )
            goto LABEL_23;
          v19 = *(_DWORD *)(v11 + 4);
          if ( v19 == 6 )
            break;
          if ( v19 == 11 )
          {
            v16 = *(_BYTE *)(a1 + 248) == 0;
            *(_DWORD *)(a1 + 160) = v1;
            v20 = *(_DWORD *)(v11 + 40);
            if ( v16 )
              goto LABEL_111;
            if ( (unsigned __int64)v20 >= *(_QWORD *)(a1 + 120)
              || (v21 = *(_QWORD *)(a1 + 112) + ((unsigned __int64)v20 << 6)) == 0 )
            {
              sub_EAA0((__int64)"Illegal link section %d of the string table for dynamic linking symbols\n", v20);
              goto LABEL_23;
            }
LABEL_31:
            sub_46940(a1, (__int64 *)(a1 + 352), v21, 1);
            goto LABEL_23;
          }
          if ( v19 == 2 )
          {
            v16 = *(_BYTE *)(a1 + 248) == 0;
            *(_DWORD *)(a1 + 192) = v1;
            v17 = *(_DWORD *)(v11 + 40);
            if ( v16 )
            {
              sub_30AC0();
LABEL_111:
              sub_30AC0();
            }
            if ( (unsigned __int64)v17 < *(_QWORD *)(a1 + 120)
              && (v18 = *(_QWORD *)(a1 + 112) + ((unsigned __int64)v17 << 6)) != 0 )
            {
              sub_46940(a1, (__int64 *)(a1 + 320), v18, 1);
            }
            else
            {
              sub_EAA0((__int64)"Illegal link section %d of the string table for symbols\n", v17);
            }
          }
LABEL_23:
          v11 += 64LL;
          ++v1;
          if ( v2 == v11 )
            goto LABEL_32;
        }
        v25 = *(_DWORD *)(v11 + 40);
        if ( !*(_BYTE *)(a1 + 248) )
        {
          sub_30AC0();
          goto LABEL_106;
        }
        if ( (unsigned __int64)v25 >= *(_QWORD *)(a1 + 120)
          || (v21 = *(_QWORD *)(a1 + 112) + ((unsigned __int64)v25 << 6)) == 0 )
        {
          sub_EAA0((__int64)"Illegal link section %d of the dynamic linking information section\n", v25);
          goto LABEL_23;
        }
        if ( *(_DWORD *)(v21 + 4) == 11 )
        {
          *(_DWORD *)(v21 + 40) = 0;
          goto LABEL_23;
        }
        goto LABEL_31;
      }
      while ( 1 )
      {
        v13 = v11 * *(unsigned __int16 *)(a1 + 562);
        v14 = __CFADD__(*(_QWORD *)(a1 + 544), v13);
        v15 = *(_QWORD *)(a1 + 544) + v13;
        if ( v14 || qlseek(*(_QWORD *)(a1 + 472), *(_QWORD *)(a1 + 480) + v15, 0) == -1 )
          break;
        if ( !*(_BYTE *)(a1 + 248) )
        {
          if ( under_debugger )
            BUG();
          interr(20099);
          goto LABEL_104;
        }
        v12 = v11 < *(_QWORD *)(a1 + 120) ? *(_QWORD *)(a1 + 112) + (v11 << 6) : 0LL;
        if ( !sub_39A90((int *)a1, v12) )
          break;
        if ( (unsigned int)++v11 >= *(_DWORD *)(a1 + 568) )
          goto LABEL_16;
      }
    }
    v4 = 0;
    goto LABEL_15;
  }
  return v4;
}
