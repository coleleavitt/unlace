__int64 __fastcall sub_55710(_QWORD *a1, __int64 a2, _DWORD *a3, char a4)
{
  __int64 result; // rax
  _QWORD v5[3]; // [rsp+0h] [rbp-18h] BYREF

  v5[1] = __readfsqword(0x28u);
  result = sub_554E0(v5, a2, a3, a4);
  if ( (_BYTE)result )
    *a1 = v5[0];
  return result;
}
