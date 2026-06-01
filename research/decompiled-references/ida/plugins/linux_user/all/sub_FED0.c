bool __fastcall sub_FED0(unsigned int a1)
{
  bool result; // al
  _QWORD v2[2]; // [rsp+0h] [rbp-268h] BYREF
  char v3; // [rsp+10h] [rbp-258h] BYREF
  unsigned __int64 v4; // [rsp+258h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  if ( dword_4658C >= 0 )
    return dword_4658C != 0;
  v2[0] = &v3;
  v2[1] = 576;
  result = ptrace(PTRACE_GETREGSET, a1, 514, v2) == 0;
  dword_4658C = result;
  return result;
}

