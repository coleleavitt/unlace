__int64 __fastcall sub_17AE0(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v5; // rdi
  int v6; // edx
  __int64 v7; // rcx
  int v8; // esi
  int v9; // esi
  _DWORD *v10; // rdx
  unsigned __int16 *i; // rax
  unsigned int v12; // ecx
  __int64 v14; // rax

  v5 = a3;
  v6 = *(unsigned __int16 *)(a2 + 24);
  v7 = *(_QWORD *)(a1 + 16);
  v8 = *(_DWORD *)(v7 + 104);
  if ( v8 <= v6 && v6 < *(_DWORD *)(v7 + 108) )
  {
    v9 = *(_DWORD *)(*(_QWORD *)(v7 + 112) + 16LL * (v6 - v8) + 8);
    if ( (v9 & 2) != 0 )
    {
      v12 = 1;
      if ( (unsigned int)v5 <= 0x1B )
      {
        v14 = 268174108;
        LOBYTE(v12) = !_bittest64(&v14, v5);
      }
      return v12;
    }
  }
  else
  {
    v9 = 0;
  }
  if ( *(_BYTE *)(a2 + 81) == 1 && (_DWORD)v5 == *(unsigned __int16 *)(a2 + 86) )
  {
    v12 = 1;
    if ( (unsigned int)(v6 - 443) <= 0x15 )
      return v12;
  }
  v10 = &unk_2B0E0;
  for ( i = (unsigned __int16 *)(a2 + 46); (*v10 & v9) == 0 || *((_BYTE *)i - 5) != 1 || (_DWORD)v5 != *i; i += 20 )
  {
    if ( ++v10 == (_DWORD *)&unk_2B0F0 )
      return 0;
  }
  return 1;
}
