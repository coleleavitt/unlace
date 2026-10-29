unsigned __int64 sub_3E010()
{
  const char *v1; // rax
  const char *v2; // rbx
  size_t v3; // rax
  size_t v4; // rax
  QT::QByteArray *v5; // rax
  void *ptr[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v7; // [rsp+10h] [rbp-28h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  if ( !dword_4FE14 )
  {
    v1 = (const char *)QT::QMetaObject::className((QT::QMetaObject *)&off_4EB40);
    v7 = 0;
    v2 = v1;
    *(_OWORD *)ptr = 0;
    v3 = strlen(v1);
    QT::QByteArray::reallocData(ptr, v3 + 1, 1);
    if ( ptr[0] && *((_QWORD *)ptr[0] + 1) )
      *((_DWORD *)ptr[0] + 1) |= 1u;
    v4 = 0;
    if ( v2 )
      v4 = strlen(v2);
    v5 = (QT::QByteArray *)QT::QByteArray::insert(ptr, v7, v4, v2);
    QT::QByteArray::append(v5, 42);
    dword_4FE14 = sub_3DF60((__int64)ptr);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
  }
  return v8 - __readfsqword(0x28u);
}
