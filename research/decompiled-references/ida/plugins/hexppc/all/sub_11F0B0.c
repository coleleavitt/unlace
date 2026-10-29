__int64 __fastcall sub_11F0B0(__int64 a1, int a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8LL);
  if ( *(_DWORD *)(v2 + 80) == a2 )
    return *(unsigned int *)(a1 + 64);
  if ( *(_DWORD *)(v2 + 84) == a2 )
    return *(unsigned int *)(a1 + 52);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 168LL))(a1);
}

