unsigned __int64 __fastcall sub_1A2850(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v6; // rax
  __m128i v7; // xmm1
  __int64 v8; // rdi
  __m128i v10; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v11; // [rsp+10h] [rbp-C8h] BYREF
  int v12; // [rsp+18h] [rbp-C0h]
  __m128i v13; // [rsp+20h] [rbp-B8h]
  __int64 v14; // [rsp+30h] [rbp-A8h]
  int v15; // [rsp+38h] [rbp-A0h]
  __int64 (__fastcall **v16)(); // [rsp+40h] [rbp-98h]
  __int64 v17; // [rsp+48h] [rbp-90h]
  int v18; // [rsp+50h] [rbp-88h]
  __int128 v19; // [rsp+58h] [rbp-80h]
  __int64 v20; // [rsp+68h] [rbp-70h]
  __int64 v21; // [rsp+70h] [rbp-68h]
  __int128 v22; // [rsp+78h] [rbp-60h]
  __int64 v23; // [rsp+88h] [rbp-50h]
  unsigned __int64 v24; // [rsp+98h] [rbp-40h]

  v3 = 0;
  v24 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a3 + 48);
  v10 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_4A85D0, (__m128i)(unsigned __int64)off_4A85B0);
  a2[7] = v6;
  while ( (unsigned int)sub_1A26C0(a2, a3) )
  {
LABEL_5:
    sub_1A0E80((__int64)a2, a1, a3);
    while ( 1 )
    {
      v7 = _mm_load_si128(&v10);
      v16 = off_4A85B0;
      v11 = 0;
      v12 = 0;
      v14 = -1;
      v15 = -1;
      v17 = -1;
      v18 = -1;
      v20 = -1;
      v21 = 0;
      v23 = 0;
      v13 = v7;
      v19 = -1;
      v22 = 0;
      if ( !(unsigned __int8)sub_1A1640((__int64)a2, (__int64)&v11) )
        break;
      v11 = a3;
      sub_195DA0((_QWORD *)a1, &v11);
      v8 = v21;
      a2[7] = *(_QWORD *)(a3 + 48);
      if ( v8 )
      {
        *(_QWORD *)&v22 = 0;
        qfree();
      }
    }
    if ( v21 )
    {
      *(_QWORD *)&v22 = 0;
      qfree();
    }
  }
  while ( v3 != *(_QWORD *)(a1 + 128) )
  {
    a2[7] = *(_QWORD *)(a3 + 48);
    v3 = *(int *)(a1 + 128);
    if ( (unsigned int)sub_1A26C0(a2, a3) )
      goto LABEL_5;
  }
  return v24 - __readfsqword(0x28u);
}

