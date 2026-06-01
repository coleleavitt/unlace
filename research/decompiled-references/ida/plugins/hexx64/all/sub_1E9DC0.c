unsigned __int64 __fastcall sub_1E9DC0(__int64 a1, const __m128i *a2, int *a3)
{
  int v3; // r13d
  int v5; // r15d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 *v8; // r14
  int v10; // [rsp+Ch] [rbp-7Ch] BYREF
  __m128i v11; // [rsp+10h] [rbp-78h] BYREF
  _BYTE v12[40]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v13; // [rsp+48h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 24) )
    return v13 - __readfsqword(0x28u);
  v3 = *a3;
  if ( *a3 == 1 )
    return v13 - __readfsqword(0x28u);
  if ( !v3 )
  {
LABEL_11:
    sub_13FCB0((unsigned __int64 **)(a1 + 8));
    *(_BYTE *)(a1 + 24) = 1;
    return v13 - __readfsqword(0x28u);
  }
  v5 = a3[1];
  v8 = sub_1E1BA0(a1, &v10, (__int64)a2, v5);
  if ( v10 == 1 )
  {
    if ( !(unsigned __int8)sub_3147B0((__int64)(v8 + 5), a3) || *((_DWORD *)v8 + 10) )
      return v13 - __readfsqword(0x28u);
    goto LABEL_11;
  }
  if ( v10 == 2 )
  {
    if ( v3 == 8 || !(unsigned __int8)sub_1E6640(a1, (unsigned __int64)v8, a2, (__int64)a3) )
      return sub_1E47E0(a1, (unsigned __int64)v8, a2, v5);
  }
  else
  {
    v11 = _mm_loadu_si128(a2);
    sub_312C40((__int64)v12, (__int64)a3, v6, v7);
    sub_1E9A40((__m128i *)(a1 + 8), (unsigned __int64)v8, &v11);
    sub_312B80((__int64)v12);
  }
  return v13 - __readfsqword(0x28u);
}

