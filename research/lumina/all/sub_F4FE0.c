__int64 __fastcall sub_F4FE0(__int64 a1, int a2)
{
  int v2; // eax
  __int64 result; // rax

  v2 = -1;
  if ( a2 )
    v2 = a2;
  *(_DWORD *)(a1 + 36) = v2;
  result = *(_QWORD *)a1;
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 20LL) & 1) != 0 )
    return sub_F4FB0(a1, a2);
  return result;
}
