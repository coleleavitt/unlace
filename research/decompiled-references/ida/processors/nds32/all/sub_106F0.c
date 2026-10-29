__int64 __fastcall sub_106F0(__int64 a1, int a2)
{
  void *v2; // rbp
  void *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  void *v7; // [rsp+0h] [rbp-38h] BYREF
  __int128 v8; // [rsp+8h] [rbp-30h]
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v2 = off_2A478[a2];
  if ( (*(_BYTE *)(get_module_data((unsigned int)dword_2A524) + 168) & 2) != 0 )
    return (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v2, 33);
  v7 = nullptr;
  v8 = 0;
  sub_DC30((__int64 *)&v7, (__int64)&unk_1FD50, v2);
  v4 = &unk_21435;
  if ( (_QWORD)v8 )
    v4 = v7;
  (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v4, 33);
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree(v7, v4, v5, v6);
  }
  return v9 - __readfsqword(0x28u);
}

