unsigned __int64 __fastcall sub_180320(__int64 a1, char a2, int a3)
{
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // [rsp+0h] [rbp-48h]
  unsigned __int64 v10; // [rsp+18h] [rbp-30h]

  v3 = a3;
  v10 = __readfsqword(0x28u);
  v9 = 0;
  v4 = a3 + 1LL;
  if ( a3 == -1 )
  {
    v5 = 0;
  }
  else
  {
    v5 = qvector_reserve();
    v6 = 0;
    v9 = v5;
    if ( v4 )
    {
      do
      {
        v7 = v6;
        *(_BYTE *)(v5 + v6++) = a2;
        v5 = v9;
      }
      while ( v3 != v7 );
    }
  }
  *(_BYTE *)(v5 + v3) = 0;
  idb_utf8();
  if ( v9 )
    qfree();
  return v10 - __readfsqword(0x28u);
}

