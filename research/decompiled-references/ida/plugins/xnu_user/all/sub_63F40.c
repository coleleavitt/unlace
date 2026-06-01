__int64 __fastcall sub_63F40(__int64 *a1, _QWORD *a2, unsigned __int64 *a3, char a4)
{
  char *v4; // rbx
  const char *v5; // r14
  size_t v6; // r15
  __int64 v8; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  void *v14; // rdi
  size_t v15; // rdx
  __int64 v16; // [rsp+0h] [rbp-68h]
  size_t v17; // [rsp+0h] [rbp-68h]
  __int64 v18; // [rsp+8h] [rbp-60h]
  __int64 v19; // [rsp+10h] [rbp-58h]
  __int128 v20; // [rsp+18h] [rbp-50h]

  v8 = a2[1];
  v10 = *a3;
  if ( !v8 )
  {
    if ( !v10 )
    {
      v5 = s;
      goto LABEL_6;
    }
LABEL_16:
    if ( under_debugger )
      BUG();
    interr();
    goto LABEL_18;
  }
  if ( v8 - 1 < v10 )
    goto LABEL_16;
  v5 = (const char *)(*a2 + v10);
LABEL_6:
  v4 = strchr(v5, a4);
  if ( v4 )
  {
    if ( !a1 )
    {
LABEL_11:
      *a3 = (unsigned __int64)&v4[-*a2 + 1];
      return 1;
    }
    v11 = 0;
    v12 = 0;
    v19 = 0;
    v20 = 0;
    v6 = v4 - v5;
    if ( v4 == v5 )
    {
LABEL_9:
      if ( *a1 )
      {
        a1[1] = 0;
        v18 = v11;
        v16 = v12;
        qfree();
        a1[1] = v6;
        *a1 = v16;
        a1[2] = v18;
      }
      else
      {
        *a1 = v12;
        a1[1] = v6;
        a1[2] = v11;
      }
      goto LABEL_11;
    }
    v14 = nullptr;
    v15 = v6 + 1;
    if ( v6 == -1 )
    {
LABEL_15:
      *(_QWORD *)&v20 = v15;
      memmove(v14, v5, v6);
      *(_BYTE *)(v19 + v6) = 0;
      v12 = v19;
      v11 = *((_QWORD *)&v20 + 1);
      v6 = v20;
      goto LABEL_9;
    }
LABEL_18:
    v17 = v15;
    v19 = qvector_reserve();
    v15 = v17;
    v14 = (void *)v19;
    goto LABEL_15;
  }
  return 0;
}

