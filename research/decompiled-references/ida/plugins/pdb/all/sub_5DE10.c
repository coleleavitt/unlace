__int64 __fastcall sub_5DE10(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  __int64 v4; // [rsp+8h] [rbp-20h] BYREF
  _QWORD v5[3]; // [rsp+10h] [rbp-18h] BYREF

  v2 = *a1;
  v5[1] = __readfsqword(0x28u);
  result = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v2 + 248))(a1, &v4);
  if ( !(_DWORD)result )
  {
    result = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v4 + 112LL))(v4, v5);
    if ( !(_DWORD)result )
      *a2 = v5[0];
  }
  return result;
}

