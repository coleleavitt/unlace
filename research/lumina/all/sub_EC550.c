__int64 __fastcall sub_EC550(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  result = sub_EC330(a1);
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result == 16 )
    {
      *a2 = 1;
      return 0;
    }
  }
  else
  {
    *a2 = 0;
    return sub_EBF90(a1);
  }
  return result;
}
