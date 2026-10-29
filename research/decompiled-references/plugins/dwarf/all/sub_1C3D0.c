__int64 __fastcall sub_1C3D0(
        _QWORD *a1,
        __int64 a2,
        const char *a3,
        void (__fastcall ***a4)(_QWORD, __int64),
        unsigned __int8 a5)
{
  __int64 v5; // r13
  __int64 i; // rbp
  __int64 v8; // rbx
  __int64 result; // rax
  unsigned int v10; // [rsp+4h] [rbp-44h]

  v5 = a1[1];
  if ( v5 )
  {
    v10 = a5;
    for ( i = 0; i != v5; ++i )
    {
      v8 = 264 * i;
      (**a4)(a4, 264 * i + *a1);
      if ( a2 )
      {
        (*(void (**)(__int64, const char *, ...))(*(_QWORD *)a2 + 8LL))(a2, "%s: Compile unit %d of %d", a3, i + 1, v5);
        (**(void (__fastcall ***)(__int64))a2)(a2);
      }
      result = sub_A1190(v8 + *a1, a4, v10);
    }
  }
  return result;
}
