__int64 __fastcall sub_3CAA40(__int64 a1, _DWORD *a2)
{
  unsigned __int64 v2; // rbp
  int v3; // r12d
  unsigned __int64 v4; // rdx
  __int64 result; // rax

  if ( (_DWORD *)a1 == a2 )
    return 0;
  v2 = *(_QWORD *)(a1 + 56);
  v3 = *(_DWORD *)(a1 + 8);
  v4 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 128LL))(a2);
  result = 0xFFFFFFFFLL;
  if ( v2 >= v4 )
  {
    result = 1;
    if ( v2 == v4 )
    {
      result = v3 > a2[2];
      if ( v3 < a2[2] )
        return 0xFFFFFFFFLL;
    }
  }
  return result;
}

