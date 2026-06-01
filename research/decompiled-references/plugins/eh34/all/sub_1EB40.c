__int64 __fastcall sub_1EB40(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // r12
  __int64 v5; // r14
  __int64 v6; // [rsp+0h] [rbp-50h] BYREF
  __int64 v7; // [rsp+8h] [rbp-48h] BYREF
  __int128 v8; // [rsp+10h] [rbp-40h]
  unsigned __int64 v9; // [rsp+20h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  *(_OWORD *)a1 = -1;
  *(_QWORD *)(a1 + 16) = -1;
  v7 = 0;
  v8 = 0;
  v2 = sub_1DD10();
  if ( netnode_qgetblob(v2, &v7, 1, a2, 357) > 0 )
  {
    v6 = v7;
    v4 = v8 + v7;
    v5 = a2 + 1 - unpack_dq(&v6, v8 + v7);
    *(_QWORD *)a1 = v5;
    *(_QWORD *)(a1 + 8) = v5 + (unsigned int)unpack_dd(&v6, v4);
    *(_QWORD *)(a1 + 16) = a2 + unpack_dq(&v6, v4) - 1;
  }
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree(v7);
  }
  return a1;
}
