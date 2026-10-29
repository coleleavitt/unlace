__int64 __fastcall sub_1FBD30(__int64 a1, __int64 a2, int *a3, int a4, _QWORD *a5)
{
  int v9; // edx
  int v10; // eax
  int *v11; // rdi
  int v12; // eax
  unsigned int v13; // ebp
  int v15; // eax
  __int64 v16; // rax
  char v17; // al
  __int64 v18; // rcx
  __int64 v19; // [rsp+0h] [rbp-68h] BYREF
  _QWORD *v20; // [rsp+8h] [rbp-60h]
  int *v21; // [rsp+10h] [rbp-58h] BYREF
  __int128 v22; // [rsp+18h] [rbp-50h]
  unsigned __int64 v23; // [rsp+28h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  v19 = 0;
  v20 = nullptr;
  if ( !(unsigned __int8)sub_1C02B0((char *)a2, (__int64)&v19) )
  {
    if ( !under_debugger )
      sub_37CFE0(51875);
    BUG();
  }
  v9 = a3[22];
  v21 = nullptr;
  v22 = 0;
  v10 = sub_1BEA40(a3, (__int64 *)&v21, v9, (__int64)&v19, a4, 1);
  v11 = v21;
  if ( !v10 )
  {
    v13 = 2;
    goto LABEL_9;
  }
  if ( a5 )
    *a5 = v21[4] - v21[5];
  v12 = *v11;
  if ( *v11 == a4 )
  {
    if ( a3[22] == a4 )
    {
      v15 = a3[6];
      v13 = 0;
      if ( (v15 & 0x8040) != 0 || *(_BYTE *)(a1 + 320) && (v15 & 0x100) != 0 )
        goto LABEL_9;
      if ( *a3 != 2 && *(_BYTE *)a2 == 15 )
      {
        v16 = *(_QWORD *)(a2 + 8);
        v13 = 0;
        if ( !*(_BYTE *)(v16 + 48) )
          goto LABEL_9;
        v17 = sub_1EA590((__int64)a3, *(_QWORD *)(a1 + 1504), (_BYTE *)(v16 + 48), *(_DWORD *)(a1 + 72), 2);
        v11 = v21;
        if ( v17 )
          a3[6] = a3[6] & 0xFFFBFFFD | 2;
      }
    }
    v13 = 0;
    goto LABEL_9;
  }
  if ( (_QWORD)v22 == 1 && v12 < a4 )
  {
    v13 = 1;
    if ( (_DWORD)v19 == 2 )
    {
      v18 = *v20 + 24LL * v20[1] - 24;
      v13 = *(unsigned __int16 *)(v18 + 18) + *(unsigned __int16 *)(v18 + 16) != v12;
    }
  }
  else
  {
    v13 = 1;
  }
LABEL_9:
  if ( v11 )
  {
    *(_QWORD *)&v22 = 0;
    qfree();
  }
  cleanup_argloc();
  return v13;
}

