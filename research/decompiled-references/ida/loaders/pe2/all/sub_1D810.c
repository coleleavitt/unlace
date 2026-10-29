__int64 __fastcall sub_1D810(const char *a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  char v7; // [rsp-8h] [rbp-8h]

  result = 0;
  if ( a2 )
  {
    if ( (int)sub_D140(
                1u,
                (__int64)"HIDECANCEL\n"
                         "AUTOHIDE DATABASE\n"
                         "Error at %s code 0x%x\n"
                         "\n"
                         "Do you want to continue to load the file?",
                a1,
                a2) <= 0 )
    {
      if ( qword_47A20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_47A20 + 16LL))(qword_47A20);
      if ( qword_47A18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_47A18 + 16LL))(qword_47A18);
      sub_DB80(
        0,
        (__int64)"HIDECANCEL\nAUTOHIDE DATABASE\nError at %s code 0x%x\n\nDo you want to continue to load the file?",
        v3,
        v4,
        v5,
        v6,
        v7);
    }
    return 1;
  }
  return result;
}

