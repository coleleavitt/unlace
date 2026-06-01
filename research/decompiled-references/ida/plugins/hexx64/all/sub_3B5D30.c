__int64 __fastcall sub_3B5D30(__int64 a1, signed int a2, __m128 a3, double a4, __m128i a5, double a6)
{
  __int64 v8; // rdi
  __int64 v10; // rsi
  __m128i si128; // xmm1
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // ebp
  __int64 *v16; // r13
  __int64 v18; // rdx
  __int64 v19; // r14
  __int64 i; // rbx
  __int64 *v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // r14
  __int64 j; // rbx
  __int64 *v27; // rax
  __int64 v28; // rdi
  __int64 *v30; // [rsp+8h] [rbp-4F0h] BYREF
  __m128 v31; // [rsp+10h] [rbp-4E8h] BYREF
  unsigned __int64 *v32[2]; // [rsp+20h] [rbp-4D8h] BYREF
  __int64 v33; // [rsp+30h] [rbp-4C8h] BYREF
  __int128 v34; // [rsp+38h] [rbp-4C0h]
  __int64 v35; // [rsp+48h] [rbp-4B0h]
  __int64 (__fastcall **v36)(); // [rsp+50h] [rbp-4A8h] BYREF
  int v37; // [rsp+58h] [rbp-4A0h]
  __int64 v38; // [rsp+60h] [rbp-498h]
  __int128 v39; // [rsp+68h] [rbp-490h]
  __int64 v40; // [rsp+78h] [rbp-480h]
  __int128 v41; // [rsp+80h] [rbp-478h]
  __m128i v42; // [rsp+90h] [rbp-468h]
  signed int v43; // [rsp+A0h] [rbp-458h]
  _BYTE v44[1032]; // [rsp+B0h] [rbp-448h] BYREF
  unsigned __int64 v45; // [rsp+4B8h] [rbp-40h]

  v8 = *(_QWORD *)(a1 + 32);
  v45 = __readfsqword(0x28u);
  v32[0] = nullptr;
  v30 = &v33;
  v32[1] = nullptr;
  v31 = _mm_loadh_ps((const double *)&v30);
  sub_38B9C0(v8, v32, a1, a3);
  v10 = *(_QWORD *)(a1 + 32);
  si128 = _mm_load_si128((const __m128i *)&v31);
  v33 = 0;
  v34 = 0;
  v35 = v10;
  if ( v10 )
  {
    ++*(_DWORD *)(v10 + 104);
    v10 = *(_QWORD *)(a1 + 32);
  }
  v37 = 0;
  v38 = 0;
  v40 = 0;
  v36 = (__int64 (__fastcall **)())&off_4E7228;
  v43 = a2;
  v39 = 0;
  v41 = 0;
  v42 = si128;
  sub_255A80((__int64 *)&v36, v10 + 16, 0, 0.0);
  sub_264D80(*(_QWORD *)(a1 + 32), (__int64)v44, 1024, a2);
  v15 = sub_3B56D0(a1, (__int64)v30, (__int64)v44, v12, v13, v14, 0.0, *(double *)si128.m128i_i64, a5, a6);
  v36 = off_4DBCF8;
  if ( v40 )
  {
    *(_QWORD *)&v41 = 0;
    qfree(v40);
  }
  if ( v38 )
  {
    *(_QWORD *)&v39 = 0;
    qfree(v38);
  }
  v16 = (__int64 *)v35;
  if ( v35 )
  {
    if ( (*(_DWORD *)(v35 + 104))-- == 1 )
    {
      sub_258970(v16);
      v18 = v16[23];
      if ( v18 )
      {
        v19 = v16[24];
        if ( v19 )
        {
          for ( i = 0; i != v19; ++i )
          {
            v21 = (__int64 *)(v18 + 24 * i);
            v22 = *v21;
            if ( *v21 )
            {
              v21[1] = 0;
              qfree(v22);
              v18 = v16[23];
            }
          }
        }
        v16[24] = 0;
        qfree(v18);
      }
      v23 = v16[20];
      if ( v23 )
      {
        v16[21] = 0;
        qfree(v23);
      }
      v24 = v16[16];
      if ( v24 )
      {
        v25 = v16[17];
        if ( v25 )
        {
          for ( j = 0; j != v25; ++j )
          {
            v27 = (__int64 *)(v24 + 32 * j);
            v28 = *v27;
            if ( *v27 )
            {
              v27[1] = 0;
              qfree(v28);
              v24 = v16[16];
            }
          }
        }
        v16[17] = 0;
        qfree(v24);
      }
      sub_255050((__int64)(v16 + 2), 0.0);
      j__qfree((__int64)v16);
    }
  }
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    qfree(v33);
  }
  sub_391150((__int64 *)v32);
  return v15;
}

