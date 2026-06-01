unsigned __int64 __fastcall sub_14C40(__int64 a1, __int64 a2, __int64 a3)
{
  const char *v4; // rcx
  __int64 v6; // r13
  __int64 v7; // r13
  const char *v8; // [rsp+0h] [rbp-D8h] BYREF
  __int128 v9; // [rsp+8h] [rbp-D0h]
  _BYTE v10[136]; // [rsp+20h] [rbp-B8h] BYREF
  unsigned __int64 v11; // [rsp+A8h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v9 = 0;
  v8 = nullptr;
  get_segm_name(&v8, a3, 1);
  v4 = needle;
  if ( (_QWORD)v9 )
    v4 = v8;
  sub_13840(a2, 0, (__int64)&unk_1B070, v4);
  if ( (getinf(44) & 0x100) != 0 )
  {
    v6 = *(_QWORD *)(a2 + 16);
    v7 = v6 - get_segm_base(a3);
    if ( v7 )
    {
      btoa64(v10, 136, v7, 0);
      sub_13840(a2, 0, (__int64)&unk_1B080, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL), v10);
    }
  }
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree(v8);
  }
  return v11 - __readfsqword(0x28u);
}

