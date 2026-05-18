__int64 __fastcall sub_162780(__int64 a1, __int64 **a2, __int64 a3, double a4)
{
  _BYTE *v5; // rsi
  unsigned int v7; // ebx
  unsigned int v8; // eax
  __int64 (__fastcall *v9)(__int64, _QWORD *, _QWORD, _QWORD); // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // r15d
  const void *v14; // rax
  bool v15; // zf
  __int64 v16; // rcx
  const char *v17; // rdi
  const char *v18; // rax
  __int64 *v20[9]; // [rsp+8h] [rbp-48h] BYREF

  v5 = (_BYTE *)a3;
  v20[1] = (__int64 *)__readfsqword(0x28u);
  v7 = sub_157230(a1, a3, -1, 128, 0, v20, nullptr);
  if ( !v7 )
  {
    while ( 1 )
    {
      v8 = sub_141DB0((__m128i *)v20[0], (__int64)v5, a4);
      v13 = v8;
      if ( v8 != 100 )
        break;
      v5 = nullptr;
      v14 = (const void *)sub_EDF30(v20[0], 0, (__int64)v9, v10, v11, v12, a4);
      if ( v14 )
      {
        v15 = memcmp(v14, "CRE", 3u) == 0;
        if ( v15 )
          goto LABEL_9;
        v16 = 3;
        v5 = v14;
        v17 = "INS";
        do
        {
          if ( !v16 )
            break;
          v15 = *v5++ == *v17++;
          --v16;
        }
        while ( v15 );
        if ( v15 )
        {
LABEL_9:
          v5 = a2;
          v13 = sub_162780(a1, a2, v14);
          if ( v13 )
            goto LABEL_10;
        }
      }
    }
    if ( !v8 )
      goto LABEL_12;
LABEL_10:
    if ( v13 != 101 )
    {
      v7 = v13;
      v18 = sub_EEFB0(a1, (__int64)v5, (__int64)v9, a4, v10, v11, v12);
      v5 = (_BYTE *)a1;
      sub_DC7E0(a2, a1, v18);
    }
LABEL_12:
    sub_11E660((__int64)v20[0], (__int64)v5, v9, v10, v11, v12);
  }
  return v7;
}
