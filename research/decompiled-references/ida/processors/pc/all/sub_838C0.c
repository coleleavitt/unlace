__int64 __fastcall sub_838C0(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // eax
  char *v6; // r14
  __int64 v7; // rbx
  signed __int64 v8; // rax
  char *v9; // rdx
  char *v11; // rax
  size_t v12; // rax
  size_t v13; // rbx
  void *v14; // rdi
  size_t v15; // rbp
  __int64 v16; // rax
  __int64 v17; // [rsp+18h] [rbp-460h]
  char s[1024]; // [rsp+30h] [rbp-448h] BYREF
  char v19; // [rsp+430h] [rbp-48h] BYREF
  unsigned __int64 v20; // [rsp+438h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  if ( (char)a1 != a4 )
    return 0;
  if ( !a2 )
    return 1;
  v5 = (char)a1 / SBYTE1(a1);
  if ( v5 )
  {
    v6 = s;
    v7 = 0;
    v17 = v5;
    while ( 1 )
    {
      if ( !(unsigned __int8)print_fpval() )
        qstrncpy();
      v8 = strlen(v6);
      v9 = &v6[v8];
      if ( SBYTE2(a1) > v8 )
      {
        do
          *v9++ = 32;
        while ( v9 - v6 < SBYTE2(a1) );
      }
      ++v7;
      a3 += SBYTE1(a1);
      if ( v17 == v7 )
        break;
      v6 = v9;
    }
    v11 = v9;
    if ( v9 >= &v19 )
    {
      if ( !under_debugger )
        interr();
      BUG();
    }
  }
  else
  {
    v11 = s;
  }
  *v11 = 0;
  v12 = strlen(s);
  v13 = v12;
  if ( !v12 )
  {
    *(_QWORD *)(a2 + 8) = 0;
    return 1;
  }
  v14 = *(void **)a2;
  v15 = v12 + 1;
  if ( *(_QWORD *)(a2 + 16) < v12 + 1 )
  {
    v16 = qvector_reserve();
    *(_QWORD *)a2 = v16;
    v14 = (void *)v16;
  }
  *(_QWORD *)(a2 + 8) = v15;
  memmove(v14, s, v13);
  *(_BYTE *)(*(_QWORD *)a2 + v13) = 0;
  return 1;
}
