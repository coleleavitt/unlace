__int64 __fastcall sub_1072F0(__int64 a1, const __m128i *a2)
{
  bool v3; // zf
  __int8 v4; // cl
  __int64 v5; // r12
  char *v6; // r12
  unsigned __int8 v7; // bp
  unsigned __int8 v8; // si
  __m128i *v10; // rdi
  __int8 *v11; // rcx
  int v12; // eax
  __int64 v13; // rdi
  __m128i *v14; // rdi
  const __m128i **v15; // [rsp+8h] [rbp-50h] BYREF
  const __m128i *v16; // [rsp+10h] [rbp-48h] BYREF
  __int64 v17; // [rsp+18h] [rbp-40h]
  unsigned __int64 v18; // [rsp+28h] [rbp-30h]

  v3 = a2->m128i_i8[8] == 1;
  v18 = __readfsqword(0x28u);
  if ( !v3
    || (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 8) + 216LL))(
         *(_QWORD *)(a1 + 8),
         a2->m128i_u32[0]) )
  {
    v4 = a2->m128i_i8[8];
    v5 = a2->m128i_i32[3];
    v16 = (const __m128i *)a2->m128i_i64[0];
    v6 = &v16->m128i_i8[v5];
    v17 = v4;
    v7 = v4;
    v8 = v4;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v8 >= v7 && (v7 < v8 || (__int64)v6 <= (__int64)v16) )
          return 0;
        v10 = *(__m128i **)(a1 + 16);
        v15 = &v16;
        sub_106EE0(v10, (__int64)&v16, (const __m128i **)&v15);
        v8 = v17;
        v11 = &v16->m128i_i8[1];
        v12 = *(_DWORD *)(a1 + 24);
        v16 = (const __m128i *)((char *)v16 + 1);
        if ( v12 )
          break;
        if ( (_BYTE)v17 == 1 )
          goto LABEL_9;
      }
      if ( (_BYTE)v17 == 1 )
      {
LABEL_9:
        v13 = 0;
        goto LABEL_10;
      }
      v13 = *(int *)(a1 + 32);
      if ( v13 > (__int64)v11 )
        v13 = 0;
LABEL_10:
      v16 = (const __m128i *)(v13 + ((unsigned __int64)&v11[*(_DWORD *)(a1 + 28) - 1 - v13] & -*(_DWORD *)(a1 + 28)));
    }
  }
  v14 = *(__m128i **)(a1 + 16);
  v16 = a2;
  sub_106EE0(v14, (__int64)a2, &v16);
  return 0;
}

