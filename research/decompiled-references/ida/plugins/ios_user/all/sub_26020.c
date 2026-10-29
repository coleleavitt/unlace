unsigned __int64 __fastcall sub_26020(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 (*v3)(); // rax
  _QWORD v5[6]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v6; // [rsp+30h] [rbp-48h]
  __int128 v7; // [rsp+38h] [rbp-40h]
  __int128 v8; // [rsp+48h] [rbp-30h]
  unsigned __int64 v9; // [rsp+58h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v2 = *a1;
  v7 = 0;
  v5[1] = 4;
  v3 = *(__int64 (**)())(v2 + 840);
  v5[0] = off_8C300;
  memset(&v5[2], 0, 32);
  v6 = 0;
  v8 = 0;
  if ( v3 != sub_25140 )
  {
    ((void (__fastcall *)(__int64 *, _QWORD *, __int64))v3)(a1, v5, a2);
    v5[0] = off_8B7D0;
    if ( v6 )
    {
      *(_QWORD *)&v7 = 0;
      qfree();
    }
  }
  return v9 - __readfsqword(0x28u);
}

