unsigned __int64 __fastcall sub_15E20(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r13d
  __int64 *v4; // r9
  __int64 v6; // [rsp+0h] [rbp-B8h] BYREF
  unsigned __int64 v7; // [rsp+88h] [rbp-30h]

  v3 = 32;
  v7 = __readfsqword(0x28u);
  if ( a3 < 0 )
    v3 = 45;
  btoa64();
  v4 = qword_1AF48;
  if ( *(_QWORD *)(a2 + 24) )
    v4 = *(__int64 **)(a2 + 16);
  sub_142D0(a1, (__int64)&byte_1AA97, ".asg", v3, &v6, v4);
  return v7 - __readfsqword(0x28u);
}

