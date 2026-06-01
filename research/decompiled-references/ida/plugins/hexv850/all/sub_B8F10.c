__int64 __fastcall sub_B8F10(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v5; // rsi
  _BYTE v6[16]; // [rsp+0h] [rbp-88h] BYREF
  _QWORD v7[5]; // [rsp+10h] [rbp-78h] BYREF
  char v8; // [rsp+38h] [rbp-50h]
  __int64 v9; // [rsp+40h] [rbp-48h]
  __int64 v10; // [rsp+48h] [rbp-40h]
  __int64 v11; // [rsp+50h] [rbp-38h]
  __int64 v12; // [rsp+58h] [rbp-30h]
  unsigned __int64 v13; // [rsp+68h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  v7[0] = off_4AFB38;
  v9 = a1;
  v10 = a1 + 64;
  v12 = a3;
  memset(&v7[1], 0, 32);
  v8 = 0;
  v11 = a1 + 16;
  if ( (unsigned int)sub_119DF0(a2, v7, 0, 0) )
    return 0;
  if ( *(_BYTE *)a2 == 4 )
  {
    sub_1570B0(*(_QWORD *)(a2 + 8), *(_QWORD *)(*(_QWORD *)(a1 + 320) + 1504LL), 0, 0, 0, 0, 0);
    v5 = *(_DWORD **)(a2 + 8);
    if ( *v5 == 4 )
    {
      sub_11EE80(v6, v5 + 8);
      sub_117E50(a2, v6);
      sub_1181E0(v6);
    }
  }
  return 1;
}

