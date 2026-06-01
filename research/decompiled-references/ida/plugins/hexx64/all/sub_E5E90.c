__int64 __fastcall sub_E5E90(__int64 a1, double a2)
{
  __int64 *v2; // rbp
  __int64 *v3; // r13
  __int64 *v4; // rsi
  __int64 *v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // r9d
  __int64 v11; // r12
  __int64 (__fastcall *v12)(__int64, _QWORD); // r15
  unsigned int v13; // eax
  __int64 v14; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-40h]

  v2 = *(__int64 **)(a1 + 776);
  v15 = __readfsqword(0x28u);
  v3 = v2 + 16;
  if ( !(unsigned __int8)sub_64880(v2 + 16) )
    return v15 - __readfsqword(0x28u);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 112) + 80LL) == 4 )
  {
    v14 = 20;
    sub_E0AD0(a1, v2, (__int64)&v14, v2 + 16);
    clear_tinfo_t();
  }
  v14 = 21;
  sub_E0AD0(a1, v2 + 2, (__int64)&v14, v2 + 16);
  clear_tinfo_t();
  v14 = 9;
  sub_E0AD0(a1, v2 + 4, (__int64)&v14, v2 + 16);
  clear_tinfo_t();
  v14 = 25;
  sub_E0AD0(a1, v2 + 6, (__int64)&v14, v2 + 16);
  clear_tinfo_t();
  v14 = 41;
  sub_E0AD0(a1, v2 + 8, (__int64)&v14, nullptr);
  clear_tinfo_t();
  if ( !sub_647F0((__int64)(v2 + 8), (__int64)(v2 + 6)) )
    v2[9] = 0;
  if ( !*(_BYTE *)(a1 + 148) )
  {
    sub_E0AD0(a1, v2 + 10, a1 + 312, nullptr);
    v11 = *(_QWORD *)(a1 + 112);
    v12 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 32LL);
    v13 = sub_64960(v2 + 10, 0);
    LODWORD(v11) = v12(v11, v13);
    if ( (_DWORD)v11 != (unsigned int)sub_64B20((__int64)(v2 + 10)) )
      v2[11] = 0;
  }
  v2[13] = 0;
  v4 = v2 + 12;
  if ( *(_BYTE *)(a1 + 148) == 2 )
  {
    sub_D1130(a1, v4);
    v4 = v2 + 12;
  }
  v5 = v2 + 14;
  sub_648D0(v5, (const void **)v4, a2);
  return sub_64640(v5, v3, v6, v7, v8, v9);
}

