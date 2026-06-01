unsigned __int64 __fastcall sub_12F10(__int64 a1, __int64 *a2)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rbx
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rax

  v2 = 0;
  v3 = *a2;
  v4 = *a2 + 224 * a2[1];
  if ( v4 != *a2 )
  {
    do
    {
      if ( *(_BYTE *)v3 )
        v5 = sub_12F10(a1, v3 + 152);
      else
        v5 = *(_QWORD *)(v3 + 184);
      v6 = *(_QWORD *)(v3 + 88);
      if ( v6 )
        v5 += *(_QWORD *)(v3 + 96) * (v6 - 1);
      v7 = *(_QWORD *)(v3 + 80) + v5;
      if ( v2 < v7 )
        v2 = v7;
      v3 += 224;
    }
    while ( v4 != v3 );
  }
  return v2;
}

