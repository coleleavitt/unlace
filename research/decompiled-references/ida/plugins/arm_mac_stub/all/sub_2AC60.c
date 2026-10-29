__int64 __fastcall sub_2AC60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 (__fastcall *v7)(__int64, unsigned __int8, __int64); // rax
  unsigned int *v8; // rbx
  __int64 v9; // rax
  int v10; // r13d
  char *v11; // rbp
  char *v12; // rax
  size_t v14; // rax
  size_t v15; // r14
  void *v16; // rdi
  size_t v17; // r15
  __int64 v18; // rax
  char *s; // [rsp+0h] [rbp-58h] BYREF
  char *v20; // [rsp+8h] [rbp-50h]
  unsigned __int64 v21; // [rsp+18h] [rbp-40h]

  v4 = a1 + 864;
  v5 = *(_QWORD *)(a1 + 864);
  v21 = __readfsqword(0x28u);
  v7 = *(__int64 (__fastcall **)(__int64, unsigned __int8, __int64))(v5 + 16);
  if ( v7 == sub_BE00 )
    v8 = (unsigned int *)sub_2E450(v4, *(unsigned __int8 *)(*(_QWORD *)a2 + 4LL), a2, 0);
  else
    v8 = (unsigned int *)v7(v4, *(_BYTE *)(*(_QWORD *)a2 + 4LL), a2);
  if ( v8 )
  {
    v9 = *v8;
    s = (char *)v8 + 5;
    v20 = (char *)v8 + v9 + 5;
    v10 = unpack_dd();
    if ( v10 > 0 )
    {
      sub_30140(a1 + 272, &s);
      sub_2A300(a1);
    }
    else if ( a3 )
    {
      v11 = s;
      v12 = s;
      do
      {
        if ( v12 >= v20 )
          goto LABEL_9;
        ++v12;
      }
      while ( *(v12 - 1) );
      s = v12;
      if ( !v11 || (v14 = strlen(v11), (v15 = v14) == 0) )
      {
LABEL_9:
        *(_QWORD *)(a3 + 8) = 0;
        goto LABEL_10;
      }
      v16 = *(void **)a3;
      v17 = v14 + 1;
      if ( *(_QWORD *)(a3 + 16) < v14 + 1 )
      {
        v18 = qvector_reserve();
        *(_QWORD *)a3 = v18;
        v16 = (void *)v18;
      }
      *(_QWORD *)(a3 + 8) = v17;
      memmove(v16, v11, v15);
      *(_BYTE *)(*(_QWORD *)a3 + v15) = 0;
    }
LABEL_10:
    qfree();
  }
  else
  {
    return (unsigned int)-2;
  }
  return (unsigned int)v10;
}

