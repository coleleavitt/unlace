unsigned __int64 __fastcall sub_3A180(_BYTE *a1, __int64 a2, __int64 a3, __int64 (*a4)())
{
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v7; // rbp
  __int64 v8; // r12
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  v4 = (__int64 *)(a1 + 5176);
  if ( !a1[13692] )
    v4 = (__int64 *)(a1 + 5152);
  v5 = v4[1];
  if ( v5 )
  {
    v7 = *v4;
    v8 = *v4 + 24 * v5;
    if ( *v4 != v8 )
    {
      do
      {
        v7 += 24;
        add_til();
      }
      while ( v8 != v7 );
    }
  }
  else
  {
    sub_394B0(a1, a2, nullptr, a4);
  }
  set_compiler();
  a1[13690] = 1;
  return v9 - __readfsqword(0x28u);
}

