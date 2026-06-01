__int64 __fastcall sub_5F730(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *v3; // rax
  unsigned __int64 v4; // rbp
  const char *v5; // rbx
  unsigned int v6; // ebp
  __int64 v7; // rdi
  __int64 v8; // r13
  __int64 v9; // r12
  _QWORD *v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // r12
  __int64 v13; // rbx
  __int64 v14; // rax
  const void *v16; // r13
  void *v17; // rax
  __int64 v18; // rbx
  __int64 v19; // r14
  __int64 v20; // rdi
  __m128i si128; // xmm0
  __int64 v22; // rdx
  int v23; // ecx
  int v24; // r8d
  __int64 v25; // [rsp+0h] [rbp-20A8h] BYREF
  __int128 v26; // [rsp+8h] [rbp-20A0h]
  __int64 v27; // [rsp+18h] [rbp-2090h]
  __int128 v28; // [rsp+20h] [rbp-2088h]
  __int64 v29; // [rsp+30h] [rbp-2078h]
  __int128 v30; // [rsp+38h] [rbp-2070h]
  __int64 v31; // [rsp+48h] [rbp-2060h]
  __int128 v32; // [rsp+50h] [rbp-2058h]
  char v33[4096]; // [rsp+60h] [rbp-2048h] BYREF
  _BYTE v34[4104]; // [rsp+1060h] [rbp-1048h] BYREF
  unsigned __int64 v35; // [rsp+2068h] [rbp-40h]

  v1 = *(int *)(a1 + 1176);
  v35 = __readfsqword(0x28u);
  v3 = (_QWORD *)(qword_9AD30 + 144 * v1);
  if ( (_QWORD *)(a1 + 1032) != v3 + 6 )
  {
    v4 = v3[7];
    if ( v4 > 1 )
    {
      v16 = (const void *)v3[6];
      v17 = *(void **)(a1 + 1032);
      if ( *(_QWORD *)(a1 + 1048) < v4 )
      {
        v17 = (void *)qvector_reserve();
        *(_QWORD *)(a1 + 1032) = v17;
      }
      *(_QWORD *)(a1 + 1040) = v4;
      memmove(v17, v16, v4 - 1);
      *(_BYTE *)(*(_QWORD *)(a1 + 1032) + v4 - 1) = 0;
      v3 = (_QWORD *)(qword_9AD30 + 144LL * *(int *)(a1 + 1176));
    }
    else
    {
      *(_QWORD *)(a1 + 1040) = 0;
    }
  }
  if ( !v3[10] )
    return 0;
  v5 = (const char *)v3[9];
  if ( !*v5 )
    return 0;
  if ( !getsysfile() )
  {
    sub_14020((__int64)"AUTOHIDE REGISTRY\nFailed to locate %s", v5);
    return 0;
  }
  v26 = 0;
  v28 = 0;
  v25 = 0;
  v27 = 0;
  v29 = 0;
  v31 = 0;
  v30 = 0;
  v32 = 0;
  qstrncpy();
  if ( (unsigned __int8)qfileexist() && (v6 = sub_6C4E0(&v25, v34, sub_4C2C0, v33), (_BYTE)v6) )
  {
    v18 = *(_QWORD *)(a1 + 1136);
    v19 = 0;
    *(_QWORD *)(a1 + 1064) = 0;
    *(_QWORD *)(a1 + 1088) = 0;
    *(_QWORD *)(a1 + 1112) = 0;
    if ( v18 )
    {
      do
      {
        v20 = 9 * v19++;
        sub_30730((_QWORD *)(*(_QWORD *)(a1 + 1128) + 16 * v20));
      }
      while ( v18 != v19 );
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_823C0);
    *(_QWORD *)(a1 + 1136) = 0;
    *(__m128i *)(a1 + 1152) = si128;
    sub_56340((_DWORD *)a1, (_QWORD *)(a1 + 1056), v33, &v25);
    if ( (unsigned int)sub_5DC90(a1, a1 + 1056, v22, v23, v24) == 1 )
    {
      *(_BYTE *)(a1 + 1170) = 1;
      goto LABEL_10;
    }
  }
  else
  {
    sub_14020((__int64)"AUTOHIDE REGISTRY\nFailed to parse %s", v5);
  }
  v6 = 0;
LABEL_10:
  v7 = v31;
  if ( v31 )
  {
    v8 = v32;
    if ( (_QWORD)v32 )
    {
      v9 = 0;
      do
      {
        v10 = (_QWORD *)(v7 + 48 * v9);
        if ( v10[3] )
        {
          v10[4] = 0;
          qfree();
        }
        if ( *v10 )
        {
          v10[1] = 0;
          qfree();
        }
        ++v9;
        v7 = v31;
      }
      while ( v8 != v9 );
    }
    *(_QWORD *)&v32 = 0;
    qfree();
  }
  v11 = v29;
  if ( v29 )
  {
    v12 = v30;
    if ( (_QWORD)v30 )
    {
      v13 = 0;
      do
      {
        v14 = 3 * v13++;
        sub_4EFC0((_QWORD *)(32 * v14 + v11));
        v11 = v29;
      }
      while ( v12 != v13 );
    }
    *(_QWORD *)&v30 = 0;
    qfree();
  }
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    qfree();
  }
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree();
  }
  return v6;
}

