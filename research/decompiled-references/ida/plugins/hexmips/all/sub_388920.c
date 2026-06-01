__int64 __fastcall sub_388920(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  __int64 v4; // r13
  int v7; // eax
  unsigned int v8; // r15d
  unsigned int v10; // r9d
  __int64 v11; // r14
  int v12; // eax
  __int64 v13; // r12
  __int64 v14; // r14
  __int64 v15; // rbp
  int v16; // eax
  __int64 v17; // r15
  __int64 v18; // rdi
  __int64 v19; // r13
  __int64 tinfo_size; // rax
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rbp
  __int64 v25; // rdi
  __int64 v26; // r14
  bool v27; // [rsp+Fh] [rbp-69h]

  if ( *(_DWORD *)a1 == 1 )
  {
    v4 = *(_QWORD *)(a1 + 8);
    v7 = *(_DWORD *)(v4 + 8);
    if ( v7 != 61 )
      goto LABEL_8;
    v4 = sub_2524F0(a4 + 16, *(_QWORD *)(a1 + 8));
    if ( *(_DWORD *)(v4 + 8) == 58 )
    {
      while ( *(_DWORD *)(*(_QWORD *)(v4 + 32) + 8LL) == 61 )
      {
        v4 = *(_QWORD *)(v4 + 24);
        v7 = *(_DWORD *)(v4 + 8);
LABEL_8:
        if ( v7 != 58 )
        {
          if ( (unsigned int)(v7 - 59) > 1 )
            return 0;
          get_tinfo_property();
          get_tinfo_property();
          clear_tinfo_t();
          v27 = (get_tinfo_property() & 0x3F) == 29;
          LOBYTE(v10) = v27 && a2 == nullptr;
          v8 = v10;
          if ( (_BYTE)v10 )
          {
            clear_tinfo_t();
            return 1;
          }
          else
          {
            clear_tinfo_t();
            while ( 1 )
            {
              v11 = *(_QWORD *)(v4 + 24);
              if ( *(_DWORD *)(v11 + 8) == 58 )
                break;
LABEL_15:
              get_tinfo_property();
              if ( (get_tinfo_property() & 0x3F) == 0x1D )
              {
                if ( !a2 )
                {
                  v8 = 1;
                  clear_tinfo_t();
                  return v8;
                }
                v27 = 1;
              }
              if ( (unsigned int)(*(_DWORD *)(v11 + 8) - 59) > 1 )
                goto LABEL_22;
              get_tinfo_property();
              if ( (get_tinfo_property() & 0x2F) != 0xD )
              {
                clear_tinfo_t();
LABEL_22:
                clear_tinfo_t();
                if ( a3 )
                  *a3 = *(_QWORD *)(v4 + 24);
                v12 = *(_DWORD *)(v4 + 8);
                if ( v12 == 60 )
                {
                  get_tinfo_property();
                  v13 = 0;
                  if ( (get_tinfo_property() & 0x3F) == 0xD )
                    v13 = *(unsigned int *)(v4 + 32);
                  clear_tinfo_t();
                }
                else
                {
                  v13 = 0;
                  if ( v12 == 59 )
                    v4 = *(_QWORD *)(v4 + 24);
                }
                v14 = a4 + 16;
                while ( 1 )
                {
                  v15 = sub_2524F0(v14, v4);
                  v16 = *(_DWORD *)(v15 + 8);
                  if ( v16 == 60 )
                    break;
                  if ( v16 != 59 )
                  {
                    if ( v16 == 57 )
                    {
                      if ( (*(_BYTE *)(v15 + 56) & 2) != 0 )
                      {
                        v22 = sub_2894B0(*(_QWORD *)(v15 + 24));
                        if ( v22 != -1 )
                          v13 += v22;
                      }
                    }
                    else if ( v16 == 52 )
                    {
                      v23 = sub_2524F0(v14, v15);
                      v24 = v23;
                      if ( *(_DWORD *)(v23 + 8) == 48 )
                        v24 = sub_2524F0(v14, v23);
                      if ( *(_DWORD *)(v24 + 8) == 35 )
                      {
                        v25 = *(_QWORD *)(v24 + 32);
                        if ( *(_DWORD *)(v25 + 8) == 61 )
                        {
                          v26 = sub_27D1E0(v25);
                          v13 += v26 * (int)get_tinfo_property();
                        }
                      }
                    }
                    break;
                  }
                  if ( (get_tinfo_property() & 0x3F) == 0xD )
                    v13 += *(unsigned int *)(v15 + 32);
                  if ( (get_tinfo_property() & 0xF) == 0xB )
                  {
                    v15 = sub_2524F0(v14, v15);
                    if ( *(_DWORD *)(v15 + 8) == 58 )
                    {
                      v17 = 0;
                      while ( 1 )
                      {
                        v18 = *(_QWORD *)(v15 + 32);
                        if ( *(_DWORD *)(v18 + 8) != 61 )
                          break;
                        v19 = sub_27D1E0(v18);
                        tinfo_size = get_tinfo_size();
                        if ( tinfo_size == -1 )
                          break;
                        v17 += v19 * tinfo_size;
                        v21 = sub_2524F0(v14, v15);
                        if ( *(_DWORD *)(v21 + 8) != 58 )
                        {
                          v13 += v17;
                          goto LABEL_33;
                        }
                        v15 = v21;
                      }
                    }
                    return 0;
                  }
LABEL_33:
                  if ( (get_tinfo_property() & 0x3F) == 0x1D )
                  {
                    if ( !a2 )
                      return 1;
                    v27 = 1;
                  }
                  v4 = v15;
                }
                if ( a2 && v27 )
                {
                  *a2 = v13;
                  return 1;
                }
                return v27;
              }
              v4 = v11;
              clear_tinfo_t();
              clear_tinfo_t();
            }
            while ( *(_DWORD *)(*(_QWORD *)(v11 + 32) + 8LL) == 61 )
            {
              v11 = *(_QWORD *)(v11 + 24);
              if ( *(_DWORD *)(v11 + 8) != 58 )
                goto LABEL_15;
            }
          }
          return v8;
        }
      }
    }
  }
  return 0;
}

