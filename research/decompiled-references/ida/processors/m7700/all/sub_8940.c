unsigned __int64 __fastcall sub_8940(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v5; // [rsp+0h] [rbp-38h] BYREF
  __int128 v6; // [rsp+8h] [rbp-30h]
  unsigned __int64 v7; // [rsp+18h] [rbp-20h]

  v2 = *(_QWORD *)a1;
  v7 = __readfsqword(0x28u);
  (*(void (__fastcall **)(__int64, __int64 *))(v2 + 328))(a1, a2);
  v3 = *a2;
  v5 = 0;
  v6 = 0;
  if ( (unsigned __int8)sub_78D0(&v5, v3) )
  {
    sub_64E0(a1, 0xFFFF, (__int64)&word_C2EE, v5);
    sub_64E0(a1, 0, (__int64)byte_C2FB, v5);
    *(_DWORD *)(a1 + 144) |= 0x2000u;
  }
  if ( v5 )
  {
    *(_QWORD *)&v6 = 0;
    qfree();
  }
  return v7 - __readfsqword(0x28u);
}

