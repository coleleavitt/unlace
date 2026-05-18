unsigned __int64 __fastcall sub_D6420(__int64 a1, __int64 *a2)
{
  __int64 *v4; // rbp
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 32) )
    {
      v4 = *(__int64 **)a1;
      v5 = **(_QWORD **)a1;
      if ( v5 )
      {
        a2 = &v8;
        v8 = 1;
        sub_D63C0(v5, (void **)&v8);
        *((_DWORD *)v4 + 2) = 0;
        *v4 = 0;
      }
      v6 = *(_QWORD *)(a1 + 40);
      if ( v6 )
        sub_C9230(v6, (__int64)a2);
      v7 = *(_QWORD *)(a1 + 56);
      if ( v7 )
        sub_C9230(v7, (__int64)a2);
    }
    sub_D6510(*(_QWORD *)(a1 + 8));
    sub_C91C0(a1, (__int64)a2);
  }
  return __readfsqword(0x28u) ^ v9;
}
