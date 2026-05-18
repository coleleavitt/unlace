__int64 __fastcall sub_E18F0(__int64 a1, unsigned int a2, __int64 a3, __int16 a4)
{
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rdi
  int v12; // edx
  int v13; // ecx
  __int64 result; // rax

  v7 = sub_E1710(a1, 149, a2, 0, 0);
  sub_DCC50(a1, v7, a3, 4294967290LL, v8, v9);
  v10 = *(int *)(a1 + 144);
  if ( (int)v10 > 0 )
    *(_WORD *)(*(_QWORD *)(a1 + 136) + 24 * v10 - 22) = a4;
  v11 = *(_QWORD *)a1;
  if ( *(int *)(*(_QWORD *)a1 + 40LL) > 0 )
  {
    v12 = *(_DWORD *)(a1 + 200);
    v13 = 0;
    do
    {
      v12 |= 1 << v13;
      *(_DWORD *)(a1 + 200) = v12;
      if ( v13 != 1 && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v11 + 32) + 32LL * v13 + 8) + 17LL) )
        *(_DWORD *)(a1 + 204) |= 1 << v13;
      ++v13;
    }
    while ( *(_DWORD *)(v11 + 40) > v13 );
  }
  result = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 160LL);
  if ( !result )
    result = *(_QWORD *)(a1 + 24);
  *(_BYTE *)(result + 33) = 1;
  return result;
}
