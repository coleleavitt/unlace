__int64 __fastcall sub_AFF10(__int64 *a1, char **a2, __int64 a3)
{
  unsigned int v3; // r13d
  char *v5; // rbx
  char *v6; // r14
  char *v7; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v8[7]; // [rsp+10h] [rbp-38h] BYREF

  v8[1] = __readfsqword(0x28u);
  v7 = *a2;
  if ( !__CFADD__(a3, v7)
    && (v5 = &v7[a3], (unsigned __int8)sub_6B1B0(a1, (const void **)&v7, (unsigned __int64)&v7[a3]))
    && (unsigned __int8)sub_6B1B0(a1 + 3, (const void **)&v7, (unsigned __int64)v5)
    && (unsigned __int8)sub_6B1B0(a1 + 6, (const void **)&v7, (unsigned __int64)v5)
    && (v3 = sub_6B1B0(a1 + 9, (const void **)&v7, (unsigned __int64)v5), (_BYTE)v3)
    && (v6 = v7, v8[0] = v7, a1[12] = sub_196FF0(v8, v5), (unsigned __int64)v6 < v8[0]) )
  {
    *a2 = (char *)v8[0];
  }
  else
  {
    return 0;
  }
  return v3;
}
