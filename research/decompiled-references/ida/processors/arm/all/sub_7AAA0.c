unsigned __int64 __fastcall sub_7AAA0(__int64 a1, __int64 *a2, __int64 a3)
{
  char v5; // al
  unsigned int v6; // r12d
  int v7; // r14d
  __int64 i; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rax
  unsigned __int64 v16; // [rsp+8h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v5 = *(_BYTE *)(a3 + 88);
  v6 = v5 & 0xF0;
  if ( (v5 & 0xF0) == 0xC0 )
    v6 = *(_DWORD *)(a3 + 28);
  if ( v6 <= 0x10 )
    v6 = getinf(99);
  if ( sub_79970(a1, v6, a3 + 32, 1) )
  {
    v13 = a2[1];
    v14 = *a2;
    if ( a2[2] < (unsigned __int64)(v13 + 1) )
    {
      v15 = qvector_reserve((__int64)a2, v14, v13 + 1, 4);
      *a2 = v15;
      v14 = v15;
      v13 = a2[1];
    }
    *(_DWORD *)(v14 + 4 * v13) = -1;
    ++a2[1];
  }
  v7 = 0;
  for ( i = 0; (unsigned __int64)v7 < *(_QWORD *)(a3 + 8); i = v7 )
  {
    while ( !sub_79970(a1, v6, *(_QWORD *)a3 + 80 * i + 64, 0) )
    {
      i = ++v7;
      if ( (unsigned __int64)v7 >= *(_QWORD *)(a3 + 8) )
        return v16 - __readfsqword(0x28u);
    }
    v9 = a2[1];
    v10 = *a2;
    if ( a2[2] < (unsigned __int64)(v9 + 1) )
    {
      v12 = qvector_reserve((__int64)a2, v10, v9 + 1, 4);
      *a2 = v12;
      v10 = v12;
      v9 = a2[1];
    }
    *(_DWORD *)(v10 + 4 * v9) = v7++;
    ++a2[1];
  }
  return v16 - __readfsqword(0x28u);
}
