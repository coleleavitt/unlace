void __fastcall sub_D3DB0(unsigned int *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  char *v6; // rax
  char *v7; // rbp
  __int64 v8; // rdi
  unsigned int v9; // r8d
  __int64 v10; // rcx
  __int64 v11; // rdi
  char *v12; // rax

  v5 = 2 * *a1;
  if ( v5 < 0x100 )
    v5 = 256;
  if ( *a1 && qword_2424C0 )
    qword_2424C0(a1, a2, 256, a4);
  v6 = (char *)sub_D2260(8LL * v5, (__int64)a2);
  v7 = v6;
  if ( *a1 )
  {
    if ( qword_2424C8 )
    {
      qword_2424C8();
      if ( !v7 )
        return;
      v8 = *a2;
      if ( !*a1 )
        goto LABEL_15;
      goto LABEL_10;
    }
    if ( v6 )
    {
      v8 = *a2;
LABEL_10:
      v9 = 0;
      do
      {
        v10 = *(_QWORD *)(v8 + 8LL * v9);
        if ( v10 )
        {
          do
          {
            v11 = *(_QWORD *)(v10 + 24);
            v12 = &v7[8 * (*(_DWORD *)(v10 + 16) % v5)];
            *(_QWORD *)(v10 + 24) = *(_QWORD *)v12;
            *(_QWORD *)v12 = v10;
            v10 = v11;
          }
          while ( v11 );
          v8 = *a2;
        }
        ++v9;
      }
      while ( v9 < *a1 );
LABEL_15:
      sub_C91C0(v8, (__int64)a2);
      *a2 = (__int64)v7;
      *a1 = v5;
    }
  }
  else if ( v6 )
  {
    sub_C91C0(*a2, (__int64)a2);
    *a2 = (__int64)v7;
    *a1 = v5;
  }
}
