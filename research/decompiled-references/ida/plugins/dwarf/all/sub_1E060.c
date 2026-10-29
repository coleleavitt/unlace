unsigned __int64 sub_1E060(__int64 a1, ...)
{
  _DWORD *v1; // rax
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  _DWORD *v6; // [rsp+0h] [rbp-108h] BYREF
  __int128 v7; // [rsp+8h] [rbp-100h]
  gcc_va_list va; // [rsp+20h] [rbp-E8h] BYREF
  unsigned __int64 v9; // [rsp+38h] [rbp-D0h]

  va_start(va, a1);
  v9 = __readfsqword(0x28u);
  v6 = nullptr;
  v7 = 0;
  v1 = (_DWORD *)qvector_reserve(&v6, 0, 8, 1);
  v6 = v1;
  *(_QWORD *)&v7 = 8;
  *v1 = 1380013892;
  *(_DWORD *)((char *)v1 + 3) = 540690002;
  *((_BYTE *)v6 + 7) = 0;
  sub_1D680((__int64 *)&v6, a1, (const __m128i *)va, v2, v3, v4);
  sub_17040();
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree(v6);
  }
  return v9 - __readfsqword(0x28u);
}

