__int64 __fastcall sub_C5E70(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  int v3; // eax
  int v4; // r8d
  int v5; // edi
  __int64 v6; // r9
  int v7; // eax
  int v8; // ecx
  int v9; // r10d
  unsigned int v10; // r8d
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  _QWORD v15[3]; // [rsp+0h] [rbp-18h]

  v2 = *(_QWORD *)(a2 + 8);
  v15[1] = __readfsqword(0x28u);
  v3 = *(_DWORD *)a2;
  v15[0] = -1;
  if ( v3 <= 0 )
    goto LABEL_15;
  v4 = 0;
  v5 = 0;
  v6 = v2 + 4 * (3LL * (unsigned int)(v3 - 1) + 3);
  v7 = 0;
  do
  {
    while ( 1 )
    {
      if ( *(int *)v2 <= 7 )
        goto LABEL_4;
      v8 = *(_DWORD *)v2 - 8;
      v9 = 1 << v8;
      if ( *(_BYTE *)(v2 + 5) )
        break;
      v7 |= v9;
LABEL_4:
      v2 += 12;
      ++v5;
      if ( v2 == v6 )
        goto LABEL_9;
    }
    if ( *(_BYTE *)(v2 + 4) != 2 )
      goto LABEL_4;
    v2 += 12;
    v4 |= v9;
    *((_DWORD *)v15 + v8) = v5++;
  }
  while ( v2 != v6 );
LABEL_9:
  v10 = v7 & ~v4;
  if ( v10 )
    return 19;
  v11 = SLODWORD(v15[0]);
  if ( SLODWORD(v15[0]) < 0 )
  {
LABEL_15:
    *(_DWORD *)(a2 + 40) = 0;
    return 0;
  }
  v12 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 64) = 0x3FF0000000000000LL;
  *(_DWORD *)(v12 + 8 * v11) = 1;
  *(_BYTE *)(*(_QWORD *)(a2 + 32) + 8 * v11 + 4) = 1;
  v13 = SHIDWORD(v15[0]);
  if ( v15[0] < 0 )
  {
    *(_DWORD *)(a2 + 40) = 1;
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)(a2 + 32) + 8LL * SHIDWORD(v15[0])) = 2;
    *(_BYTE *)(*(_QWORD *)(a2 + 32) + 8 * v13 + 4) = 1;
    *(_DWORD *)(a2 + 40) = 3;
  }
  return v10;
}
