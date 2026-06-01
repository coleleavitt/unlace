__int64 __fastcall sub_1DF40(__int64 a1, char **a2, __int64 a3)
{
  char *v3; // rdi
  __int64 v5; // r12
  __int64 v6; // r10
  char v7; // al
  unsigned int v8; // eax
  unsigned int v9; // edx
  __int64 v11; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v12[5]; // [rsp+10h] [rbp-28h] BYREF

  v3 = *a2;
  v12[1] = __readfsqword(0x28u);
  v12[0] = 0;
  v5 = sub_1D7D0(v3, 0, 0);
  v11 = *(int *)(a3 + 12);
  v7 = sub_86990(v6, v3, (unsigned int)v5, 6, &v11, v12, *(_QWORD *)a3);
  *(_DWORD *)(a3 + 12) = v11;
  if ( (v7 & 1) != 0 )
  {
    *a2 += v5;
    v8 = *(_DWORD *)(a3 + 12);
    v9 = 0;
    if ( v8 )
    {
      if ( v8 > 0xFFFF )
      {
        v9 = 1028;
        if ( v8 == (__int16)v8 )
          return 257;
      }
      else if ( v8 > 0xFF )
      {
        v9 = 1026;
        if ( v8 == (__int16)v8 )
          return 514;
      }
      else
      {
        v9 = 257;
        if ( v8 != (char)v8 )
          return 513;
      }
    }
  }
  else
  {
    return (unsigned int)-1;
  }
  return v9;
}

