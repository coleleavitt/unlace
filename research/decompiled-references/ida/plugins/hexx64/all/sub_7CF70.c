__int64 __fastcall sub_7CF70(__int64 a1, __int64 a2, double a3)
{
  unsigned __int64 v3; // rax
  __int64 result; // rax

  if ( *(_DWORD *)(a2 + 48) > 3u )
    v3 = sub_7CF00((_QWORD *)a2, a3);
  else
    v3 = sub_7CEC0((_QWORD *)a2, a3) - 1;
  *(_QWORD *)(a1 + 8) = v3;
  if ( *(_QWORD *)a2 >= *(_QWORD *)(a2 + 8) )
    sub_7A510(a3);
  result = (unsigned int)unpack_dd() - 1;
  *(_DWORD *)(a1 + 16) = result;
  return result;
}

