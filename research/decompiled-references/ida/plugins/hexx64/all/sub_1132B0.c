__int64 __fastcall sub_1132B0(__int64 *a1, int a2, double a3)
{
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rdi
  _QWORD v11[7]; // [rsp+0h] [rbp-38h] BYREF

  v11[1] = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1[4] + 4) & 0x10) != 0 )
    return 0;
  v5 = sub_1120C0(*(_QWORD *)(a1[1] + 8), 1);
  v6 = *(unsigned int *)(a1[4] + 72);
  if ( (unsigned int)v6 >= *(_DWORD *)(*a1 + 64) )
    sub_111110(a3);
  v7 = *(_QWORD *)(*(_QWORD *)(*a1 + 528) + 8 * v6);
  if ( *(_DWORD *)(v5 + 76) == 4
    && *(_BYTE *)(*(_QWORD *)(v5 + 56) + 64LL) == 7
    && *(_DWORD *)(v5 + 352) == 1
    && sub_330DE0(v5) == 1
    && (unsigned int)(**(_DWORD **)(v5 + 56) - 43) <= 9 )
  {
    *((_BYTE *)a1 + 56) = 0;
    *((_DWORD *)a1 + 15) = *(_DWORD *)(sub_1120C0(v7, 0) + 72);
    v10 = *(unsigned int *)a1[4];
  }
  else
  {
    v8 = sub_1120C0(v7, 1);
    v5 = v8;
    if ( *(_DWORD *)(v8 + 76) != 4
      || *(_BYTE *)(*(_QWORD *)(v8 + 56) + 64LL) != 7
      || *(_DWORD *)(v8 + 352) != 1
      || sub_330DE0(v8) != 1
      || (unsigned int)(**(_DWORD **)(v5 + 56) - 43) > 9 )
    {
      return 0;
    }
    v9 = a1[1];
    *((_BYTE *)a1 + 56) = 1;
    *((_DWORD *)a1 + 15) = *(_DWORD *)(sub_1120C0(*(_QWORD *)(v9 + 8), 0) + 72);
    v10 = (unsigned int)sub_32E9E0(*(_DWORD *)a1[4]);
  }
  *((_DWORD *)a1 + 17) = v10;
  if ( (*(_BYTE *)(*(_QWORD *)(v5 + 56) + 4LL) & 0x10) != 0 )
    return 0;
  if ( (_DWORD)v10 == 43 )
  {
    if ( !(unsigned __int8)sub_11FD80((char *)(a1[4] + 48), v11, 0) || v11[0] )
      return 0;
    *((_DWORD *)a1 + 17) = 47;
    v10 = 47;
  }
  if ( sub_32ED00(v10) )
    return 0;
  a1[a2 + 1] = v5;
  a1[a2 + 4] = *(_QWORD *)(v5 + 56);
  return 1;
}

