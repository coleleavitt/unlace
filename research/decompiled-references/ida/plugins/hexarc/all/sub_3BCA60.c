_QWORD *__fastcall sub_3BCA60(__int64 a1, char a2)
{
  __int64 v2; // r12
  _QWORD *v3; // r15
  __int64 *v6; // r14
  _QWORD *v7; // rax
  __int64 v8; // r13
  unsigned __int64 **v9; // r12
  __int64 *v10; // rbx
  __int64 *v11; // rdx
  int v12; // esi
  __int64 *v13; // rax
  __int64 *v14; // rdx
  __int64 *i; // rax
  __int64 *v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rsi
  __int64 *v19; // [rsp+0h] [rbp-68h]
  __int64 v20; // [rsp+10h] [rbp-58h] BYREF
  int v21; // [rsp+18h] [rbp-50h]
  unsigned __int64 v22; // [rsp+28h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 80) == 1 )
    {
      v2 = *(_QWORD *)(a1 + 88);
      if ( *(_DWORD *)(v2 + 8) == 68 && !strcmp(*(const char **)(v2 + 24), "CONTAINING_RECORD") )
      {
        v6 = *(__int64 **)(a1 + 32);
        v7 = (_QWORD *)sub_24F9F0((__int64)(v6 + 2), v2);
        v3 = v7;
        if ( v7 )
        {
          v8 = *v7;
          v9 = (unsigned __int64 **)v6[10];
          v21 = 0;
          v20 = v8;
          v10 = (__int64 *)*v9;
          if ( *v9 )
          {
            v11 = (__int64 *)(*v10 & 0xFFFFFFFFFFFFFFFCLL);
            if ( !v11 )
            {
              v10 = nullptr;
              goto LABEL_16;
            }
            if ( (*(_BYTE *)v11 & 2) == 0 )
            {
              while ( 1 )
              {
                v19 = v11;
                v12 = sub_2508C0((__int64)(v11 + 3), (__int64)&v20);
                v13 = (__int64 *)v19[1];
                if ( v12 < 0 )
                  v13 = (__int64 *)v19[2];
                else
                  v10 = v19;
                if ( (*(_BYTE *)v13 & 2) != 0 )
                  break;
                v11 = v13;
              }
              if ( *v9 != (unsigned __int64 *)v10 )
              {
LABEL_16:
                while ( v8 == v10[3] )
                {
                  if ( (unsigned __int8)is_stroff() )
                  {
                    if ( a2 )
                    {
                      sub_33E5B0(v9, v10);
                      sub_2AF390(*(_QWORD *)(v6[27] + 112), *v6, v6[10]);
                    }
                    return v3;
                  }
                  if ( (*v10 & 2) == 0 )
                  {
                    v14 = (__int64 *)v10[2];
                    if ( (*(_BYTE *)v14 & 2) != 0 )
                    {
                      v16 = (__int64 *)(*v10 & 0xFFFFFFFFFFFFFFFCLL);
                      v17 = *v16;
                      if ( (*v16 & 2) == 0 )
                      {
                        while ( (__int64 *)v16[2] == v10 )
                        {
                          v10 = v16;
                          v18 = v17 & 0xFFFFFFFFFFFFFFFCLL;
                          v17 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFCLL);
                          if ( (v17 & 2) != 0 )
                          {
                            v10 = (__int64 *)v18;
                            goto LABEL_23;
                          }
                          v16 = (__int64 *)v18;
                        }
                      }
                      v10 = v16;
                    }
                    else
                    {
                      for ( i = (__int64 *)v14[1]; (*(_BYTE *)i & 2) == 0; i = (__int64 *)i[1] )
                        v14 = i;
                      v10 = v14;
                    }
                  }
LABEL_23:
                  if ( v10 == (__int64 *)*v9 )
                    return nullptr;
                }
              }
            }
          }
        }
      }
    }
  }
  return nullptr;
}

