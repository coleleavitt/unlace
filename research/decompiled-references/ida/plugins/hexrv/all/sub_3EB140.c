unsigned __int64 __fastcall sub_3EB140(__int64 a1, int a2, unsigned __int16 a3, unsigned __int8 a4, double a5)
{
  int v5; // ebp
  __int64 v7; // rsi
  int v8; // eax
  int v10; // edx
  __int64 v11; // r8
  __int64 v12; // rdx
  int v13; // r13d
  int v14; // ecx
  _QWORD v15[2]; // [rsp+0h] [rbp-58h] BYREF
  _DWORD v16[6]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-30h]

  v5 = a3;
  v17 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a1 + 832);
  if ( (*(_BYTE *)(a1 + 844) & 1) != 0 )
  {
    v8 = *(_DWORD *)(v7 + 692);
    if ( v8 > a3 )
    {
      v11 = *(_QWORD *)(a1 + 40);
      v15[1] = 0;
      v12 = -1;
      v13 = v8 - v5;
      v14 = 8 * (v8 - v5);
      v15[0] = 0xFFFFFFFF00000000LL;
      if ( (unsigned __int64)v14 <= 0x3F )
        v12 = (1LL << v14) - 1;
      sub_11C550((__int64)v15, v7, v12, v13, v11, 0);
      v16[2] = a2 + v5;
      v16[0] = 1;
      v16[1] = v13;
      sub_1D1DD0(a1, 4, (unsigned __int8 *)v15, nullptr, (unsigned __int8 *)v16);
      sub_1188E0((__int64)v16);
      sub_1188E0((__int64)v15);
    }
    return v17 - __readfsqword(0x28u);
  }
  v10 = *(_DWORD *)(v7 + 80);
  if ( v10 <= v5 )
    return v17 - __readfsqword(0x28u);
  return sub_3EA150(a1, v5, v10, a2, a2, a4, a5);
}

