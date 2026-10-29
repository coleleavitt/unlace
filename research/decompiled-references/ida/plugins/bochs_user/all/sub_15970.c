__int64 __fastcall sub_15970(__int64 a1)
{
  __int64 v2; // rdi
  char v3; // dl
  char v4; // al
  int v5; // eax
  __int64 v7; // rdx
  _QWORD v8[3]; // [rsp+0h] [rbp-68h] BYREF
  __int128 v9; // [rsp+18h] [rbp-50h]
  __int128 v10; // [rsp+28h] [rbp-40h]
  __int128 v11; // [rsp+38h] [rbp-30h]
  unsigned __int64 v12; // [rsp+48h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 1072) )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  v2 = *(_QWORD *)(a1 + 976);
  v9 = 0;
  *(_QWORD *)(a1 + 1072) = v2;
  v8[0] = 0xFFFFFFFFLL;
  v8[1] = -1;
  v8[2] = 0;
  v10 = 0;
  v11 = 0;
  while ( (*(int (__fastcall **)(__int64, _QWORD *, _QWORD))(*(_QWORD *)v2 + 56LL))(v2, v8, 0) > 0 )
    v2 = *(_QWORD *)(a1 + 1072);
  v3 = getinf_flag();
  v4 = *(_BYTE *)(a1 + 36);
  if ( v3 )
  {
    if ( !v4 )
    {
      v5 = 8;
      goto LABEL_8;
    }
    v7 = *(_QWORD *)(a1 + 16);
    v5 = 8;
LABEL_12:
    *(_QWORD *)(a1 + 24) = v7;
    *(_DWORD *)(a1 + 32) = v5;
    goto LABEL_8;
  }
  if ( v4 )
  {
    v7 = *(_QWORD *)(a1 + 8);
    v5 = 4;
    goto LABEL_12;
  }
  v5 = 4;
LABEL_8:
  *(_DWORD *)(a1 + 276) = v5;
  sub_15790((__int64 *)a1);
  free_debug_event();
  return 1;
}

