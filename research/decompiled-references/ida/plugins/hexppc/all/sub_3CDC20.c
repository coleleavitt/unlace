__int64 __fastcall sub_3CDC20(double a1, __int64 a2, __int64 a3, _DWORD *a4, __int64 a5, const __m128i *a6)
{
  __int64 v6; // r13
  __int64 v9; // rax
  _BYTE v11[32]; // [rsp+0h] [rbp-88h] BYREF
  _QWORD v12[2]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v13[2]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v14[9]; // [rsp+40h] [rbp-48h] BYREF

  v6 = (__int64)&a6[1].m128i_i64[1];
  v14[3] = __readfsqword(0x28u);
  sub_121960((__int64)&a6[1].m128i_i64[1], (__int64)a4);
  v9 = sub_3CAE00(a3, (__int64)a6, a4);
  if ( v9 )
  {
    if ( !(unsigned __int8)sub_1343C0(a3, v9, 9u) )
    {
      if ( !under_debugger )
        sub_37EEE0(0xCEEFu, a1);
      BUG();
    }
  }
  else
  {
    a6[6].m128i_i32[2] = 0;
    v12[1] = 0;
    v12[0] = 0xFFFFFFFF00000000LL;
    v13[0] = 0xFFFFFFFF00000000LL;
    v13[1] = 0;
    v14[0] = 0xFFFFFFFF00000000LL;
    v14[1] = 0;
    sub_32C520((__int64)v11, -1);
    sub_121960(v6, (__int64)v11);
    sub_119360((__int64)v14);
    sub_119360((__int64)v13);
    sub_119360((__int64)v12);
    sub_133E00(a3, a6, 9u);
  }
  return 1;
}

