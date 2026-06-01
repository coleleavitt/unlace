__int64 __fastcall sub_51D90(__int64 a1, __int64 **a2, double a3, double a4, double a5)
{
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 v9; // [rsp+0h] [rbp-28h] BYREF
  _QWORD v10[4]; // [rsp+8h] [rbp-20h] BYREF

  v6 = *(_QWORD *)(a1 + 16);
  v7 = *(_QWORD *)(a1 + 8);
  v10[2] = __readfsqword(0x28u);
  v9 = 1;
  v10[0] = 0;
  v10[1] = 0;
  if ( (unsigned __int8)sub_4E7E0(v6, (__int64)&v9, nullptr, a2, v7, nullptr, a3, a4, a5) )
    ++*(_DWORD *)(a1 + 24);
  clear_tinfo_t(v10);
  return 0;
}

