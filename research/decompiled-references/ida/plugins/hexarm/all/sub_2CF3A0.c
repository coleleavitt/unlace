unsigned __int64 __fastcall sub_2CF3A0(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // r13
  unsigned __int64 v6; // r14
  __int64 v7; // rdi
  _QWORD *v8; // rdi
  __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  _QWORD *v11; // r14
  unsigned __int64 v12; // rax
  _QWORD *v13; // r13
  __int64 v14; // rax
  unsigned __int64 v15; // [rsp+8h] [rbp-1D0h]
  __int64 (__fastcall **v16)(); // [rsp+10h] [rbp-1C8h] BYREF
  int v17; // [rsp+18h] [rbp-1C0h]
  __int64 v18; // [rsp+28h] [rbp-1B0h]
  __int64 v19; // [rsp+30h] [rbp-1A8h]
  int v20; // [rsp+38h] [rbp-1A0h]
  int v21; // [rsp+40h] [rbp-198h]
  __m128i v22; // [rsp+48h] [rbp-190h]
  __int64 v23; // [rsp+58h] [rbp-180h]
  __int128 v24; // [rsp+60h] [rbp-178h]
  __int64 v25; // [rsp+70h] [rbp-168h]
  __int64 v26; // [rsp+78h] [rbp-160h]
  __int128 v27; // [rsp+80h] [rbp-158h]
  __int64 v28; // [rsp+90h] [rbp-148h]
  __int64 v29; // [rsp+98h] [rbp-140h]
  int v30; // [rsp+A0h] [rbp-138h]
  __int64 v31; // [rsp+B0h] [rbp-128h]
  __int64 v32; // [rsp+B8h] [rbp-120h]
  int v33; // [rsp+C0h] [rbp-118h]
  int v34; // [rsp+C8h] [rbp-110h]
  int v35; // [rsp+CCh] [rbp-10Ch]
  __int64 (__fastcall **v36)(); // [rsp+D0h] [rbp-108h] BYREF
  __m128i si128; // [rsp+D8h] [rbp-100h]
  __int64 v38; // [rsp+E8h] [rbp-F0h]
  int v39; // [rsp+F0h] [rbp-E8h]
  unsigned __int64 v40; // [rsp+198h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  if ( a1[1] != a2 )
  {
    v35 = 0;
    v16 = (__int64 (__fastcall **)())&off_4DBBE8;
    v36 = nullptr;
    v38 = 0;
    v39 = 0;
    v17 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_41F900);
    copy_argloc();
    v29 = 0;
    v18 = si128.m128i_i64[1];
    v22 = _mm_load_si128((const __m128i *)&xmmword_41F900);
    v19 = 0;
    v21 = 0;
    v20 = 0;
    v23 = 0;
    v25 = 0;
    v26 = 0;
    v28 = -1;
    v30 = 0;
    v24 = 0;
    v27 = 0;
    copy_argloc();
    v34 = -2;
    v31 = si128.m128i_i64[1];
    v32 = 0;
    v33 = 0;
    cleanup_argloc();
    v4 = a1[1];
    v16 = off_4DBC60;
    if ( a2 < v4 )
    {
      v6 = a2;
      do
      {
        v7 = 3 * v6++;
        v8 = (_QWORD *)(*a1 + (v7 << 6));
        *v8 = &off_4DBC10;
        sub_2BAAF0(v8);
      }
      while ( v4 != v6 );
    }
    else
    {
      if ( v4 >= a2 )
      {
LABEL_4:
        v16 = (__int64 (__fastcall **)())&off_4DBC10;
        sub_2BAAF0(&v16);
        return v40 - __readfsqword(0x28u);
      }
      v9 = *a1;
      v10 = a1[2];
      if ( (unsigned __int64)&v16 >= *a1 && (unsigned __int64)&v16 < v9 + 192 * v10 )
      {
        sub_2CE8E0((__int64)&v36, (__int64)&v16);
        v36 = off_4DBC60;
        if ( a1[2] < a2 )
          *a1 = qvector_reserve();
        v12 = a1[1];
        if ( v12 < a2 )
        {
          do
          {
            v15 = v12;
            v13 = (_QWORD *)(*a1 + 192 * v12);
            sub_2CE8E0((__int64)v13, (__int64)&v36);
            *v13 = off_4DBC60;
            v12 = v15 + 1;
          }
          while ( a2 != v15 + 1 );
        }
        a1[1] = a2;
        v36 = (__int64 (__fastcall **)())&off_4DBC10;
        sub_2BAAF0(&v36);
        goto LABEL_4;
      }
      if ( v10 >= a2 || (v14 = qvector_reserve(), v4 = a1[1], *a1 = v14, v9 = v14, v4 < a2) )
      {
        while ( 1 )
        {
          v11 = (_QWORD *)(v9 + 192 * v4);
          sub_2CE8E0((__int64)v11, (__int64)&v16);
          ++v4;
          *v11 = off_4DBC60;
          if ( v4 >= a2 )
            break;
          v9 = *a1;
        }
      }
    }
    a1[1] = a2;
    goto LABEL_4;
  }
  return v40 - __readfsqword(0x28u);
}

