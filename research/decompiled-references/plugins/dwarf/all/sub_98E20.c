char __fastcall sub_98E20(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  char *v8; // rax
  __int64 v9; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v10[5]; // [rsp+10h] [rbp-28h] BYREF

  v2 = *a1;
  v10[1] = __readfsqword(0x28u);
  if ( v2 == -1 || (v2 & 0x7FFFFFFFFFFFFFFFLL) == 0 )
    return 0;
  v5 = a1[1];
  if ( *(_QWORD *)(v5 + 344) )
  {
    if ( !rangeset_t_find_range(v5 + 336) )
      return 0;
    v5 = a1[1];
  }
  v6 = *a2;
  v10[0] = 0;
  *(_QWORD *)(v6 + 16) = v5;
  v7 = *(_QWORD *)(v5 + 88);
  a2[32] = v7;
  if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, unsigned __int64, __int64 *, _QWORD *))(v7 + 40))(
         *(_QWORD *)(a1[1] + 160),
         *a1 & 0x7FFFFFFFFFFFFFFFLL,
         (unsigned __int64)*a1 >> 63,
         &v9,
         v10) )
  {
    v8 = sub_81860(a1, nullptr, 0);
    sub_1D740((__int64)"Failed to retrieve DIE at offset %s.\n", v8);
    return 0;
  }
  *(_QWORD *)(*a2 + 24) = v9;
  a2[31] = 0;
  *((_DWORD *)a2 + 53) = 0;
  a2[28] = 0x8000000000000000LL;
  a2[29] = 0;
  *((_DWORD *)a2 + 60) = -1;
  return sub_98B70(a2);
}
