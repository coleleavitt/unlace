__int64 __fastcall sub_1E7E90(_QWORD *a1)
{
  __int64 v2; // rdi
  int v3; // eax
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // [rsp+10h] [rbp-40h] BYREF
  __int128 v14; // [rsp+18h] [rbp-38h]
  unsigned __int64 v15; // [rsp+28h] [rbp-28h]

  v15 = __readfsqword(0x28u);
  v2 = a1[4];
  if ( (*(_BYTE *)(v2 + 4) & 0x10) == 0 )
  {
    v3 = *(_DWORD *)v2;
    if ( (unsigned int)(*(_DWORD *)v2 - 43) <= 1 )
    {
      v12 = sub_117CE0(v2, &v13);
      if ( v12 && sub_1E7E30(v13) && (unsigned __int8)sub_150730(v12, a1[5]) )
        *(_DWORD *)(a1[4] + 4LL) |= 0x10u;
    }
    else
    {
      if ( ((v3 - 2) & 0xFFFFFFFD) != 0 )
      {
        if ( v3 != 1 )
          return 0;
        v4 = v2 + 32;
      }
      else
      {
        v4 = v2 + 64;
      }
      if ( sub_1E7E30(v4) )
      {
        v5 = a1[4];
        if ( *(_DWORD *)v5 == 4 && *(_BYTE *)(v5 + 32) == 2 )
        {
          if ( (unsigned __int8)sub_150730(v5 + 32, a1[5]) )
            *(_DWORD *)(a1[4] + 4LL) |= 0x10u;
        }
        else
        {
          *(_DWORD *)(v5 + 4) |= 0x10u;
        }
        v6 = a1[4];
        if ( *(_DWORD *)v6 == 4 )
        {
          v8 = *(unsigned int *)(v6 + 36);
          if ( (int)v8 > 7 && *(_BYTE *)(v6 + 32) == 4 )
          {
            v9 = *(_QWORD *)(v6 + 40);
            v10 = v9;
            if ( *(_DWORD *)v9 == 56 && *(_BYTE *)(v9 + 64) == 8 )
            {
              v11 = *(_QWORD *)(v9 + 72);
              if ( *(_DWORD *)(v11 + 284) == 23 )
              {
                if ( *(_BYTE *)(*(_QWORD *)(v11 + 24) + 80LL) != 11 )
                {
                  if ( !under_debugger )
                    sub_37CFE0(52427);
                  BUG();
                }
                sub_3266E0(&v13, a1[5], v8);
                copy_tinfo_t();
                clear_tinfo_t();
                v13 = 0;
                v14 = 0;
                print_tinfo();
                sub_1188E0(*(_QWORD *)(*(_QWORD *)(v10 + 72) + 24LL) + 80LL);
                *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 72) + 24LL) + 84LL) = *(_DWORD *)(*(_QWORD *)(a1[1] + 1504LL)
                                                                                          + 84LL);
                if ( v13 )
                {
                  *(_QWORD *)&v14 = 0;
                  qfree();
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

