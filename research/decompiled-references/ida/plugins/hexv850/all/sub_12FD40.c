_BOOL8 __fastcall sub_12FD40(_QWORD *a1)
{
  __int64 v1; // r8
  __int64 v2; // rdx
  _QWORD *v3; // rax
  __int64 v4; // rcx

  v1 = a1[4];
  if ( !v1 )
    return 1;
  v2 = a1[5];
  v3 = *(_QWORD **)v2;
  v4 = *(_QWORD *)v2 + 16LL * *(_QWORD *)(v2 + 8);
  if ( *(_QWORD *)v2 == v4 )
    return 1;
  while ( *(_DWORD *)(a1[2] + 72LL) != *(_DWORD *)(*v3 + 72LL) || v1 != v3[1] )
  {
    v3 += 2;
    if ( (_QWORD *)v4 == v3 )
      return 1;
  }
  return v3 == (_QWORD *)v4;
}

