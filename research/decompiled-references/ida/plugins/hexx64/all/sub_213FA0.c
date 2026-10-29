__int64 __fastcall sub_213FA0(__int64 *a1, double a2)
{
  __int64 v2; // rax
  __int64 v4; // rbp
  __int64 v5; // rcx
  _QWORD *v6; // rdx
  __int64 v7; // rcx
  char v8; // dl
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  int v14; // ecx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // [rsp+8h] [rbp-50h] BYREF
  const char *v18; // [rsp+10h] [rbp-48h] BYREF
  __int128 v19; // [rsp+18h] [rbp-40h]
  unsigned __int64 v20; // [rsp+28h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  v2 = a1[4];
  if ( *(_DWORD *)v2 == 4 && *(_BYTE *)(v2 + 32) == 4 )
  {
    v4 = *(_QWORD *)(v2 + 40);
    if ( *(_DWORD *)v4 == 56 && *(_BYTE *)(v4 + 32) == 6 )
    {
      v5 = a1[5];
      v6 = *(_QWORD **)v5;
      v7 = *(_QWORD *)v5 + 8LL * *(_QWORD *)(v5 + 8);
      if ( v6 != (_QWORD *)v7 )
      {
        while ( *(_QWORD *)(v4 + 40) != *v6 )
        {
          if ( (_QWORD *)v7 == ++v6 )
            return 0;
        }
        if ( v6 != (_QWORD *)v7 )
        {
          v8 = *(_BYTE *)(v2 + 64);
          if ( v8 != 9 )
          {
            if ( v8 != 6 || (get_flags_ex() & 0xC000) == 0x4000 || (get_aflags() & 0x2000000) != 0 )
              return 0;
            v9 = 0;
            goto LABEL_16;
          }
          v11 = *(__int64 **)(v2 + 72);
          v12 = *v11;
          v13 = *((int *)v11 + 4);
          v14 = v13;
          if ( *(_QWORD *)(v12 + 440) < v13 )
            sub_212510(a2);
          v9 = *(_QWORD *)(v12 + 432) + 104 * v13;
          v15 = *(_DWORD *)(v9 + 24);
          if ( (v15 & 0x44) == 0 )
          {
            v16 = a1[1];
            if ( *(_DWORD *)(v9 + 88) == *(_DWORD *)(*(_QWORD *)(v16 + 1504) + 80LL)
              && (v15 & 0x100) == 0
              && *(_DWORD *)(v16 + 480) != v14 )
            {
LABEL_16:
              v10 = *a1;
              v19 = 0;
              v17 = 0;
              v18 = nullptr;
              if ( (*(unsigned __int8 (__fastcall **)(__int64 *, const char **, __int64 *, __int64))(v10 + 24))(
                     a1,
                     &v18,
                     &v17,
                     v4) )
              {
                if ( v9 )
                {
                  sub_213D50((_QWORD *)a1[1], v9, v18, 4);
                  if ( (_BYTE)v17 )
                  {
                    sub_1EF8F0(v9, *(_QWORD *)(a1[1] + 1504), &v17, 0, 0.0);
                    *(_DWORD *)(v9 + 24) = *(_DWORD *)(v9 + 24) & 0xFFFBFFFD | 2;
                  }
                }
                else
                {
                  set_name();
                  if ( (_BYTE)v17 )
                    apply_tinfo();
                }
              }
              if ( v18 )
              {
                *(_QWORD *)&v19 = 0;
                qfree((__int64)v18);
              }
              clear_tinfo_t();
            }
          }
        }
      }
    }
  }
  return 0;
}

