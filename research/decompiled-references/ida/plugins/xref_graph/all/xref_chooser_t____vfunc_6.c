void __fastcall xref_chooser_t__::vfunc_6(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbp
  _QWORD *v6; // rdx
  int v8; // r14d
  __int64 v9; // rax
  size_t v10; // rax
  size_t v11; // r15
  __int64 v12; // rdx
  void *v13; // rdi
  const char *v14; // r8
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 *v17; // rbx
  __int64 v18; // rax
  const char *src; // [rsp+0h] [rbp-48h]
  void *srca; // [rsp+0h] [rbp-48h]
  const char *v21; // [rsp+8h] [rbp-40h]

  v5 = 24 * a5;
  v6 = (_QWORD *)(24 * a5 + *(_QWORD *)(a1 + 216));
  if ( v6[1] )
  {
    v8 = 0;
    v9 = 0;
    do
    {
      v15 = 24 * v9;
      v16 = v15 + *v6;
      v17 = (__int64 *)(*a2 + v15);
      if ( *(_QWORD *)(v16 + 8)
        && *(_QWORD *)v16
        && (src = *(const char **)v16, v10 = strlen(*(const char **)v16), (v11 = v10) != 0) )
      {
        v12 = v10 + 1;
        v13 = (void *)*v17;
        v14 = src;
        if ( v17[2] < v10 + 1 )
        {
          srca = (void *)(v10 + 1);
          v21 = v14;
          v18 = qvector_reserve(v17, *v17, v12, 1);
          v14 = v21;
          v12 = (__int64)srca;
          *v17 = v18;
          v13 = (void *)v18;
        }
        v17[1] = v12;
        memmove(v13, v14, v11);
        *(_BYTE *)(*v17 + v11) = 0;
      }
      else
      {
        v17[1] = 0;
      }
      v9 = ++v8;
      v6 = (_QWORD *)(v5 + *(_QWORD *)(a1 + 216));
    }
    while ( (unsigned __int64)v8 < v6[1] );
  }
}

