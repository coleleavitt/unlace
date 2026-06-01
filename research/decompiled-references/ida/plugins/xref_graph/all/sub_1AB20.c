__int64 __fastcall sub_1AB20(__int64 a1)
{
  __int64 func; // rdx
  __int64 result; // rax

  func = get_func();
  result = a1;
  if ( func )
    return *(_QWORD *)func;
  return result;
}

