__int64 __fastcall sub_294EE0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v3; // eax
  __int64 v4; // r13
  unsigned int v5; // eax
  __int64 v6; // rbp
  unsigned int v7; // eax
  __int64 v8; // r14
  unsigned int v9; // eax
  __int64 v10; // rbx
  unsigned int i; // eax
  __int64 v12; // r15
  unsigned int j; // eax
  bool v14; // cc
  __int64 v15; // rax
  int v16; // edx
  __int64 v17; // rax
  int v18; // edx
  bool v19; // cc
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rax
  int v23; // edx
  bool v24; // cc
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rax
  int v28; // edx
  bool v29; // cc
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // rax
  int v33; // edx
  bool v34; // cc
  __int64 v35; // rax
  int v36; // edx
  __int64 v37; // rax
  int v38; // edx
  bool v39; // cc
  __int64 v40; // rax
  int v41; // edx
  __int64 v42; // rax
  int v43; // edx
  bool v44; // cc
  int v45; // edx
  int v46; // edx
  __int64 v47; // [rsp+0h] [rbp-48h]
  __int64 v48; // [rsp+8h] [rbp-40h]

  result = *(unsigned int *)(a2 + 8);
  v48 = a2;
  if ( (_DWORD)result != 16 )
    goto LABEL_123;
  do
  {
    v47 = *(_QWORD *)(v48 + 40);
    v3 = *(_DWORD *)(v47 + 8);
    if ( v3 == 16 )
    {
      while ( 1 )
      {
        v4 = *(_QWORD *)(v47 + 40);
        v5 = *(_DWORD *)(v4 + 8);
        if ( v5 == 16 )
          break;
LABEL_86:
        v34 = v5 <= 0x39;
        if ( v5 == 57 )
        {
          while ( (unsigned int)sub_289130(*(_QWORD *)(v4 + 24)) != -1 )
          {
            v4 = **(_QWORD **)(v4 + 32);
LABEL_98:
            v5 = *(_DWORD *)(v4 + 8);
            v34 = v5 <= 0x39;
            if ( v5 != 57 )
              goto LABEL_87;
          }
        }
        else
        {
LABEL_87:
          if ( v34 )
          {
            if ( v5 == 1 )
            {
              v4 = *(_QWORD *)(v4 + 32);
              goto LABEL_98;
            }
            if ( v5 == 51 )
            {
              v35 = *(_QWORD *)(v4 + 24);
              v36 = *(_DWORD *)(v35 + 8);
              if ( (unsigned int)(v36 - 64) > 1 )
              {
                if ( (unsigned int)(v36 - 35) <= 1 )
                {
                  v35 = *(_QWORD *)(v35 + 24);
                  v36 = *(_DWORD *)(v35 + 8);
                }
                if ( v36 == 48 )
                {
                  v37 = *(_QWORD *)(v35 + 24);
                  v38 = *(_DWORD *)(v37 + 8);
                  if ( (unsigned int)(v38 - 35) <= 1 )
                  {
                    v37 = *(_QWORD *)(v37 + 24);
                    v38 = *(_DWORD *)(v37 + 8);
                  }
                  if ( v38 == 52 )
                  {
                    v4 = *(_QWORD *)(v37 + 24);
                    goto LABEL_98;
                  }
                }
              }
            }
          }
          else if ( v5 == 65 && v4 && *(_DWORD *)(v4 + 8) == 65 )
          {
            sub_294730(*(_QWORD **)(a1 + 72), v4);
          }
        }
        v47 = *(_QWORD *)(v47 + 32);
        v3 = *(_DWORD *)(v47 + 8);
        if ( v3 != 16 )
          goto LABEL_106;
      }
      while ( 1 )
      {
        v6 = *(_QWORD *)(v4 + 40);
        v7 = *(_DWORD *)(v6 + 8);
        if ( v7 == 16 )
        {
          while ( 1 )
          {
            v8 = *(_QWORD *)(v6 + 40);
            v9 = *(_DWORD *)(v8 + 8);
            if ( v9 == 16 )
            {
              while ( 1 )
              {
                v10 = *(_QWORD *)(v8 + 40);
                for ( i = *(_DWORD *)(v10 + 8); i == 16; i = *(_DWORD *)(v10 + 8) )
                {
                  v12 = *(_QWORD *)(v10 + 40);
                  for ( j = *(_DWORD *)(v12 + 8); j == 16; j = *(_DWORD *)(v12 + 8) )
                  {
                    sub_294EE0(a1, *(_QWORD *)(v12 + 40));
                    v12 = *(_QWORD *)(v12 + 32);
                  }
                  v14 = j <= 0x39;
                  if ( j == 57 )
                  {
                    while ( (unsigned int)sub_289130(*(_QWORD *)(v12 + 24)) != -1 )
                    {
                      v12 = **(_QWORD **)(v12 + 32);
LABEL_21:
                      j = *(_DWORD *)(v12 + 8);
                      v14 = j <= 0x39;
                      if ( j != 57 )
                        goto LABEL_10;
                    }
                  }
                  else
                  {
LABEL_10:
                    if ( v14 )
                    {
                      if ( j == 1 )
                      {
                        v12 = *(_QWORD *)(v12 + 32);
                        goto LABEL_21;
                      }
                      if ( j == 51 )
                      {
                        v15 = *(_QWORD *)(v12 + 24);
                        v16 = *(_DWORD *)(v15 + 8);
                        if ( (unsigned int)(v16 - 64) > 1 )
                        {
                          if ( (unsigned int)(v16 - 35) <= 1 )
                          {
                            v15 = *(_QWORD *)(v15 + 24);
                            v16 = *(_DWORD *)(v15 + 8);
                          }
                          if ( v16 == 48 )
                          {
                            v17 = *(_QWORD *)(v15 + 24);
                            v18 = *(_DWORD *)(v17 + 8);
                            if ( (unsigned int)(v18 - 35) <= 1 )
                            {
                              v17 = *(_QWORD *)(v17 + 24);
                              v18 = *(_DWORD *)(v17 + 8);
                            }
                            if ( v18 == 52 )
                            {
                              v12 = *(_QWORD *)(v17 + 24);
                              goto LABEL_21;
                            }
                          }
                        }
                      }
                    }
                    else if ( j == 65 && v12 && *(_DWORD *)(v12 + 8) == 65 )
                    {
                      sub_294730(*(_QWORD **)(a1 + 72), v12);
                    }
                  }
                  v10 = *(_QWORD *)(v10 + 32);
                }
                v24 = i <= 0x39;
                if ( i == 57 )
                {
                  while ( (unsigned int)sub_289130(*(_QWORD *)(v10 + 24)) != -1 )
                  {
                    v10 = **(_QWORD **)(v10 + 32);
LABEL_60:
                    i = *(_DWORD *)(v10 + 8);
                    v24 = i <= 0x39;
                    if ( i != 57 )
                      goto LABEL_49;
                  }
                  goto LABEL_27;
                }
LABEL_49:
                if ( v24 )
                  break;
                if ( i == 65 && v10 && *(_DWORD *)(v10 + 8) == 65 )
                {
                  sub_294730(*(_QWORD **)(a1 + 72), v10);
                  v8 = *(_QWORD *)(v8 + 32);
                  v9 = *(_DWORD *)(v8 + 8);
                  if ( v9 != 16 )
                    goto LABEL_28;
                }
                else
                {
LABEL_27:
                  v8 = *(_QWORD *)(v8 + 32);
                  v9 = *(_DWORD *)(v8 + 8);
                  if ( v9 != 16 )
                    goto LABEL_28;
                }
              }
              if ( i == 1 )
              {
                v10 = *(_QWORD *)(v10 + 32);
                goto LABEL_60;
              }
              if ( i == 51 )
              {
                v25 = *(_QWORD *)(v10 + 24);
                v26 = *(_DWORD *)(v25 + 8);
                if ( (unsigned int)(v26 - 64) > 1 )
                {
                  if ( (unsigned int)(v26 - 35) <= 1 )
                  {
                    v25 = *(_QWORD *)(v25 + 24);
                    v26 = *(_DWORD *)(v25 + 8);
                  }
                  if ( v26 == 48 )
                  {
                    v27 = *(_QWORD *)(v25 + 24);
                    v28 = *(_DWORD *)(v27 + 8);
                    if ( (unsigned int)(v28 - 35) <= 1 )
                    {
                      v27 = *(_QWORD *)(v27 + 24);
                      v28 = *(_DWORD *)(v27 + 8);
                    }
                    if ( v28 == 52 )
                    {
                      v10 = *(_QWORD *)(v27 + 24);
                      goto LABEL_60;
                    }
                  }
                }
              }
              goto LABEL_27;
            }
LABEL_28:
            v19 = v9 <= 0x39;
            if ( v9 == 57 )
            {
              while ( (unsigned int)sub_289130(*(_QWORD *)(v8 + 24)) != -1 )
              {
                v8 = **(_QWORD **)(v8 + 32);
LABEL_40:
                v9 = *(_DWORD *)(v8 + 8);
                v19 = v9 <= 0x39;
                if ( v9 != 57 )
                  goto LABEL_29;
              }
              goto LABEL_66;
            }
LABEL_29:
            if ( v19 )
              break;
            if ( v9 == 65 && v8 && *(_DWORD *)(v8 + 8) == 65 )
            {
              sub_294730(*(_QWORD **)(a1 + 72), v8);
              v6 = *(_QWORD *)(v6 + 32);
              v7 = *(_DWORD *)(v6 + 8);
              if ( v7 != 16 )
                goto LABEL_67;
            }
            else
            {
LABEL_66:
              v6 = *(_QWORD *)(v6 + 32);
              v7 = *(_DWORD *)(v6 + 8);
              if ( v7 != 16 )
                goto LABEL_67;
            }
          }
          if ( v9 == 1 )
          {
            v8 = *(_QWORD *)(v8 + 32);
            goto LABEL_40;
          }
          if ( v9 == 51 )
          {
            v20 = *(_QWORD *)(v8 + 24);
            v21 = *(_DWORD *)(v20 + 8);
            if ( (unsigned int)(v21 - 64) > 1 )
            {
              if ( (unsigned int)(v21 - 35) <= 1 )
              {
                v20 = *(_QWORD *)(v20 + 24);
                v21 = *(_DWORD *)(v20 + 8);
              }
              if ( v21 == 48 )
              {
                v22 = *(_QWORD *)(v20 + 24);
                v23 = *(_DWORD *)(v22 + 8);
                if ( (unsigned int)(v23 - 35) <= 1 )
                {
                  v22 = *(_QWORD *)(v22 + 24);
                  v23 = *(_DWORD *)(v22 + 8);
                }
                if ( v23 == 52 )
                {
                  v8 = *(_QWORD *)(v22 + 24);
                  goto LABEL_40;
                }
              }
            }
          }
          goto LABEL_66;
        }
LABEL_67:
        v29 = v7 <= 0x39;
        if ( v7 == 57 )
        {
          while ( (unsigned int)sub_289130(*(_QWORD *)(v6 + 24)) != -1 )
          {
            v6 = **(_QWORD **)(v6 + 32);
LABEL_79:
            v7 = *(_DWORD *)(v6 + 8);
            v29 = v7 <= 0x39;
            if ( v7 != 57 )
              goto LABEL_68;
          }
          goto LABEL_85;
        }
LABEL_68:
        if ( v29 )
          break;
        if ( v7 == 65 && v6 && *(_DWORD *)(v6 + 8) == 65 )
        {
          sub_294730(*(_QWORD **)(a1 + 72), v6);
          v4 = *(_QWORD *)(v4 + 32);
          v5 = *(_DWORD *)(v4 + 8);
          if ( v5 != 16 )
            goto LABEL_86;
        }
        else
        {
LABEL_85:
          v4 = *(_QWORD *)(v4 + 32);
          v5 = *(_DWORD *)(v4 + 8);
          if ( v5 != 16 )
            goto LABEL_86;
        }
      }
      if ( v7 == 1 )
      {
        v6 = *(_QWORD *)(v6 + 32);
        goto LABEL_79;
      }
      if ( v7 == 51 )
      {
        v30 = *(_QWORD *)(v6 + 24);
        v31 = *(_DWORD *)(v30 + 8);
        if ( (unsigned int)(v31 - 64) > 1 )
        {
          if ( (unsigned int)(v31 - 35) <= 1 )
          {
            v30 = *(_QWORD *)(v30 + 24);
            v31 = *(_DWORD *)(v30 + 8);
          }
          if ( v31 == 48 )
          {
            v32 = *(_QWORD *)(v30 + 24);
            v33 = *(_DWORD *)(v32 + 8);
            if ( (unsigned int)(v33 - 35) <= 1 )
            {
              v32 = *(_QWORD *)(v32 + 24);
              v33 = *(_DWORD *)(v32 + 8);
            }
            if ( v33 == 52 )
            {
              v6 = *(_QWORD *)(v32 + 24);
              goto LABEL_79;
            }
          }
        }
      }
      goto LABEL_85;
    }
LABEL_106:
    v39 = v3 <= 0x39;
    if ( v3 == 57 )
    {
      while ( (unsigned int)sub_289130(*(_QWORD *)(v47 + 24)) != -1 )
      {
        v47 = **(_QWORD **)(v47 + 32);
LABEL_118:
        v3 = *(_DWORD *)(v47 + 8);
        v39 = v3 <= 0x39;
        if ( v3 != 57 )
          goto LABEL_107;
      }
    }
    else
    {
LABEL_107:
      if ( v39 )
      {
        if ( v3 == 1 )
        {
          v47 = *(_QWORD *)(v47 + 32);
          goto LABEL_118;
        }
        if ( v3 == 51 )
        {
          v40 = *(_QWORD *)(v47 + 24);
          v41 = *(_DWORD *)(v40 + 8);
          if ( (unsigned int)(v41 - 64) > 1 )
          {
            if ( (unsigned int)(v41 - 35) <= 1 )
            {
              v40 = *(_QWORD *)(v40 + 24);
              v41 = *(_DWORD *)(v40 + 8);
            }
            if ( v41 == 48 )
            {
              v42 = *(_QWORD *)(v40 + 24);
              v43 = *(_DWORD *)(v42 + 8);
              if ( (unsigned int)(v43 - 35) <= 1 )
              {
                v42 = *(_QWORD *)(v42 + 24);
                v43 = *(_DWORD *)(v42 + 8);
              }
              if ( v43 == 52 )
              {
                v47 = *(_QWORD *)(v42 + 24);
                goto LABEL_118;
              }
            }
          }
        }
      }
      else if ( v3 == 65 && v47 && *(_DWORD *)(v47 + 8) == 65 )
      {
        sub_294730(*(_QWORD **)(a1 + 72), v47);
      }
    }
    v48 = *(_QWORD *)(v48 + 32);
    result = *(unsigned int *)(v48 + 8);
  }
  while ( (_DWORD)result == 16 );
  v44 = (unsigned int)result <= 0x39;
  if ( (_DWORD)result != 57 )
    goto LABEL_124;
  while ( 1 )
  {
    result = sub_289130(*(_QWORD *)(v48 + 24));
    if ( (_DWORD)result == -1 )
      break;
    v48 = **(_QWORD **)(v48 + 32);
    while ( 1 )
    {
      result = *(unsigned int *)(v48 + 8);
LABEL_123:
      v44 = (unsigned int)result <= 0x39;
      if ( (_DWORD)result == 57 )
        break;
LABEL_124:
      if ( !v44 )
      {
        if ( (_DWORD)result == 65 )
        {
          result = v48;
          if ( v48 )
          {
            if ( *(_DWORD *)(v48 + 8) == 65 )
              return (__int64)sub_294730(*(_QWORD **)(a1 + 72), v48);
          }
        }
        return result;
      }
      if ( (_DWORD)result == 1 )
      {
        v48 = *(_QWORD *)(v48 + 32);
      }
      else
      {
        if ( (_DWORD)result != 51 )
          return result;
        result = *(_QWORD *)(v48 + 24);
        v45 = *(_DWORD *)(result + 8);
        if ( (unsigned int)(v45 - 64) <= 1 )
          return result;
        if ( (unsigned int)(v45 - 35) <= 1 )
        {
          result = *(_QWORD *)(result + 24);
          v45 = *(_DWORD *)(result + 8);
        }
        if ( v45 != 48 )
          return result;
        result = *(_QWORD *)(result + 24);
        v46 = *(_DWORD *)(result + 8);
        if ( (unsigned int)(v46 - 35) <= 1 )
        {
          result = *(_QWORD *)(result + 24);
          v46 = *(_DWORD *)(result + 8);
        }
        if ( v46 != 52 )
          return result;
        v48 = *(_QWORD *)(result + 24);
      }
    }
  }
  return result;
}

