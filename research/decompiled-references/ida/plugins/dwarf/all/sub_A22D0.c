void __fastcall sub_A22D0(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v5; // r12
  __int64 i; // rbp
  __int64 v7; // rax
  __int64 v8; // rdx

  v3 = a2[1];
  if ( v3 )
  {
    v5 = 0;
    for ( i = 1; ; ++i )
    {
      if ( a3 )
      {
        (*(void (**)(__int64, const char *, ...))(*(_QWORD *)a3 + 8LL))(a3, "Registering: Compile unit %d of %d", i, v3);
        (**(void (__fastcall ***)(__int64))a3)(a3);
      }
      v7 = v5 + *a2;
      v8 = *(_QWORD *)(v7 + 216);
      if ( v8 )
      {
        *(_QWORD *)(v8 + 88) = v7;
        sub_A1930(*(_QWORD *)(v7 + 216));
      }
      v5 += 264;
      if ( v3 == i )
        break;
    }
  }
}

