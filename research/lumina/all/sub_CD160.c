unsigned __int64 __fastcall sub_CD160(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rdx

  v1 = *(int *)(a1 + 4);
  if ( *(_DWORD *)a1 <= (int)v1 )
    return 0;
  v3 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 4) = v1 + 1;
  return sub_CD0F0(*(char ***)(v3 + 8 * v1));
}
