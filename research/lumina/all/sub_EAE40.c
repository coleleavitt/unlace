void __fastcall sub_EAE40(__int64 a1, size_t a2)
{
  __int64 v2; // rbx
  int v3; // ebp
  int v5; // eax
  int v6; // r12d
  void *v7; // rdi
  int v8; // edi

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 48);
    if ( !v3 )
    {
      v5 = off_2413C0();
      v6 = v5 >> 15;
      if ( v5 <= 0x7FFF )
        v6 = 1;
      if ( *(_QWORD *)(v2 + 8) )
        ((void (*)(void))*(&xmmword_2414F0 + 1))();
      if ( *(_WORD *)(v2 + 32) )
      {
        do
        {
          v7 = *(void **)(*(_QWORD *)(v2 + 40) + 8LL * v3);
          if ( *(int *)(v2 + 24) < 0 )
          {
            sub_C91C0((__int64)v7, a2);
          }
          else
          {
            a2 = *(int *)(v2 + 28);
            off_241390(v7, a2);
          }
          v3 += v6;
        }
        while ( *(unsigned __int16 *)(v2 + 32) > v3 );
      }
      sub_C91C0(*(_QWORD *)(v2 + 40), a2);
      v8 = *(_DWORD *)(v2 + 24);
      if ( v8 >= 0 )
      {
        if ( off_241180(v8) )
        {
          a2 = 39803;
          sub_EAE20(a1, 0x9B7Bu);
        }
        *(_DWORD *)(v2 + 24) = -1;
      }
      *(_QWORD *)(*(_QWORD *)v2 + 56LL) = 0;
      sub_C91C0(v2, a2);
    }
  }
}
