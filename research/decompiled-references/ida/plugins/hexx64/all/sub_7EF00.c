__int64 __fastcall sub_7EF00(__int64 a1, _QWORD *a2, double a3)
{
  __int64 result; // rax

  *(_QWORD *)a1 = sub_7D020((__int64)a2, 1u, a3);
  *(_QWORD *)(a1 + 8) = sub_7D020((__int64)a2, 1u, a3);
  *(_QWORD *)(a1 + 16) = sub_7D020((__int64)a2, 1u, a3);
  if ( *a2 >= a2[1] || (*(_DWORD *)(a1 + 24) = unpack_dd() - 1, *a2 >= a2[1]) )
    sub_7A510(a3);
  result = (unsigned int)unpack_dd() - 1;
  *(_DWORD *)(a1 + 28) = result;
  return result;
}

