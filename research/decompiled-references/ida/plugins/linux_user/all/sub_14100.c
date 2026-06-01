void __fastcall sub_14100(__int64 a1, const void *a2, size_t a3, int a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  struct _Unwind_Exception *v8; // rbp

  if ( *(int *)a1 >= -1 )
  {
    if ( *(_QWORD *)(a1 + 8) )
    {
      *(_QWORD *)(a1 + 16) = 0;
      qfree();
    }
    *(_DWORD *)a1 = -2;
  }
  *(_QWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  if ( a3 )
  {
    v6 = qvector_reserve();
    v7 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = v6;
    memset((void *)(v6 + v7), 0, a3 - v7);
    *(_QWORD *)(a1 + 16) = a3;
    memcpy(*(void **)(a1 + 8), a2, a3);
  }
  *(_DWORD *)a1 = a4;
  if ( a4 < -1 )
  {
    if ( !under_debugger )
    {
      v8 = (struct _Unwind_Exception *)interr();
      if ( *(_QWORD *)(a1 + 8) )
      {
        *(_QWORD *)(a1 + 16) = 0;
        qfree();
      }
      _Unwind_Resume(v8);
    }
    BUG();
  }
}

