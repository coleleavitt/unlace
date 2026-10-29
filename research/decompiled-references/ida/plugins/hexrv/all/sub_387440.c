__int64 __fastcall sub_387440(__int64 a1, __int64 a2, __int64 a3)
{
  char **v3; // rax
  char *v4; // rbp
  bool v5; // zf
  bool v6; // sf
  bool v7; // of
  int v9; // [rsp+0h] [rbp-58h] BYREF
  __int64 v10; // [rsp+8h] [rbp-50h]
  _DWORD v11[4]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v12; // [rsp+30h] [rbp-28h]
  unsigned __int64 v13; // [rsp+38h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  sub_2535E0(a1, a2, a3);
  if ( (unsigned __int64)(int)a2 >= *(_QWORD *)(a1 + 136) )
    return 0;
  v3 = (char **)(*(_QWORD *)(a1 + 128) + 32LL * (int)a2);
  v4 = *v3;
  if ( !*v3 || (unsigned int)sub_381020(*v3, 0) )
    return 0;
  v7 = __OFSUB__(*(_DWORD *)(a1 + 152), (_DWORD)a2);
  v5 = *(_DWORD *)(a1 + 152) == (_DWORD)a2;
  v6 = *(_DWORD *)(a1 + 152) - (int)a2 < 0;
  v11[0] = 0;
  v9 = 0;
  sub_385510(a1, v4, 0, v6 ^ v7 | v5, 0, (__int64)&v9, (__int64)v11);
  if ( v9 == 1 )
  {
    if ( v12 > 0x44 )
    {
      if ( v12 != 73 && (v12 & 0x40000000) == 0 )
        return v10;
    }
    else if ( v12 <= 0x42 )
    {
      return v10;
    }
    return 0;
  }
  if ( v9 == 3 )
    return a1 + 16;
  else
    return *(_BYTE *)tag_skipcodes() == 125;
}

