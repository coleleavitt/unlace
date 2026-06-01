__int64 __fastcall PyW_IsSequenceType(__int64 a1)
{
  if ( !(*(unsigned int (**)(void))(qword_24798 + 832))() )
    return 0;
  if ( (*(__int64 (__fastcall **)(__int64))(qword_24798 + 856))(a1) == -1
    || (*(__int64 (**)(void))(qword_24798 + 424))() )
  {
    (*(void (**)(void))(qword_24798 + 400))();
    return 0;
  }
  return 1;
}

