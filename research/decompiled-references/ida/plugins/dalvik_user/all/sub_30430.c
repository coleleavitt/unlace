__int64 __fastcall sub_30430(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax

  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(_QWORD *)(v3 + 32);
  v6 = *(_QWORD *)(v4 + 32);
  if ( v6 == v5 )
    return (unsigned int)(*(_DWORD *)(v3 + 152) - *(_DWORD *)(v4 + 152));
  if ( v5 < v6 )
    return 0xFFFFFFFFLL;
  return 1;
}

