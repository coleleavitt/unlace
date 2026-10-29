_WORD *__fastcall sub_D43F0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _WORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  _WORD *v11; // rbx

  v6 = sub_CD830(a1, a2, a3, a4, a5, a6);
  v10 = (unsigned __int16)v6[10];
  v11 = v6;
  if ( (v10 & 0x2000) != 0 )
  {
    BYTE1(v10) = BYTE1(v10) & 0x9F | 0x40;
    v6[10] = v10;
  }
  sub_D4310((__int64)a1, a2, v10, v7, v8, v9);
  return v11;
}
