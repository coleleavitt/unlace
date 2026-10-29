__int64 __fastcall sub_3D40(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a2 + 8) != 35 || *(_QWORD *)(a2 + 40) != *(_QWORD *)(*(_QWORD *)(a1 + 16) + 144LL) )
    return (unsigned __int8)sub_3C50(*(_QWORD *)a2, a2, a3, a4) == 0 ? 6 : 2;
  result = 3;
  if ( !*(_QWORD *)(a2 + 56) )
    return 7;
  return result;
}

