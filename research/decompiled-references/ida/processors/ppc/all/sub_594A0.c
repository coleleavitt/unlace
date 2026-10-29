void __fastcall sub_594A0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdx
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx

  v2 = a1[1];
  v3 = (_QWORD *)(*a1 + 8 * v2);
  if ( (_QWORD *)*a1 == v3 )
    goto LABEL_6;
  v4 = (_QWORD *)*a1;
  while ( a2 != *v4 )
  {
    if ( v3 == ++v4 )
      goto LABEL_6;
  }
  if ( v4 == v3 )
  {
LABEL_6:
    v5 = v2 + 1;
    if ( a1[2] < v5 )
    {
      v6 = qvector_reserve(a1, *a1, v5, 8);
      v7 = a1[1];
      *a1 = v6;
      v3 = (_QWORD *)(v6 + 8 * v7);
    }
    *v3 = a2;
    ++a1[1];
  }
}

