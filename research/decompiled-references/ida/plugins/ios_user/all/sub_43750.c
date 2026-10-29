__int64 __fastcall sub_43750(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // r12
  __int64 v6; // r15
  size_t v7; // rbx
  char v8; // al
  void *v9; // r13
  void *v10; // rdi
  unsigned int v11; // eax
  unsigned int v12; // ebx
  void *v14; // rdi
  size_t v16; // [rsp+18h] [rbp-60h]
  void *src; // [rsp+20h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+28h] [rbp-50h]
  unsigned __int64 v19; // [rsp+38h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 1360) == 6 || a4 <= 0 )
  {
    return (unsigned int)-1;
  }
  else
  {
    src = nullptr;
    v5 = a4;
    v6 = 0;
    *(_OWORD *)n = 0;
    while ( 1 )
    {
      v7 = v5 - v6;
      v8 = sub_5D4E0(*(_QWORD *)(a1 + 864), v6 + a2, v5 - v6, &src);
      v9 = src;
      if ( !v8 )
        break;
      v14 = (void *)(a3 + v6);
      v16 = n[0];
      if ( n[0] <= v7 )
        v7 = n[0];
      v6 += v7;
      memcpy(v14, src, v7);
      if ( !v16 || v6 >= v5 )
        goto LABEL_9;
    }
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 864) + 250LL) )
    {
      v12 = -2;
      goto LABEL_12;
    }
    if ( v7 > n[0] )
      v7 = n[0];
    v10 = (void *)(v6 + a3);
    v6 += v7;
    memcpy(v10, src, v7);
LABEL_9:
    v11 = 0;
    if ( v6 >= 0 )
      v11 = v6;
    v12 = v11;
LABEL_12:
    if ( v9 )
    {
      n[0] = 0;
      qfree();
    }
  }
  return v12;
}

