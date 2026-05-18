unsigned __int64 __fastcall sub_183C40(__int64 a1, __int64 a2, char a3)
{
  char v3; // dl
  __int64 v4; // rax
  _QWORD *v6; // r12
  __int64 v7; // [rsp+0h] [rbp-68h] BYREF
  __int64 v8; // [rsp+8h] [rbp-60h]
  _QWORD v9[2]; // [rsp+10h] [rbp-58h] BYREF
  _QWORD v10[3]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v7 = 1;
  v8 = 0;
  sub_183B90(a1, (__int64)&v7, a3);
  if ( *(_WORD *)(*(_QWORD *)(a1 + 560) + 24LL) == 63 )
  {
    v9[0] = 1;
    v9[1] = 0;
    sub_183C40(a1, v9, 1);
    if ( *(_WORD *)(*(_QWORD *)(a1 + 560) + 24LL) != 58 )
      sub_17E010(a1);
    v6 = v10;
    v10[0] = 1;
    v10[1] = 0;
    sub_183C40(a1, v10, 1);
    if ( v8 )
      v6 = v9;
    v3 = *(_BYTE *)v6;
    v4 = v6[1];
  }
  else
  {
    v3 = v7;
    v4 = v8;
  }
  *(_BYTE *)a2 = v3;
  *(_QWORD *)(a2 + 8) = v4;
  return v11 - __readfsqword(0x28u);
}
