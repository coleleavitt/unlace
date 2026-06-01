__int64 __fastcall sub_13710(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( a3 == -1 )
    a3 = a4;
  result = *(unsigned int *)(*(_QWORD *)(a1 + 8) + 4LL);
  if ( !(_DWORD)result )
    return sub_15150(a1, a2, a3);
  if ( (_DWORD)result == 13 )
    return sub_20F90(a1, a2, a3);
  return result;
}

