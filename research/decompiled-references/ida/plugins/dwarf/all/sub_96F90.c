__int64 __fastcall sub_96F90(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int16 v3; // ax
  unsigned int v4; // eax
  unsigned __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v9; // rax
  int v10; // r13d
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // [rsp+0h] [rbp-F0h] BYREF
  __m128i v19; // [rsp+8h] [rbp-E8h] BYREF
  void (__fastcall __noreturn **v20)(); // [rsp+18h] [rbp-D8h] BYREF
  int v21; // [rsp+20h] [rbp-D0h]
  __int64 v22; // [rsp+28h] [rbp-C8h]
  __int64 v23; // [rsp+30h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+38h] [rbp-B8h] BYREF
  int v25; // [rsp+40h] [rbp-B0h]
  _QWORD v26[2]; // [rsp+48h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+58h] [rbp-98h] BYREF
  __int128 v28; // [rsp+60h] [rbp-90h]
  __int128 v29; // [rsp+78h] [rbp-78h] BYREF
  __int128 v30; // [rsp+88h] [rbp-68h]
  __int128 v31; // [rsp+98h] [rbp-58h]
  __int128 v32; // [rsp+A8h] [rbp-48h]
  __int64 v33; // [rsp+B8h] [rbp-38h]
  unsigned __int64 v34; // [rsp+C0h] [rbp-30h]

  v34 = __readfsqword(0x28u);
  v19 = 0;
  if ( !sub_945B0(a1, &v19, 56) )
  {
    v7 = -1;
    goto LABEL_5;
  }
  v3 = sub_872B0((__int64)a1, &v19);
  v4 = sub_87340((__int64)a1, v3);
  v5 = v4;
  if ( v4 == 3 )
  {
    *(_QWORD *)&v29 = 0;
    BYTE8(v29) = 0;
    sub_96D10((__int64)a1, (__int64)&v29, v19.m128i_i64);
    v7 = a2 + 8 * v29;
    goto LABEL_5;
  }
  v6 = -517;
  if ( _bittest64(&v6, v5) )
  {
    sub_1D740((__int64)"Unexpected attribute class: %d.\n", v5);
    v7 = 0;
    goto LABEL_5;
  }
  v9 = a1[32];
  v23 = 0;
  v25 = 0;
  v22 = v9;
  v24 = 0;
  *(_QWORD *)&v29 = 0;
  if ( (*(unsigned int (__fastcall **)(__int64, __int64 *, __int64 *, __int128 *))(v9 + 120))(
         v19.m128i_i64[0],
         &v23,
         &v24,
         &v29) )
  {
    if ( (debug & 0x400000) != 0 )
      sub_88B80((__int64)"Couldn't retrieve location list.\n");
  }
  else
  {
    v25 = 1;
  }
  v10 = v24;
  v11 = (unsigned int)v24;
  if ( (_DWORD)v24 == 1 )
    goto LABEL_18;
  if ( (debug & 0x400000) != 0 )
  {
    sub_88B80((__int64)"Unexpected multi-locdesc attribute for data offset: %d", v24);
    if ( !v10 )
      goto LABEL_14;
    v33 = 0;
    v29 = 0;
    v30 = 0;
    v31 = 0;
    v32 = 0;
    if ( !v24 )
    {
      v11 = 0;
      sub_1D740((__int64)"Out-of-bounds index for locdescs: %lld (got %lld)\n", 0, 0);
      goto LABEL_14;
    }
LABEL_19:
    v11 = (__int64)&v29;
    if ( !sub_85140(v22, (__int64)&v29, v23, 0) )
      goto LABEL_14;
    v12 = *a1;
    v26[1] = &v29;
    v13 = *(_QWORD *)(v12 + 16);
    v28 = 0;
    v27 = 0;
    v26[0] = v13;
    if ( (a2 & 7) != 0 && (debug & 0x400000) != 0 )
    {
      sub_88B80((__int64)"Current bit offset is not byte-aligned (%llu) but it should be. Expect errors.", a2);
      v17 = v28;
      v15 = v27;
      v14 = a2 >> 3;
      v16 = v28 + 1;
      if ( *((_QWORD *)&v28 + 1) >= (unsigned __int64)(v28 + 1) )
        goto LABEL_24;
    }
    else
    {
      v14 = a2 >> 3;
      v15 = 0;
      v16 = 1;
    }
    v27 = qvector_reserve(&v27, v15, v16, 8);
    v15 = v27;
    v17 = v28;
LABEL_24:
    *(_QWORD *)(v15 + 8 * v17) = v14;
    v11 = a1[32];
    *(_QWORD *)&v28 = v28 + 1;
    v21 = 0;
    v20 = &off_C7258;
    v7 = 0;
    if ( (unsigned __int8)sub_89AD0(v26, v11, &v18, (__int64)&v20) )
      v7 = 8 * v18;
    if ( v27 )
    {
      *(_QWORD *)&v28 = 0;
      qfree(v27);
    }
    goto LABEL_15;
  }
  if ( (_DWORD)v24 )
  {
LABEL_18:
    v33 = 0;
    v29 = 0;
    v30 = 0;
    v31 = 0;
    v32 = 0;
    goto LABEL_19;
  }
LABEL_14:
  v7 = 0;
LABEL_15:
  if ( v23 )
    (*(void (__fastcall **)(__int64, __int64))(v22 + 488))(v23, v11);
LABEL_5:
  sub_84A10(&v19);
  return v7;
}

