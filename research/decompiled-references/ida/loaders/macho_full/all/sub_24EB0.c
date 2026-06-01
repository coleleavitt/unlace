__int64 __fastcall sub_24EB0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  __m128i v3; // xmm0
  __int64 v4; // rbp
  _QWORD *v5; // rdx
  __int64 v6; // r12
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v10; // [rsp+30h] [rbp-F8h]
  __int64 v11; // [rsp+38h] [rbp-F0h]
  _QWORD *v12; // [rsp+40h] [rbp-E8h]
  __int128 v13; // [rsp+48h] [rbp-E0h]
  __m128i v14; // [rsp+D0h] [rbp-58h] BYREF
  unsigned __int64 v15; // [rsp+E8h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a2 + 8) || strcmp(*(const char **)a2, "TIL_CONFIG") )
    return 1;
  v13 = 0;
  v14 = 0;
  v12 = (_QWORD *)qvector_reserve();
  v2 = v12;
  *v12 = 0;
  *(_OWORD *)(v2 + 1) = 0;
  v3 = _mm_load_si128(&v14);
  *((_WORD *)v2 + 12) = 123;
  v2[4] = 0;
  *((_BYTE *)v2 + 40) = 0;
  *((__m128i *)v2 + 3) = v3;
  *(_QWORD *)&v13 = v13 + 1;
  v10 = 0;
  v11 = 0;
  if ( (unsigned int)parse_json() )
    v4 = qerrstr();
  else
    v4 = 2;
  jvalue_t_clear();
  v5 = v12;
  if ( v12 )
  {
    v6 = v13;
    if ( (_QWORD)v13 )
    {
      v7 = 0;
      do
      {
        v8 = &v5[8 * v7];
        if ( *v8 )
        {
          v8[1] = 0;
          qfree();
          v5 = v12;
        }
        ++v7;
      }
      while ( v6 != v7 );
    }
    *(_QWORD *)&v13 = 0;
    qfree();
  }
  return v4;
}

