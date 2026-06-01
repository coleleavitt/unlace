__int64 __fastcall sub_2010F0(__int64 a1, __int64 a2, int *a3, int a4, _QWORD *a5, double a6)
{
  int v10; // edx
  int v11; // eax
  int *v12; // rdi
  int v13; // eax
  unsigned int v14; // ebp
  int v16; // eax
  __int64 v17; // rax
  char v18; // al
  __int64 v19; // rcx
  __int64 v20; // [rsp+0h] [rbp-68h] BYREF
  _QWORD *v21; // [rsp+8h] [rbp-60h]
  int *v22; // [rsp+10h] [rbp-58h] BYREF
  __int128 v23; // [rsp+18h] [rbp-50h]
  unsigned __int64 v24; // [rsp+28h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v20 = 0;
  v21 = nullptr;
  if ( !(unsigned __int8)sub_1C5030((char *)a2, (__int64)&v20) )
  {
    if ( !under_debugger )
      sub_383060(0xCAA3u, a6);
    BUG();
  }
  v10 = a3[22];
  v22 = nullptr;
  v23 = 0;
  v11 = sub_1C37C0(a3, (__int64 *)&v22, v10, (__int64)&v20, a4, 1);
  v12 = v22;
  if ( !v11 )
  {
    v14 = 2;
    goto LABEL_9;
  }
  if ( a5 )
    *a5 = v22[4] - v22[5];
  v13 = *v12;
  if ( *v12 == a4 )
  {
    if ( a3[22] == a4 )
    {
      v16 = a3[6];
      v14 = 0;
      if ( (v16 & 0x8040) != 0 || *(_BYTE *)(a1 + 320) && (v16 & 0x100) != 0 )
        goto LABEL_9;
      if ( *a3 != 2 && *(_BYTE *)a2 == 15 )
      {
        v17 = *(_QWORD *)(a2 + 8);
        v14 = 0;
        if ( !*(_BYTE *)(v17 + 48) )
          goto LABEL_9;
        v18 = sub_1EF950((__int64)a3, *(_QWORD *)(a1 + 1504), (_BYTE *)(v17 + 48), *(_DWORD *)(a1 + 72), 2, 0.0);
        v12 = v22;
        if ( v18 )
          a3[6] = a3[6] & 0xFFFBFFFD | 2;
      }
    }
    v14 = 0;
    goto LABEL_9;
  }
  if ( (_QWORD)v23 == 1 && v13 < a4 )
  {
    v14 = 1;
    if ( (_DWORD)v20 == 2 )
    {
      v19 = *v21 + 24LL * v21[1] - 24;
      v14 = *(unsigned __int16 *)(v19 + 18) + *(unsigned __int16 *)(v19 + 16) != v13;
    }
  }
  else
  {
    v14 = 1;
  }
LABEL_9:
  if ( v12 )
  {
    *(_QWORD *)&v23 = 0;
    qfree((__int64)v12);
  }
  cleanup_argloc();
  return v14;
}

