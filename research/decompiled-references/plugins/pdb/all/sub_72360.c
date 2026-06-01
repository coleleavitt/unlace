__int64 __fastcall sub_72360(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  unsigned int (*v4)(void); // rax
  unsigned int v5; // esi
  __int64 result; // rax
  _QWORD v7[5]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *(_QWORD **)a1;
  v7[1] = __readfsqword(0x28u);
  v4 = (unsigned int (*)(void))v2[37];
  if ( (char *)v4 == (char *)sub_630B0 )
  {
    v5 = *(_DWORD *)(a1 + 88);
    if ( v5 > 0xFFF && sub_5F700((_QWORD *)(*(_QWORD *)(a1 + 8) + 168LL), v5) )
      return 1;
  }
  else if ( v4() > 0xFFF )
  {
    return 1;
  }
  result = sub_722A0((_QWORD **)a1, v7);
  if ( !(_DWORD)result )
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v7[0] + 8LL))(v7[0], a2);
  return result;
}
