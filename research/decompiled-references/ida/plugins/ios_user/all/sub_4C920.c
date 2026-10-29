unsigned __int64 __fastcall sub_4C920(int a1, __int64 a2, __int64 a3)
{
  char v5; // dl
  __int64 v6; // r15
  unsigned __int64 v7; // r13
  const char *v8; // rsi
  __int64 v9; // rax
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  const char *v13; // rdx
  __int64 v15; // [rsp+10h] [rbp-58h] BYREF
  __int128 v16; // [rsp+18h] [rbp-50h]
  unsigned __int64 v17; // [rsp+28h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  v15 = 0;
  v16 = 0;
  while ( 1 )
  {
    sub_4C7E0(a2, (const char **)a3);
    if ( v5 )
      break;
    if ( (unsigned __int64)v16 <= 1 )
      sub_15620(&v15);
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
  if ( (unsigned __int64)v16 > 1 )
  {
    sub_20960(&v15);
    v13 = s;
    if ( (_QWORD)v16 )
      LODWORD(v13) = v15;
    sub_65BB0(a1, (unsigned int)"%s\n", (_DWORD)v13, v10, v11, v12);
  }
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree();
  }
  return v17 - __readfsqword(0x28u);
}

