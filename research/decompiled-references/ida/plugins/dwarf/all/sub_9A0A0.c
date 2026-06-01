__int64 __fastcall sub_9A0A0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rax
  __int64 v3; // rbp
  char *v4; // r8
  __int64 v5; // [rsp+8h] [rbp-30h] BYREF
  __int64 v6[5]; // [rsp+10h] [rbp-28h] BYREF

  v6[1] = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 213) & 8) != 0 )
    return *(_QWORD *)(a1 + 128);
  v2 = *(_QWORD *)a1;
  v6[0] = 0;
  if ( (*(unsigned int (__fastcall **)(_QWORD, __int64 *, __int64 *))(*(_QWORD *)(a1 + 256) + 144LL))(
         *(_QWORD *)(v2 + 24),
         &v5,
         v6) )
  {
    v4 = sub_81C40(a1);
    sub_95A30(v6[0], (__int64)"die.cpp", 200, (__int64)"Cannot retrieve _lowpc for DIE %s", v4);
  }
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  result = *(_QWORD *)(v3 + 176) + sub_99D50((__int64 *)a1, v5) - *(_QWORD *)(v3 + 184);
  *(_QWORD *)(a1 + 128) = result;
  *(_DWORD *)(a1 + 212) |= 0x800u;
  return result;
}

