__int64 __fastcall sub_54890(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rcx
  __int64 v4; // rdx
  _QWORD *i; // rax

  v2 = *(_QWORD **)(a1 + 8);
  v3 = (_QWORD *)*v2;
  v4 = *v2 + 8LL * v2[1];
  for ( i = v3; (_QWORD *)v4 != i; ++i )
  {
    if ( a2 == *i )
      break;
  }
  if ( i - v3 < (unsigned __int64)*(int *)(a1 + 16) )
    ++*(_DWORD *)(a1 + 20);
  return 0;
}
