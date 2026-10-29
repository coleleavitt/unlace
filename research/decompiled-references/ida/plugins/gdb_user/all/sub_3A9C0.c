__int64 __fastcall sub_3A9C0(__int64 a1)
{
  int v2; // eax
  char *v3; // rdi
  unsigned int v4; // edx
  int v6; // eax
  unsigned __int64 v7; // rax
  _BYTE *v8; // rsi
  unsigned __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rax
  char *v12; // [rsp+0h] [rbp-38h] BYREF
  __int128 v13; // [rsp+8h] [rbp-30h]
  unsigned __int64 v14; // [rsp+18h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  v13 = 0;
  v12 = (char *)qvector_reserve();
  *(_QWORD *)&v13 = 3;
  strcpy(v12, "qC");
  v2 = sub_39C70(a1, &v12);
  v3 = v12;
  if ( v2 != 1 || (v6 = sub_39BC0(a1), *(_BYTE *)(a1 + 16) = 0, v3 = v12, v6 != 1) )
  {
    if ( v3 )
    {
      *(_QWORD *)&v13 = 0;
      qfree();
    }
    return (unsigned int)-1;
  }
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree();
  }
  v7 = *(_QWORD *)(a1 + 32);
  if ( v7 <= 2 )
    return (unsigned int)-1;
  v8 = *(_BYTE **)(a1 + 24);
  if ( *v8 != 81 || v8[1] != 67 )
    return (unsigned int)-1;
  v9 = *(_QWORD *)(a1 + 40);
  LOBYTE(v12) = 0;
  if ( v9 < v7 + 1 )
  {
    v11 = qvector_reserve();
    *(_QWORD *)(a1 + 24) = v11;
    v8 = (_BYTE *)v11;
    v7 = *(_QWORD *)(a1 + 32);
  }
  v8[v7] = 0;
  v10 = *(_QWORD *)(a1 + 24);
  ++*(_QWORD *)(a1 + 32);
  v4 = strtol((const char *)(v10 + 2), nullptr, 16);
  if ( !v4 )
    return (unsigned int)-1;
  return v4;
}

