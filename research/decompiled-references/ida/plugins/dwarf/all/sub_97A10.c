__int64 __fastcall sub_97A10(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax
  char *v3; // r8
  __int64 v4[3]; // [rsp+0h] [rbp-18h] BYREF

  v4[1] = __readfsqword(0x28u);
  if ( *(char *)(a1 + 212) >= 0 )
  {
    v1 = *(_QWORD *)a1;
    v4[0] = 0;
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, __int64 *))(*(_QWORD *)(a1 + 256) + 160LL))(
           *(_QWORD *)(v1 + 24),
           a1 + 112,
           v4) )
    {
      v3 = sub_81C40(a1);
      sub_95A30(v4[0], (__int64)"die.cpp", 151, (__int64)"Cannot retrieve byte_size for DIE %s", v3);
    }
    *(_DWORD *)(a1 + 212) |= 0x80u;
  }
  result = *(_QWORD *)(a1 + 112);
  if ( result == 0xFFFFFFFFLL )
  {
    *(_QWORD *)(a1 + 112) = -1;
    return -1;
  }
  return result;
}

