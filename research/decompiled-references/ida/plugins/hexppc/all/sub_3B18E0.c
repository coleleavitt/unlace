__int64 __fastcall sub_3B18E0(__int64 a1, __int64 a2, __m128 a3)
{
  __int64 v5; // rdi
  __int64 v7; // rax
  __int64 v8; // rsi
  __m128i v9; // xmm1
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  const char *v14; // rdx
  unsigned int v15; // r13d
  __int64 *v16; // rbx
  __int64 v18; // rdx
  __int64 v19; // r14
  __int64 i; // rbp
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r14
  __int64 j; // rbp
  _QWORD *v25; // rax
  __m128i v27; // [rsp+0h] [rbp-C8h] BYREF
  unsigned __int64 *v28[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v30; // [rsp+28h] [rbp-A0h]
  __int64 v31; // [rsp+38h] [rbp-90h]
  __int64 (__fastcall **v32)(); // [rsp+40h] [rbp-88h] BYREF
  int v33; // [rsp+48h] [rbp-80h]
  __int64 v34; // [rsp+50h] [rbp-78h]
  __int128 v35; // [rsp+58h] [rbp-70h]
  __int64 v36; // [rsp+68h] [rbp-60h]
  __int128 v37; // [rsp+70h] [rbp-58h]
  __m128i v38; // [rsp+80h] [rbp-48h]
  int v39; // [rsp+90h] [rbp-38h]
  unsigned __int64 v40; // [rsp+98h] [rbp-30h]

  v5 = *(_QWORD *)(a1 + 32);
  v40 = __readfsqword(0x28u);
  v28[0] = nullptr;
  v28[1] = nullptr;
  v27 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v28, (__m128i)(unsigned __int64)&v29);
  sub_387840(v5, v28, a1, a3);
  v7 = *(_QWORD *)(a1 + 24);
  v8 = *(_QWORD *)(a1 + 32);
  v9 = _mm_load_si128(&v27);
  v30 = 0;
  v10 = a2 - *(_QWORD *)(v7 + 432);
  v31 = v8;
  v29 = 0;
  if ( v8 )
  {
    ++*(_DWORD *)(v8 + 104);
    v8 = *(_QWORD *)(a1 + 32);
  }
  v33 = 2;
  v34 = 0;
  v36 = 0;
  v32 = (__int64 (__fastcall **)())&off_4D42E8;
  v39 = -991146299 * (v10 >> 3);
  v35 = 0;
  v37 = 0;
  v38 = v9;
  sub_251E00((__int64 *)&v32, v8 + 16, 0);
  v14 = s1;
  if ( *(_QWORD *)(a2 + 40) )
    v14 = *(const char **)(a2 + 32);
  v15 = sub_3B1550(a1, (__int64)&v29, (__int64)v14, v11, v12, v13);
  v32 = off_4C8E58;
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree();
  }
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    qfree();
  }
  v16 = (__int64 *)v31;
  if ( v31 )
  {
    if ( (*(_DWORD *)(v31 + 104))-- == 1 )
    {
      sub_254CF0(v16);
      v18 = v16[23];
      if ( v18 )
      {
        v19 = v16[24];
        if ( v19 )
        {
          for ( i = 0; i != v19; ++i )
          {
            v21 = (_QWORD *)(v18 + 24 * i);
            if ( *v21 )
            {
              v21[1] = 0;
              qfree();
              v18 = v16[23];
            }
          }
        }
        v16[24] = 0;
        qfree();
      }
      if ( v16[20] )
      {
        v16[21] = 0;
        qfree();
      }
      v22 = v16[16];
      if ( v22 )
      {
        v23 = v16[17];
        if ( v23 )
        {
          for ( j = 0; j != v23; ++j )
          {
            v25 = (_QWORD *)(v22 + 32 * j);
            if ( *v25 )
            {
              v25[1] = 0;
              qfree();
              v22 = v16[16];
            }
          }
        }
        v16[17] = 0;
        qfree();
      }
      sub_2513D0((__int64)(v16 + 2));
      j__qfree();
    }
  }
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree();
  }
  sub_38CFD0((__int64 *)v28);
  return v15;
}

