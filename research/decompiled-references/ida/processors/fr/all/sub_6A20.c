unsigned __int64 __fastcall sub_6A20(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v5; // rbp
  __int64 v6; // [rsp+0h] [rbp-38h] BYREF
  __int128 v7; // [rsp+8h] [rbp-30h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v2 = *(_QWORD *)a1;
  v8 = __readfsqword(0x28u);
  (*(void (__fastcall **)(__int64, __int64 *))(v2 + 328))(a1, a2);
  v3 = *a2;
  v6 = 0;
  v7 = 0;
  if ( (unsigned __int8)sub_5CF0(&v6, v3) )
  {
    v5 = v6;
    sub_4DB0(a1, 0xFFFF, (__int64)&dword_A6BC, v6);
    sub_4DB0(a1, 0, (__int64)&dword_A6D4, v5);
    *(_DWORD *)(a1 + 144) |= 0x2000u;
  }
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree();
  }
  return v8 - __readfsqword(0x28u);
}

