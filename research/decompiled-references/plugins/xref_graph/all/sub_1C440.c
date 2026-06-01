__int64 __fastcall sub_1C440(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 *v4; // [rsp+8h] [rbp-20h] BYREF
  __int64 v5; // [rsp+10h] [rbp-18h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 16);
  v6 = __readfsqword(0x28u);
  v5 = a2;
  v4 = &v5;
  sub_1C1A0((int **)(v2 + 1736), &v4);
  if ( a2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
  else
    return v6 - __readfsqword(0x28u);
}
