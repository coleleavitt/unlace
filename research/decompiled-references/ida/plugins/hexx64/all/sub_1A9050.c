unsigned __int64 __fastcall sub_1A9050(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v6; // rax
  __m128i v7; // xmm1
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __m128i v12; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v13; // [rsp+10h] [rbp-C8h] BYREF
  int v14; // [rsp+18h] [rbp-C0h]
  __m128i v15; // [rsp+20h] [rbp-B8h]
  __int64 v16; // [rsp+30h] [rbp-A8h]
  int v17; // [rsp+38h] [rbp-A0h]
  __int64 (__fastcall **v18)(); // [rsp+40h] [rbp-98h]
  __int64 v19; // [rsp+48h] [rbp-90h]
  int v20; // [rsp+50h] [rbp-88h]
  __int128 v21; // [rsp+58h] [rbp-80h]
  __int64 v22; // [rsp+68h] [rbp-70h]
  __int64 v23; // [rsp+70h] [rbp-68h]
  __int128 v24; // [rsp+78h] [rbp-60h]
  __int64 v25; // [rsp+88h] [rbp-50h]
  unsigned __int64 v26; // [rsp+98h] [rbp-40h]

  v3 = 0;
  v26 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a3 + 48);
  v12 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_4DBD90, (__m128i)(unsigned __int64)off_4DBD70);
  a2[7] = v6;
  while ( (unsigned int)sub_1A8EC0(a2, a3) )
  {
LABEL_5:
    sub_1A7680((__int64)a2, a1, a3);
    while ( 1 )
    {
      v7 = _mm_load_si128(&v12);
      v18 = off_4DBD70;
      v13 = 0;
      v14 = 0;
      v16 = -1;
      v17 = -1;
      v19 = -1;
      v20 = -1;
      v22 = -1;
      v23 = 0;
      v25 = 0;
      v15 = v7;
      v21 = -1;
      v24 = 0;
      if ( !(unsigned __int8)sub_1A7E40((__int64)a2, (__int64)&v13, 0.0) )
        break;
      v13 = a3;
      sub_19C5A0((_QWORD *)a1, (__int64)&v13, v8, v9);
      v10 = v23;
      a2[7] = *(_QWORD *)(a3 + 48);
      if ( v10 )
      {
        *(_QWORD *)&v24 = 0;
        qfree(v10);
      }
    }
    if ( v23 )
    {
      *(_QWORD *)&v24 = 0;
      qfree(v23);
    }
  }
  while ( v3 != *(_QWORD *)(a1 + 128) )
  {
    a2[7] = *(_QWORD *)(a3 + 48);
    v3 = *(int *)(a1 + 128);
    if ( (unsigned int)sub_1A8EC0(a2, a3) )
      goto LABEL_5;
  }
  return v26 - __readfsqword(0x28u);
}

