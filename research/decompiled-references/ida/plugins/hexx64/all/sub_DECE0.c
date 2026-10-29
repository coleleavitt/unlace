unsigned __int64 __fastcall sub_DECE0(__int64 a1, double a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  _DWORD *v4; // rbp
  unsigned int tinfo_size; // eax
  __int64 v6; // r13
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rsi
  size_t v11; // rax
  __int64 v12; // r14
  unsigned __int64 v13; // rdx
  char *v14; // r14
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  int v22; // ebx
  int v23; // ebx
  unsigned int v24; // [rsp+4h] [rbp-74h]
  __int64 v25; // [rsp+8h] [rbp-70h]
  __int64 v26; // [rsp+10h] [rbp-68h] BYREF
  __int128 v27; // [rsp+18h] [rbp-60h]
  int v28; // [rsp+28h] [rbp-50h]
  unsigned __int64 v29; // [rsp+38h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 208);
  v29 = __readfsqword(0x28u);
  v24 = *(_BYTE *)(v2 + 88) & 0xF0;
  if ( (*(_BYTE *)(v2 + 88) & 0xF0) == 0xC0 )
    v24 = *(_DWORD *)(v2 + 28);
  if ( v24 <= 0x10 )
    v24 = getinf();
  if ( v24 - 208 <= 0x2F )
  {
    sub_D1380(a1, v24);
    v3 = *(_QWORD *)(a1 + 208);
    v4 = *(_DWORD **)v3;
    v25 = *(_QWORD *)v3 + 80LL * *(_QWORD *)(v3 + 8);
    if ( *(_QWORD *)v3 != v25 )
    {
      do
      {
        v26 = 0;
        v27 = 0;
        tinfo_size = get_tinfo_size();
        sub_D2BA0(a1, (__int64)&v26, v4, tinfo_size, 1);
        v6 = v26;
        v7 = 4 * v27;
        v8 = (4 * (__int64)v27) >> 2;
        if ( v8 )
        {
          v9 = *(_QWORD *)(a1 + 16);
          v10 = *(_QWORD *)(a1 + 8);
          v11 = 0;
          v12 = 4 * v9;
          v13 = v8 + v9;
          if ( *(_QWORD *)(a1 + 24) < v13 )
          {
            v18 = qvector_reserve(a1 + 8, v10, v13, 4);
            *(_QWORD *)(a1 + 8) = v18;
            v10 = v18;
            v11 = 4LL * *(_QWORD *)(a1 + 16) - v12;
          }
          v14 = (char *)(v10 + v12);
          memmove(&v14[v7], v14, v11);
          v15 = 0;
          if ( v7 )
          {
            do
            {
              *(_DWORD *)&v14[v15] = *(_DWORD *)(v6 + v15);
              v15 += 4;
            }
            while ( v15 != v7 );
          }
          *(_QWORD *)(a1 + 16) += v8;
          v6 = v26;
        }
        if ( v6 )
        {
          *(_QWORD *)&v27 = 0;
          qfree(v6);
        }
        v4 += 20;
      }
      while ( (_DWORD *)v25 != v4 );
    }
    *(_DWORD *)a1 = 1;
    sub_D0DA0(a1, (__int64 *)(a1 + 88), (_QWORD *)(a1 + 8));
    sub_D5020(a1 + 216, *(_QWORD *)(*(_QWORD *)(a1 + 136) + 64LL), v24);
    v16 = *(_QWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 216) = v16;
    *(_DWORD *)(a1 + 4) = v16;
    if ( (int)v16 > 0 )
      sub_64190((__int64 *)(a1 + 144), v16 - 1, a2);
    *(_QWORD *)(a1 + 248) = -1;
    return v29 - __readfsqword(0x28u);
  }
  sub_D1010(a1, v24);
  sub_D61D0(a1, (unsigned int *)(a1 + 216), *(_QWORD *)(*(_QWORD *)(a1 + 136) + 64LL), *(_QWORD *)(a1 + 208), a2);
  v19 = *(_QWORD *)(a1 + 136);
  v26 = 0;
  v28 = 0;
  v27 = 0;
  if ( !(unsigned __int8)sub_2B69E0((__int64)&v26, *(_QWORD *)(v19 + 64)) )
  {
    *(_QWORD *)&v27 = -1;
    v26 = -1;
LABEL_31:
    v21 = *(int *)(a1 + 216);
    v22 = *(_DWORD *)(a1 + 216);
    if ( v21 < *(_QWORD *)(a1 + 16) )
      v22 += sub_DE000(
               (__int64 *)(a1 + 144),
               *(_QWORD *)(a1 + 136),
               *(_QWORD *)(*(_QWORD *)(a1 + 136) + 56LL),
               (_QWORD *)(a1 + 8),
               v21,
               1,
               nullptr);
    LODWORD(v26) = v22;
    if ( HIDWORD(v26) != -1 )
      goto LABEL_23;
    goto LABEL_34;
  }
  if ( (_DWORD)v26 == -1 )
    goto LABEL_31;
  if ( HIDWORD(v26) == -1 )
  {
LABEL_34:
    v23 = *(_DWORD *)(a1 + 220);
    if ( (*(_DWORD *)a1 & 0xFFFFFFFB) == 2 && (unsigned __int64)v23 < *(_QWORD *)(a1 + 40) )
      v23 += sub_DE000(
               (__int64 *)(a1 + 160),
               *(_QWORD *)(a1 + 136),
               *(_QWORD *)(*(_QWORD *)(a1 + 136) + 56LL),
               (_QWORD *)(a1 + 32),
               v23,
               1,
               nullptr);
    HIDWORD(v26) = v23;
  }
LABEL_23:
  if ( (int)v26 > 0 )
    sub_64190((__int64 *)(a1 + 144), v26 - 1, 0.0);
  if ( SHIDWORD(v26) > 0 )
    sub_64190((__int64 *)(a1 + 160), HIDWORD(v26) - 1, 0.0);
  v20 = -1;
  if ( (_QWORD)v27 != -1 )
    v20 = v27 - *(_QWORD *)(*(_QWORD *)(a1 + 208) + 56LL);
  *(_QWORD *)(a1 + 248) = v20;
  return v29 - __readfsqword(0x28u);
}

