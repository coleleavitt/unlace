unsigned __int64 __fastcall sub_41200(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax

  result = *(unsigned int *)(qword_9AD30 + 144LL * *(int *)(a1 + 1176) + 120);
  if ( !(_DWORD)result )
    return sub_3F700(a1, a2);
  if ( (_DWORD)result == 13 )
    return sub_3D140(a1, a2);
  return result;
}

