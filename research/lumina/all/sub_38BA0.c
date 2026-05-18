_BOOL8 __fastcall sub_38BA0(_QWORD *a1, __int64 a2)
{
  int v3; // r8d
  int v4; // r9d
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned __int8 *v7; // r15
  unsigned __int8 *v8; // rbx
  char *v9; // r14
  int v10; // ecx
  __int64 v11; // rbx
  unsigned __int64 v12; // r12
  _BYTE *v13; // rsi
  const char *v14; // rdx
  bool v16; // [rsp+Fh] [rbp-479h]
  void *ptr; // [rsp+20h] [rbp-468h] BYREF
  __int128 v18; // [rsp+28h] [rbp-460h]
  char v19; // [rsp+40h] [rbp-448h] BYREF
  _BYTE v20[8]; // [rsp+440h] [rbp-48h] BYREF
  unsigned __int64 v21; // [rsp+448h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  v16 = a1[6] > 1u;
  if ( a1[6] <= 1u )
    return v16;
  v18 = 0;
  ptr = nullptr;
  sub_299F0((char **)&ptr);
  if ( *(_BYTE *)(*a1 + 8LL) == 16 )
  {
    sub_2AAE0((__int64 *)&ptr);
    sub_2AAE0((__int64 *)&ptr);
    v5 = a1[1];
    if ( v5 )
      goto LABEL_4;
  }
  else
  {
    v5 = a1[1];
    if ( v5 )
    {
LABEL_4:
      v6 = *(_QWORD *)(v5 + 16);
      v7 = *(unsigned __int8 **)(v5 + 8);
      if ( v6 )
      {
        v8 = &v7[v6];
        v9 = &v19;
        do
        {
          v10 = *v7++;
          v9 += (int)sub_19D9D0((_DWORD)v9, v20 - v9, (unsigned int)"%02X", v10, v3, v4);
        }
        while ( v8 != v7 );
      }
      sub_2AAE0((__int64 *)&ptr);
    }
  }
  v11 = v18;
  v12 = 2;
  if ( (_QWORD)v18 )
  {
    v12 = v18 + 1;
    v11 = v18 - 1;
  }
  v13 = ptr;
  if ( *((_QWORD *)&v18 + 1) < v12 )
  {
    ptr = (void *)sub_1987B0(&ptr, ptr, v12, 1);
    v13 = ptr;
  }
  *(_QWORD *)&v18 = v12;
  v14 = s1;
  v13[v11] = 41;
  *((_BYTE *)ptr + v11 + 1) = 0;
  if ( (_QWORD)v18 )
    v14 = (const char *)ptr;
  sub_2F0E0(a2, (__int64)"%s\n", v14);
  if ( ptr )
  {
    *(_QWORD *)&v18 = 0;
    j__free(ptr);
  }
  return v16;
}
