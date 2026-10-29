_QWORD *__fastcall sub_1C89B0(__int64 a1, char *a2, double a3)
{
  _QWORD *v3; // rbx
  char v5; // al
  __int64 v6; // rdx
  char *v7; // r13
  char v8; // al
  __int64 v9; // rbp
  char v10; // al
  __int64 v11; // r13
  char *v12; // r14
  char v13; // al
  __int64 v14; // r15

  v3 = sub_1FBD10(*(_QWORD ***)(*(_QWORD *)(a1 + 8) + 800LL), (unsigned __int64)a2);
  if ( !v3 )
  {
    v5 = *a2;
    if ( *a2 != 14 )
    {
      v6 = *(_QWORD *)(a1 + 8);
      if ( (*(_BYTE *)(v6 + 2) & 1) == 0 )
      {
        if ( v5 == 6 )
          goto LABEL_19;
        if ( v5 == 1 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v6 + 1504) + 264LL))(
                 *(_QWORD *)(v6 + 1504),
                 *((unsigned int *)a2 + 2)) )
          {
            goto LABEL_19;
          }
          if ( *a2 == 14 )
          {
            v7 = *((char **)a2 + 1);
            v8 = *v7;
            if ( *v7 == 6 )
              goto LABEL_19;
            if ( v8 == 1 )
            {
              if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 1504LL)
                                                                     + 264LL))(
                     *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL),
                     *((unsigned int *)v7 + 2)) )
              {
                goto LABEL_19;
              }
              v8 = *v7;
            }
            if ( v8 == 14 )
            {
              v12 = *((char **)v7 + 1);
              v13 = *v12;
              if ( *v12 == 6 )
                goto LABEL_19;
              if ( v13 == 1 )
              {
                if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 1504LL)
                                                                       + 264LL))(
                       *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL),
                       *((unsigned int *)v12 + 2)) )
                {
                  goto LABEL_19;
                }
                v13 = *v12;
              }
              if ( v13 == 14 )
              {
                v14 = *((_QWORD *)v12 + 1);
                if ( *(_BYTE *)v14 == 6
                  || *(_BYTE *)v14 == 1
                  && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 1504LL)
                                                                       + 264LL))(
                       *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL),
                       *(unsigned int *)(v14 + 8)) )
                {
                  goto LABEL_19;
                }
                if ( *(_BYTE *)v14 == 14
                  && (!(unsigned __int8)sub_1C88D0(a1, *(char **)(v14 + 8))
                   || !(unsigned __int8)sub_1C88D0(a1, (char *)(*(_QWORD *)(v14 + 8) + 16LL)))
                  || !(unsigned __int8)sub_1C88D0(a1, (char *)(*((_QWORD *)v12 + 1) + 16LL)) )
                {
                  goto LABEL_19;
                }
              }
              if ( !(unsigned __int8)sub_1C88D0(a1, (char *)(*((_QWORD *)v7 + 1) + 16LL)) )
                goto LABEL_19;
            }
            v9 = *((_QWORD *)a2 + 1);
            v10 = *(_BYTE *)(v9 + 16);
            if ( v10 == 6 )
              goto LABEL_19;
            if ( v10 == 1 )
            {
              if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 1504LL)
                                                                     + 264LL))(
                     *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL),
                     *(unsigned int *)(v9 + 24)) )
              {
                goto LABEL_19;
              }
              v10 = *(_BYTE *)(v9 + 16);
            }
            if ( v10 == 14 )
            {
              if ( (v11 = *(_QWORD *)(v9 + 24), *(_BYTE *)v11 == 6)
                || *(_BYTE *)v11 == 1
                && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 1504LL)
                                                                     + 264LL))(
                     *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL),
                     *(unsigned int *)(v11 + 8))
                || *(_BYTE *)v11 == 14
                && (!(unsigned __int8)sub_1C88D0(a1, *(char **)(v11 + 8))
                 || !(unsigned __int8)sub_1C88D0(a1, (char *)(*(_QWORD *)(v11 + 8) + 16LL)))
                || !(unsigned __int8)sub_1C88D0(a1, (char *)(*(_QWORD *)(v9 + 24) + 16LL)) )
              {
LABEL_19:
                sub_1C8290(a3);
              }
            }
          }
        }
      }
    }
  }
  return v3;
}

