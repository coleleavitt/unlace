__int64 __fastcall sub_395F30(__int64 a1, __int64 a2, __int64 a3, double a4, double a5, __m128i a6, double a7)
{
  int v10; // eax
  unsigned int v11; // edx
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rsi

  v10 = sub_219F90(*(_QWORD *)(a1 + 24), a2, a3, a4);
  v11 = 0;
  if ( v10 )
  {
    v12 = *(_QWORD *)(a1 + 24);
    if ( v10 == 2 )
    {
      sub_2B9C00(v12);
      v16 = 0;
    }
    else
    {
      sub_2196C0(v12);
      sub_2B9C00(*(_QWORD *)(a1 + 24));
      v16 = 1;
    }
    sub_395A90(a1, v16, a4, v13, v14, v15, a5, a6, a7);
    sub_33E140(*(_QWORD *)(a1 + 128), 0x72u, a1, a2, a3);
    return 1;
  }
  return v11;
}

