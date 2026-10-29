__int64 __fastcall sub_97BF0(__int64 a1)
{
  __int64 v1; // rax
  char *v3; // r8
  __int64 v4[3]; // [rsp+0h] [rbp-18h] BYREF

  v4[1] = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 212) & 1) == 0 )
  {
    v1 = *(_QWORD *)a1;
    v4[0] = 0;
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, __int64 *))(*(_QWORD *)(a1 + 256) + 56LL))(
           *(_QWORD *)(v1 + 24),
           a1 + 8,
           v4) )
    {
      v3 = sub_81C40(a1);
      sub_95A30(v4[0], (__int64)"die.cpp", 139, (__int64)"Cannot retrieve tag for DIE %s", v3);
    }
    *(_DWORD *)(a1 + 212) |= 1u;
  }
  return *(unsigned __int16 *)(a1 + 8);
}

