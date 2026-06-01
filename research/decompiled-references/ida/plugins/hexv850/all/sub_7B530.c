unsigned __int64 __fastcall sub_7B530(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // r12
  __int64 v4; // rbp
  __int64 v5; // rax
  __int128 v6; // rt0
  __int64 v7; // rsi
  __int64 v8; // rax
  __int128 v9; // rt0
  __int64 v11; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v2 = pack_dd();
  sub_7AC60(a1, (__int64)&v11, v2 - (_QWORD)&v11);
  v3 = *(_QWORD **)a2;
  v4 = *(_QWORD *)a2 + 16LL * *(_QWORD *)(a2 + 8);
  if ( v4 != *(_QWORD *)a2 )
  {
    do
    {
      v5 = a1[5] - *v3;
      if ( v5 < 0 )
        v5 = *v3 - a1[5];
      *(_QWORD *)&v6 = *v3 - a1[5];
      *((_QWORD *)&v6 + 1) = v5;
      sub_7AE40(a1, v6 >> 63);
      v7 = v3[1];
      v8 = -v7;
      if ( v7 > 0 )
        v8 = v3[1];
      v3 += 2;
      *(_QWORD *)&v9 = v7;
      *((_QWORD *)&v9 + 1) = v8;
      sub_7AE40(a1, v9 >> 63);
    }
    while ( (_QWORD *)v4 != v3 );
  }
  return v12 - __readfsqword(0x28u);
}

