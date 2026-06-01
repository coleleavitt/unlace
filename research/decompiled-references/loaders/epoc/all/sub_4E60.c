unsigned __int64 __fastcall sub_4E60(_QWORD *a1, _BYTE *a2, unsigned int a3, unsigned int a4, char a5)
{
  __int64 v5; // r13
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rax
  unsigned int v9; // edx
  size_t v10; // r14
  unsigned __int64 v11; // rcx
  unsigned int v12; // ebp
  __int64 v14; // rax
  const char *v16; // rsi
  __int64 v17; // [rsp+8h] [rbp-60h]
  const char *v18; // [rsp+10h] [rbp-58h] BYREF
  __int128 v19; // [rsp+18h] [rbp-50h]
  unsigned __int64 v20; // [rsp+28h] [rbp-40h]

  v5 = a1[3];
  v20 = __readfsqword(0x28u);
  a1[3] = a3;
  *a2 = 0;
  v7 = a1[3];
  v8 = a1[1];
  if ( v7 < v8 )
  {
    v9 = 1023;
    if ( a4 <= 0x3FF )
      v9 = a4;
    v10 = v9;
    v11 = v9 + v7;
    v12 = v9;
    if ( v7 < v11 )
    {
      if ( v8 >= v11 )
      {
        v17 = v9;
      }
      else
      {
        v14 = v8 - v7;
        v10 = v14;
        if ( v14 <= 0 )
          return v20 - __readfsqword(0x28u);
        v12 = v14;
        v17 = (unsigned int)v14;
      }
      memcpy(a2, (const void *)(*a1 + v7), v10);
      a1[3] += v10;
      a2[v17] = 0;
      if ( a5 )
      {
        v19 = 0;
        v18 = nullptr;
        utf16_utf8(&v18, a2, v12 >> 1);
        v16 = s1;
        if ( (_QWORD)v19 )
          v16 = v18;
        qstrncpy(a2, v16, 1024);
        if ( v18 )
        {
          *(_QWORD *)&v19 = 0;
          qfree(v18);
        }
      }
      a1[3] = v5;
    }
  }
  return v20 - __readfsqword(0x28u);
}
