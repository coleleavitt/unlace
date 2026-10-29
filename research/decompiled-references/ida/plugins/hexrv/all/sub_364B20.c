__int64 __fastcall sub_364B20(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  int v5; // ecx

  if ( *(_BYTE *)a2 != 9 )
    return 0;
  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(a1 + 48) + 16LL * *(int *)(v3 + 16);
  v5 = *(_DWORD *)(v4 + 8);
  if ( v5 == -1 )
    return 0;
  *(_DWORD *)(v3 + 16) = v5;
  *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL) += *(_QWORD *)v4;
  return 0;
}

