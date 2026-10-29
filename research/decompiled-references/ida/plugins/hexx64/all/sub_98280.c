__int64 __fastcall sub_98280(__int64 a1, unsigned int *a2)
{
  __int64 v3; // r15
  int *v5; // r14
  int v6; // eax
  unsigned __int8 v7; // al
  __int64 v8; // r10
  unsigned __int8 *v9; // r14
  signed int v10; // eax
  __int64 v11; // rdi
  bool v12; // al
  unsigned __int8 v13; // al
  __int64 v14; // r10
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // edx
  unsigned __int8 v18; // [rsp+8h] [rbp-80h]
  __int64 v19; // [rsp+8h] [rbp-80h]
  __int64 v20; // [rsp+8h] [rbp-80h]
  unsigned __int8 v21; // [rsp+8h] [rbp-80h]
  unsigned __int8 *v22; // [rsp+18h] [rbp-70h] BYREF
  unsigned __int64 v23; // [rsp+20h] [rbp-68h] BYREF
  __m128i *v24; // [rsp+28h] [rbp-60h]
  _QWORD v25[11]; // [rsp+30h] [rbp-58h] BYREF

  v25[3] = __readfsqword(0x28u);
  if ( (a2[1] & 0x10) != 0 || *((_BYTE *)a2 + 48) != 4 )
    return 0;
  v22 = nullptr;
  v3 = *((_QWORD *)a2 + 7);
  if ( *(_DWORD *)v3 == 12 )
  {
    v3 = sub_11C8E0(*((_QWORD *)a2 + 7), &v22, 9);
    if ( !v3 )
      return 0;
  }
  else if ( *(_DWORD *)v3 != 9 )
  {
    return 0;
  }
  if ( *(_BYTE *)(v3 + 32) != 4 )
    return 0;
  v5 = *(int **)(v3 + 40);
  v24 = nullptr;
  v23 = 0xFFFFFFFF00000000LL;
  v6 = *v5;
  if ( *v5 == 35 )
  {
    v8 = (__int64)(v5 + 8);
    v9 = (unsigned __int8 *)(v5 + 12);
  }
  else if ( v6 == 36 )
  {
    v8 = (__int64)(v5 + 12);
    v9 = (unsigned __int8 *)(v5 + 8);
  }
  else
  {
    if ( v6 != 33 || !(unsigned __int8)sub_11FD80((char *)v5 + 48, v25, 0) || v25[0] )
      goto LABEL_10;
    sub_125180((__int64)&v23, (unsigned __int8 *)v5 + 48);
    v8 = (__int64)(v5 + 8);
    v9 = (unsigned __int8 *)&v23;
    v24[1] = _mm_unpacklo_epi64((__m128i)1uLL, (__m128i)1uLL);
  }
  if ( *(_BYTE *)v8 != 4 || **(_DWORD **)(v8 + 8) != 9 )
  {
    v10 = a2[9];
    if ( v10 == *(_DWORD *)(v8 + 4) )
    {
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
      if ( v10 < *(_DWORD *)(v11 + 88)
        || v10 == *(_DWORD *)(v11 + 88) && (v19 = v8, v12 = sub_11CBB0(v11, *a2), v8 = v19, v12) )
      {
        v20 = v8;
        v13 = sub_157240(a1, v8, (__int64)(a2 + 8));
        if ( v13 )
        {
          v14 = v20;
          v21 = v13;
          sub_157210(a1, (__int64)a2, v14, (__int64)a2, (__int64)(a2 + 8), 0);
          if ( v22 )
          {
            sub_123A40((__int64)v25, v22, v15, v16);
            sub_157210(a1, (__int64)a2, (__int64)v9, (__int64)a2, (__int64)v25, 0);
            sub_11CA10((char *)a2 + 48, (char *)v25);
          }
          else
          {
            sub_123A40((__int64)v25, v9, v15, v16);
            sub_11CA10((char *)(v3 + 32), (char *)v25);
            v17 = a2[9];
            *(_DWORD *)(v3 + 68) = v17;
            a2[13] = v17;
          }
          sub_11CDA0((__int64)v25);
          v7 = v21;
          goto LABEL_11;
        }
      }
    }
  }
LABEL_10:
  v7 = 0;
LABEL_11:
  v18 = v7;
  sub_11CDA0((__int64)&v23);
  return v18;
}

