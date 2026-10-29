__int64 __fastcall sub_504C0(__int64 a1, const char *a2)
{
  __int64 v2; // rbp
  __int64 result; // rax

  v2 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_6AD00 + 184LL))(qword_6AD00, a1);
  strlen(a2);
  result = sub_4C960(*(_QWORD *)(v2 + 32));
  if ( result <= 0 )
    *(_QWORD *)(v2 + 64) = "irs";
  return result;
}

