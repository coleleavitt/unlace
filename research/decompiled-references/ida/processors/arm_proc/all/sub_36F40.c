unsigned __int64 __fastcall sub_36F40(__int64 a1, signed int a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  int v6; // eax
  int v7; // r12d
  __int64 v8; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  int dtype_size; // eax
  unsigned int v15; // ecx
  unsigned int v16; // eax
  char v17; // dl
  int v18; // r12d
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // [rsp+8h] [rbp-70h]
  unsigned __int8 v22; // [rsp+8h] [rbp-70h]
  int v23; // [rsp+Ch] [rbp-6Ch]
  unsigned int v24; // [rsp+Ch] [rbp-6Ch]
  __int64 v25; // [rsp+10h] [rbp-68h] BYREF
  __int64 v26; // [rsp+18h] [rbp-60h]
  __int128 v27; // [rsp+20h] [rbp-58h]
  unsigned __int64 v28; // [rsp+38h] [rbp-40h]

  v3 = *(unsigned __int16 *)(a3 + 6);
  v4 = *(_QWORD *)(a3 + 8);
  v28 = __readfsqword(0x28u);
  v6 = *(char *)(a3 + 34);
  if ( v3 - 129 > 0x41 )
  {
    if ( v4 )
    {
      v7 = 0;
      v21 = v6 - 1;
      v23 = *(char *)(a3 + 33) + 1;
      do
      {
        v8 = *(_QWORD *)a1;
        v27 = 0;
        v25 = v8;
        v26 = 0;
        sub_3A4C0(&v25, v3, v21);
        sub_36DB0(a1, a2, (__int64)&v25, 7, 0);
        if ( v26 )
        {
          *(_QWORD *)&v27 = 0;
          qfree();
        }
        ++v7;
        v3 += v23;
      }
      while ( (unsigned __int64)v7 < *(_QWORD *)(a3 + 8) );
      return v28 - __readfsqword(0x28u);
    }
    if ( (char)v6 <= 0 )
      return v28 - __readfsqword(0x28u);
    v10 = *(_QWORD *)a1;
    v26 = 0;
    v25 = v10;
    v11 = *(_QWORD *)(a1 + 16);
    v27 = 0;
    sub_3C4E0(&v25, v3, v11 + 8 * (5LL * a2 + 5), 1);
    if ( v3 - 61 <= 0x1F )
    {
      get_dtype_size();
    }
    else if ( v3 - 45 <= 0xF && (unsigned __int64)get_dtype_size() <= 0xF )
    {
      v12 = 8;
      goto LABEL_12;
    }
    v12 = 7;
LABEL_12:
    sub_36DB0(a1, a2, (__int64)&v25, v12, 0);
    if ( v26 )
    {
      *(_QWORD *)&v27 = 0;
      qfree();
    }
    v13 = **(_QWORD **)(a1 + 8) + 12LL * *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) - 12;
    dtype_size = get_dtype_size();
    v15 = *(unsigned __int16 *)(v13 + 6);
    v16 = 8 * dtype_size;
    if ( v16 < v15 && v15 >= v16 + (unsigned __int16)(v16 * (*(char *)(a3 + 34) - 1)) )
    {
      *(_WORD *)(v13 + 4) += v16 * (*(char *)(a3 + 34) - 1);
      *(_WORD *)(v13 + 6) = v16;
    }
    return v28 - __readfsqword(0x28u);
  }
  v22 = 10;
  v17 = 10;
  if ( (unsigned int)(v6 + 1) <= 1 )
  {
    v22 = *(_BYTE *)(a3 + 5);
    v17 = v22;
  }
  v18 = 0;
  v24 = v17;
  if ( v4 )
  {
    do
    {
      v19 = (unsigned int)*(char *)(a3 + 32);
      v26 = 0;
      if ( v3 == 195 )
        v3 = 163;
      v20 = *(_QWORD *)a1;
      v27 = 0;
      v25 = v20;
      sub_3C2A0(&v25, v3, v24, v19, 0xFFFFFFFFLL);
      sub_36DB0(a1, a2, (__int64)&v25, v22, 0);
      if ( v26 )
      {
        *(_QWORD *)&v27 = 0;
        qfree();
      }
      ++v18;
      ++v3;
    }
    while ( (unsigned __int64)v18 < *(_QWORD *)(a3 + 8) );
  }
  return v28 - __readfsqword(0x28u);
}

