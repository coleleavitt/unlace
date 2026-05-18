__int64 __fastcall sub_A8150(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // r13
  size_t v4; // rdx
  const char *v5; // r15
  __int64 v6; // rax

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 24);
  sub_69D50(a2);
  if ( v3 )
  {
    do
    {
      v5 = s1;
      v6 = *(_QWORD *)(a1 + 16) + 24 * v2;
      if ( *(_QWORD *)(v6 + 8) )
        v5 = *(const char **)v6;
      if ( v5 )
      {
        v4 = strlen(v5) + 1;
      }
      else
      {
        v4 = 1;
        v5 = "";
      }
      ++v2;
      sub_9E3C0(a2, v5, v4);
    }
    while ( v3 != v2 );
  }
  sub_69D50(a2);
  return sub_9DA60(a2, *(_BYTE *)(a1 + 41));
}
