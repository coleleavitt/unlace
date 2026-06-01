unsigned __int64 __fastcall sub_CE1C0(__int64 a1, double a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rbp
  int v6; // eax
  __int64 v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbp
  int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // rdx
  int v14; // r12d
  _DWORD *v15; // rcx
  _DWORD *v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  _QWORD v21[5]; // [rsp+0h] [rbp-218h] BYREF
  char v22; // [rsp+28h] [rbp-1F0h]
  __int64 v23[55]; // [rsp+30h] [rbp-1E8h] BYREF
  unsigned __int64 v24; // [rsp+1E8h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  v22 = 0;
  memset(&v21[1], 0, 32);
  v21[0] = &off_4DC018;
  sub_11FBB0(a1, (__int64)v21);
  v2 = *(unsigned int *)(a1 + 64);
  v3 = 8;
  v4 = 1;
  if ( (int)v2 > 1 )
  {
    while ( 1 )
    {
      ++v4;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 528) + v3) + 24LL) |= 1u;
      v2 = *(unsigned int *)(a1 + 64);
      if ( (int)v2 <= v4 )
        break;
      v3 += 8;
      if ( v4 >= (unsigned int)v2 )
      {
LABEL_25:
        if ( !under_debugger )
          sub_383060(0xCDEFu, a2);
        BUG();
      }
    }
  }
  v5 = 0;
  if ( (int)v2 > 0 )
  {
    while ( 1 )
    {
      sub_BB6B0(*(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v5), (__int64)v21, v2, v3, a2);
      v6 = *(_DWORD *)(a1 + 64);
      v2 = (unsigned int)(v5 + 1);
      if ( v6 <= (int)v2 )
        break;
      if ( (unsigned int)++v5 >= v6 )
        goto LABEL_25;
    }
  }
  v7 = 0;
  sub_1D4FD0(a1);
  sub_670E0((_QWORD *)a1, (__int64)v21, v8, v9);
  sub_C3040((__int64)v23, a1);
  if ( *(int *)(a1 + 64) > 0 )
  {
    do
    {
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v7);
      sub_CD690(v10);
      if ( (*(_BYTE *)(v10 + 24) & 1) != 0 || *(_DWORD *)(a1 + 64) == 1 )
        sub_BC900((_QWORD *)v10, v23);
      if ( *(_DWORD *)(v10 + 76) == 4 )
      {
        v11 = sub_330DE0(v10);
        v12 = *(_QWORD *)(v10 + 704);
        v13 = *(_QWORD *)(v10 + 712);
        v14 = v11 - 1;
        v15 = (_DWORD *)(v12 + 4 * v13);
        if ( (_DWORD *)v12 == v15 )
          goto LABEL_20;
        v16 = *(_DWORD **)(v10 + 704);
        while ( v14 != *v16 )
        {
          if ( v15 == ++v16 )
            goto LABEL_20;
        }
        if ( v15 == v16 )
        {
LABEL_20:
          v17 = v13 + 1;
          if ( *(_QWORD *)(v10 + 720) < v17 )
          {
            v19 = qvector_reserve(v10 + 704, v12, v17, 4);
            v20 = *(_QWORD *)(v10 + 712);
            *(_QWORD *)(v10 + 704) = v19;
            v15 = (_DWORD *)(v19 + 4 * v20);
          }
          *v15 = v14;
          ++*(_QWORD *)(v10 + 712);
        }
      }
      sub_BB9E0(v10);
      ++v7;
    }
    while ( *(_DWORD *)(a1 + 64) > (int)v7 );
  }
  sub_C2850(v23);
  return v24 - __readfsqword(0x28u);
}

