void __fastcall sub_63A00(__int64 a1)
{
  _QWORD *exception; // rax
  _QWORD *v2; // rax
  int v3; // ecx
  __int64 v4; // rdx
  int v5; // eax
  __int64 i; // rdx
  __int64 v7; // rsi

  if ( *(_DWORD *)(a1 + 64) )
  {
    v2 = (_QWORD *)qrealloc();
    if ( !v2 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    v3 = *(_DWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 528) = v2;
    v4 = *(_QWORD *)(a1 + 520);
    if ( v3 > 0 )
    {
      *v2 = v4;
      v5 = 1;
      for ( i = *(_QWORD *)(v4 + 8); v5 < *(_DWORD *)(a1 + 64); i = *(_QWORD *)(i + 8) )
      {
        v7 = v5++;
        *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v7) = i;
      }
    }
  }
}

