__int64 __fastcall sub_334940(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v8; // [rsp+0h] [rbp-58h] BYREF
  __int128 v9; // [rsp+8h] [rbp-50h]
  unsigned __int64 v10; // [rsp+18h] [rbp-40h]

  v10 = __readfsqword(0x28u);
  v8 = 0;
  v9 = 0;
  if ( a2 > 0 )
  {
    v2 = qvector_reserve();
    v3 = v9;
    v8 = v2;
    if ( (unsigned __int64)v9 < a2 + 1LL )
    {
      do
      {
        v4 = v3;
        *(_BYTE *)(v2 + v3++) = 32;
        v2 = v8;
      }
      while ( a2 != v4 );
    }
    *(_QWORD *)&v9 = a2 + 1LL;
    *(_BYTE *)(v2 + a2) = 0;
  }
  sub_FA450(&v8);
  if ( (unsigned __int64)v9 <= 1 )
  {
    v6 = 0;
  }
  else
  {
    v5 = tag_remove();
    v6 = v5;
    if ( v5 > 0 )
      qfputs();
  }
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree();
  }
  return v6;
}

