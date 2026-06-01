__int64 __fastcall sub_85110(_QWORD *a1)
{
  __int64 result; // rax

  result = a1[1];
  if ( result )
    return (*(__int64 (__fastcall **)(_QWORD))(*a1 + 488LL))(a1[1]);
  return result;
}
