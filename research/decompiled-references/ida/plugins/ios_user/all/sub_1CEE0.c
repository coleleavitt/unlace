__int64 __fastcall sub_1CEE0(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rdi
  __int64 v6; // rbp
  __m128i v7; // xmm0
  __m128i v8; // xmm0
  __int64 v9; // rdi
  const char *v10; // rdx
  __m128i v11; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v12; // [rsp+10h] [rbp-B8h] BYREF
  __m128i v13; // [rsp+18h] [rbp-B0h] BYREF
  __m128i si128; // [rsp+30h] [rbp-98h] BYREF
  const char *v15; // [rsp+40h] [rbp-88h]
  __int128 v16; // [rsp+48h] [rbp-80h]
  __int64 v17; // [rsp+58h] [rbp-70h]
  __int128 v18; // [rsp+60h] [rbp-68h]
  __int64 v19; // [rsp+70h] [rbp-58h]
  __int64 v20; // [rsp+78h] [rbp-50h]
  __int128 v21; // [rsp+80h] [rbp-48h]
  int v22; // [rsp+90h] [rbp-38h]
  unsigned __int64 v23; // [rsp+98h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  v16 = 0;
  v18 = 0;
  v21 = 0;
  v15 = nullptr;
  v17 = 0;
  v20 = 0;
  v19 = 0;
  v22 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_773F0);
  v3 = sub_438C0(a1, &si128, a3);
  if ( (_BYTE)v3 )
  {
    if ( si128.m128i_i64[0] == *(_QWORD *)(a1 + 1784) || *(_QWORD *)(a1 + 1880) && rangeset_t_find_range() )
    {
      v10 = s;
      if ( (_QWORD)v16 )
        v10 = v15;
      v3 = sub_29FC0(a1 + 1704, a2, v10);
    }
    else
    {
      sub_2A150(&v12, a1, &si128);
      v5 = *a2;
      v6 = v12;
      v12 = 0;
      v7 = _mm_loadu_si128(&v13);
      v13 = 0;
      if ( v5 )
      {
        a2[1] = 0;
        v11 = v7;
        qfree();
        v8 = _mm_load_si128(&v11);
        v9 = v12;
        *a2 = v6;
        *(__m128i *)(a2 + 1) = v8;
        if ( v9 )
        {
          v13.m128i_i64[0] = 0;
          qfree();
        }
      }
      else
      {
        *a2 = v6;
        *(__m128i *)(a2 + 1) = v7;
      }
    }
  }
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree();
  }
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree();
  }
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree();
  }
  return v3;
}

