void __fastcall sub_198CE0(char a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r9
  void *v6; // rdi
  __int64 v7; // rax
  void (*v8)(void); // rbp
  void *v9; // rbp

  byte_2439AC = 1;
  if ( qword_2439B0 )
  {
    if ( qword_2439B8 )
    {
      v2 = operator new(0x20u);
      *(_QWORD *)(v2 + 8) = 0;
      v3 = v2;
      *(_QWORD *)(v2 + 16) = 0;
      *(_QWORD *)v2 = off_23CFA8;
      *(_DWORD *)(v2 + 24) = a2;
      *(_BYTE *)(v2 + 28) = a1;
      if ( (unsigned __int8)sub_19A430() )
      {
        while ( 1 )
        {
          v9 = qword_2439B8;
          if ( !qword_2439B8 )
            break;
          v7 = *((_QWORD *)qword_2439B8 + 1);
          if ( !v7 )
          {
            if ( *(_QWORD *)qword_2439B8 )
              j__free(*(void **)qword_2439B8);
            j__free(v9);
            break;
          }
          v8 = *(void (**)(void))(*(_QWORD *)qword_2439B8 + 8 * v7 - 8);
          sub_198BE0((__int64)v8);
          v8();
        }
        qword_2439B8 = nullptr;
        if ( *(_BYTE *)(v3 + 28) )
          exit(*(_DWORD *)(v3 + 24));
      }
      else
      {
        interr_exc_t___vtable_at_1764016(
          0x56u,
          (__int64 (__fastcall ***)(_QWORD))v3,
          (const __m128i *)((char *)&dword_0 + 2),
          (const __m128i *)&interr_exc_t___vtable_at_1764016,
          v4,
          v5);
      }
      if ( v3 )
      {
        v6 = *(void **)(v3 + 16);
        *(_QWORD *)v3 = &off_23D510;
        sub_199D50(v6);
        operator delete((void *)v3, 0x20u);
      }
    }
  }
  else if ( a1 )
  {
    exit(a2);
  }
}
