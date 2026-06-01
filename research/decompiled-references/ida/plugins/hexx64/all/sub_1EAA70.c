unsigned __int64 __fastcall sub_1EAA70(__int64 a1, __int64 a2, unsigned int a3, int a4, __m128 a5, __m128 a6)
{
  __m128i *v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v12; // r15
  __int64 v13; // rcx
  __int64 v14; // r14
  char *v15; // rdi
  int v16; // [rsp+Ch] [rbp-8Ch]
  int v17; // [rsp+14h] [rbp-84h] BYREF
  __int64 v18; // [rsp+18h] [rbp-80h] BYREF
  __m128i v19; // [rsp+20h] [rbp-78h] BYREF
  int v20[2]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v21; // [rsp+38h] [rbp-60h]
  __int64 v22; // [rsp+48h] [rbp-50h]
  unsigned __int64 v23; // [rsp+58h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  if ( a3 >= *(_DWORD *)(*(_QWORD *)a1 + 64LL) )
    sub_1DF460(*(double *)a5.m128_u64);
  v7 = *(__m128i **)(*(_QWORD *)(*(_QWORD *)a1 + 528LL) + 8LL * a3);
  if ( v7[29].m128i_i8[8] )
    sub_1EA870((__int64)v7, v7 + 28, v7[3].m128i_i64[0], 0, a5, a6);
  *(_QWORD *)a2 = v7[28].m128i_i64[0];
  if ( &v7[28].m128i_u64[1] != (unsigned __int64 *)(a2 + 8) )
  {
    sub_1E4290((unsigned __int64 **)&v19, (__int64)&v7[28].m128i_i64[1]);
    v8 = *(_QWORD *)(a2 + 8);
    v9 = v19.m128i_i64[1];
    *(_QWORD *)(a2 + 8) = v19.m128i_i64[0];
    v10 = *(_QWORD *)(a2 + 16);
    v19.m128i_i64[0] = v8;
    *(_QWORD *)(a2 + 16) = v9;
    v19.m128i_i64[1] = v10;
    if ( v8 )
    {
      sub_13FCB0((unsigned __int64 **)&v19);
      if ( v19.m128i_i64[0] )
        qfree(v19.m128i_i64[0]);
    }
  }
  *(_BYTE *)(a2 + 24) = v7[29].m128i_i8[8];
  if ( v7[4].m128i_i32[3] == 4 )
  {
    v12 = v7[3].m128i_i64[1];
    if ( v12 )
    {
      v13 = v12 + 32;
      v14 = *(_QWORD *)(v7[4].m128i_i64[0] + 1504);
      if ( *(_BYTE *)(v12 + 32) == 4 )
      {
        v15 = *(char **)(v12 + 40);
        v16 = *(_DWORD *)v15;
        if ( *(_DWORD *)v15 == 13 )
        {
          if ( !(unsigned __int8)sub_11FD80(v15 + 48, &v18, 0) )
            return v23 - __readfsqword(0x28u);
          v13 = *(_QWORD *)(v12 + 40) + 32LL;
        }
      }
      else
      {
        v16 = 0;
      }
      v19.m128i_i64[0] = 0;
      v19.m128i_i8[8] = 0;
      if ( (unsigned __int8)sub_1DFF30((__int64)&v19, v14, &v17, v13) )
      {
        v20[0] = 0;
        v20[1] = v17;
        v22 = 0;
        v21 = 0;
        if ( !(unsigned __int8)sub_1E0AD0((__int64)v20, v12, (__int64 *)a2, 0.0) )
          goto LABEL_23;
        if ( a4 == v7[4].m128i_i32[2] + 1 )
        {
          sub_315730((__m128i *)v20);
        }
        else if ( *(_BYTE *)(v12 + 64) != 7 || a4 != *(_DWORD *)(v12 + 72) )
        {
          if ( !under_debugger )
            sub_383060(0xCA78u, 0.0);
          BUG();
        }
        if ( v16 != 13 || (unsigned __int8)sub_314690((__int64)v20, v18) )
        {
          sub_1E9DC0(a2, &v19, v20);
          sub_312B80((__int64)v20);
        }
        else
        {
LABEL_23:
          sub_312B80((__int64)v20);
        }
      }
    }
  }
  return v23 - __readfsqword(0x28u);
}

