__int64 __fastcall sub_3DF60(__int64 a1)
{
  unsigned int v1; // ebp
  const void *v2; // r12
  size_t v3; // rdx

  v1 = 0;
  if ( &unk_4FCA0 )
  {
    v1 = dword_4FCAC;
    if ( !dword_4FCAC )
      v1 = QT::QMetaType::registerHelper(&unk_4FCA0);
    if ( &unk_4FCA0 )
    {
      v2 = off_4FCB8;
      if ( off_4FCB8 )
      {
        if ( *(_BYTE *)off_4FCB8 )
        {
          v3 = strlen((const char *)off_4FCB8 + 1) + 1;
          if ( v3 == *(_QWORD *)(a1 + 16) && !memcmp(*(const void **)(a1 + 8), v2, v3) )
            return v1;
          goto LABEL_8;
        }
      }
    }
  }
  if ( *(_QWORD *)(a1 + 16) )
  {
LABEL_8:
    QT::QMetaType::registerNormalizedTypedef(a1, &unk_4FCA0);
    return v1;
  }
  return v1;
}

