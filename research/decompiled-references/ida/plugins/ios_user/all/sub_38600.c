unsigned __int64 __fastcall sub_38600(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax

  result = *(unsigned int *)(qword_8FB50 + 144LL * *(int *)(a1 + 1176) + 120);
  if ( !(_DWORD)result )
    return sub_36B00(a1, a2);
  if ( (_DWORD)result == 13 )
    return sub_34540(a1, a2);
  return result;
}

