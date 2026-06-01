__int64 __fastcall sub_2AFBF0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 8);
  v3 = *(_QWORD *)(a1 + 8);
  result = 0xFFFFFFFFLL;
  if ( v3 >= v2 )
    return v2 < v3;
  return result;
}

