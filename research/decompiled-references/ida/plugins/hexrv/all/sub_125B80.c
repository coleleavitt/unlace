__int64 __fastcall sub_125B80(__int128 a1, __int64 a2, int a3)
{
  int v5; // ebp
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _DWORD *v11; // r13
  int v12; // eax
  __int64 v13; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v14[7]; // [rsp+10h] [rbp-38h] BYREF

  v13 = *((_QWORD *)&a1 + 1);
  v14[1] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 4) <= a3 )
    return 1;
  v5 = a3;
  if ( (unsigned __int8)sub_11B8C0((char *)a2, v14, 0) )
  {
    if ( (unsigned __int64)v5 > 7 || !(v14[0] >> (8 * (unsigned __int8)v5)) )
      return 1;
  }
  if ( !(_QWORD)a1 )
    return 0;
  if ( !v13 )
    return 0;
  *((_QWORD *)&a1 + 1) = a2;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  v7 = sub_124F80(a1, (__int64)&v13, 0);
  v11 = (_DWORD *)v7;
  if ( !v7 )
    return 0;
  if ( *(_BYTE *)a2 != 4 )
  {
    v12 = sub_125AE0(v7 + 64, v6, a2, v8, v9, v10);
    if ( !v12 )
      return 0;
    if ( v12 == 3 )
      v5 = v11[17] + v5 - *(_DWORD *)(a2 + 4);
  }
  if ( *v11 != 9 )
    return 0;
  return sub_125B80(a1, v13, v11 + 8, (unsigned int)v5);
}

