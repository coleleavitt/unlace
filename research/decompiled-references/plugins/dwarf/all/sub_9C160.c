__int64 __fastcall sub_9C160(const __m128i **a1)
{
  __int64 v2; // r13
  __int64 v3; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  char v7; // al
  __int64 v8; // rdi
  __int64 v9; // [rsp+0h] [rbp-190h]
  int v10; // [rsp+Ch] [rbp-184h] BYREF
  __int64 v11; // [rsp+10h] [rbp-180h] BYREF
  __m128i v12; // [rsp+18h] [rbp-178h] BYREF
  _UNKNOWN **v13; // [rsp+28h] [rbp-168h]
  __int64 v14; // [rsp+30h] [rbp-160h] BYREF
  __int128 v15; // [rsp+38h] [rbp-158h]
  __int64 v16[4]; // [rsp+48h] [rbp-148h] BYREF
  __int128 v17; // [rsp+68h] [rbp-128h]
  __int128 v18; // [rsp+78h] [rbp-118h]
  __int64 v19; // [rsp+88h] [rbp-108h]
  __int128 v20; // [rsp+90h] [rbp-100h]
  __int64 v21; // [rsp+A0h] [rbp-F0h]
  __int128 v22; // [rsp+A8h] [rbp-E8h]
  __int64 v23; // [rsp+E0h] [rbp-B0h]
  __int128 v24; // [rsp+E8h] [rbp-A8h]
  __int64 v25; // [rsp+F8h] [rbp-98h]
  __int128 v26; // [rsp+100h] [rbp-90h]
  __int64 v27; // [rsp+11Ch] [rbp-74h]
  _BYTE v28[24]; // [rsp+124h] [rbp-6Ch]
  __int64 v29; // [rsp+140h] [rbp-50h]
  __int64 v30; // [rsp+148h] [rbp-48h]
  unsigned __int64 v31; // [rsp+150h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  v12.m128i_i32[0] = 0;
  v16[0] = 0;
  v15 = 0;
  v14 = 0;
  v13 = &off_C9630;
  v2 = (__int64)*a1;
  if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64, __m128i *, __int64 *))((*a1)[16].m128i_i64[0] + 112))(
          *(_QWORD *)((*a1)->m128i_i64[0] + 24),
          17,
          &v12,
          v16)
    && v12.m128i_i32[0] )
  {
    v3 = sub_9A0A0(v2);
    goto LABEL_4;
  }
  v5 = (*a1)[14].m128i_i64[0];
  if ( (v5 & 0x7FFFFFFFFFFFFFFFLL) == 0 || v5 == -1 )
  {
    if ( !under_debugger )
    {
      interr(30478);
      goto LABEL_16;
    }
    goto LABEL_22;
  }
  v12 = _mm_loadu_si128(*a1 + 14);
  while ( 1 )
  {
    v6 = operator new(0x20u);
    v16[0] = v6;
    *(_OWORD *)(v6 + 16) = 0;
    *(_QWORD *)v6 = off_C9528;
    *(_DWORD *)(v6 + 8) = 1;
    *(_QWORD *)&v28[8] = 0x80000000LL;
    v16[3] = 0;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 0;
    v29 = 0;
    v27 = 0;
    *(_QWORD *)v28 = 0;
    *(_QWORD *)&v28[16] = 0xFFFFFFFF00000000LL;
    v17 = 0;
    v18 = 0;
    v20 = 0;
    v22 = 0;
    v24 = 0;
    v26 = 0;
    v7 = sub_9B440((__int64)a1, v16, v12.m128i_i64, (__int64)&v14);
    v9 = *(_QWORD *)&v28[12];
    v2 = *(_QWORD *)&v28[4];
    if ( !v7 )
      goto LABEL_21;
    v8 = *(_QWORD *)(v16[0] + 24);
    v11 = 0;
    v10 = 0;
    if ( !(*(unsigned int (__fastcall **)(__int64, __int64, int *, __int64 *))(v30 + 112))(v8, 17, &v10, &v11) && v10 )
    {
      v3 = sub_9A0A0((__int64)v16);
      sub_1B750((__int64)v16);
      goto LABEL_4;
    }
LABEL_16:
    if ( (v2 & 0x7FFFFFFFFFFFFFFFLL) == 0 || v2 == -1 )
      break;
    v12.m128i_i64[0] = v2;
    v12.m128i_i64[1] = v9;
    sub_1B750((__int64)v16);
  }
  if ( under_debugger )
LABEL_22:
    BUG();
  interr(30478);
LABEL_21:
  v3 = -1;
  sub_1B750((__int64)v16);
LABEL_4:
  v13 = (_UNKNOWN **)&unk_C9CD8;
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree(v14);
  }
  return v3;
}
