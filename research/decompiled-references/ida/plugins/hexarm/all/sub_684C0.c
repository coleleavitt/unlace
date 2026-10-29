_DWORD *__fastcall sub_684C0(__int64 a1, int a2)
{
  _DWORD *v2; // rax
  __int64 v3; // rdx
  _DWORD *v4; // rcx

  v2 = *(_DWORD **)a1;
  v3 = *(_QWORD *)a1 + 16LL * *(_QWORD *)(a1 + 8);
  if ( v3 == *(_QWORD *)a1 )
    return nullptr;
  while ( 1 )
  {
    v4 = v2;
    if ( *v2 <= a2 && v2[1] > a2 )
      break;
    v2 += 4;
    if ( (_DWORD *)v3 == v2 )
      return nullptr;
  }
  return v4;
}

