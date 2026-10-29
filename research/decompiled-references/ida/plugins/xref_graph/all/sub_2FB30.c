unsigned __int64 __fastcall sub_2FB30(_QWORD *a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v5; // r14
  volatile signed __int32 *v6; // rax
  __int64 v7; // r13
  void *v8[4]; // [rsp+0h] [rbp-68h] BYREF
  void *ptr[3]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v10; // [rsp+38h] [rbp-30h]

  v1 = 0;
  v2 = a1[2];
  v10 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(v2 + 64);
  if ( v3 )
    v1 = *(_QWORD *)(v3 + 48);
  if ( *a1 > v1 )
  {
    v7 = *(_QWORD *)(a1[1] + 80LL);
    QT::QString::fromUtf8(ptr, 16, "%1 nodes deleted");
    QT::QString::arg(v8, ptr, *a1 - v1, 0, 10, 32);
    sub_2E530(v7, (__int64)v8);
    v6 = (volatile signed __int32 *)v8[0];
    if ( v8[0] )
    {
LABEL_7:
      if ( !_InterlockedSub(v6, 1u) )
        free(v8[0]);
    }
  }
  else
  {
    if ( *a1 >= v1 )
      return v10 - __readfsqword(0x28u);
    v5 = *(_QWORD *)(a1[1] + 80LL);
    QT::QString::fromUtf8(ptr, 14, "%1 nodes added");
    QT::QString::arg(v8, ptr, v1 - *a1, 0, 10, 32);
    sub_2E530(v5, (__int64)v8);
    v6 = (volatile signed __int32 *)v8[0];
    if ( v8[0] )
      goto LABEL_7;
  }
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v10 - __readfsqword(0x28u);
}

