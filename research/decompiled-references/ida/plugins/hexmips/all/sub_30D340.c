__int64 __fastcall sub_30D340(__int64 a1, __m128i *a2)
{
  __int64 v2; // rax
  int *v3; // r14
  __int64 v4; // r12
  unsigned int v5; // ebx
  int v6; // ebp
  _BYTE *v7; // rdx
  __int64 v8; // rcx
  _BYTE *i; // rdi
  int v10; // esi
  unsigned int v11; // eax
  int v12; // esi
  unsigned int v13; // ebp
  __int64 v14; // rdx
  __int64 v15; // r12
  __int64 v16; // rbx
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r12
  __int64 v20; // rbx
  _QWORD *v21; // rax
  _DWORD *v23; // rbx
  __int64 v24; // rbp
  _DWORD *v25; // r12
  int v26; // eax
  int v27; // edx
  __int64 v28; // rax
  __int64 v29; // [rsp+0h] [rbp-118h] BYREF
  __int128 v30; // [rsp+8h] [rbp-110h]
  _QWORD v31[6]; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v32; // [rsp+50h] [rbp-C8h]
  __int64 v33; // [rsp+58h] [rbp-C0h]
  __int64 v34; // [rsp+68h] [rbp-B0h]
  __int64 v35; // [rsp+70h] [rbp-A8h]
  __int64 v36; // [rsp+80h] [rbp-98h]
  __int64 v37; // [rsp+88h] [rbp-90h]
  __int64 v38; // [rsp+98h] [rbp-80h]
  __int64 v39; // [rsp+A0h] [rbp-78h]
  __int64 v40; // [rsp+B8h] [rbp-60h]
  __int64 v41; // [rsp+C0h] [rbp-58h]
  unsigned __int64 v42; // [rsp+D8h] [rbp-40h]

  v2 = a2[11].m128i_i64[0];
  v42 = __readfsqword(0x28u);
  v29 = 0;
  v3 = *(int **)(v2 + 8);
  v30 = 0;
  v4 = v3[16];
  if ( v3[16] )
  {
    v29 = qvector_reserve();
    memset((void *)(v29 + 4 * v30), 0, 4 * (v4 - v30));
    v23 = (_DWORD *)v29;
    *(_QWORD *)&v30 = v4;
    v24 = *((_QWORD *)v3 + 65);
    v25 = (_DWORD *)(v29 + 4 * v4);
    do
    {
      *v23 = 0;
      *v23 = *(_DWORD *)(v24 + 76) == 5;
      if ( sub_32BD80(v24) == 1 )
      {
        v28 = *(_QWORD *)(v24 + 56);
        if ( *(_DWORD *)v28 == 55 && *(_BYTE *)(v28 + 32) == 7 )
          *v23 |= 2u;
      }
      v26 = sub_1357E0(v24, 0);
      if ( v26 )
      {
        v27 = *v23 | 8;
        if ( v26 < 0 )
          v27 = *v23 | 0x18;
        *v23 = v27;
      }
      ++v23;
      v24 = *(_QWORD *)(v24 + 8);
    }
    while ( v25 != v23 );
  }
  v5 = *v3;
  v6 = *(_DWORD *)(*((_QWORD *)v3 + 187) + 604LL);
  sub_6CD60((__int64)v31, a1);
  if ( (unsigned __int8)sub_74A20(
                          (__int64)v31,
                          a2,
                          (__int64)&v29,
                          ((v6 & 0x20) != 0) | (unsigned __int8)((v5 >> 22) & 2)) )
  {
    v7 = (_BYTE *)a2[17].m128i_i64[1];
    v8 = *((_QWORD *)v3 + 65);
    for ( i = &v7[4 * a2[18].m128i_i64[0]]; v7 != i; v8 = *(_QWORD *)(v8 + 8) )
    {
      v10 = *(_DWORD *)(v8 + 24);
      v11 = v10 & 0xFFFFFFFB;
      v12 = v10 | 4;
      if ( (*v7 & 4) != 0 )
        v11 = v12;
      v7 += 4;
      *(_DWORD *)(v8 + 24) = v11;
    }
    v13 = 0;
  }
  else
  {
    v13 = -34;
  }
  v31[0] = off_4CBB18;
  if ( v40 )
  {
    v41 = 0;
    qfree();
  }
  if ( v38 )
  {
    v39 = 0;
    qfree();
  }
  if ( v36 )
  {
    v37 = 0;
    qfree();
  }
  v14 = v34;
  if ( v34 )
  {
    v15 = v35;
    if ( v35 )
    {
      v16 = 0;
      do
      {
        v17 = (_QWORD *)(v14 + 24 * v16);
        if ( *v17 )
        {
          v17[1] = 0;
          qfree();
          v14 = v34;
        }
        ++v16;
      }
      while ( v15 != v16 );
    }
    v35 = 0;
    qfree();
  }
  v18 = v32;
  if ( v32 )
  {
    v19 = v33;
    if ( v33 )
    {
      v20 = 0;
      do
      {
        v21 = (_QWORD *)(v18 + 24 * v20);
        if ( *v21 )
        {
          v21[1] = 0;
          qfree();
          v18 = v32;
        }
        ++v20;
      }
      while ( v19 != v20 );
    }
    v33 = 0;
    qfree();
  }
  v31[0] = &unk_4CC6E0;
  if ( v31[1] )
  {
    v31[2] = 0;
    qfree();
  }
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree();
  }
  return v13;
}

