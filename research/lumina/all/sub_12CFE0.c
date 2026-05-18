unsigned __int64 __fastcall sub_12CFE0(__int64 a1, __int64 a2, unsigned int a3, int a4, __int64 a5, int a6, double a7)
{
  __int64 v8; // r13
  __int64 v9; // rbx
  __int64 v10; // r15
  int v12; // ebp
  __int64 v13; // rdx
  int v14; // r14d
  unsigned int v15; // r8d
  __int64 v16; // rax
  unsigned int v17; // eax
  int v21; // [rsp+34h] [rbp-44h] BYREF
  unsigned __int64 v22; // [rsp+38h] [rbp-40h]

  v8 = *(_QWORD *)(a1 + 16);
  v9 = *(_QWORD *)(a2 + 16);
  v22 = __readfsqword(0x28u);
  if ( *(char *)(a2 + 48) >= 0 )
  {
    if ( !v9 )
      return __readfsqword(0x28u) ^ v22;
    v10 = 0;
  }
  else
  {
    if ( !v9 )
      return __readfsqword(0x28u) ^ v22;
    v10 = v9;
    if ( (*(_BYTE *)(v9 + 99) & 3) != 2 )
    {
      do
        v10 = *(_QWORD *)(v10 + 40);
      while ( v10 && (*(_BYTE *)(v10 + 99) & 3) != 2 );
    }
  }
  v12 = 0;
  v13 = 0;
  v14 = -1;
  do
  {
    if ( (!a5 || *(_DWORD *)(a5 + 4LL * v12)) && v9 != v10 && a6 != a4 + v12 )
    {
      v17 = sub_12CD50(a1, v9, a3, 0, 1, &v21, a7, v13, v14);
      v14 = v17;
      if ( (*(_BYTE *)(v9 + 99) & 8) != 0 )
        v15 = *(unsigned __int16 *)(v9 + 94);
      else
        v15 = *(unsigned __int16 *)(v9 + 96);
      sub_E1710(v8, 140, a4 + v12, v17, v15);
      v16 = *(int *)(v8 + 144);
      if ( (int)v16 > 0 )
        *(_WORD *)(*(_QWORD *)(v8 + 136) + 24 * v16 - 22) = 1;
      v13 = v9;
      if ( v21 )
      {
        sub_E0BB0(*(_QWORD *)(a1 + 16), v21);
        v13 = v9;
      }
    }
    v9 = *(_QWORD *)(v9 + 40);
    ++v12;
  }
  while ( v9 );
  return __readfsqword(0x28u) ^ v22;
}
