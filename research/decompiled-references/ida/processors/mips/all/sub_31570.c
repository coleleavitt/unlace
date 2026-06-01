__int64 __fastcall sub_31570(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  _QWORD v4[3]; // [rsp+0h] [rbp-18h] BYREF

  v4[1] = __readfsqword(0x28u);
  result = sub_312A0(a1, v4);
  if ( (_BYTE)result )
  {
    v2 = *(_QWORD *)(a1 + 376);
    v3 = v4[0];
    *(_DWORD *)v2 |= 0x200u;
    *(_QWORD *)(v2 + 56) = v3;
  }
  return result;
}

