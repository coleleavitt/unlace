__int64 __fastcall sub_A140(__int64 a1, const char *a2, __int64 (__fastcall *a3)(const char *, __int64), __int64 a4)
{
  char v6; // dl
  __int64 result; // rax
  char v8; // r13
  char v9; // r12
  int v10; // [rsp+Ch] [rbp-3Ch] BYREF
  const char *v11[7]; // [rsp+10h] [rbp-38h] BYREF

  v11[1] = (const char *)__readfsqword(0x28u);
  v10 = 0;
  v6 = sub_A060(a1, v11, &v10, a2);
  result = 0;
  if ( v6 )
  {
    v8 = v10;
    v9 = BYTE2(v10);
    return (*(__int64 *)(a3(v11[0], a4) + 8) >> v8) & ~(-1LL << v9);
  }
  return result;
}

