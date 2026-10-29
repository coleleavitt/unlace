__int64 sub_33E270()
{
  __int64 result; // rax
  __int64 (__fastcall **v1[3])(_QWORD); // [rsp+0h] [rbp-18h] BYREF

  v1[1] = (__int64 (__fastcall **)(_QWORD))__readfsqword(0x28u);
  v1[0] = (__int64 (__fastcall **)(_QWORD))off_4E3C18;
  result = sub_33E220(v1);
  if ( result == -1 )
    return 0;
  return result;
}

