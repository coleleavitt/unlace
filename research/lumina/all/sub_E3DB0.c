unsigned __int64 __fastcall sub_E3DB0(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  __int64 *v6; // r13
  unsigned int v7; // edx
  char *v9; // r15
  int v10; // eax
  char *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-40h]

  v6 = *(__int64 **)(a1 + 16);
  v14 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 5) & 4) != 0 )
  {
    v7 = *(_DWORD *)(a2 + 8);
    if ( a3 )
      v7 = -v7;
    sub_E1710((__int64)v6, 71, v7, a4, 0);
    return __readfsqword(0x28u) ^ v14;
  }
  v9 = *(char **)(a2 + 8);
  v10 = sub_D4600((__int64)v9, &v13);
  if ( (((unsigned __int8)a3 ^ 1) & (v10 == 3)) == 0 && v10 != 2 )
  {
    if ( a3 )
    {
      if ( v13 == 0x8000000000000000LL )
        goto LABEL_8;
      v12 = -v13;
      if ( v10 == 3 )
        v12 = 0x8000000000000000LL;
      v13 = v12;
    }
    sub_E2DD0(v6, 72, a4, &v13, 0xFFFFFFF3);
    return __readfsqword(0x28u) ^ v14;
  }
LABEL_8:
  if ( !v9 || (unsigned int)sub_CA590((unsigned __int8 *)v9, "0x", 2) )
  {
    sub_E2E50(v6, v9, a3, a4);
  }
  else
  {
    v11 = "-";
    if ( !a3 )
      v11 = "";
    sub_DBD10(a1, "hex literal too big: %s%#T", v11, a2);
  }
  return __readfsqword(0x28u) ^ v14;
}
