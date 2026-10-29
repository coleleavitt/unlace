__int64 __fastcall sub_1E0AD0(__int64 a1, __int64 a2, __int64 *a3, double a4)
{
  __int64 v5; // rax
  int v7; // r15d
  unsigned __int64 v8; // rdx
  __int64 v9; // rdx
  unsigned __int64 v10; // [rsp+8h] [rbp-90h]
  int v11; // [rsp+14h] [rbp-84h] BYREF
  __int64 v12; // [rsp+18h] [rbp-80h] BYREF
  __int64 v13; // [rsp+20h] [rbp-78h] BYREF
  char v14; // [rsp+28h] [rbp-70h]
  _DWORD v15[2]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v16; // [rsp+38h] [rbp-60h]
  __int64 v17; // [rsp+48h] [rbp-50h]
  unsigned __int64 v18; // [rsp+58h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 4) & 0x10) != 0 )
    return 0;
  if ( *(_DWORD *)a2 == 42 )
  {
    sub_313200(a1, 0, 0);
  }
  else
  {
    if ( (unsigned int)(*(_DWORD *)a2 - 43) > 9 )
    {
      if ( !under_debugger )
        sub_383060(0xCA97u, a4);
      BUG();
    }
    if ( *(_BYTE *)(a2 + 48) == 2 )
    {
      v8 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 16LL), *(_DWORD *)(a2 + 52), 0);
    }
    else
    {
      v13 = 0;
      v5 = *a3;
      v14 = 0;
      if ( !(unsigned __int8)sub_1DFF30((__int64)&v13, *(_QWORD *)(v5 + 1504), &v11, a2 + 48) )
        return 0;
      v7 = v11;
      v16 = 0;
      v15[0] = 0;
      v15[1] = v11;
      v17 = 0;
      if ( !(unsigned __int8)sub_1E0180((__int64)a3, (__m128i *)v15, (__int64)&v13, 0)
        || !(unsigned __int8)sub_312AF0((__int64)v15, &v12) )
      {
        sub_312B80((__int64)v15);
        return 0;
      }
      v9 = -1;
      if ( v7 != 8 )
        v9 = (1LL << (8 * (unsigned __int8)v7)) - 1;
      v10 = v12 & v9;
      sub_312B80((__int64)v15);
      v8 = v10;
    }
    sub_313200(a1, *(_DWORD *)a2 - 43, v8);
  }
  return 1;
}

