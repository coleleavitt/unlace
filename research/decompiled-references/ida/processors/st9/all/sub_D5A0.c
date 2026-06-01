unsigned __int64 __fastcall sub_D5A0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rsi
  __int64 v4; // rbp
  __int64 ash; // rax
  __int64 v6; // [rsp+0h] [rbp-38h] BYREF
  __int128 v7; // [rsp+8h] [rbp-30h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v2 = *a2;
  v8 = __readfsqword(0x28u);
  v6 = 0;
  v7 = 0;
  if ( (unsigned __int8)sub_C660(&v6, v2) )
  {
    v4 = v6;
    ash = get_ash();
    sub_ADB0(a1, 0xFFFF, (__int64)&byte_114BF, *(_QWORD *)(ash + 48), v4);
  }
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree();
  }
  return v8 - __readfsqword(0x28u);
}

