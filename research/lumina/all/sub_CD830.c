void *__fastcall sub_CD830(__int64 *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  void *result; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdi

  result = &unk_1BAAA0;
  if ( a1 )
  {
    v8 = *(_QWORD *)(*a1 + 24);
    if ( v8 )
      xmmword_241500(v8);
    v9 = a1[20];
    if ( v9 && (a3 = *((unsigned __int16 *)a1 + 96), (unsigned int)a3 > a2) )
    {
      return (void *)(v9 + 56LL * (int)a2);
    }
    else
    {
      v10 = *a1;
      *(_DWORD *)(v10 + 80) = 25;
      sub_CA220((__int64 *)v10, 25, a3, a4, a5, a6);
      return &unk_1BAAA0;
    }
  }
  return result;
}
