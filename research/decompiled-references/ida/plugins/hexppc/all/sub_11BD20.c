__int64 __fastcall sub_11BD20(_BYTE *a1, _QWORD *a2)
{
  __int64 result; // rax
  _QWORD v3[5]; // [rsp+0h] [rbp-58h] BYREF
  char v4; // [rsp+28h] [rbp-30h]
  _QWORD *v5; // [rsp+30h] [rbp-28h]
  unsigned __int64 v6; // [rsp+38h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  a2[4] = a1;
  result = (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 16LL))(a2);
  if ( !(_DWORD)result )
  {
    memset(&v3[1], 0, 32);
    v4 = 0;
    v3[0] = off_4CA838;
    v5 = a2;
    return sub_11AEC0(a1, (__int64)v3);
  }
  return result;
}

