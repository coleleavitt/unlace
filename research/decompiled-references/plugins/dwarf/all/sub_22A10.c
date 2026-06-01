__int64 __fastcall sub_22A10(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r12d
  __int64 v4; // rax
  __int64 v6; // [rsp+0h] [rbp-38h] BYREF
  __int128 v7; // [rsp+8h] [rbp-30h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v6 = 0;
  v7 = 0;
  sub_228A0(a3, &v6);
  netnode_check(a1 + 3, *a1, 0, 1);
  v4 = netnode_qhashstr(a1[3], 0, v6, 72);
  LOBYTE(v3) = v4 != -1;
  if ( a2 && v4 != -1 )
    netnode_qhashstr(a1[3], a2, v6, 72);
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree(v6);
  }
  return v3;
}
