__int64 __fastcall sub_D440(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 (__fastcall *v5)(__int64, int, int *); // rsi
  unsigned int v6; // eax
  _DWORD *v7; // rdx
  __int64 v8; // r12
  void (__fastcall *hexdsp)(__int64, __int64 (__fastcall *)(__int64, int, int *), __int64); // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  __int64 v12; // r12
  void (__fastcall *v13)(__int64, __int64, double); // rax

  if ( a2 == 12 )
  {
    sub_BD50(*(_QWORD *)(a1 + 16) + 1816LL);
  }
  else if ( a2 == 75 )
  {
    LODWORD(v5) = 4;
    if ( (unsigned int)callui(7) == 14598366 )
    {
      v8 = *(_QWORD *)(a1 + 16);
      hexdsp = (void (__fastcall *)(__int64, __int64 (__fastcall *)(__int64, int, int *), __int64))get_hexdsp();
      v5 = sub_ABE0;
      hexdsp(574, sub_ABE0, v8);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) + 4LL) == 13 )
      {
        LODWORD(v5) = 4;
        if ( (unsigned __int8)getinf_flag() )
        {
          v10 = (_QWORD *)operator new(0x1C8u);
          *v10 = &off_3C960;
          v11 = v10 + 1;
          do
          {
            *v11 = 0;
            v11 += 4;
            *(v11 - 3) = 0;
            *((_OWORD *)v11 - 1) = 0;
          }
          while ( v11 != v10 + 57 );
          *(_QWORD *)(*(_QWORD *)(a1 + 16) + 2448LL) = v10;
          v12 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 2448LL);
          v13 = (void (__fastcall *)(__int64, __int64, double))get_hexdsp();
          LODWORD(v5) = v12;
          v13(255, v12, 0.0);
        }
      }
    }
    v6 = *a3;
    if ( *a3 > 0x2F )
    {
      v7 = (_DWORD *)*((_QWORD *)a3 + 1);
      *((_QWORD *)a3 + 1) = v7 + 2;
    }
    else
    {
      v7 = (_DWORD *)(*((_QWORD *)a3 + 2) + v6);
      *a3 = v6 + 8;
    }
    if ( !*v7 )
      sub_D190(*(_QWORD *)(a1 + 16), (int)v5);
  }
  return 0;
}
