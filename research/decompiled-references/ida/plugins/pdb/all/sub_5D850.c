__int64 __fastcall sub_5D850(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // edx
  __int64 v3; // rcx
  __int64 v4; // rax

  v2 = 1;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 536LL);
  if ( v3 != -1 )
  {
    v4 = *(unsigned int *)(a1 + 56);
    if ( (_DWORD)v4 != -1 )
    {
      v2 = 0;
      *a2 = v3 + v4;
    }
  }
  return v2;
}

