unsigned __int64 __fastcall sub_27D20(_QWORD *a1)
{
  size_t v1; // rax
  const char *v2; // r14
  _BYTE v4[16]; // [rsp+0h] [rbp-A8h] BYREF
  void *ptr[4]; // [rsp+10h] [rbp-98h] BYREF
  void *v6[4]; // [rsp+30h] [rbp-78h] BYREF
  void *v7[3]; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v8; // [rsp+68h] [rbp-40h]

  v8 = __readfsqword(0x28u);
  netnode_delblob(a1[6], 0, 110);
  QT::QString::fromUtf8(v7, 10, "Xref Graph");
  QT::QString::fromUtf8(v6, 8, "Hex-Rays");
  QT::QSettings::QSettings(v4, v6, v7, 0);
  if ( v6[0] && !_InterlockedSub((volatile signed __int32 *)v6[0], 1u) )
    free(v6[0]);
  if ( v7[0] && !_InterlockedSub((volatile signed __int32 *)v7[0], 1u) )
    free(v7[0]);
  QT::QString::fromUtf8(ptr, 13, "%1/layout/run");
  v1 = 0;
  v2 = s1;
  if ( a1[4] )
  {
    v2 = (const char *)a1[3];
    if ( v2 )
    {
      if ( *v2 )
        v1 = strlen(v2 + 1) + 1;
    }
  }
  QT::QString::fromUtf8(v6, v1, v2);
  QT::QString::arg(v7, ptr, v6, 0, 32);
  QT::QSettings::remove(v4, v7[1], (unsigned __int64)v7[2] | 0x8000000000000000LL);
  if ( v7[0] && !_InterlockedSub((volatile signed __int32 *)v7[0], 1u) )
    free(v7[0]);
  if ( v6[0] && !_InterlockedSub((volatile signed __int32 *)v6[0], 1u) )
    free(v6[0]);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QSettings::~QSettings((QT::QSettings *)v4);
  return v8 - __readfsqword(0x28u);
}
