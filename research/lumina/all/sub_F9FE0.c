_WORD *__fastcall sub_F9FE0(__int64 *a1, double a2)
{
  unsigned __int8 *v2; // rcx
  unsigned __int8 v4; // al
  int v5; // ebp
  __int64 v6; // r12
  int v7; // eax
  int v8; // r14d
  unsigned int v9; // r13d
  _WORD *v10; // rbx
  int v11; // r8d
  unsigned __int16 v12; // si
  unsigned __int8 v13; // di
  __int64 v14; // rax
  unsigned __int8 v16; // al
  int v17; // eax
  __int64 i; // rax
  int v19; // edx
  int v20; // r10d
  __int64 v21; // rdx
  __int64 v22; // r9
  int v23; // r11d
  char v24; // al
  _BOOL4 v25; // edx
  _BYTE **v26; // rax
  unsigned __int8 *v27; // rdi
  _BYTE *j; // rsi
  __int64 v29; // rax
  __int64 v30; // rdx
  unsigned __int8 *v31; // [rsp+8h] [rbp-60h]
  char v32; // [rsp+8h] [rbp-60h]
  int v33; // [rsp+10h] [rbp-58h]
  __int64 v34; // [rsp+10h] [rbp-58h]
  unsigned __int8 *v35; // [rsp+18h] [rbp-50h]
  int v36; // [rsp+24h] [rbp-44h]
  __int64 v37; // [rsp+28h] [rbp-40h]

  v2 = byte_1BF000;
  v4 = *((_BYTE *)a1 + 41);
  v5 = *((_DWORD *)a1 + 8);
  v6 = a1[1];
  while ( 1 )
  {
    v7 = v4 - 1;
    v8 = *((unsigned __int16 *)a1 + v7 + 44);
    v9 = *((_DWORD *)a1 + v7 + 11);
    do
    {
      v10 = (_WORD *)(*(_QWORD *)(v6 + 32) + 56LL * v5);
      if ( v5 < *(_DWORD *)(v6 + 20) )
      {
        v11 = v8;
        do
        {
          if ( *((_DWORD *)v10 + 7) == v9 && *((_DWORD *)v10 + 8) == (__int16)v8 )
          {
            if ( (_WORD)v11 != 0xFFFE
              || (v33 = v11,
                  v31 = v2,
                  v17 = sub_F9E50(*(_QWORD *)(*(_QWORD *)v10 + 16LL), a1[3], v9, a2),
                  v2 = v31,
                  v11 = v33,
                  !v17) )
            {
              if ( *((_BYTE *)a1 + 41) <= 1u || (*(_BYTE *)(*(_QWORD *)v10 + 4LL) & 1) == 0 )
              {
                v12 = v10[10];
                if ( (v12 & 0x800) != 0 )
                {
                  v13 = *((_BYTE *)a1 + 42);
                  if ( v13 <= 0xAu )
                  {
                    for ( i = *(_QWORD *)(*(_QWORD *)v10 + 24LL); i; i = *(_QWORD *)(i + 16) )
                    {
                      v19 = *(_DWORD *)(i + 4);
                      if ( (v19 & 0x41000) == 0 )
                      {
LABEL_35:
                        if ( (*(_QWORD *)i & 0x8000000FFLL) == 0xA7 )
                        {
                          v20 = *(_DWORD *)(i + 44);
                          if ( !v13 )
                            goto LABEL_43;
                          v21 = 1;
                          v22 = (unsigned int)v13 - 1 + 2LL;
                          do
                          {
                            while ( *((_DWORD *)a1 + v21 + 10) != v20 )
                            {
                              v23 = v21++;
                              if ( v21 == v22 )
                                goto LABEL_42;
                            }
                            if ( *((_WORD *)a1 + v21 + 43) == *(_WORD *)(i + 48) )
                              goto LABEL_13;
                            v23 = v21++;
                          }
                          while ( v21 != v22 );
LABEL_42:
                          if ( v13 == v23 )
                          {
LABEL_43:
                            *((_DWORD *)a1 + v13 + 11) = v20;
                            *((_WORD *)a1 + v13 + 44) = *(_WORD *)(i + 48);
                            *((_BYTE *)a1 + 42) = v13 + 1;
                            v12 = v10[10];
                          }
                        }
                        break;
                      }
                      while ( (v19 & 0x40000) != 0 )
                      {
                        i = *(_QWORD *)(*(_QWORD *)(i + 32) + 8LL);
                        if ( !i )
                          goto LABEL_13;
                        v19 = *(_DWORD *)(i + 4);
                        if ( (v19 & 0x41000) == 0 )
                          goto LABEL_35;
                      }
                    }
                  }
                }
LABEL_13:
                if ( (v12 & *((_DWORD *)a1 + 9)) != 0 )
                {
                  if ( a1[2] && (v12 & 0x100) == 0 )
                  {
                    v36 = v11;
                    v35 = v2;
                    v34 = *(_QWORD *)v10;
                    v37 = **(_QWORD **)v6;
                    v32 = *((_BYTE *)a1 + 40);
                    v24 = sub_C6930(*(_QWORD *)v10);
                    v2 = v35;
                    v11 = v36;
                    if ( v24 <= 65 )
                      goto LABEL_49;
                    v25 = v32 > 66;
                    if ( v24 == 66 )
                      v25 = v32 == 66;
                    if ( v25 )
                    {
LABEL_49:
                      v26 = (_BYTE **)sub_F3C70(v37, v34, a2);
                      v2 = v35;
                      v11 = v36;
                      if ( !v26 )
                        v26 = *(_BYTE ***)(*(_QWORD *)v37 + 16LL);
                      v27 = (unsigned __int8 *)a1[2];
                      for ( j = *v26; ; ++j )
                      {
                        v29 = (unsigned __int8)*j;
                        v30 = *v27;
                        if ( (_DWORD)v29 == (_DWORD)v30 )
                        {
                          if ( !*j )
                          {
                            v12 = v10[10];
                            goto LABEL_16;
                          }
                        }
                        else if ( v35[v29] != v35[v30] )
                        {
                          break;
                        }
                        ++v27;
                      }
                    }
                  }
                  else
                  {
LABEL_16:
                    if ( (v12 & 0x82) == 0
                      || (v14 = *(_QWORD *)(*(_QWORD *)v10 + 24LL)) == 0
                      || *(_BYTE *)v14 != 0xA7
                      || *(_DWORD *)(v14 + 44) != *((_DWORD *)a1 + 11)
                      || *(_WORD *)(v14 + 48) != *((_WORD *)a1 + 44) )
                    {
                      a1[1] = v6;
                      *((_DWORD *)a1 + 8) = v5 + 1;
                      return v10;
                    }
                  }
                }
              }
            }
          }
          ++v5;
          v10 += 28;
        }
        while ( *(_DWORD *)(v6 + 20) > v5 );
        v8 = v11;
      }
      v6 = *(_QWORD *)(v6 + 8);
      v5 = 0;
    }
    while ( v6 );
    v16 = *((_BYTE *)a1 + 41);
    if ( v16 >= *((_BYTE *)a1 + 42) )
      return nullptr;
    v4 = v16 + 1;
    v6 = *a1;
    *((_BYTE *)a1 + 41) = v4;
  }
}
