__int64 __fastcall sub_26600(__m128i *a1)
{
  unsigned int v1; // edx
  __int64 v2; // rbp
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  const char *v7; // rsi
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  __int128 v9; // [rsp+8h] [rbp-30h]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v1 = a1[1].m128i_u32[2];
  v2 = a1->m128i_i64[0];
  v10 = __readfsqword(0x28u);
  if ( v1 == 18 )
    goto LABEL_9;
  if ( v1 <= 0x12 )
  {
    if ( v1 - 10 > 1 )
      return 0;
LABEL_9:
    if ( (unsigned __int8)sub_26470((__int64)&a1[1].m128i_i64[1] + 4, v2, v1) )
      return 1;
LABEL_10:
    v8 = 0;
    v9 = 0;
    sub_228A0((__int64)a1, &v8);
    if ( (debug & 0x400000) != 0 )
    {
      v7 = src;
      if ( (_QWORD)v9 )
        LODWORD(v7) = v8;
      sub_88B80((unsigned int)"Couldn't find UUID/debug ID \"%s\" for file: %s\n", (_DWORD)v7, v2, v4, v5, v6);
    }
    if ( v8 )
    {
      *(_QWORD *)&v9 = 0;
      qfree(v8);
    }
    return 0;
  }
  if ( v1 == 25 )
  {
    if ( (unsigned __int8)sub_19EC0(a1 + 323, &v8, v2, a1[322].m128i_i32[2], a1[322].m128i_i32[3]) )
    {
      a1[1].m128i_i8[13] = v8;
      return 1;
    }
    goto LABEL_10;
  }
  return 0;
}

