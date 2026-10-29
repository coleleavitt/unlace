unsigned __int64 __fastcall sub_2CD070(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rbx
  int v6; // eax
  unsigned __int64 v7; // r15
  _QWORD *v8; // rbx
  unsigned __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rbx
  int v13; // eax
  __int64 (__fastcall **v14)(); // [rsp+20h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+28h] [rbp-C0h]
  __int64 v16; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v17; // [rsp+38h] [rbp-B0h]
  __m128i si128; // [rsp+48h] [rbp-A0h]
  int v19; // [rsp+58h] [rbp-90h]
  __int64 (__fastcall **v20)(); // [rsp+60h] [rbp-88h]
  __int64 v21; // [rsp+68h] [rbp-80h]
  __int64 v22; // [rsp+70h] [rbp-78h] BYREF
  __int128 v23; // [rsp+78h] [rbp-70h]
  __int64 v24; // [rsp+88h] [rbp-60h]
  __int64 v25; // [rsp+90h] [rbp-58h]
  int v26; // [rsp+98h] [rbp-50h]
  unsigned __int64 v27; // [rsp+A8h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 != a2 )
  {
    v15 = -1;
    v16 = 0;
    v19 = -2;
    v14 = off_4DBB98;
    v17 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_41F900);
    if ( a2 < v2 )
    {
      v7 = a2;
      do
      {
        v8 = (_QWORD *)(*a1 + (v7 << 6));
        *v8 = off_4DBB70;
        clear_tinfo_t();
        if ( v8[2] )
        {
          v8[3] = 0;
          qfree();
        }
        ++v7;
      }
      while ( v2 != v7 );
    }
    else
    {
      v3 = a1[2];
      if ( (unsigned __int64)&v14 >= *a1 && (unsigned __int64)&v14 < *a1 + (v3 << 6) )
      {
        v21 = -1;
        v20 = off_4DBB70;
        v22 = 0;
        v23 = 0;
        sub_2AE6E0(&v22, (__int64)&v16);
        v24 = 0;
        copy_tinfo_t();
        v20 = off_4DBB98;
        v25 = si128.m128i_i64[1];
        v26 = v19;
        if ( a1[2] < a2 )
          *a1 = qvector_reserve();
        v10 = a1[1];
        if ( v10 < a2 )
        {
          do
          {
            v11 = v21;
            v12 = *a1 + (v10 << 6);
            *(_QWORD *)v12 = off_4DBB70;
            *(_QWORD *)(v12 + 8) = v11;
            *(_QWORD *)(v12 + 16) = 0;
            *(_OWORD *)(v12 + 24) = 0;
            sub_2AE6E0((_QWORD *)(v12 + 16), (__int64)&v22);
            *(_QWORD *)(v12 + 40) = 0;
            copy_tinfo_t();
            ++v10;
            *(_QWORD *)(v12 + 48) = v25;
            v13 = v26;
            *(_QWORD *)v12 = off_4DBB98;
            *(_DWORD *)(v12 + 56) = v13;
          }
          while ( a2 != v10 );
        }
        a1[1] = a2;
        v20 = off_4DBB70;
        sub_2B5520(&v22);
        goto LABEL_14;
      }
      if ( v3 < a2 )
      {
        *a1 = qvector_reserve();
        v2 = a1[1];
      }
      for ( ; v2 < a2; *(_DWORD *)(v5 + 56) = v6 )
      {
        v4 = v15;
        v5 = *a1 + (v2 << 6);
        *(_QWORD *)v5 = off_4DBB70;
        *(_QWORD *)(v5 + 8) = v4;
        *(_QWORD *)(v5 + 16) = 0;
        *(_OWORD *)(v5 + 24) = 0;
        sub_2AE6E0((_QWORD *)(v5 + 16), (__int64)&v16);
        *(_QWORD *)(v5 + 40) = 0;
        copy_tinfo_t();
        ++v2;
        *(_QWORD *)(v5 + 48) = si128.m128i_i64[1];
        v6 = v19;
        *(_QWORD *)v5 = off_4DBB98;
      }
    }
    a1[1] = a2;
LABEL_14:
    v14 = off_4DBB70;
    sub_2B5520(&v16);
  }
  return v27 - __readfsqword(0x28u);
}

