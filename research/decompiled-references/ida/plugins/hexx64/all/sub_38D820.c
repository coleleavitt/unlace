__int64 __fastcall sub_38D820(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4, double a5)
{
  __int64 v5; // r13
  int v8; // eax
  unsigned int v9; // r15d
  unsigned int v11; // r9d
  __int64 v12; // r14
  int v13; // eax
  __int64 v14; // r12
  __int64 v15; // r14
  __int64 v16; // rbp
  int v17; // eax
  __int64 v18; // r15
  __int64 v19; // rdi
  __int64 v20; // r13
  __int64 tinfo_size; // rax
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rbp
  __int64 v26; // rdi
  __int64 v27; // r14
  bool v28; // [rsp+Fh] [rbp-69h]

  if ( *(_DWORD *)a1 == 1 )
  {
    v5 = *(_QWORD *)(a1 + 8);
    v8 = *(_DWORD *)(v5 + 8);
    if ( v8 != 61 )
      goto LABEL_8;
    v5 = sub_256D70(a4 + 16, *(_QWORD *)(a1 + 8));
    if ( *(_DWORD *)(v5 + 8) == 58 )
    {
      while ( *(_DWORD *)(*(_QWORD *)(v5 + 32) + 8LL) == 61 )
      {
        v5 = *(_QWORD *)(v5 + 24);
        v8 = *(_DWORD *)(v5 + 8);
LABEL_8:
        if ( v8 != 58 )
        {
          if ( (unsigned int)(v8 - 59) > 1 )
            return 0;
          get_tinfo_property();
          get_tinfo_property();
          clear_tinfo_t();
          v28 = (get_tinfo_property() & 0x3F) == 29;
          LOBYTE(v11) = v28 && a2 == nullptr;
          v9 = v11;
          if ( (_BYTE)v11 )
          {
            clear_tinfo_t();
            return 1;
          }
          else
          {
            clear_tinfo_t();
            while ( 1 )
            {
              v12 = *(_QWORD *)(v5 + 24);
              if ( *(_DWORD *)(v12 + 8) == 58 )
                break;
LABEL_15:
              get_tinfo_property();
              if ( (get_tinfo_property() & 0x3F) == 0x1D )
              {
                if ( !a2 )
                {
                  v9 = 1;
                  clear_tinfo_t();
                  return v9;
                }
                v28 = 1;
              }
              if ( (unsigned int)(*(_DWORD *)(v12 + 8) - 59) > 1 )
                goto LABEL_22;
              get_tinfo_property();
              if ( (get_tinfo_property() & 0x2F) != 0xD )
              {
                clear_tinfo_t();
LABEL_22:
                clear_tinfo_t();
                if ( a3 )
                  *a3 = *(_QWORD *)(v5 + 24);
                v13 = *(_DWORD *)(v5 + 8);
                if ( v13 == 60 )
                {
                  get_tinfo_property();
                  v14 = 0;
                  if ( (get_tinfo_property() & 0x3F) == 0xD )
                    v14 = *(unsigned int *)(v5 + 32);
                  clear_tinfo_t();
                }
                else
                {
                  v14 = 0;
                  if ( v13 == 59 )
                    v5 = *(_QWORD *)(v5 + 24);
                }
                v15 = a4 + 16;
                while ( 1 )
                {
                  v16 = sub_256D70(v15, v5);
                  v17 = *(_DWORD *)(v16 + 8);
                  if ( v17 == 60 )
                    break;
                  if ( v17 != 59 )
                  {
                    if ( v17 == 57 )
                    {
                      if ( (*(_BYTE *)(v16 + 56) & 2) != 0 )
                      {
                        v23 = sub_28DD30(*(_QWORD *)(v16 + 24));
                        if ( v23 != -1 )
                          v14 += v23;
                      }
                    }
                    else if ( v17 == 52 )
                    {
                      v24 = sub_256D70(v15, v16);
                      v25 = v24;
                      if ( *(_DWORD *)(v24 + 8) == 48 )
                        v25 = sub_256D70(v15, v24);
                      if ( *(_DWORD *)(v25 + 8) == 35 )
                      {
                        v26 = *(_QWORD *)(v25 + 32);
                        if ( *(_DWORD *)(v26 + 8) == 61 )
                        {
                          v27 = sub_281A60(v26, a5);
                          v14 += v27 * (int)get_tinfo_property();
                        }
                      }
                    }
                    break;
                  }
                  if ( (get_tinfo_property() & 0x3F) == 0xD )
                    v14 += *(unsigned int *)(v16 + 32);
                  if ( (get_tinfo_property() & 0xF) == 0xB )
                  {
                    v16 = sub_256D70(v15, v16);
                    if ( *(_DWORD *)(v16 + 8) == 58 )
                    {
                      v18 = 0;
                      while ( 1 )
                      {
                        v19 = *(_QWORD *)(v16 + 32);
                        if ( *(_DWORD *)(v19 + 8) != 61 )
                          break;
                        v20 = sub_281A60(v19, a5);
                        tinfo_size = get_tinfo_size();
                        if ( tinfo_size == -1 )
                          break;
                        v18 += v20 * tinfo_size;
                        v22 = sub_256D70(v15, v16);
                        if ( *(_DWORD *)(v22 + 8) != 58 )
                        {
                          v14 += v18;
                          goto LABEL_33;
                        }
                        v16 = v22;
                      }
                    }
                    return 0;
                  }
LABEL_33:
                  if ( (get_tinfo_property() & 0x3F) == 0x1D )
                  {
                    if ( !a2 )
                      return 1;
                    v28 = 1;
                  }
                  v5 = v16;
                }
                if ( a2 && v28 )
                {
                  *a2 = v14;
                  return 1;
                }
                return v28;
              }
              v5 = v12;
              clear_tinfo_t();
              clear_tinfo_t();
            }
            while ( *(_DWORD *)(*(_QWORD *)(v12 + 32) + 8LL) == 61 )
            {
              v12 = *(_QWORD *)(v12 + 24);
              if ( *(_DWORD *)(v12 + 8) != 58 )
                goto LABEL_15;
            }
          }
          return v9;
        }
      }
    }
  }
  return 0;
}

