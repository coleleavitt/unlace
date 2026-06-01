unsigned __int64 __fastcall sub_562C0(__int64 a1, _QWORD *a2, int a3)
{
  int v4; // ebx
  __int32 v5; // esi
  int v6; // ebp
  _QWORD *v7; // r14
  __int64 v8; // rdx
  _DWORD *v9; // r12
  __int64 v10; // rax
  char **v12; // [rsp+8h] [rbp-90h]
  unsigned int v14; // [rsp+2Ch] [rbp-6Ch] BYREF
  __m128i v15[2]; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v16; // [rsp+58h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  v12 = (char **)(a1 + 416);
  if ( a3 )
  {
    v4 = 0;
    do
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, unsigned int *, __int64))(*(_QWORD *)*a2 + 48LL))(*a2, &v14, 4) )
        break;
      v5 = v14;
      v6 = v4 + *(_DWORD *)(a1 + 624);
      v7 = sub_55210(v12, v14);
      if ( !v7 )
      {
        v15[0].m128i_i32[0] = v5;
        v15[0].m128i_i64[1] = 0;
        v15[1] = 0;
        v7 = sub_54F10(v12, v15);
        if ( v15[0].m128i_i64[1] )
          qfree(v15[0].m128i_i64[1]);
      }
      v8 = v7[3];
      v9 = (_DWORD *)v7[2];
      if ( v7[4] < (unsigned __int64)(v8 + 1) )
      {
        v10 = qvector_reserve(v7 + 2, v7[2], v8 + 1, 4);
        v8 = v7[3];
        v7[2] = v10;
        v9 = (_DWORD *)v10;
      }
      ++v4;
      memmove(v9 + 1, v9, 4 * v8);
      *v9 = v6;
      ++v7[3];
    }
    while ( a3 != v4 );
  }
  return v16 - __readfsqword(0x28u);
}
