unsigned __int64 __fastcall sub_5E00(__int64 a1, __int64 a2)
{
  char v3; // bp
  _BYTE v4[8]; // [rsp+8h] [rbp-1060h] BYREF
  void *ptr; // [rsp+10h] [rbp-1058h] BYREF
  char v6; // [rsp+30h] [rbp-1038h] BYREF
  char s[4103]; // [rsp+31h] [rbp-1037h] BYREF
  unsigned __int64 v8; // [rsp+1038h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  qtmpnam();
  set_file_ext();
  if ( (unsigned __int8)sub_49D0(&v6, a1, a2) )
  {
    if ( v6 )
      strlen(s);
    QT::QString::fromUtf8();
    QT::QUrl::fromLocalFile();
    v3 = QT::QDesktopServices::openUrl((QT::QDesktopServices *)v4, (const QT::QUrl *)&ptr);
    QT::QUrl::~QUrl((QT::QUrl *)v4);
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    {
      free(ptr);
      if ( v3 )
        return v8 - __readfsqword(0x28u);
    }
    else if ( v3 )
    {
      return v8 - __readfsqword(0x28u);
    }
    sub_5470((__int64)"failed to openUrl\n");
  }
  return v8 - __readfsqword(0x28u);
}

