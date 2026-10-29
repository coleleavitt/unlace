__int64 __fastcall sub_225F80(__int64 a1, __int64 a2)
{
  __int64 *v2; // rax
  __int64 v4; // rdx
  int *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdi
  unsigned int v9; // esi
  int v11; // edx
  int v12; // r8d
  __int64 v13; // rax
  _DWORD *v14; // r15
  _DWORD *v15; // rbx
  int v16; // ecx
  _DWORD *v17; // r14
  int v18; // ebp
  int v19; // r9d
  int v20; // edx
  int v21; // r9d
  _DWORD *v22; // [rsp+0h] [rbp-98h]
  _QWORD v23[2]; // [rsp+10h] [rbp-88h] BYREF
  _DWORD *v24; // [rsp+20h] [rbp-78h] BYREF
  __int128 v25; // [rsp+28h] [rbp-70h]
  _DWORD *v26; // [rsp+40h] [rbp-58h] BYREF
  __int128 v27; // [rsp+48h] [rbp-50h]
  unsigned __int64 v28; // [rsp+58h] [rbp-40h]

  v2 = *(__int64 **)(a1 + 88);
  v28 = __readfsqword(0x28u);
  v4 = *v2;
  v25 = 0;
  v24 = nullptr;
  v5 = (int *)(v4 + 104LL * *(int *)(a2 + 44));
  v6 = v4 + 104LL * *(int *)(*(_QWORD *)(a1 + 16) + 480LL);
  sub_1C37C0(v5, (__int64 *)&v24, v5[22], v6, *(_DWORD *)(v6 + 88), 1);
  if ( !(_QWORD)v25 )
  {
LABEL_2:
    v8 = *(_QWORD *)(a1 + 16);
    if ( !*(_BYTE *)(v8 + 320) )
    {
LABEL_3:
      v9 = 0;
      goto LABEL_4;
    }
    if ( (*(_BYTE *)(a2 + 48) & 4) != 0 )
    {
      sub_3311F0((_QWORD *)v8, 0xFFFFFFFFFFFFFFFFLL, 0x19u);
      goto LABEL_3;
    }
    if ( !under_debugger )
      sub_383060(0xCE71u, 0.0);
LABEL_37:
    BUG();
  }
  v23[0] = 0;
  v23[1] = 0;
  sub_32F770((__int64 *)(a2 + 24), v23, v7);
  v11 = v5[22];
  v12 = *(_DWORD *)(a2 + 40);
  v26 = nullptr;
  v27 = 0;
  sub_1C37C0(v5, (__int64 *)&v26, v11, (__int64)v23, v12, 1);
  v13 = v27;
  if ( !(_QWORD)v27 )
  {
    if ( !under_debugger )
      sub_383060(0xCDB4u, 0.0);
    goto LABEL_37;
  }
  v14 = v24;
  v15 = v26;
  v22 = &v24[6 * v25];
  if ( v22 == v24 )
  {
    if ( v26 )
    {
      *(_QWORD *)&v27 = 0;
      qfree((__int64)v26);
    }
    cleanup_argloc();
    goto LABEL_2;
  }
  LOBYTE(v9) = 0;
  while ( 1 )
  {
    v16 = v14[4];
    v17 = &v15[6 * v13];
    v18 = v16 + *v14;
    if ( v17 != v15 )
    {
      while ( 1 )
      {
        v19 = v15[4];
        v20 = v16;
        if ( v19 >= v16 )
          v20 = v15[4];
        v21 = *v15 + v19;
        if ( v21 > v18 )
          v21 = v18;
        if ( v20 >= v21 )
        {
          v15 += 6;
          if ( v17 == v15 )
            goto LABEL_22;
        }
        else
        {
          sub_225530(
            a1,
            *(_DWORD *)(a2 + 44),
            *(_DWORD *)(*(_QWORD *)(a1 + 16) + 480LL),
            v20,
            v20 + v14[5] - v16,
            v21 - v20);
          v15 += 6;
          LOBYTE(v9) = 1;
          if ( v17 == v15 )
          {
LABEL_22:
            v15 = v26;
            break;
          }
        }
        v16 = v14[4];
      }
    }
    v14 += 6;
    if ( v22 == v14 )
      break;
    v13 = v27;
  }
  if ( v15 )
  {
    *(_QWORD *)&v27 = 0;
    qfree((__int64)v15);
  }
  cleanup_argloc();
  v9 = (unsigned __int8)v9;
  if ( !(_BYTE)v9 )
    goto LABEL_2;
LABEL_4:
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree((__int64)v24);
    return (unsigned __int8)v9;
  }
  return v9;
}

