unsigned __int64 __fastcall sub_57670(int a1, __int64 a2, __int64 a3)
{
  char v5; // dl
  __int64 v6; // r15
  unsigned __int64 v7; // r13
  const char *v8; // rsi
  __int64 v9; // rax
  int v10; // ecx
  int v11; // r8d
  const char *v12; // rdx
  __int64 v14; // [rsp+10h] [rbp-58h] BYREF
  __int128 v15; // [rsp+18h] [rbp-50h]
  unsigned __int64 v16; // [rsp+28h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  v14 = 0;
  v15 = 0;
  while ( 1 )
  {
    sub_57530(a2, (const char **)a3);
    if ( v5 )
      break;
    if ( (unsigned __int64)v15 <= 1 )
      sub_15ED0(&v14);
    v6 = *(_QWORD *)(a3 + 8);
    v7 = 2;
    if ( v6 )
      v7 = v6-- + 1;
    v8 = *(const char **)a3;
    if ( *(_QWORD *)(a3 + 16) < v7 )
    {
      v9 = qvector_reserve();
      *(_QWORD *)a3 = v9;
      v8 = (const char *)v9;
    }
    *(_QWORD *)(a3 + 8) = v7;
    v8[v6] = 95;
    *(_BYTE *)(*(_QWORD *)a3 + v6 + 1) = 0;
  }
  if ( (unsigned __int64)v15 > 1 )
  {
    sub_55970(&v14);
    v12 = src;
    if ( (_QWORD)v15 )
      LODWORD(v12) = v14;
    sub_70460(a1, (unsigned int)"%s\n", (_DWORD)v12, v10, v11);
  }
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree();
  }
  return v16 - __readfsqword(0x28u);
}

