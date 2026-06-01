__int64 __fastcall sub_12D480(const __m128i *a1, __int64 a2, int *a3, __int64 a4, unsigned int *a5)
{
  unsigned int v5; // r15d
  __int64 v7; // rax
  __int64 v11; // r15
  unsigned int v12; // eax
  _BYTE v13[8]; // [rsp+10h] [rbp-90h] BYREF
  __int128 v14; // [rsp+18h] [rbp-88h]
  _QWORD v15[2]; // [rsp+30h] [rbp-70h] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp-60h] BYREF
  _QWORD v17[10]; // [rsp+50h] [rbp-50h] BYREF

  v5 = 0;
  v17[3] = __readfsqword(0x28u);
  if ( a3[17] < (int)a5[17] )
  {
    v7 = a1[30].m128i_i64[0];
    v15[1] = 0;
    v11 = *(_QWORD *)(v7 + 112);
    v16[1] = 0;
    v15[0] = 0xFFFFFFFF00000000LL;
    v16[0] = 0xFFFFFFFF00000000LL;
    v17[0] = 0xFFFFFFFF00000000LL;
    v17[1] = 0;
    v14 = 0;
    sub_1207E0((__int64)v13, (__int64)a5);
    if ( !(unsigned __int8)sub_126B30((__int64)v13, v11, 10, a3[17], 1)
      || (LOBYTE(v12) = sub_12BA60(v11, a1, a2, a3, a4, v13, 0), v5 = v12, !(_BYTE)v12) )
    {
      v5 = sub_12CDB0(a1, a2, a3, a4, a5, 1, 1);
    }
    sub_1181E0((__int64)v17);
    sub_1181E0((__int64)v16);
    sub_1181E0((__int64)v15);
  }
  return v5;
}

