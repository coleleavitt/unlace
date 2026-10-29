__int64 __fastcall sub_2B0DF0(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 1112) == a2 )
    return *(_QWORD *)(a1 + 1120);
  result = sub_2B0CC0(a2, a3);
  if ( result != -1 )
  {
    *(_QWORD *)(a1 + 1112) = a2;
    *(_QWORD *)(a1 + 1120) = result;
  }
  return result;
}

