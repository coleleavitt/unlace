unsigned __int64 __fastcall sub_20270(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rdi
  unsigned __int64 v4; // r12
  bool v5; // zf
  const char *v6; // rdx
  __int64 *v7; // rax
  const char *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r13
  size_t v13; // rax
  const char *v14; // rbp
  const char *v16; // r14
  void *v17; // rax
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v19; // [rsp+8h] [rbp-40h]
  unsigned __int64 v20; // [rsp+18h] [rbp-30h]

  v3 = a1 + 3;
  v20 = __readfsqword(0x28u);
  if ( v3 != (_QWORD *)a2 )
  {
    v4 = *(_QWORD *)(a2 + 8);
    if ( v4 > 1 )
    {
      v16 = *(const char **)a2;
      v17 = (void *)a1[3];
      if ( a1[5] < v4 )
      {
        v17 = (void *)qvector_reserve(v3, a1[3], *(_QWORD *)(a2 + 8), 1);
        a1[3] = v17;
      }
      a1[4] = v4;
      memmove(v17, v16, v4 - 1);
      *(_BYTE *)(a1[3] + v4 - 1) = 0;
    }
    else
    {
      a1[4] = 0;
    }
  }
  v5 = *(_QWORD *)(a2 + 8) == 0;
  ptr = nullptr;
  v6 = s1;
  v19 = 0;
  if ( !v5 )
    v6 = *(const char **)a2;
  v7 = sub_1AC30((__int64 *)&ptr, (__int64)"$ xref graph : %s data", v6);
  v8 = s1;
  if ( v7[1] )
    v8 = (const char *)*v7;
  netnode_rename(a1[6], v8, 0);
  if ( ptr )
  {
    *(_QWORD *)&v19 = 0;
    qfree(ptr, v8, v9, v10);
  }
  v11 = sub_345D0(a1);
  if ( v11 )
  {
    v12 = *(_QWORD *)(v11 + 96);
    v13 = 0;
    v14 = s1;
    if ( a1[4] )
    {
      v14 = (const char *)a1[3];
      if ( v14 )
      {
        if ( *v14 )
          v13 = strlen(v14 + 1) + 1;
      }
    }
    QT::QString::fromUtf8(&ptr, v13, v14);
    QT::QWidget::setWindowTitle(v12, &ptr);
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
      free(ptr);
  }
  return v20 - __readfsqword(0x28u);
}

