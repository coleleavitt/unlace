__int64 __fastcall sub_394520(_QWORD *a1)
{
  __int64 (__fastcall ***v1)(_QWORD); // rdx
  __int64 result; // rax

  v1 = (__int64 (__fastcall ***)(_QWORD))*a1;
  if ( *a1 )
  {
    if ( (*((_DWORD *)v1 + 2))-- == 1 )
      return (**(__int64 (__fastcall ***)(_QWORD))*a1)(*a1);
  }
  return result;
}

