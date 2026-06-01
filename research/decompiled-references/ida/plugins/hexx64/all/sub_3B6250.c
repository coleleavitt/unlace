__int64 __fastcall sub_3B6250(__int64 a1, unsigned int a2, __m128 a3, double a4, double a5, double a6)
{
  __int64 v8; // rdi
  __int64 v10; // rsi
  __m128i v11; // xmm1
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // r13d
  __int64 *v16; // rbx
  __int64 v18; // rdx
  __int64 v19; // r14
  __int64 i; // rbp
  __int64 *v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // r14
  __int64 j; // rbp
  __int64 *v27; // rax
  __int64 v28; // rdi
  __m128i v30; // [rsp+0h] [rbp-4E8h] BYREF
  unsigned __int64 *v31[2]; // [rsp+10h] [rbp-4D8h] BYREF
  __int64 v32; // [rsp+20h] [rbp-4C8h] BYREF
  __int128 v33; // [rsp+28h] [rbp-4C0h]
  __int64 v34; // [rsp+38h] [rbp-4B0h]
  __int64 (__fastcall **v35)(); // [rsp+40h] [rbp-4A8h] BYREF
  int v36; // [rsp+48h] [rbp-4A0h]
  __int64 v37; // [rsp+50h] [rbp-498h]
  __int128 v38; // [rsp+58h] [rbp-490h]
  __int64 v39; // [rsp+68h] [rbp-480h]
  __int128 v40; // [rsp+70h] [rbp-478h]
  __m128i v41; // [rsp+80h] [rbp-468h]
  unsigned int v42; // [rsp+90h] [rbp-458h]
  _BYTE v43[1032]; // [rsp+A0h] [rbp-448h] BYREF
  unsigned __int64 v44; // [rsp+4A8h] [rbp-40h]

  v8 = *(_QWORD *)(a1 + 32);
  v44 = __readfsqword(0x28u);
  v31[0] = nullptr;
  v31[1] = nullptr;
  v30 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v31, (__m128i)(unsigned __int64)&v32);
  sub_38B9C0(v8, v31, a1, a3);
  v10 = *(_QWORD *)(a1 + 32);
  v11 = _mm_load_si128(&v30);
  v32 = 0;
  v33 = 0;
  v34 = v10;
  if ( v10 )
  {
    ++*(_DWORD *)(v10 + 104);
    v10 = *(_QWORD *)(a1 + 32);
  }
  v36 = 0;
  v37 = 0;
  v39 = 0;
  v35 = (__int64 (__fastcall **)())&off_4E72A8;
  v42 = a2;
  v38 = 0;
  v40 = 0;
  v41 = v11;
  sub_255A80((__int64 *)&v35, v10 + 16, 0, 0.0);
  sub_260470(a2);
  qsnprintf();
  v15 = sub_3B56D0(
          a1,
          (__int64)&v32,
          (__int64)v43,
          v12,
          v13,
          v14,
          0.0,
          *(double *)v11.m128i_i64,
          (__m128i)(unsigned __int64)&v32,
          a6);
  v35 = off_4DBCF8;
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    qfree(v39);
  }
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree(v37);
  }
  v16 = (__int64 *)v34;
  if ( v34 )
  {
    if ( (*(_DWORD *)(v34 + 104))-- == 1 )
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
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v32);
  }
  sub_391150((__int64 *)v31);
  return v15;
}

