__int64 __fastcall sub_26CB0(__int64 a1, __int64 a2, char a3)
{
  int v3; // edx
  __int64 result; // rax
  _BYTE _0[264]; // [rsp+0h] [rbp+0h] BYREF
  unsigned __int64 vars108; // [rsp+108h] [rbp+108h]

  vars108 = __readfsqword(0x28u);
  if ( a3 )
  {
    qsnprintf();
    _0[2] = 101;
    v3 = 7;
  }
  else
  {
    qsnprintf();
    v3 = 8;
  }
  result = sub_266F0(a1, (__int64)_0, v3);
  if ( !(_DWORD)result )
    return sub_2B380(a1 + 16, *(_QWORD *)(a1 + 72));
  return result;
}

