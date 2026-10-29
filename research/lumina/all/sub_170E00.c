__int64 __fastcall sub_170E00(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // r12
  unsigned int v4; // ebp
  char *v6; // rsi

  v3 = a1[2];
  sub_19A520(v3);
  v4 = *((unsigned __int8 *)a1 + 56);
  if ( !(_BYTE)v4 )
  {
    if ( !(unsigned __int8)sub_170850((__int64)a1) )
    {
      *a2 = "dlopen";
      goto LABEL_3;
    }
    v6 = sub_170B30((__int64)a1);
    if ( !v6 )
      goto LABEL_11;
    if ( !(unsigned __int8)sub_170B80(a1, v6, 0x1000164u) )
    {
      *a2 = "unsupported_version";
      goto LABEL_3;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 16LL))(*a1, a1[4]) )
    {
LABEL_11:
      *a2 = "dlsym";
      goto LABEL_3;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 24LL))(*a1);
    if ( !(unsigned __int8)sub_170D30(a1) )
    {
      *a2 = "openssl";
      goto LABEL_3;
    }
    *((_BYTE *)a1 + 56) = 1;
  }
  v4 = 1;
LABEL_3:
  sub_19A570(v3);
  return v4;
}
