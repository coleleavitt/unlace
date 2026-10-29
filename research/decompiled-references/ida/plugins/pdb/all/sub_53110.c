__int64 __fastcall sub_53110(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdi
  unsigned int v3; // eax
  unsigned int v4; // ebp
  __int64 v5; // r12
  _QWORD v7[7]; // [rsp+0h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v7[1] = __readfsqword(0x28u);
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v2 + 120LL))(v2, v7);
  if ( !a2 )
    return 1;
  v4 = v3;
  v5 = v7[0];
  if ( (*(unsigned int (__fastcall **)(_QWORD *))(*a2 + 272LL))(a2) == 2 )
  {
    if ( v4 )
      v5 = 0;
    a2[2] = v5;
    return v4;
  }
  sub_530F0();
  return sub_531B0();
}

