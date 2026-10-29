__int64 __fastcall sub_1C370(__int64 a1)
{
  __int64 i; // rbx
  __int64 v3; // rdi
  __int64 v4; // rax
  unsigned int v5; // ebx
  __m128 v6; // xmm0
  int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // [rsp+0h] [rbp-38h] BYREF
  __int128 v14; // [rsp+8h] [rbp-30h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  v13 = 0;
  v14 = 0;
  if ( (byte_3A5B0[0] & 3) == 0 )
    return 0;
  if ( (byte_3A5B0[0] & 1) != 0 )
  {
    for ( i = get_first_seg(); i; i = get_next_seg() )
    {
      if ( (*(_WORD *)(i + 44) & 0x18) != 8 )
        sub_17DB0(&v13, *(_QWORD *)i, *(_QWORD *)(i + 8));
    }
  }
  else
  {
    sub_17DB0(&v13, 0, 0xFFFFFFFFFFFFFFFFLL);
  }
  if ( *(_QWORD *)(a1 + 1240) != (_QWORD)v14 )
  {
    v3 = *(_QWORD *)(a1 + 1232);
LABEL_10:
    v4 = *(_QWORD *)(a1 + 1248);
    *(_QWORD *)(a1 + 1232) = v13;
    v5 = 1;
    v6 = _mm_loadh_ps((const double *)&v14 + 1);
    v13 = v3;
    *((_QWORD *)&v14 + 1) = v4;
    *(__m128 *)(a1 + 1240) = v6;
    goto LABEL_11;
  }
  if ( (_QWORD)v14 )
  {
    v3 = *(_QWORD *)(a1 + 1232);
    v8 = 0;
    v9 = 0;
    do
    {
      v10 = 16 * v9;
      v11 = (_QWORD *)(v13 + v10);
      v12 = (_QWORD *)(v3 + v10);
      if ( *v11 != *v12 || v11[1] != v12[1] )
        goto LABEL_10;
      v9 = ++v8;
    }
    while ( v8 < (unsigned __int64)v14 );
  }
  v3 = v13;
  v5 = 0;
LABEL_11:
  if ( v3 )
  {
    *(_QWORD *)&v14 = 0;
    qfree();
  }
  return v5;
}

