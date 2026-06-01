unsigned __int64 __fastcall sub_39E20(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  const char *v3; // r9
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  const char *v8; // [rsp+0h] [rbp-38h] BYREF
  __int128 v9; // [rsp+8h] [rbp-30h]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v2 = getinf(16);
  v9 = 0;
  v8 = nullptr;
  get_ea_name(&v8, v2, 3, 0);
  v3 = byte_51ACD;
  if ( (_QWORD)v9 )
    v3 = v8;
  v4 = *(_QWORD *)(a1 + 24);
  v5 = *(_QWORD *)(v4 + 40);
  v6 = *(_QWORD *)(v4 + 48);
  if ( v5 )
    sub_37E50(a2, 0xFFFF, (__int64)&unk_50791, v5, v6, v3);
  else
    sub_37E50(a2, 0xFFFF, (__int64)&unk_50783, v6, v3);
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree(v8);
  }
  return v10 - __readfsqword(0x28u);
}

