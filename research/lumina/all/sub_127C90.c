unsigned __int64 __fastcall sub_127C90(__int64 a1, __int64 a2, unsigned int a3, double a4)
{
  unsigned int v5; // [rsp+Ch] [rbp-5Ch]
  _BYTE v6[8]; // [rsp+10h] [rbp-58h] BYREF
  __int64 (__fastcall *v7)(__int64, __int64); // [rsp+18h] [rbp-50h]
  __int64 (__fastcall *v8)(__int64); // [rsp+20h] [rbp-48h]
  __int16 v9; // [rsp+34h] [rbp-34h]
  int v10; // [rsp+38h] [rbp-30h]
  unsigned __int64 v11; // [rsp+48h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 35)
    && ((v10 = 0, v9 = 2, v7 = sub_CE7B0, v8 = sub_C43E0, !a2) || (v5 = a3, sub_CDCD0((__int64)v6, a2), a3 = v5, v9)) )
  {
    sub_127A90(a1, a2, a3, a4);
  }
  else
  {
    sub_127370((__int64 *)a1, a2, a3, a4);
  }
  return __readfsqword(0x28u) ^ v11;
}
