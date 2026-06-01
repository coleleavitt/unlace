__int64 __fastcall sub_3B560(__int64 a1, __int64 a2, int a3, __int64 a4, const char *a5, int a6)
{
  __int64 result; // rax
  int v8; // edi
  int v9; // edi
  const __m128i *v10; // rcx
  __int64 v11; // rdi
  int v12; // eax
  void *v13; // rbp
  __int64 v14; // r12
  void *v15; // rdi
  __int64 v16; // rax
  unsigned __int8 v17; // [rsp+Fh] [rbp-79h]
  void *src; // [rsp+10h] [rbp-78h] BYREF
  __int128 v19; // [rsp+18h] [rbp-70h]
  int v20; // [rsp+28h] [rbp-60h]
  _DWORD v21[2]; // [rsp+30h] [rbp-58h] BYREF
  __m128i v22; // [rsp+38h] [rbp-50h]
  int v23; // [rsp+48h] [rbp-40h]
  unsigned __int64 v24; // [rsp+58h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 88) <= 1u || *(_QWORD *)(a4 + 8) != 16 )
    return 0;
  v8 = *(_DWORD *)(a1 + 16);
  v23 = 0;
  v22 = 0;
  if ( v8 )
  {
    if ( v8 == 13 )
    {
      v9 = 12;
      if ( *(_BYTE *)(a1 + 24) )
        v9 = 16777228;
    }
    else
    {
      v9 = -1;
    }
  }
  else
  {
    v9 = 7;
    if ( *(_BYTE *)(a1 + 24) )
      v9 = 16777223;
  }
  v10 = *(const __m128i **)a4;
  v21[0] = v9;
  v21[1] = a3;
  v11 = *(_QWORD *)(a1 + 80);
  v20 = a6;
  src = nullptr;
  v22 = _mm_loadu_si128(v10);
  v19 = 0;
  if ( a3 == 11 )
  {
    v12 = sub_3B2D0(
            v11,
            v21,
            a5,
            (__int64 (__fastcall *)(__m128i *, __int64, const char *, __int64))sub_3AF50,
            (__int64)&src);
    goto LABEL_12;
  }
  if ( a3 == 12 )
  {
    if ( v11 )
    {
      v12 = sub_3A5D0(v11, v21, sub_3AF50, &src);
      goto LABEL_12;
    }
    return 0;
  }
  if ( a3 != 2 )
    return 0;
  v12 = sub_3A740(v11, (__int64)v21, (__int64)sub_3AF50, (__int64)&src);
LABEL_12:
  v13 = src;
  if ( v12 )
  {
    result = 0;
  }
  else if ( a2 )
  {
    v14 = v19;
    if ( (unsigned __int64)v19 < 2 )
    {
      *(_QWORD *)(a2 + 8) = 0;
      result = 1;
    }
    else
    {
      v15 = *(void **)a2;
      if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)v19 )
      {
        v16 = qvector_reserve();
        *(_QWORD *)a2 = v16;
        v15 = (void *)v16;
      }
      *(_QWORD *)(a2 + 8) = v14;
      memmove(v15, v13, v14 - 1);
      *(_BYTE *)(*(_QWORD *)a2 + v14 - 1) = 0;
      result = 1;
      v13 = src;
    }
  }
  else
  {
    result = 1;
  }
  if ( v13 )
  {
    v17 = result;
    *(_QWORD *)&v19 = 0;
    qfree();
    return v17;
  }
  return result;
}

