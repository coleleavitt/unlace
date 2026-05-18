__int64 __fastcall sub_6EE80(__int64 a1, char **a2, __int64 a3)
{
  unsigned int v3; // r13d
  char *v5; // rbx
  unsigned int v6; // eax
  char *v7; // r14
  char *v8; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v9[7]; // [rsp+10h] [rbp-38h] BYREF

  v9[1] = __readfsqword(0x28u);
  v8 = *a2;
  if ( !__CFADD__(a3, v8)
    && (v5 = &v8[a3], sub_6C650((_DWORD *)a1, (unsigned __int64 *)&v8, (__int64)&v8[a3]))
    && (unsigned __int8)sub_6B1B0((__int64 *)(a1 + 8), (const void **)&v8, (unsigned __int64)v5)
    && (LOBYTE(v6) = sub_6EB50(a1 + 32, &v8, v5 - v8), v3 = v6, (_BYTE)v6)
    && (v7 = v8, v9[0] = v8, *(_QWORD *)(a1 + 152) = sub_196FF0(v9, v5), (unsigned __int64)v7 < v9[0]) )
  {
    *a2 = (char *)v9[0];
  }
  else
  {
    return 0;
  }
  return v3;
}
