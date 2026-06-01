__int64 __fastcall sub_3EA6D0(__int64 a1, double a2)
{
  __int64 (__fastcall ***v2)(_QWORD); // rax
  __int64 result; // rax

  v2 = *(__int64 (__fastcall ****)(_QWORD))(a1 + 40);
  if ( v2 )
    return (**v2)(*(_QWORD *)(a1 + 40));
  result = *(unsigned int *)(a1 + 32);
  if ( (_DWORD)result == -1 )
  {
    if ( !under_debugger )
      sub_37B760(0xC945u, a2);
    BUG();
  }
  *(_DWORD *)(a1 + 32) = -1;
  return result;
}

