__int64 __fastcall sub_8F10(__int64 a1, __int64 a2, double a3, double a4, __m128 a5)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // rsi
  signed __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  char *v13; // rbp
  char *v14; // rax
  unsigned int v15; // [rsp+Ch] [rbp-3Ch] BYREF
  char *s[7]; // [rsp+10h] [rbp-38h] BYREF

  v5 = *(_QWORD *)(a1 + 616);
  s[3] = (char *)__readfsqword(0x28u);
  v6 = netnode_supval(*(_QWORD *)(v5 + 144), a2, &v15, 4, 115);
  result = 0;
  if ( v6 == 4 )
  {
    sub_4D60(a1, 0x80000000LL, (__int64)"}");
    v8 = a1;
    sub_7630((__int64)s, a1, v15, a3, a4, a5);
    v13 = s[0];
    if ( s[1] > (_BYTE *)&dword_0 + 1 )
    {
      v8 = 46;
      v14 = strrchr(s[0], 46);
      if ( v14 )
      {
        v9 = v14 - v13;
        if ( v14 - v13 != -1 )
        {
          if ( v14[1] )
          {
            v8 = 0;
            sub_4D60(a1, 0, (__int64)"}");
          }
        }
      }
    }
    if ( v13 )
      qfree(v13, v8, v9, v10, v11, v12);
    return 1;
  }
  return result;
}
