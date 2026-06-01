__int64 __fastcall sub_97960(__int64 a1)
{
  __int64 v1; // rax
  char *v3; // r8
  __int64 v4[3]; // [rsp+0h] [rbp-18h] BYREF

  v4[1] = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 213) & 1) == 0 )
  {
    v1 = *(_QWORD *)a1;
    v4[0] = 0;
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, __int64 *))(*(_QWORD *)(a1 + 256) + 168LL))(
           *(_QWORD *)(v1 + 24),
           a1 + 120,
           v4) )
    {
      v3 = sub_81C40(a1);
      sub_95A30(v4[0], (__int64)"die.cpp", 165, (__int64)"Cannot retrieve bit_size for DIE %s", v3);
    }
    *(_DWORD *)(a1 + 212) |= 0x100u;
  }
  return *(_QWORD *)(a1 + 120);
}

