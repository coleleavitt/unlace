__int64 __fastcall sub_1E22F0(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  unsigned int v6; // ebx
  int v8; // [rsp+Ch] [rbp-6Ch] BYREF
  __int64 v9; // [rsp+10h] [rbp-68h] BYREF
  char v10; // [rsp+18h] [rbp-60h]
  _DWORD v11[2]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v12; // [rsp+28h] [rbp-50h]
  __int64 v13; // [rsp+38h] [rbp-40h]
  unsigned __int64 v14; // [rsp+48h] [rbp-30h]

  v4 = *a1;
  v14 = __readfsqword(0x28u);
  v9 = 0;
  v5 = *(_QWORD *)(v4 + 1504);
  v10 = 0;
  v6 = sub_1DFF30((__int64)&v9, v5, &v8, a3);
  if ( (_BYTE)v6 )
  {
    v12 = 0;
    v11[0] = 0;
    v11[1] = v8;
    v13 = 0;
    v6 = sub_1E0180((__int64)a1, (__m128i *)v11, (__int64)&v9, 0);
    if ( (_BYTE)v6 )
    {
      if ( (v11[0] & 0xF) == 2 )
        *a2 = sub_312AD0((__int64)v11);
      else
        v6 = 0;
    }
    sub_312B80((__int64)v11);
  }
  return v6;
}

