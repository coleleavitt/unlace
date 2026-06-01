void __fastcall sub_BB40(_QWORD *a1)
{
  unsigned __int64 v1; // r13
  unsigned __int64 v2; // r13
  __int64 v3; // rbx
  _BYTE *v4; // rax

  v1 = a1[1];
  if ( v1 > 1 )
  {
    v2 = v1 - 1;
    v3 = 0;
    do
    {
      while ( *(char *)(*a1 + v3) < 0 || (unsigned __int8)is_cp_graphical() )
      {
        if ( v2 == ++v3 )
          return;
      }
      v4 = &unk_1A378;
      if ( a1[1] | v3 )
        v4 = (_BYTE *)(v3 + *a1);
      ++v3;
      *v4 = 95;
    }
    while ( v2 != v3 );
  }
}
