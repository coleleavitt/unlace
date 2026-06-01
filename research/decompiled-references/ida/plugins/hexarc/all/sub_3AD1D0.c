__int64 __fastcall sub_3AD1D0(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  __int64 *v6; // rdi
  _QWORD v7[2]; // [rsp+0h] [rbp-38h] BYREF
  char v8; // [rsp+10h] [rbp-28h]
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a3 + 1) & 1) != 0 )
  {
    v8 = 0;
    v7[0] = 0;
    v7[1] = 0;
    copy_tinfo_t();
    v5 = *(_DWORD *)(a1 + 72);
    v6 = *(__int64 **)(a1 + 16);
    v8 = 1;
    sub_3AC5A0(v6, 0, (__int64)v7, 3, (__int64 *)(*(_QWORD *)(a1 + 24) + 12LL * (v5 + 1)));
    clear_tinfo_t();
  }
  return 0;
}

