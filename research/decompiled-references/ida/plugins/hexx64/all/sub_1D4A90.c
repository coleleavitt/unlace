unsigned __int64 __fastcall sub_1D4A90(__int64 a1, int a2, int a3, __int64 a4, double a5)
{
  unsigned int v6; // ebx
  __int64 v9; // rdx
  const __m128i *v10; // rdi
  _QWORD v12[5]; // [rsp+0h] [rbp-68h] BYREF
  char v13; // [rsp+28h] [rbp-40h]
  __int64 v14; // [rsp+30h] [rbp-38h]
  unsigned __int64 v15; // [rsp+38h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  v13 = 0;
  memset(&v12[1], 0, 32);
  v12[0] = &off_4DEA48;
  v14 = a4;
  if ( a2 < a3 )
  {
    v6 = a2;
    do
    {
      if ( v6 >= *(_DWORD *)(a1 + 64) )
      {
        if ( !under_debugger )
          sub_383060(0xCDEFu, a5);
        BUG();
      }
      v9 = v6++;
      v10 = *(const __m128i **)(*(_QWORD *)(a1 + 528) + 8 * v9);
      v10[20].m128i_i64[1] += a4;
      v10[32].m128i_i64[1] += a4;
      sub_11F5B0(v10, (__int64)v12);
    }
    while ( a3 != v6 );
  }
  sub_139B20(a1, a5);
  return v15 - __readfsqword(0x28u);
}

