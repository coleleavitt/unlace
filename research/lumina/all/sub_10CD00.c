__int64 __fastcall sub_10CD00(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // r12
  __int64 v6; // rax
  int v7; // ecx
  bool v8; // zf
  unsigned int v9; // r13d
  __int64 result; // rax

  v2 = *(unsigned int *)(a1 + 128);
  v3 = a1;
  v4 = *(_QWORD *)(a1 + 200);
  if ( *(_DWORD *)(a1 + 184) <= (unsigned int)v4 )
    LODWORD(v4) = *(_DWORD *)(a1 + 184);
  v5 = *(_QWORD *)(a1 + 280);
  v6 = *(_QWORD *)(a1 + 96);
  if ( (int)v2 > 0 )
  {
    v7 = 0;
    do
    {
      a1 = v7;
      v2 = *(_QWORD *)(v3 + 120);
      a2 = v2 + 56LL * v7;
      if ( !*(_QWORD *)(a2 + 8) )
      {
        *(_QWORD *)(a2 + 8) = v6;
        v6 = *(_QWORD *)(v3 + 96);
      }
      ++v7;
    }
    while ( *(_DWORD *)(v3 + 128) > v7 );
  }
  if ( v6 )
  {
    v2 = (v6 - 1) % *(unsigned int *)(v3 + 184);
    v6 = *(unsigned int *)(v3 + 184) * ((v6 - 1) / *(unsigned int *)(v3 + 184) + 1);
  }
  v8 = *(_BYTE *)(v3 + 11) == 0;
  *(_QWORD *)(v3 + 96) = v6;
  *(_QWORD *)(v3 + 104) = v6;
  if ( !v8
    || *(_BYTE *)(v3 + 9) == 4
    || (a1 = *(_QWORD *)(v3 + 72), *(_QWORD *)a1)
    && ((*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 96LL))(a1, a2, v2) & 0x200) != 0 )
  {
    *(_DWORD *)(v5 + 8) = -1;
    *(_QWORD *)v5 = 0xD763A120F905D5D9LL;
  }
  else
  {
    *(_QWORD *)v5 = 0;
    *(_DWORD *)(v5 + 8) = 0;
  }
  if ( !(unsigned int)sub_FEBD0(a1, a2) )
    sub_FF240(4, (const char *)(v3 + 56));
  v9 = 0;
  *(_DWORD *)(v5 + 12) = _byteswap_ulong(*(_DWORD *)(v3 + 56));
  *(_DWORD *)(v5 + 16) = _byteswap_ulong(*(_DWORD *)(v3 + 36));
  *(_DWORD *)(v5 + 20) = _byteswap_ulong(*(_DWORD *)(v3 + 184));
  *(_DWORD *)(v5 + 24) = _byteswap_ulong(*(_QWORD *)(v3 + 200));
  memset((void *)(v5 + 28), 0, (unsigned int)v4 - 28LL);
  while ( *(_DWORD *)(v3 + 184) > v9 )
  {
    v9 += v4;
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD **)(v3 + 80) + 24LL))(
               *(_QWORD *)(v3 + 80),
               v5,
               (unsigned int)v4,
               *(_QWORD *)(v3 + 96));
    *(_QWORD *)(v3 + 96) += (unsigned int)v4;
    if ( (_DWORD)result )
      return result;
  }
  return 0;
}
