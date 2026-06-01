char __fastcall sub_1183B0(__int64 a1, __int64 a2)
{
  unsigned __int8 *v2; // r12
  char result; // al
  unsigned __int8 *v6; // r14
  __int128 v7; // rdi
  int *v8; // r13
  __int128 v9; // rdi
  int *v10; // rax
  int *v11; // r15
  _DWORD *v12; // rax
  _DWORD *v13; // rax
  __int64 v14; // [rsp+8h] [rbp-50h] BYREF
  __int64 v15[9]; // [rsp+10h] [rbp-48h] BYREF

  v2 = (unsigned __int8 *)(a2 + 32);
  v15[1] = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_11CA60((_BYTE *)(a2 + 32)) )
    return 0;
  v6 = (unsigned __int8 *)(a2 + 48);
  if ( !(unsigned __int8)sub_11CA60((_BYTE *)(a2 + 48)) )
    return 0;
  if ( *(_BYTE *)(a2 + 32) == 4 )
  {
    v12 = *(_DWORD **)(a2 + 40);
    if ( *v12 == 10 )
    {
      v2 = (unsigned __int8 *)(v12 + 8);
      if ( *(_BYTE *)(a2 + 48) == 4 )
      {
        v13 = *(_DWORD **)(a2 + 56);
        if ( *v13 == 10 )
          v6 = (unsigned __int8 *)(v13 + 8);
      }
    }
  }
  *(_QWORD *)&v7 = *(_QWORD *)(a1 + 8);
  *((_QWORD *)&v7 + 1) = v2;
  v14 = *(_QWORD *)(a1 + 16);
  v8 = (int *)sub_129440(v7, (__int64)&v14, 0);
  if ( !v8 )
    return 0;
  *(_QWORD *)&v9 = *(_QWORD *)(a1 + 8);
  *((_QWORD *)&v9 + 1) = v6;
  v15[0] = *(_QWORD *)(a1 + 16);
  v10 = (int *)sub_129440(v9, (__int64)v15, 0);
  v11 = v10;
  if ( !v10 )
    return 0;
  result = sub_117E60(a1, *(_DWORD *)a2, v14, v8, v15[0], v10);
  if ( !result )
  {
    if ( (unsigned __int8)sub_117FD0((_QWORD *)a1, *(_DWORD *)a2, *(_QWORD *)(a1 + 16), v2, v14, v8, v15[0], v11) )
      return 8 * *((_DWORD *)v2 + 1) <= *(_DWORD *)(a1 + 120);
    if ( (unsigned __int8)sub_117FD0((_QWORD *)a1, *(_DWORD *)a2, *(_QWORD *)(a1 + 16), v6, v15[0], v11, v14, v8) )
    {
      if ( *(_DWORD *)a2 == 13 || (unsigned int)(*(_DWORD *)a2 - 29) <= 0xC )
        *(_QWORD *)(a1 + 112) = -*(_QWORD *)(a1 + 112);
      return 8 * *((_DWORD *)v2 + 1) <= *(_DWORD *)(a1 + 120);
    }
    return 0;
  }
  return result;
}

