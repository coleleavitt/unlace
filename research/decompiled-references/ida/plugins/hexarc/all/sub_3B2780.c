__int64 __fastcall sub_3B2780(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  _QWORD v4[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v5; // [rsp+10h] [rbp-28h]
  __int128 v6; // [rsp+18h] [rbp-20h]
  unsigned __int64 v7; // [rsp+28h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 16);
  v6 = 0;
  v4[0] = 0;
  v4[1] = -1;
  v2 = *(_QWORD *)(v1 + 112);
  v5 = 0;
  sub_37BB50(v2, (__int64)v4, 0);
  if ( v5 )
  {
    *(_QWORD *)&v6 = 0;
    qfree();
  }
  return 1;
}

