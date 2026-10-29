__int64 __fastcall sub_35120(__int64 a1, const char *a2)
{
  __int64 v2; // rbp
  __int64 result; // rax

  v2 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_48840 + 184LL))(qword_48840, a1);
  strlen(a2);
  result = sub_302A0(*(_QWORD *)(v2 + 32));
  if ( result <= 0 )
    *(_QWORD *)(v2 + 64) = "irs";
  return result;
}

