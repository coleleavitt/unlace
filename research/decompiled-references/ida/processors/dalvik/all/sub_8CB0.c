unsigned __int64 __fastcall sub_8CB0(__int64 a1, __int64 a2, const char *a3)
{
  __int64 v3; // rcx
  void *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  void *v8; // [rsp+0h] [rbp-28h] BYREF
  __int128 v9; // [rsp+8h] [rbp-20h]
  unsigned __int64 v10; // [rsp+18h] [rbp-10h]

  v3 = *(_QWORD *)(a2 + 8);
  v10 = __readfsqword(0x28u);
  v8 = nullptr;
  v9 = 0;
  sub_8BF0((__int64 *)&v8, (__int64)"%s #%lld", a3, v3);
  v4 = &unk_150C8;
  if ( (_QWORD)v9 )
    v4 = v8;
  (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v4, 18);
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree(v8, v4, v5, v6);
  }
  return v10 - __readfsqword(0x28u);
}

