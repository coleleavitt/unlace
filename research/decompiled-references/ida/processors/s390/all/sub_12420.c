__int64 __fastcall sub_12420(__int64 a1, unsigned __int16 *a2, int a3, int a4)
{
  __int64 v5; // rcx
  int v8; // edx
  unsigned int v9; // r8d
  int v10; // edi
  int v11; // r10d
  unsigned __int16 *v12; // rdx
  _DWORD *v13; // rcx
  unsigned __int16 *v14; // rax

  v5 = *(_QWORD *)(a1 + 16);
  v8 = a2[12];
  v9 = 0;
  v10 = *(_DWORD *)(v5 + 104);
  if ( v8 < v10 )
    return v9;
  if ( v8 >= *(_DWORD *)(v5 + 108) )
    return v9;
  v11 = *(_DWORD *)(*(_QWORD *)(v5 + 112) + 16LL * (v8 - v10) + 8);
  if ( !v11 )
    return v9;
  v12 = a2 + 23;
  v13 = &unk_23E00;
  v14 = a2 + 143;
  do
  {
    if ( (*v13 & v11) != 0 && *v12 == a3 && *(_QWORD *)(v12 + 5) == a4 )
      return 1;
    v12 += 20;
    ++v13;
  }
  while ( v12 != v14 );
  return 0;
}

