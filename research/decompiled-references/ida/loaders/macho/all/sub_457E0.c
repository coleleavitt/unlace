unsigned __int64 __fastcall sub_457E0(const __m128i *a1, __int64 a2, const char *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rbp
  __int64 v6; // rbx
  _QWORD *v7; // rax
  __m128i v9; // [rsp+20h] [rbp-198h] BYREF
  __int64 v10; // [rsp+30h] [rbp-188h]
  __int64 v11; // [rsp+38h] [rbp-180h]
  __int64 v12; // [rsp+40h] [rbp-178h]
  __int128 v13; // [rsp+48h] [rbp-170h]
  __int128 v14; // [rsp+58h] [rbp-160h]
  __int128 v15; // [rsp+68h] [rbp-150h]
  __int128 v16; // [rsp+78h] [rbp-140h]
  __int128 v17; // [rsp+88h] [rbp-130h]
  __int128 v18; // [rsp+98h] [rbp-120h]
  __int128 v19; // [rsp+A8h] [rbp-110h]
  __int64 v20; // [rsp+B8h] [rbp-100h]
  __int128 v21; // [rsp+C0h] [rbp-F8h]
  __int64 v22; // [rsp+D0h] [rbp-E8h]
  __int128 v23; // [rsp+D8h] [rbp-E0h]
  __int64 v24; // [rsp+E8h] [rbp-D0h]
  int v25; // [rsp+F0h] [rbp-C8h]
  __int64 v26; // [rsp+F8h] [rbp-C0h]
  __int64 v27; // [rsp+100h] [rbp-B8h]
  int v28; // [rsp+108h] [rbp-B0h]
  __int128 v29; // [rsp+110h] [rbp-A8h]
  __int64 v30; // [rsp+120h] [rbp-98h]
  __int128 v31; // [rsp+128h] [rbp-90h]
  __int64 v32; // [rsp+138h] [rbp-80h]
  __int128 v33; // [rsp+140h] [rbp-78h]
  __int64 v34; // [rsp+150h] [rbp-68h]
  __int128 v35; // [rsp+158h] [rbp-60h]
  __int128 v36; // [rsp+168h] [rbp-50h]
  __int128 v37; // [rsp+178h] [rbp-40h]
  int v38; // [rsp+188h] [rbp-30h]
  int v39; // [rsp+18Ch] [rbp-2Ch]
  unsigned __int64 v40; // [rsp+198h] [rbp-20h]

  v40 = __readfsqword(0x28u);
  v29 = -1;
  v9 = _mm_loadu_si128(a1);
  v18 = 0;
  v19 = 0;
  v21 = 0;
  v23 = 0;
  v31 = 0;
  v33 = 0;
  v35 = 0;
  v11 = 0;
  v12 = 0;
  v20 = 0;
  v22 = 0;
  v24 = 0;
  v25 = -1;
  v26 = 0;
  v27 = -1;
  v28 = 0;
  v30 = 0;
  v32 = 0;
  v34 = 0;
  v38 = 0;
  v13 = 0;
  v14 = 0;
  v10 = a2;
  v39 = 258;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v36 = 0;
  v37 = 0;
  if ( !strncmp(a3, "Fat ", 4u) )
    v38 = strtol(a3 + 17, nullptr, 10) - 1;
  if ( (unsigned __int8)qgetenv() )
    *(_QWORD *)&v29 = *(_QWORD *)(a1->m128i_i64[1] + 16) & strtoull(s1, nullptr, 16);
  sub_44BA0((__int64)a1, (__int64)&v9);
  v4 = v34;
  if ( v34 )
  {
    v5 = v35;
    if ( (_QWORD)v35 )
    {
      v6 = 0;
      do
      {
        v7 = (_QWORD *)(v4 + 24 * v6);
        if ( *v7 )
        {
          v7[1] = 0;
          qfree();
          v4 = v34;
        }
        ++v6;
      }
      while ( v5 != v6 );
    }
    *(_QWORD *)&v35 = 0;
    qfree();
  }
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree();
  }
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree();
  }
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree();
  }
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree();
  }
  if ( *((_QWORD *)&v18 + 1) )
  {
    *(_QWORD *)&v19 = 0;
    qfree();
  }
  return v40 - __readfsqword(0x28u);
}

