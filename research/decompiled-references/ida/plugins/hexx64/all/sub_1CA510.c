__int64 __fastcall sub_1CA510(__int64 a1, double a2, __m128 a3)
{
  __int64 v3; // rbp
  char v5; // al
  int *v6; // r12
  unsigned __int64 v7; // rax
  char v8; // al
  __int64 v9; // rdx
  __int64 v10; // r12
  char *v11; // r12
  char v12; // al
  __int64 v13; // r12
  char v14; // al
  char **v15; // r13
  char v16; // al
  char *v17; // r13
  char v18; // al
  __int64 v19; // r12
  char v20; // al
  __int64 v21; // r13
  __int64 v22; // r14

  v3 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)v3 == 19 )
  {
    v5 = *(_BYTE *)(v3 + 64);
    if ( v5 != 6 )
    {
      if ( v5 == 1 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 1504LL) + 264LL))(
               *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL),
               *(unsigned int *)(v3 + 72)) )
        {
          return 0;
        }
        v5 = *(_BYTE *)(v3 + 64);
      }
      if ( v5 != 14 )
        goto LABEL_87;
      v11 = *(char **)(v3 + 72);
      v12 = *v11;
      if ( *v11 != 6 )
      {
        if ( v12 == 1 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 1504LL) + 264LL))(
                 *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL),
                 *((unsigned int *)v11 + 2)) )
          {
            return 0;
          }
          v12 = *v11;
        }
        if ( v12 != 14 )
          goto LABEL_88;
        v17 = *((char **)v11 + 1);
        v18 = *v17;
        if ( *v17 != 6 )
        {
          if ( v18 == 1 )
          {
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 1504LL) + 264LL))(
                   *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL),
                   *((unsigned int *)v17 + 2)) )
            {
              return 0;
            }
            v18 = *v17;
          }
          if ( v18 != 14
            || (v22 = *((_QWORD *)v17 + 1), *(_BYTE *)v22 != 6)
            && (*(_BYTE *)v22 != 1
             || !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 1504LL) + 264LL))(
                   *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL),
                   *(unsigned int *)(v22 + 8)))
            && (*(_BYTE *)v22 != 14
             || (unsigned __int8)sub_1C88D0(a1, *(char **)(v22 + 8))
             && (unsigned __int8)sub_1C88D0(a1, (char *)(*(_QWORD *)(v22 + 8) + 16LL)))
            && (unsigned __int8)sub_1C88D0(a1, (char *)(*((_QWORD *)v17 + 1) + 16LL)) )
          {
            v19 = *((_QWORD *)v11 + 1);
            v20 = *(_BYTE *)(v19 + 16);
            if ( v20 != 6 )
            {
              if ( v20 == 1 )
              {
                if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 1504LL)
                                                                       + 264LL))(
                       *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL),
                       *(unsigned int *)(v19 + 24)) )
                {
                  return 0;
                }
                v20 = *(_BYTE *)(v19 + 16);
              }
              if ( v20 != 14
                || (v21 = *(_QWORD *)(v19 + 24), *(_BYTE *)v21 != 6)
                && (*(_BYTE *)v21 != 1
                 || !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 1504LL)
                                                                       + 264LL))(
                       *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL),
                       *(unsigned int *)(v21 + 8)))
                && (*(_BYTE *)v21 != 14
                 || (unsigned __int8)sub_1C88D0(a1, *(char **)(v21 + 8))
                 && (unsigned __int8)sub_1C88D0(a1, (char *)(*(_QWORD *)(v21 + 8) + 16LL)))
                && (unsigned __int8)sub_1C88D0(a1, (char *)(*(_QWORD *)(v19 + 24) + 16LL)) )
              {
LABEL_88:
                v13 = *(_QWORD *)(v3 + 72);
                v14 = *(_BYTE *)(v13 + 16);
                if ( v14 != 6 )
                {
                  if ( v14 == 1 )
                  {
                    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 1504LL)
                                                                           + 264LL))(
                           *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL),
                           *(unsigned int *)(v13 + 24)) )
                    {
                      return 0;
                    }
                    v14 = *(_BYTE *)(v13 + 16);
                  }
                  if ( v14 != 14 )
                    goto LABEL_87;
                  v15 = *(char ***)(v13 + 24);
                  v16 = *(_BYTE *)v15;
                  if ( *(_BYTE *)v15 != 6 )
                  {
                    if ( v16 == 1 )
                    {
                      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 1504LL)
                                                                             + 264LL))(
                             *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL),
                             *((unsigned int *)v15 + 2)) )
                      {
                        return 0;
                      }
                      v16 = *(_BYTE *)v15;
                    }
                    if ( (v16 != 14
                       || (unsigned __int8)sub_1C88D0(a1, v15[1]) && (unsigned __int8)sub_1C88D0(a1, v15[1] + 16))
                      && (unsigned __int8)sub_1C88D0(a1, (char *)(*(_QWORD *)(v13 + 24) + 16LL)) )
                    {
LABEL_87:
                      v6 = (int *)sub_1FBD10(*(_QWORD ***)(*(_QWORD *)(a1 + 8) + 800LL), v3 + 64);
                      if ( v6 )
                        goto LABEL_7;
                      v8 = *(_BYTE *)(v3 + 64);
                      if ( v8 != 14 )
                      {
                        v9 = *(_QWORD *)(a1 + 8);
                        if ( (*(_BYTE *)(v9 + 2) & 1) != 0 )
                          return 0;
                        if ( v8 == 6 )
                          goto LABEL_56;
                        if ( v8 != 1 )
                          return 0;
                        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v9 + 1504) + 264LL))(
                               *(_QWORD *)(v9 + 1504),
                               *(unsigned int *)(v3 + 72)) )
                        {
                          goto LABEL_56;
                        }
                        if ( *(_BYTE *)(v3 + 64) != 14 )
                          return 0;
                        if ( (v10 = *(_QWORD *)(v3 + 72), *(_BYTE *)v10 == 6)
                          || *(_BYTE *)v10 == 1
                          && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8)
                                                                                             + 1504LL)
                                                                               + 264LL))(
                               *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL),
                               *(unsigned int *)(v10 + 8))
                          || *(_BYTE *)v10 == 14
                          && (!(unsigned __int8)sub_1C88D0(a1, *(char **)(v10 + 8))
                           || !(unsigned __int8)sub_1C88D0(a1, (char *)(*(_QWORD *)(v10 + 8) + 16LL)))
                          || !(unsigned __int8)sub_1C88D0(a1, (char *)(*(_QWORD *)(v3 + 72) + 16LL)) )
                        {
LABEL_56:
                          sub_1C8290(a2);
                        }
                        if ( *(_BYTE *)(v3 + 64) != 14 )
                          return 0;
                      }
                      v6 = (int *)sub_1C89B0(a1, *(char **)(v3 + 72), a2);
                      if ( v6 || (v6 = (int *)sub_1C89B0(a1, (char *)(*(_QWORD *)(v3 + 72) + 16LL), a2)) != nullptr )
                      {
LABEL_7:
                        v7 = v6[4];
                        if ( *(_QWORD *)(*(_QWORD *)v6 + 440LL) >= v7 )
                        {
                          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 432LL) + 104 * v7) == 2
                            || (get_tinfo_property() & 0x2F) == 0xD )
                          {
                            goto LABEL_12;
                          }
                          if ( *(_QWORD *)(*(_QWORD *)v6 + 440LL) >= (unsigned __int64)v6[4] )
                          {
                            if ( (get_tinfo_property() & 0xF) != 0xB )
                              return 0;
LABEL_12:
                            *(_DWORD *)(a1 + 40) += sub_1C9320(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 32), v6, a2, a3);
                            return 0;
                          }
                        }
                        sub_1C82B0(a2);
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

