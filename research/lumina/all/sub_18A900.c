__int64 __fastcall sub_18A900(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // r13d
  void *v5; // rax
  __m128i v6; // xmm1
  unsigned int v7; // r12d
  char *v8; // rdx
  __int64 v9; // r13
  __int64 v10; // rbx
  char *v11; // rax
  void *v12; // rdi
  _QWORD v14[2]; // [rsp+0h] [rbp-F8h] BYREF
  __m128i v15; // [rsp+10h] [rbp-E8h]
  char v16; // [rsp+20h] [rbp-D8h]
  void *v17; // [rsp+28h] [rbp-D0h]
  __int128 v18; // [rsp+30h] [rbp-C8h]
  __int64 v19; // [rsp+40h] [rbp-B8h]
  __int64 v20; // [rsp+48h] [rbp-B0h]
  __int64 v21; // [rsp+50h] [rbp-A8h]
  __int128 v22; // [rsp+58h] [rbp-A0h]
  __int64 v23; // [rsp+68h] [rbp-90h]
  void *v24; // [rsp+70h] [rbp-88h]
  __int128 v25; // [rsp+78h] [rbp-80h]
  int v26; // [rsp+88h] [rbp-70h] BYREF
  __int64 v27; // [rsp+90h] [rbp-68h]
  void *v28; // [rsp+98h] [rbp-60h]
  __m128i v29; // [rsp+A0h] [rbp-58h]
  void *ptr; // [rsp+B0h] [rbp-48h]
  __int128 v31; // [rsp+B8h] [rbp-40h]
  unsigned __int64 v32; // [rsp+C8h] [rbp-30h]

  v32 = __readfsqword(0x28u);
  v4 = sub_17D350(a2, 0);
  sub_17D350(a2, v4 | 0x10);
  v14[0] = sub_188E70;
  v16 = 0;
  v23 = a2;
  v15 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_23CF58), (__m128i)(unsigned __int64)&off_23CEA0);
  v14[1] = 0;
  v17 = nullptr;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v24 = nullptr;
  v26 = 0;
  v27 = 0;
  v28 = nullptr;
  ptr = nullptr;
  v18 = 0;
  v22 = 0;
  v25 = 0;
  v29 = 0;
  v31 = 0;
  if ( a3 )
  {
    v5 = *(void **)a3;
    v6 = _mm_loadu_si128((const __m128i *)(a3 + 8));
    *(_OWORD *)(a3 + 8) = 0;
    *(_QWORD *)a3 = 0;
    v28 = v5;
    v29 = v6;
  }
  if ( (unsigned __int8)sub_188850((__int64)v14, 0) )
  {
    sub_189F30(a1, (__int64)&v26);
    v7 = 0;
  }
  else
  {
    v7 = sub_18FA20(v14, 0);
  }
  sub_17D350(a2, v4);
  if ( ptr )
  {
    *(_QWORD *)&v31 = 0;
    j__free(ptr);
  }
  v8 = (char *)v28;
  if ( v28 )
  {
    v9 = v29.m128i_i64[0];
    if ( v29.m128i_i64[0] )
    {
      v10 = 0;
      do
      {
        v11 = &v8[64 * v10];
        v12 = *(void **)v11;
        if ( *(_QWORD *)v11 )
        {
          *((_QWORD *)v11 + 1) = 0;
          j__free(v12);
          v8 = (char *)v28;
        }
        ++v10;
      }
      while ( v9 != v10 );
    }
    v29.m128i_i64[0] = 0;
    j__free(v8);
  }
  sub_189C20((__int64)&v26);
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    j__free(v24);
  }
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    j__free(v17);
  }
  return v7;
}
