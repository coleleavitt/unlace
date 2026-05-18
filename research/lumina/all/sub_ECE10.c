__int64 __fastcall sub_ECE10(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx

  result = sub_ECB40(a1, a2);
  if ( !(_DWORD)result )
  {
    sub_D4E10(a1, a2, v3);
    return 0;
  }
  return result;
}
