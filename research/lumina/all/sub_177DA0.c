void __fastcall __noreturn sub_177DA0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v4; // rbp
  char *v7; // rdi
  __int64 i; // rcx
  __int64 v9; // rbp
  __int64 v10; // r15
  void *v11; // rdi
  void *v12; // rdi
  __int64 v13; // r12
  __int64 j; // rbp
  __int64 v15; // rdi
  __int64 v16; // rdx
  void (__fastcall *v18)(void *); // rax
  __int64 v19; // [rsp+10h] [rbp-A8h] BYREF
  __int128 v20; // [rsp+18h] [rbp-A0h]
  char v21[8]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v22; // [rsp+38h] [rbp-80h]
  __int128 v23; // [rsp+40h] [rbp-78h]
  unsigned __int8 v24[8]; // [rsp+50h] [rbp-68h] BYREF
  char v25; // [rsp+58h] [rbp-60h] BYREF
  unsigned __int64 v26; // [rsp+78h] [rbp-40h]

  v4 = a4;
  v26 = __readfsqword(0x28u);
  v23 = 0;
  v21[0] = 2;
  v22 = a4;
  v19 = 0;
  v20 = 0;
  if ( a4 )
  {
    v7 = &v25;
    for ( i = 6; i; --i )
    {
      *(_DWORD *)v7 = 0;
      v7 += 4;
    }
    v24[0] = 2;
    sub_177BC0(&v19, v4, v24);
    sub_176520((__int64)v24);
    if ( (int)v4 > 0 )
    {
      v9 = 32 * v4;
      v10 = 0;
      do
      {
        sub_1723F0((__m128i *)(v10 + v19), (__m128i *)(a3 + v10));
        v10 += 32;
      }
      while ( v9 != v10 );
    }
  }
  v11 = *(void **)(a1 + 48);
  if ( v11 )
  {
    *(_QWORD *)(a1 + 56) = 0;
    j__free(v11);
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 64) = 0;
  }
  v12 = *(void **)(a1 + 72);
  if ( v12 )
  {
    *(_QWORD *)(a1 + 80) = 0;
    j__free(v12);
    *(_QWORD *)(a1 + 72) = 0;
    *(_QWORD *)(a1 + 88) = 0;
  }
  if ( *(_QWORD *)(a1 + 24) )
  {
    v13 = *(_QWORD *)(a1 + 32);
    if ( v13 )
    {
      for ( j = 0; j != v13; ++j )
      {
        v15 = j;
        sub_176520(*(_QWORD *)(a1 + 24) + 32 * v15);
      }
    }
    v12 = *(void **)(a1 + 24);
    *(_QWORD *)(a1 + 32) = 0;
    j__free(v12);
    *(_QWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 40) = 0;
  }
  v16 = *(_QWORD *)(a1 + 8);
  if ( (*(_DWORD *)(v16 + 120))-- == 1 )
  {
    v18 = (void (__fastcall *)(void *))qword_241EE0[3];
    if ( v18 )
      v18(v12);
  }
  *(_DWORD *)a1 = 0;
  (*(void (__fastcall **)(__int64, char *))(a2 + 8))(v19, v21);
  if ( !unk_2439A0 )
    sub_198E10(291);
  BUG();
}
