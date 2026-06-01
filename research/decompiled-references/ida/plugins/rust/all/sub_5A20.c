__int64 __fastcall sub_5A20(_DWORD *a1, __int64 a2)
{
  __int64 result; // rax

  result = sub_2B40((__int64)a1, a2);
  if ( result == -1 )
    return sub_5600(a1, a2);
  return result;
}

