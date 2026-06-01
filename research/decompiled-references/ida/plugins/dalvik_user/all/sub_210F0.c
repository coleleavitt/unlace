__int64 sub_210F0(__int64 *a1, __int64 a2, ...)
{
  const char *v2; // rbp
  __int64 v3; // r13
  const char *v4; // rsi
  unsigned int v5; // ebx
  __int64 v7; // [rsp+0h] [rbp-128h] BYREF
  __int64 v8; // [rsp+8h] [rbp-120h] BYREF
  const char *v9; // [rsp+10h] [rbp-118h] BYREF
  __int64 v10; // [rsp+18h] [rbp-110h]
  __int64 v11; // [rsp+20h] [rbp-108h]
  gcc_va_list va; // [rsp+30h] [rbp-F8h] BYREF
  unsigned __int64 v13; // [rsp+48h] [rbp-E0h]

  va_start(va, a2);
  v13 = __readfsqword(0x28u);
  v11 = 0;
  v9 = nullptr;
  v10 = 0;
  sub_1FB90((__int64)&v9);
  v2 = v9;
  v3 = v10;
  v7 = 0;
  v8 = 0;
  if ( !(unsigned __int8)sub_1D840((unsigned __int8 *)&v7, (__int64)a1) )
    goto LABEL_5;
  v4 = nptr;
  if ( v3 )
    v4 = v2;
  if ( (unsigned __int8)sub_1E0A0((__int64)&v7, v4) )
    v5 = sub_1FF60((__int64)&v7, a1);
  else
LABEL_5:
    v5 = 0;
  if ( byte_7FAF8 )
  {
    if ( !(_BYTE)v7 )
      goto LABEL_8;
    sub_5D660(&v8, 0xFFFFFFFFLL);
  }
  LOWORD(v7) = 0;
LABEL_8:
  if ( v2 )
    qfree();
  return v5;
}

