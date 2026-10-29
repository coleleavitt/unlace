__int64 __fastcall sub_3B0E30(__int64 a1, signed int a2, __m128 a3)
{
  __int64 v5; // rdi
  __int64 v7; // rsi
  __m128i si128; // xmm1
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // ebp
  __int64 *v13; // r13
  __int64 v15; // rdx
  __int64 v16; // r14
  __int64 i; // rbx
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r14
  __int64 j; // rbx
  _QWORD *v22; // rax
  __int64 *v24; // [rsp+8h] [rbp-4F0h] BYREF
  __m128 v25; // [rsp+10h] [rbp-4E8h] BYREF
  unsigned __int64 *v26[2]; // [rsp+20h] [rbp-4D8h] BYREF
  __int64 v27; // [rsp+30h] [rbp-4C8h] BYREF
  __int128 v28; // [rsp+38h] [rbp-4C0h]
  __int64 v29; // [rsp+48h] [rbp-4B0h]
  __int64 (__fastcall **v30)(); // [rsp+50h] [rbp-4A8h] BYREF
  int v31; // [rsp+58h] [rbp-4A0h]
  __int64 v32; // [rsp+60h] [rbp-498h]
  __int128 v33; // [rsp+68h] [rbp-490h]
  __int64 v34; // [rsp+78h] [rbp-480h]
  __int128 v35; // [rsp+80h] [rbp-478h]
  __m128i v36; // [rsp+90h] [rbp-468h]
  signed int v37; // [rsp+A0h] [rbp-458h]
  _BYTE v38[1032]; // [rsp+B0h] [rbp-448h] BYREF
  unsigned __int64 v39; // [rsp+4B8h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 32);
  v39 = __readfsqword(0x28u);
  v26[0] = nullptr;
  v24 = &v27;
  v26[1] = nullptr;
  v25 = _mm_loadh_ps((const double *)&v24);
  sub_386AC0(v5, v26, a1, a3);
  v7 = *(_QWORD *)(a1 + 32);
  si128 = _mm_load_si128((const __m128i *)&v25);
  v27 = 0;
  v28 = 0;
  v29 = v7;
  if ( v7 )
  {
    ++*(_DWORD *)(v7 + 104);
    v7 = *(_QWORD *)(a1 + 32);
  }
  v31 = 0;
  v32 = 0;
  v34 = 0;
  v30 = (__int64 (__fastcall **)())&off_4C7948;
  v37 = a2;
  v33 = 0;
  v35 = 0;
  v36 = si128;
  sub_251200((__int64 *)&v30, v7 + 16, 0);
  sub_260500(*(_QWORD *)(a1 + 32), (__int64)v38, 1024, a2);
  v12 = sub_3B07D0(a1, (__int64)v24, (__int64)v38, v9, v10, v11);
  v30 = off_4BC478;
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    qfree();
  }
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree();
  }
  v13 = (__int64 *)v29;
  if ( v29 )
  {
    if ( (*(_DWORD *)(v29 + 104))-- == 1 )
    {
      sub_2540F0(v13);
      v15 = v13[23];
      if ( v15 )
      {
        v16 = v13[24];
        if ( v16 )
        {
          for ( i = 0; i != v16; ++i )
          {
            v18 = (_QWORD *)(v15 + 24 * i);
            if ( *v18 )
            {
              v18[1] = 0;
              qfree();
              v15 = v13[23];
            }
          }
        }
        v13[24] = 0;
        qfree();
      }
      if ( v13[20] )
      {
        v13[21] = 0;
        qfree();
      }
      v19 = v13[16];
      if ( v19 )
      {
        v20 = v13[17];
        if ( v20 )
        {
          for ( j = 0; j != v20; ++j )
          {
            v22 = (_QWORD *)(v19 + 32 * j);
            if ( *v22 )
            {
              v22[1] = 0;
              qfree();
              v19 = v13[16];
            }
          }
        }
        v13[17] = 0;
        qfree();
      }
      sub_2507D0((__int64)(v13 + 2));
      j__qfree();
    }
  }
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    qfree();
  }
  sub_38C250((__int64 *)v26);
  return v12;
}

