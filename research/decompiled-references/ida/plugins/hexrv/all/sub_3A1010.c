unsigned __int64 __fastcall sub_3A1010(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // r15
  _BYTE *v13; // rax
  __int64 func; // rax
  __int64 v15; // rsi
  __int64 *v16; // r15
  __int64 v18; // rsi
  __int64 v19; // r8
  __int64 i; // rdx
  _QWORD *v21; // rcx
  __int64 v22; // r8
  __int64 j; // rcx
  _QWORD *v24; // rdx
  __int64 v25; // rcx
  __int64 k; // rbx
  __int64 v27; // rax
  __int64 v29; // [rsp-8h] [rbp-C8h]
  __int64 v30; // [rsp+0h] [rbp-C0h]
  __int64 v31; // [rsp+8h] [rbp-B8h]
  __int64 v32; // [rsp+10h] [rbp-B0h]
  __int64 v33; // [rsp+20h] [rbp-A0h] BYREF
  __int64 v34; // [rsp+28h] [rbp-98h] BYREF
  __int128 v35; // [rsp+30h] [rbp-90h]
  _QWORD v36[7]; // [rsp+48h] [rbp-78h] BYREF
  unsigned __int64 v37; // [rsp+80h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  v35 = 0;
  v36[0] = &off_4B9B00;
  v36[4] = &v34;
  v36[5] = a3;
  v34 = 0;
  v36[3] = 0;
  v36[6] = a4;
  *(__m128i *)&v36[1] = _mm_load_si128((const __m128i *)&xmmword_3FE260);
  ((void (__fastcall *)(__int64, _QWORD *, __int64, __int64, __int64, __int64))callui)(1147, v36, 8, a4, a5, a6);
  if ( !(_QWORD)v35 )
  {
    if ( v34 )
      goto LABEL_36;
    return v37 - __readfsqword(0x28u);
  }
  v10 = 0;
  v11 = 0;
  do
  {
    while ( 1 )
    {
      v13 = (_BYTE *)callui(1105, *(unsigned int *)(v34 + 96 * v11 + 40), v6, v7, v8, v9, v29, v30, v31, v32);
      if ( v13 )
      {
        if ( *v13 == 36 && (unsigned int)qsscanf() == 1 && v36[0] != -1 )
        {
          func = get_func();
          if ( func )
            break;
        }
      }
LABEL_3:
      ++v10;
      v12 = v35;
      v11 = v10;
      if ( v10 >= (unsigned __int64)v35 )
        goto LABEL_30;
    }
    v15 = *(_QWORD *)(a1 + 40);
    v36[0] = func;
    memset(&v36[1], 0, 24);
    sub_148900(&v33, v15, v36, nullptr, 0);
    v16 = (__int64 *)v33;
    if ( !v33 )
    {
      if ( v36[1] )
      {
        v36[2] = 0;
        qfree();
      }
      goto LABEL_3;
    }
    if ( (*(_DWORD *)(v33 + 104))-- == 1 )
    {
      sub_253D70(v16);
      v18 = v16[23];
      if ( v18 )
      {
        v19 = v16[24];
        if ( v19 )
        {
          for ( i = 0; i != v19; ++i )
          {
            v21 = (_QWORD *)(v18 + 24 * i);
            if ( *v21 )
            {
              v21[1] = 0;
              v31 = i;
              v30 = v19;
              qfree();
              i = v31;
              v19 = v30;
              v18 = v16[23];
            }
          }
        }
        v16[24] = 0;
        qfree();
      }
      if ( v16[20] )
      {
        v16[21] = 0;
        qfree();
      }
      v15 = v16[16];
      if ( v15 )
      {
        v22 = v16[17];
        if ( v22 )
        {
          for ( j = 0; j != v22; ++j )
          {
            v24 = (_QWORD *)(v15 + 32 * j);
            if ( *v24 )
            {
              v24[1] = 0;
              v31 = v22;
              v30 = j;
              qfree();
              v22 = v31;
              j = v30;
              v15 = v16[16];
            }
          }
        }
        v16[17] = 0;
        qfree();
      }
      sub_250450((__int64)(v16 + 2));
      j__qfree();
      if ( v36[1] )
      {
LABEL_28:
        v36[2] = 0;
        qfree();
      }
    }
    else if ( v36[1] )
    {
      goto LABEL_28;
    }
    sub_2535E0((__int64)v16, v15, v6);
    ++v10;
    v12 = v35;
    v11 = v10;
  }
  while ( v10 < (unsigned __int64)v35 );
LABEL_30:
  v25 = v34;
  if ( v34 )
  {
    if ( v12 )
    {
      for ( k = 0; k != v12; ++k )
      {
        v27 = v25 + 96 * k;
        if ( *(_QWORD *)(v27 + 8) )
        {
          *(_QWORD *)(v27 + 16) = 0;
          qfree();
          v25 = v34;
        }
      }
    }
LABEL_36:
    *(_QWORD *)&v35 = 0;
    qfree();
  }
  return v37 - __readfsqword(0x28u);
}

