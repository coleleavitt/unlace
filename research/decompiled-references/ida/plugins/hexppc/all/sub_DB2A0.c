unsigned __int64 __fastcall sub_DB2A0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  _DWORD *v3; // rbp
  unsigned int tinfo_size; // eax
  __int64 v5; // r13
  __int64 v6; // rbx
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rsi
  size_t v10; // rax
  __int64 v11; // r14
  char *v12; // r14
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  int v20; // ebx
  int v21; // ebx
  unsigned int v22; // [rsp+4h] [rbp-74h]
  __int64 v23; // [rsp+8h] [rbp-70h]
  __int64 v24; // [rsp+10h] [rbp-68h] BYREF
  __int128 v25; // [rsp+18h] [rbp-60h]
  int v26; // [rsp+28h] [rbp-50h]
  unsigned __int64 v27; // [rsp+38h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 208);
  v27 = __readfsqword(0x28u);
  v22 = *(_BYTE *)(v1 + 88) & 0xF0;
  if ( (*(_BYTE *)(v1 + 88) & 0xF0) == 0xC0 )
    v22 = *(_DWORD *)(v1 + 28);
  if ( v22 <= 0x10 )
    v22 = getinf();
  if ( v22 - 208 <= 0x2F )
  {
    sub_CD940(a1, v22);
    v2 = *(_QWORD *)(a1 + 208);
    v3 = *(_DWORD **)v2;
    v23 = *(_QWORD *)v2 + 80LL * *(_QWORD *)(v2 + 8);
    if ( *(_QWORD *)v2 != v23 )
    {
      do
      {
        v24 = 0;
        v25 = 0;
        tinfo_size = get_tinfo_size();
        sub_CF160(a1, &v24, v3, tinfo_size, 1);
        v5 = v24;
        v6 = 4 * v25;
        v7 = (4 * (__int64)v25) >> 2;
        if ( v7 )
        {
          v8 = *(_QWORD *)(a1 + 16);
          v9 = *(_QWORD *)(a1 + 8);
          v10 = 0;
          v11 = 4 * v8;
          if ( *(_QWORD *)(a1 + 24) < (unsigned __int64)(v7 + v8) )
          {
            v16 = qvector_reserve();
            *(_QWORD *)(a1 + 8) = v16;
            v9 = v16;
            v10 = 4LL * *(_QWORD *)(a1 + 16) - v11;
          }
          v12 = (char *)(v9 + v11);
          memmove(&v12[v6], v12, v10);
          v13 = 0;
          if ( v6 )
          {
            do
            {
              *(_DWORD *)&v12[v13] = *(_DWORD *)(v5 + v13);
              v13 += 4;
            }
            while ( v13 != v6 );
          }
          *(_QWORD *)(a1 + 16) += v7;
          v5 = v24;
        }
        if ( v5 )
        {
          *(_QWORD *)&v25 = 0;
          qfree();
        }
        v3 += 20;
      }
      while ( (_DWORD *)v23 != v3 );
    }
    *(_DWORD *)a1 = 1;
    sub_CD360(a1, (__int64 *)(a1 + 88), (_QWORD *)(a1 + 8));
    sub_D15E0(a1 + 216, *(_QWORD *)(*(_QWORD *)(a1 + 136) + 64LL), v22);
    v14 = *(_QWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 216) = v14;
    *(_DWORD *)(a1 + 4) = v14;
    if ( (int)v14 > 0 )
      sub_60750((__int64 *)(a1 + 144), v14 - 1);
    *(_QWORD *)(a1 + 248) = -1;
    return v27 - __readfsqword(0x28u);
  }
  sub_CD5D0(a1, v22);
  sub_D2790(a1, (unsigned int *)(a1 + 216), *(_QWORD *)(*(_QWORD *)(a1 + 136) + 64LL), *(_QWORD *)(a1 + 208));
  v17 = *(_QWORD *)(a1 + 136);
  v24 = 0;
  v26 = 0;
  v25 = 0;
  if ( !(unsigned __int8)sub_2B2D60(&v24, *(_QWORD *)(v17 + 64), *(_QWORD *)(*(_QWORD *)(v17 + 56) + 24LL)) )
  {
    *(_QWORD *)&v25 = -1;
    v24 = -1;
LABEL_31:
    v19 = *(int *)(a1 + 216);
    v20 = *(_DWORD *)(a1 + 216);
    if ( v19 < *(_QWORD *)(a1 + 16) )
      v20 += sub_DA5C0(
               (__int64 *)(a1 + 144),
               *(_QWORD *)(a1 + 136),
               *(_QWORD *)(*(_QWORD *)(a1 + 136) + 56LL),
               (_QWORD *)(a1 + 8),
               v19,
               1,
               nullptr);
    LODWORD(v24) = v20;
    if ( HIDWORD(v24) != -1 )
      goto LABEL_23;
    goto LABEL_34;
  }
  if ( (_DWORD)v24 == -1 )
    goto LABEL_31;
  if ( HIDWORD(v24) == -1 )
  {
LABEL_34:
    v21 = *(_DWORD *)(a1 + 220);
    if ( (*(_DWORD *)a1 & 0xFFFFFFFB) == 2 && (unsigned __int64)v21 < *(_QWORD *)(a1 + 40) )
      v21 += sub_DA5C0(
               (__int64 *)(a1 + 160),
               *(_QWORD *)(a1 + 136),
               *(_QWORD *)(*(_QWORD *)(a1 + 136) + 56LL),
               (_QWORD *)(a1 + 32),
               v21,
               1,
               nullptr);
    HIDWORD(v24) = v21;
  }
LABEL_23:
  if ( (int)v24 > 0 )
    sub_60750((__int64 *)(a1 + 144), v24 - 1);
  if ( SHIDWORD(v24) > 0 )
    sub_60750((__int64 *)(a1 + 160), HIDWORD(v24) - 1);
  v18 = -1;
  if ( (_QWORD)v25 != -1 )
    v18 = v25 - *(_QWORD *)(*(_QWORD *)(a1 + 208) + 56LL);
  *(_QWORD *)(a1 + 248) = v18;
  return v27 - __readfsqword(0x28u);
}

