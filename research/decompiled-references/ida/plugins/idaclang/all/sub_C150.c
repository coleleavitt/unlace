__int64 __fastcall sub_C150(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r12
  __int64 v6; // r15
  __int64 v7; // rax
  const char *v8; // rax
  const char *v9; // r13
  size_t v10; // rax
  size_t v11; // r14
  __int64 v12; // rax
  void *v14; // rdi
  size_t v15; // r15
  __int64 v16; // rax
  __int64 v17; // [rsp+28h] [rbp-38h]

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v2 = sub_BB20();
  v3 = sub_A350(v2);
  v17 = v4;
  v5 = v3;
  v6 = v4;
  v7 = sub_BB20();
  v8 = (const char *)sub_A3E0(v7, v5, v6);
  v9 = v8;
  if ( v8 && (v10 = strlen(v8), (v11 = v10) != 0) )
  {
    v14 = *(void **)a1;
    v15 = v10 + 1;
    if ( *(_QWORD *)(a1 + 16) < v10 + 1 )
    {
      v16 = qvector_reserve(a1, *(_QWORD *)a1, v10 + 1, 1);
      *(_QWORD *)a1 = v16;
      v14 = (void *)v16;
    }
    *(_QWORD *)(a1 + 8) = v15;
    memmove(v14, v9, v11);
    *(_BYTE *)(*(_QWORD *)a1 + v11) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
  }
  v12 = sub_BB20();
  sub_A410(v12, v5, v17);
  return a1;
}

