__int64 __fastcall sub_BDAD0(__int64 a1, __int64 a2, __int64 a3, __m128i a4)
{
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // [rsp-8h] [rbp-90h]
  char v9[16]; // [rsp+0h] [rbp-88h] BYREF
  _QWORD v10[5]; // [rsp+10h] [rbp-78h] BYREF
  char v11; // [rsp+38h] [rbp-50h]
  __int64 v12; // [rsp+40h] [rbp-48h]
  __int64 v13; // [rsp+48h] [rbp-40h]
  __int64 v14; // [rsp+50h] [rbp-38h]
  __int64 v15; // [rsp+58h] [rbp-30h]
  unsigned __int64 v16; // [rsp+68h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  v10[0] = &off_4DC158;
  v12 = a1;
  v13 = a1 + 64;
  v15 = a3;
  memset(&v10[1], 0, 32);
  v11 = 0;
  v14 = a1 + 16;
  if ( (unsigned int)sub_11E9B0(a2, (__int64)v10, 0, 0) )
    return 0;
  if ( *(_BYTE *)a2 == 4 )
  {
    sub_15BC70(
      *(unsigned int **)(a2 + 8),
      *(unsigned __int64 **)(*(_QWORD *)(a1 + 320) + 1504LL),
      0,
      0,
      nullptr,
      nullptr,
      a4,
      0);
    v7 = *(_QWORD *)(a2 + 8);
    if ( *(_DWORD *)v7 == 4 )
    {
      sub_123A40((__int64)v9, (unsigned __int8 *)(v7 + 32), v8, v6);
      sub_11CA10((char *)a2, v9);
      sub_11CDA0((__int64)v9);
    }
  }
  return 1;
}

