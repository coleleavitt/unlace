__int64 __fastcall sub_25CD0(__int64 a1, int a2, _QWORD *a3)
{
  bool v3; // zf
  __int64 result; // rax
  _QWORD v6[3]; // [rsp+0h] [rbp-18h] BYREF

  v3 = *(_BYTE *)(a1 + 1187) == 0;
  v6[1] = __readfsqword(0x28u);
  if ( !v3 || *(_BYTE *)(a1 + 1186) )
  {
    *a3 = 16LL * a2;
    return 1;
  }
  result = sub_25BD0(a1 + 1208, a2, v6);
  if ( (_DWORD)result )
    return 0;
  if ( LODWORD(v6[0]) )
  {
    *a3 = HIDWORD(v6[0]);
    return 1;
  }
  return result;
}

