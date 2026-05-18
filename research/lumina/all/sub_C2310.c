__int64 __fastcall sub_C2310(__int64 a1)
{
  __int64 v1; // rax

  if ( !a1 )
    return 0;
  v1 = *(unsigned int *)(a1 + 24);
  if ( !(_DWORD)v1 )
    return 0;
  *(_BYTE *)(*(_QWORD *)(a1 + 8) + v1) = 0;
  return *(_QWORD *)(a1 + 8);
}
