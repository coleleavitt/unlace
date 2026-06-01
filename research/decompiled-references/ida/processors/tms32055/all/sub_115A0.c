unsigned __int64 __fastcall sub_115A0(__int64 a1, const __m128i *a2, __int64 a3, __int16 a4, __int64 a5, char a6)
{
  __int64 v7; // r14
  int v9; // ebx
  int v10; // r9d
  int v11; // edi
  int v12; // r15d
  int v13; // r13d
  __int64 v14; // rax
  __int64 v15; // r10
  int v16; // eax
  __int64 v17; // rdx
  unsigned __int8 byte; // al
  int v20; // edx
  __int64 v21; // rsi
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 i; // r12
  unsigned int v27; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v28; // [rsp+18h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  a2[1].m128i_i16[4] = a4;
  a2[1].m128i_i16[5] = 1;
  if ( !*(_QWORD *)(a3 + 8) )
    return v28 - __readfsqword(0x28u);
  v7 = a3;
  v9 = a6;
  while ( 1 )
  {
    *(_DWORD *)(a5 + 140) = 0;
    v10 = *(char *)(v7 + 16);
    if ( *(char *)(v7 + 16) > 0 )
      break;
    v13 = 0;
    if ( !*(_BYTE *)(v7 + 16) )
      goto LABEL_17;
LABEL_14:
    v7 += 264;
    if ( !*(_QWORD *)(v7 + 8) )
      return v28 - __readfsqword(0x28u);
  }
  v11 = 0;
  v12 = 0;
  while ( 1 )
  {
    v13 = v12;
    v14 = v11;
    if ( *(_DWORD *)(a5 + 136) == v11 )
    {
      byte = get_byte();
      v20 = *(_DWORD *)(a5 + 136);
      *(_DWORD *)(a5 + 4LL * v20 + 8) = byte;
      v14 = *(int *)(a5 + 140);
      *(_DWORD *)(a5 + 136) = v20 + 1;
    }
    v11 = v14 + 1;
    *(_DWORD *)(a5 + 140) = v14 + 1;
    v10 = *(char *)(v7 + 16);
    v15 = *(int *)(a5 + 4 * v14 + 8);
    if ( v9 > 0 )
    {
      v16 = 0;
      v17 = 0;
      do
      {
        ++v16;
        v17 = 2 * v17 + 1;
      }
      while ( v16 != v9 );
      if ( ((v15
           ^ (*(__int64 *)v7 >> (v9 * ((unsigned __int8)v10 - 1 - v12))))
          & (*(__int64 *)(v7 + 8) >> (v9 * ((unsigned __int8)v10 - 1 - v12)))
          & v17) != 0 )
        break;
    }
    if ( ++v12 >= v10 )
    {
      ++v13;
      break;
    }
  }
  if ( v10 != v12 )
    goto LABEL_14;
LABEL_17:
  a2[1].m128i_i32[2] = *(unsigned __int16 *)(v7 + 18) | (v13 << 16);
  if ( v10 )
  {
    v21 = a5;
    v22 = 0;
    do
    {
      v23 = *(int *)(v21 + 8);
      v21 += 4;
      v22 = v23 | (v22 << a6);
    }
    while ( a5 + 4LL * v10 != v21 );
  }
  else
  {
    v22 = 0;
  }
  v27 = 0;
  for ( i = 0; i != 15; ++i )
  {
    if ( !(unsigned __int8)sub_111D0(a1, a2, v7, v22, i, &v27) )
      break;
  }
  return v28 - __readfsqword(0x28u);
}

