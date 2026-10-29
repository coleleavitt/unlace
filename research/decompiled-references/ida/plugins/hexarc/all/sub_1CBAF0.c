bool __fastcall sub_1CBAF0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  _QWORD *v3; // rax
  _QWORD *v4; // rdx

  v2 = *(_QWORD *)(a1 + 784);
  v3 = *(_QWORD **)(v2 + 80);
  v4 = &v3[*(_QWORD *)(v2 + 88)];
  if ( v3 == v4 )
    return 0;
  while ( a2 != *v3 )
  {
    if ( v4 == ++v3 )
      return 0;
  }
  return v4 != v3;
}

