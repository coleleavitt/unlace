unsigned __int64 __fastcall sub_1E6DF0(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __m128i *v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v10; // r15
  __int64 v11; // rcx
  __int64 v12; // r14
  char *v13; // rdi
  int v14; // [rsp+Ch] [rbp-8Ch]
  int v15; // [rsp+14h] [rbp-84h] BYREF
  __int64 v16; // [rsp+18h] [rbp-80h] BYREF
  __m128i v17; // [rsp+20h] [rbp-78h] BYREF
  int v18[2]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v19; // [rsp+38h] [rbp-60h]
  __int64 v20; // [rsp+48h] [rbp-50h]
  unsigned __int64 v21; // [rsp+58h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  if ( a3 >= *(_DWORD *)(*(_QWORD *)a1 + 64LL) )
    sub_1DB7E0(a1);
  v5 = *(__m128i **)(*(_QWORD *)(*(_QWORD *)a1 + 528LL) + 8LL * a3);
  if ( v5[29].m128i_i8[8] )
    sub_1E6BF0((__int64)v5, v5 + 28, v5[3].m128i_i64[0], 0);
  *(_QWORD *)a2 = v5[28].m128i_i64[0];
  if ( &v5[28].m128i_u64[1] != (unsigned __int64 *)(a2 + 8) )
  {
    sub_1E0610(v17.m128i_i64, (__int64)&v5[28].m128i_i64[1]);
    v6 = *(_QWORD *)(a2 + 8);
    v7 = v17.m128i_i64[1];
    *(_QWORD *)(a2 + 8) = v17.m128i_i64[0];
    v8 = *(_QWORD *)(a2 + 16);
    v17.m128i_i64[0] = v6;
    *(_QWORD *)(a2 + 16) = v7;
    v17.m128i_i64[1] = v8;
    if ( v6 )
    {
      sub_13C270((unsigned __int64 **)&v17);
      if ( v17.m128i_i64[0] )
        qfree();
    }
  }
  *(_BYTE *)(a2 + 24) = v5[29].m128i_i8[8];
  if ( v5[4].m128i_i32[3] == 4 )
  {
    v10 = v5[3].m128i_i64[1];
    if ( v10 )
    {
      v11 = v10 + 32;
      v12 = *(_QWORD *)(v5[4].m128i_i64[0] + 1504);
      if ( *(_BYTE *)(v10 + 32) == 4 )
      {
        v13 = *(char **)(v10 + 40);
        v14 = *(_DWORD *)v13;
        if ( *(_DWORD *)v13 == 13 )
        {
          if ( !(unsigned __int8)sub_11C340(v13 + 48, &v16, 0) )
            return v21 - __readfsqword(0x28u);
          v11 = *(_QWORD *)(v10 + 40) + 32LL;
        }
      }
      else
      {
        v14 = 0;
      }
      v17.m128i_i64[0] = 0;
      v17.m128i_i8[8] = 0;
      if ( (unsigned __int8)sub_1DC2B0((__int64)&v17, v12, &v15, v11) )
      {
        v18[0] = 0;
        v18[1] = v15;
        v20 = 0;
        v19 = 0;
        if ( !(unsigned __int8)sub_1DCE50((__int64)v18, v10, (__int64 *)a2) )
          goto LABEL_23;
        if ( a4 == v5[4].m128i_i32[2] + 1 )
        {
          sub_3115B0(v18);
        }
        else if ( *(_BYTE *)(v10 + 64) != 7 || a4 != *(_DWORD *)(v10 + 72) )
        {
          if ( !under_debugger )
            sub_37EEE0(51832);
          BUG();
        }
        if ( v14 != 13 || (unsigned __int8)sub_310510(v18, v16) )
        {
          sub_1E6140(a2, &v17, v18);
          sub_30EA00(v18);
        }
        else
        {
LABEL_23:
          sub_30EA00(v18);
        }
      }
    }
  }
  return v21 - __readfsqword(0x28u);
}

