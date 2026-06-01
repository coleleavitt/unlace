__int64 __fastcall sub_1C6AD0(__int64 a1)
{
  __int64 v1; // rbp
  char v3; // al
  int *v4; // r12
  unsigned __int64 v5; // rax
  char v6; // al
  __int64 v7; // rdx
  __int64 v8; // r12
  char *v9; // r12
  char v10; // al
  __int64 v11; // r12
  char v12; // al
  char **v13; // r13
  char v14; // al
  char *v15; // r13
  char v16; // al
  __int64 v17; // r12
  char v18; // al
  __int64 v19; // r13
  __int64 v20; // r14

  v1 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)v1 == 19 )
  {
    v3 = *(_BYTE *)(v1 + 64);
    if ( v3 != 6 )
    {
      if ( v3 == 1 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 1504LL) + 264LL))(
               *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL),
               *(unsigned int *)(v1 + 72)) )
        {
          return 0;
        }
        v3 = *(_BYTE *)(v1 + 64);
      }
      if ( v3 != 14 )
        goto LABEL_87;
      v9 = *(char **)(v1 + 72);
      v10 = *v9;
      if ( *v9 != 6 )
      {
        if ( v10 == 1 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 1504LL) + 264LL))(
                 *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL),
                 *((unsigned int *)v9 + 2)) )
          {
            return 0;
          }
          v10 = *v9;
        }
        if ( v10 != 14 )
          goto LABEL_88;
        v15 = *((char **)v9 + 1);
        v16 = *v15;
        if ( *v15 != 6 )
        {
          if ( v16 == 1 )
          {
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 1504LL) + 264LL))(
                   *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL),
                   *((unsigned int *)v15 + 2)) )
            {
              return 0;
            }
            v16 = *v15;
          }
          if ( v16 != 14
            || (v20 = *((_QWORD *)v15 + 1), *(_BYTE *)v20 != 6)
            && (*(_BYTE *)v20 != 1
             || !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 1504LL) + 264LL))(
                   *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL),
                   *(unsigned int *)(v20 + 8)))
            && (*(_BYTE *)v20 != 14
             || (unsigned __int8)sub_1C4E90(a1, *(char **)(v20 + 8))
             && (unsigned __int8)sub_1C4E90(a1, (char *)(*(_QWORD *)(v20 + 8) + 16LL)))
            && (unsigned __int8)sub_1C4E90(a1, (char *)(*((_QWORD *)v15 + 1) + 16LL)) )
          {
            v17 = *((_QWORD *)v9 + 1);
            v18 = *(_BYTE *)(v17 + 16);
            if ( v18 != 6 )
            {
              if ( v18 == 1 )
              {
                if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 1504LL)
                                                                       + 264LL))(
                       *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL),
                       *(unsigned int *)(v17 + 24)) )
                {
                  return 0;
                }
                v18 = *(_BYTE *)(v17 + 16);
              }
              if ( v18 != 14
                || (v19 = *(_QWORD *)(v17 + 24), *(_BYTE *)v19 != 6)
                && (*(_BYTE *)v19 != 1
                 || !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 1504LL)
                                                                       + 264LL))(
                       *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL),
                       *(unsigned int *)(v19 + 8)))
                && (*(_BYTE *)v19 != 14
                 || (unsigned __int8)sub_1C4E90(a1, *(char **)(v19 + 8))
                 && (unsigned __int8)sub_1C4E90(a1, (char *)(*(_QWORD *)(v19 + 8) + 16LL)))
                && (unsigned __int8)sub_1C4E90(a1, (char *)(*(_QWORD *)(v17 + 24) + 16LL)) )
              {
LABEL_88:
                v11 = *(_QWORD *)(v1 + 72);
                v12 = *(_BYTE *)(v11 + 16);
                if ( v12 != 6 )
                {
                  if ( v12 == 1 )
                  {
                    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 1504LL)
                                                                           + 264LL))(
                           *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL),
                           *(unsigned int *)(v11 + 24)) )
                    {
                      return 0;
                    }
                    v12 = *(_BYTE *)(v11 + 16);
                  }
                  if ( v12 != 14 )
                    goto LABEL_87;
                  v13 = *(char ***)(v11 + 24);
                  v14 = *(_BYTE *)v13;
                  if ( *(_BYTE *)v13 != 6 )
                  {
                    if ( v14 == 1 )
                    {
                      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 1504LL)
                                                                             + 264LL))(
                             *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL),
                             *((unsigned int *)v13 + 2)) )
                      {
                        return 0;
                      }
                      v14 = *(_BYTE *)v13;
                    }
                    if ( (v14 != 14
                       || (unsigned __int8)sub_1C4E90(a1, v13[1]) && (unsigned __int8)sub_1C4E90(a1, v13[1] + 16))
                      && (unsigned __int8)sub_1C4E90(a1, (char *)(*(_QWORD *)(v11 + 24) + 16LL)) )
                    {
LABEL_87:
                      v4 = (int *)sub_1F8090(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 800LL), v1 + 64);
                      if ( v4 )
                        goto LABEL_7;
                      v6 = *(_BYTE *)(v1 + 64);
                      if ( v6 != 14 )
                      {
                        v7 = *(_QWORD *)(a1 + 8);
                        if ( (*(_BYTE *)(v7 + 2) & 1) != 0 )
                          return 0;
                        if ( v6 == 6 )
                          goto LABEL_56;
                        if ( v6 != 1 )
                          return 0;
                        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v7 + 1504) + 264LL))(
                               *(_QWORD *)(v7 + 1504),
                               *(unsigned int *)(v1 + 72)) )
                        {
                          goto LABEL_56;
                        }
                        if ( *(_BYTE *)(v1 + 64) != 14 )
                          return 0;
                        if ( (v8 = *(_QWORD *)(v1 + 72), *(_BYTE *)v8 == 6)
                          || *(_BYTE *)v8 == 1
                          && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8)
                                                                                             + 1504LL)
                                                                               + 264LL))(
                               *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL),
                               *(unsigned int *)(v8 + 8))
                          || *(_BYTE *)v8 == 14
                          && (!(unsigned __int8)sub_1C4E90(a1, *(char **)(v8 + 8))
                           || !(unsigned __int8)sub_1C4E90(a1, (char *)(*(_QWORD *)(v8 + 8) + 16LL)))
                          || !(unsigned __int8)sub_1C4E90(a1, (char *)(*(_QWORD *)(v1 + 72) + 16LL)) )
                        {
LABEL_56:
                          sub_1C4850();
                        }
                        if ( *(_BYTE *)(v1 + 64) != 14 )
                          return 0;
                      }
                      v4 = (int *)sub_1C4F70(a1, *(char **)(v1 + 72));
                      if ( v4 || (v4 = (int *)sub_1C4F70(a1, (char *)(*(_QWORD *)(v1 + 72) + 16LL))) != nullptr )
                      {
LABEL_7:
                        v5 = v4[4];
                        if ( *(_QWORD *)(*(_QWORD *)v4 + 440LL) >= v5 )
                        {
                          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 432LL) + 104 * v5) == 2
                            || (get_tinfo_property() & 0x2F) == 0xD )
                          {
                            goto LABEL_12;
                          }
                          if ( *(_QWORD *)(*(_QWORD *)v4 + 440LL) >= (unsigned __int64)v4[4] )
                          {
                            if ( (get_tinfo_property() & 0xF) != 0xB )
                              return 0;
LABEL_12:
                            *(_DWORD *)(a1 + 40) += sub_1C58E0(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 32), v4);
                            return 0;
                          }
                        }
                        sub_1C4870();
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

