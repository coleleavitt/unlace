unsigned __int64 sub_CA10(__int64 a1, ...)
{
  __int64 v1; // rax
  __int64 v2; // r8
  __int64 v3; // r9
  const char *v4; // rsi
  __int64 v6; // [rsp+0h] [rbp-108h] BYREF
  __int128 v7; // [rsp+8h] [rbp-100h]
  gcc_va_list va; // [rsp+20h] [rbp-E8h] BYREF
  unsigned __int64 v9; // [rsp+38h] [rbp-D0h]
  __int64 v10; // [rsp+48h] [rbp-C0h]
  __int64 v11; // [rsp+50h] [rbp-B8h]
  __int64 v12; // [rsp+58h] [rbp-B0h]
  __int64 v13; // [rsp+60h] [rbp-A8h]
  __int64 v14; // [rsp+68h] [rbp-A0h]

  va_start(va, a1);
  v10 = va_arg(va, _QWORD);
  v11 = va_arg(va, _QWORD);
  v12 = va_arg(va, _QWORD);
  v13 = va_arg(va, _QWORD);
  v14 = va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a1);
  v9 = __readfsqword(0x28u);
  v6 = 0;
  v7 = 0;
  v1 = qvector_reserve(&v6, 0, 7, 1, v13, v14);
  v6 = v1;
  *(_QWORD *)&v7 = 7;
  *(_DWORD *)v1 = 1430475588;
  *(_WORD *)(v1 + 4) = 8250;
  *(_BYTE *)(v6 + 6) = 0;
  sub_C950(&v6, a1, (const __m128i *)va, 8250, v2, v3);
  v4 = byte_190C8;
  if ( (_QWORD)v7 )
    v4 = (const char *)v6;
  sub_7F80((__int64)"%s", v4);
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree(v6);
  }
  return v9 - __readfsqword(0x28u);
}

