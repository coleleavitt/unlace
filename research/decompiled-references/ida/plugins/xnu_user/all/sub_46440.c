unsigned __int64 __fastcall sub_46440(__int64 a1, __int64 a2, __int64 a3, __int64 (*a4)())
{
  bool v4; // zf
  __int64 v6; // rax
  __int64 v7; // rax
  __m128i v8; // [rsp+0h] [rbp-38h] BYREF
  int v9[2]; // [rsp+10h] [rbp-28h]
  int v10[2]; // [rsp+18h] [rbp-20h]
  __int64 v11; // [rsp+28h] [rbp-10h]

  v4 = *(_DWORD *)(a1 + 176) == 12;
  v11 = __readfsqword(0x28u);
  if ( v4 )
  {
    v6 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)v9 = a1;
    v8.m128i_i64[1] = v6;
    v8.m128i_i64[0] = (__int64)off_97F18;
    *(_QWORD *)v10 = a1 + 296;
    sub_32130(a1, &v8, (__int64 (*)())off_97F18, a4);
    if ( *(_QWORD *)(a1 + 304) )
      goto LABEL_3;
  }
  else
  {
    sub_352A0(a1);
    if ( *(_QWORD *)(a1 + 304) )
      goto LABEL_3;
  }
  if ( (unsigned __int8)qgetenv()
    || (v7 = *(_QWORD *)(a1 + 8),
        *(_QWORD *)v9 = a1,
        v8.m128i_i64[1] = v7,
        v8.m128i_i64[0] = (__int64)&off_97F00,
        *(_QWORD *)v10 = a1 + 296,
        (unsigned int)sub_45920(a1, &v8))
    || !*(_QWORD *)(a1 + 304) )
  {
    sub_3B800((_QWORD *)a1);
  }
LABEL_3:
  *(_BYTE *)(a1 + 441) = 1;
  return v11 - __readfsqword(0x28u);
}

