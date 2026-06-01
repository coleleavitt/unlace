__int64 __fastcall sub_16630(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, unsigned __int8, __int64); // rax
  unsigned int *v6; // rax
  unsigned int *v7; // rbp
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 i; // rbx
  __int64 v11; // rax
  unsigned int v12; // ebx
  char *v13; // r13
  char *v14; // rax
  size_t v16; // rax
  size_t v17; // r14
  void *v18; // rdi
  size_t v19; // r15
  __int64 v20; // rax
  char *s; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v22; // [rsp+8h] [rbp-60h]
  _QWORD v23[11]; // [rsp+10h] [rbp-58h] BYREF

  v23[3] = __readfsqword(0x28u);
  sub_24D10(v23, 12);
  v4 = a1 + 864;
  v5 = *(__int64 (__fastcall **)(__int64, unsigned __int8, __int64))(*(_QWORD *)v4 + 16LL);
  if ( v5 == sub_9440 )
    v6 = (unsigned int *)sub_216D0(v4, 12, v23, 0);
  else
    v6 = (unsigned int *)v5(v4, 12u, (__int64)v23);
  v7 = v6;
  if ( v6 )
  {
    v8 = *v6;
    v9 = a2[1];
    s = (char *)v7 + 5;
    v22 = (unsigned __int64)v7 + v8 + 5;
    if ( v9 )
    {
      for ( i = 0; i != v9; ++i )
      {
        v11 = *a2 + 32 * i;
        if ( *(_QWORD *)(v11 + 8) )
        {
          *(_QWORD *)(v11 + 16) = 0;
          qfree();
        }
      }
    }
    a2[1] = 0;
    v12 = unpack_dd();
    if ( v12 == 1 )
    {
      sub_21F20(a2, &s);
    }
    else if ( a3 )
    {
      v13 = s;
      v14 = s;
      do
      {
        if ( (unsigned __int64)v14 >= v22 )
          goto LABEL_14;
        ++v14;
      }
      while ( *(v14 - 1) );
      s = v14;
      if ( !v13 || (v16 = strlen(v13), (v17 = v16) == 0) )
      {
LABEL_14:
        *(_QWORD *)(a3 + 8) = 0;
        goto LABEL_15;
      }
      v18 = *(void **)a3;
      v19 = v16 + 1;
      if ( *(_QWORD *)(a3 + 16) < v16 + 1 )
      {
        v20 = qvector_reserve();
        *(_QWORD *)a3 = v20;
        v18 = (void *)v20;
      }
      *(_QWORD *)(a3 + 8) = v19;
      memmove(v18, v13, v17);
      *(_BYTE *)(*(_QWORD *)a3 + v17) = 0;
    }
LABEL_15:
    qfree();
  }
  else
  {
    v12 = -2;
  }
  if ( v23[0] )
  {
    v23[1] = 0;
    qfree();
  }
  return v12;
}

