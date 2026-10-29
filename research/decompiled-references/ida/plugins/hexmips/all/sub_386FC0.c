__int64 __fastcall sub_386FC0(const __m128i *a1, __int64 a2, _DWORD *a3, _DWORD *a4, char a5, __m128i a6)
{
  __int64 v9; // rdi
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  _QWORD *v13; // rbx
  _QWORD *v14; // rdx
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 range; // rax
  __int64 v19; // r12
  __int64 v20; // rbx
  __int64 v21; // rax
  __m128i v22; // xmm0
  unsigned __int64 v23; // rsi
  _QWORD *v25; // [rsp+8h] [rbp-A0h]
  __int64 (__fastcall **v26)(); // [rsp+10h] [rbp-98h] BYREF
  int v27; // [rsp+18h] [rbp-90h]
  __int64 v28; // [rsp+20h] [rbp-88h]
  __int128 v29; // [rsp+28h] [rbp-80h]
  __int64 v30; // [rsp+38h] [rbp-70h]
  __int128 v31; // [rsp+40h] [rbp-68h]
  __m128 v32; // [rsp+50h] [rbp-58h]
  unsigned __int64 v33; // [rsp+68h] [rbp-40h]

  v9 = a1->m128i_i64[0];
  v33 = __readfsqword(0x28u);
  v11 = (_QWORD *)sub_2537A0(v9);
  v12 = (_QWORD *)*v11;
  if ( !*v11 )
    return 0;
  if ( !v11[1] )
    return 0;
  v13 = (_QWORD *)v12[1];
  if ( v13 == v12 )
    return 0;
  while ( 1 )
  {
    if ( v13[5] )
    {
      v25 = v12;
      range = rangeset_t_find_range();
      v12 = v25;
      if ( range )
      {
        v19 = v13[3];
        if ( v19 == 1 )
        {
          v20 = 1;
          goto LABEL_17;
        }
        if ( *(_DWORD *)(v19 + 8) != 71 || v19 != a1->m128i_i64[0] + 16 )
          break;
      }
    }
    if ( (*v13 & 2) == 0 )
    {
      v14 = (_QWORD *)v13[2];
      if ( (*(_BYTE *)v14 & 2) != 0 )
      {
        v15 = (_QWORD *)(*v13 & 0xFFFFFFFFFFFFFFFCLL);
        v16 = *v15;
        if ( (*v15 & 2) == 0 )
        {
          while ( v13 == (_QWORD *)v15[2] )
          {
            v13 = v15;
            v23 = v16 & 0xFFFFFFFFFFFFFFFCLL;
            v16 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v16 & 2) != 0 )
            {
              v13 = (_QWORD *)v23;
              goto LABEL_9;
            }
            v15 = (_QWORD *)v23;
          }
        }
        v13 = v15;
      }
      else
      {
        do
        {
          v13 = v14;
          v14 = (_QWORD *)v14[1];
        }
        while ( (*(_BYTE *)v14 & 2) == 0 );
      }
    }
LABEL_9:
    if ( v12 == v13 )
      return 0;
  }
  v20 = sub_2525E0(v13[3], a2);
  if ( !v20 )
    v20 = v19;
LABEL_17:
  if ( a5 )
  {
    v29 = 0;
    v26 = (__int64 (__fastcall **)())&off_4C7128;
    v21 = a1->m128i_i64[0];
    v31 = 0;
    v22 = _mm_loadl_epi64(a1);
    v27 = 2;
    v28 = 0;
    a6 = _mm_unpacklo_epi64(v22, (__m128i)(unsigned __int64)v20);
    v30 = 0;
    v32 = (__m128)a6;
    sub_251200((__int64 *)&v26, v21 + 16, 0);
    v26 = off_4BC478;
    if ( v30 )
    {
      *(_QWORD *)&v31 = 0;
      qfree();
    }
    if ( v28 )
    {
      *(_QWORD *)&v29 = 0;
      qfree();
    }
  }
  return sub_386E60(a1->m128i_i64[0], v20, a3, a4, *(double *)a6.m128i_i64);
}

