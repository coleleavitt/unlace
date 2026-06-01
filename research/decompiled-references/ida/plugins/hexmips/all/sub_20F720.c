__int64 __fastcall sub_20F720(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v3; // rbp
  __int64 v4; // rcx
  __int64 v5; // rsi
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
  v1 = a1[4];
  if ( *(_DWORD *)v1 == 4 && *(_BYTE *)(v1 + 32) == 4 )
  {
    v3 = *(_QWORD *)(v1 + 40);
    if ( *(_DWORD *)v3 == 56 && *(_BYTE *)(v3 + 32) == 6 )
    {
      v4 = a1[5];
      v5 = *(_QWORD *)(v3 + 40);
      v6 = *(_QWORD **)v4;
      v7 = *(_QWORD *)v4 + 8LL * *(_QWORD *)(v4 + 8);
      if ( v6 != (_QWORD *)v7 )
      {
        while ( v5 != *v6 )
        {
          if ( (_QWORD *)v7 == ++v6 )
            return 0;
        }
        if ( v6 != (_QWORD *)v7 )
        {
          v8 = *(_BYTE *)(v1 + 64);
          if ( v8 != 9 )
          {
            if ( v8 != 6 || (get_flags_ex() & 0xC000) == 0x4000 || (get_aflags() & 0x2000000) != 0 )
              return 0;
            v9 = 0;
            goto LABEL_16;
          }
          v11 = *(__int64 **)(v1 + 72);
          v12 = *v11;
          v13 = *((int *)v11 + 4);
          v14 = v13;
          if ( *(_QWORD *)(v12 + 440) < v13 )
            sub_20DC90(a1, v5, v12, v13);
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
                     v3) )
              {
                if ( v9 )
                {
                  sub_20F4D0((_QWORD *)a1[1], v9, v18, 4);
                  if ( (_BYTE)v17 )
                  {
                    sub_1EB070(v9, *(_QWORD *)(a1[1] + 1504), &v17, 0);
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
                qfree();
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

