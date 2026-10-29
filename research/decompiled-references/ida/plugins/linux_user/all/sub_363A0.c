__int64 __fastcall sub_363A0(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // rax
  bool v3; // cc
  unsigned __int64 v4; // rdx
  __int64 result; // rax

  v2 = sub_2FA60(a1, a2);
  v3 = v2 <= 0x80;
  v4 = v2 - 128;
  result = -1;
  if ( !v3 )
    return v4;
  return result;
}

