unsigned __int64 __fastcall sub_E4950(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  int v3; // edx

  sub_CE610(a2);
  result = *(_QWORD *)a1;
  v3 = *(_DWORD *)(*(_QWORD *)a1 + 148LL);
  if ( *(_DWORD *)(a2 + 40) > v3 )
    return sub_DBD10(a1, "Expression tree is too large (maximum depth %d)", v3);
  return result;
}
