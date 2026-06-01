__int64 __fastcall sub_1ED250(_QWORD *a1, double a2)
{
  __int64 v3; // rdi
  int v4; // eax
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rax
  int v9; // edx
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // [rsp+10h] [rbp-40h] BYREF
  __int128 v15; // [rsp+18h] [rbp-38h]
  unsigned __int64 v16; // [rsp+28h] [rbp-28h]

  v16 = __readfsqword(0x28u);
  v3 = a1[4];
  if ( (*(_BYTE *)(v3 + 4) & 0x10) == 0 )
  {
    v4 = *(_DWORD *)v3;
    if ( (unsigned int)(*(_DWORD *)v3 - 43) <= 1 )
    {
      v13 = sub_11C8A0(v3, &v14);
      if ( v13 && sub_1ED1F0(v14, a2) && (unsigned __int8)sub_1552F0(v13, a1[5], a2) )
        *(_DWORD *)(a1[4] + 4LL) |= 0x10u;
    }
    else
    {
      if ( ((v4 - 2) & 0xFFFFFFFD) != 0 )
      {
        if ( v4 != 1 )
          return 0;
        v5 = v3 + 32;
      }
      else
      {
        v5 = v3 + 64;
      }
      if ( sub_1ED1F0(v5, a2) )
      {
        v6 = a1[4];
        if ( *(_DWORD *)v6 == 4 && *(_BYTE *)(v6 + 32) == 2 )
        {
          if ( (unsigned __int8)sub_1552F0(v6 + 32, a1[5], a2) )
            *(_DWORD *)(a1[4] + 4LL) |= 0x10u;
        }
        else
        {
          *(_DWORD *)(v6 + 4) |= 0x10u;
        }
        v7 = a1[4];
        if ( *(_DWORD *)v7 == 4 )
        {
          v9 = *(_DWORD *)(v7 + 36);
          if ( v9 > 7 && *(_BYTE *)(v7 + 32) == 4 )
          {
            v10 = *(_QWORD *)(v7 + 40);
            v11 = v10;
            if ( *(_DWORD *)v10 == 56 && *(_BYTE *)(v10 + 64) == 8 )
            {
              v12 = *(_QWORD *)(v10 + 72);
              if ( *(_DWORD *)(v12 + 284) == 23 )
              {
                if ( *(_BYTE *)(*(_QWORD *)(v12 + 24) + 80LL) != 11 )
                {
                  if ( !under_debugger )
                    sub_383060(0xCCCBu, a2);
                  BUG();
                }
                sub_32C150(&v14, a1[5], v9);
                copy_tinfo_t();
                clear_tinfo_t();
                v14 = 0;
                v15 = 0;
                print_tinfo();
                sub_11D4A0(*(_QWORD *)(*(_QWORD *)(v11 + 72) + 24LL) + 80LL);
                *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 72) + 24LL) + 84LL) = *(_DWORD *)(*(_QWORD *)(a1[1] + 1504LL)
                                                                                          + 84LL);
                if ( v14 )
                {
                  *(_QWORD *)&v15 = 0;
                  qfree(v14);
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

