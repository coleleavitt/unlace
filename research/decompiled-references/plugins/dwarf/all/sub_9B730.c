unsigned __int64 __fastcall sub_9B730(const __m128i **a1, int a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v6; // rax
  __m128i si128; // [rsp+0h] [rbp-1B8h] BYREF
  __m128i v8; // [rsp+10h] [rbp-1A8h] BYREF
  _QWORD v9[4]; // [rsp+20h] [rbp-198h] BYREF
  _UNKNOWN **v10; // [rsp+40h] [rbp-178h]
  __int64 v11; // [rsp+48h] [rbp-170h] BYREF
  __int128 v12; // [rsp+50h] [rbp-168h]
  int v13; // [rsp+60h] [rbp-158h]
  _QWORD *v14; // [rsp+68h] [rbp-150h]
  __m128i v15; // [rsp+70h] [rbp-148h] BYREF
  __int64 v16; // [rsp+88h] [rbp-130h]
  __int128 v17; // [rsp+90h] [rbp-128h]
  __int128 v18; // [rsp+A0h] [rbp-118h]
  __int64 v19; // [rsp+B0h] [rbp-108h]
  __int128 v20; // [rsp+B8h] [rbp-100h]
  __int64 v21; // [rsp+C8h] [rbp-F0h]
  __int128 v22; // [rsp+D0h] [rbp-E8h]
  __int64 v23; // [rsp+108h] [rbp-B0h]
  __int128 v24; // [rsp+110h] [rbp-A8h]
  __int64 v25; // [rsp+120h] [rbp-98h]
  __int128 v26; // [rsp+128h] [rbp-90h]
  __int64 v27; // [rsp+144h] [rbp-74h]
  __int128 v28; // [rsp+14Ch] [rbp-6Ch] BYREF
  unsigned __int64 v29; // [rsp+15Ch] [rbp-5Ch]
  __int64 v30; // [rsp+168h] [rbp-50h]
  unsigned __int64 v31; // [rsp+178h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  v9[0] = &off_C96F8;
  v9[2] = a3;
  v10 = &off_C9710;
  v13 = a2;
  v11 = 0;
  v14 = v9;
  v3 = (__int64)*a1;
  v9[1] = a1;
  v12 = 0;
  v15 = 0;
  if ( sub_945B0((__int64 *)v3, &v15, a2) )
    goto LABEL_6;
  v3 = 0x7FFFFFFFFFFFFFFFLL;
  sub_84A10(&v15);
  v4 = (*a1)[14].m128i_i64[0];
  if ( (v4 & 0x7FFFFFFFFFFFFFFFLL) == 0 || v4 == -1 )
  {
    if ( !under_debugger )
    {
      interr(30478);
LABEL_6:
      sub_8A9B0(v3, v15.m128i_i64, (__int64)v14);
      sub_84A10(&v15);
      goto LABEL_7;
    }
LABEL_20:
    BUG();
  }
  si128 = _mm_loadu_si128(*a1 + 14);
  while ( 1 )
  {
    v6 = operator new(0x20u);
    *(_DWORD *)(v6 + 8) = 1;
    *(_QWORD *)v6 = off_C9528;
    v15.m128i_i64[0] = v6;
    *(_OWORD *)(v6 + 16) = 0;
    v16 = 0;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 0;
    v30 = 0;
    v27 = 0;
    *(_QWORD *)&v28 = 0;
    *((_QWORD *)&v28 + 1) = 0x80000000LL;
    v29 = 0xFFFFFFFF00000000LL;
    v17 = 0;
    v18 = 0;
    v20 = 0;
    v22 = 0;
    v24 = 0;
    v26 = 0;
    if ( !(unsigned __int8)sub_9B440((__int64)a1, v15.m128i_i64, si128.m128i_i64, (__int64)&v11) )
      goto LABEL_19;
    v8 = 0;
    if ( sub_945B0(v15.m128i_i64, &v8, v13) )
    {
      sub_8A9B0((__int64)&v15, v8.m128i_i64, (__int64)v14);
      sub_84A10(&v8);
      sub_1B750((__int64)&v15);
      goto LABEL_7;
    }
    sub_84A10(&v8);
    if ( (*(_QWORD *)((_BYTE *)&v28 + 4) & 0x7FFFFFFFFFFFFFFFLL) == 0 || *(_QWORD *)((char *)&v28 + 4) == -1 )
      break;
    si128 = _mm_load_si128((const __m128i *)((char *)&v28 + 4));
    sub_1B750((__int64)&v15);
  }
  if ( under_debugger )
    goto LABEL_20;
  interr(30478);
LABEL_19:
  sub_1B750((__int64)&v15);
LABEL_7:
  v10 = (_UNKNOWN **)&unk_C9CB0;
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree(v11);
  }
  return v31 - __readfsqword(0x28u);
}
