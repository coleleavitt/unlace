__int64 __fastcall sub_45030(__int64 a1, unsigned __int8 a2, __int64 *a3)
{
  __int64 v4; // r9
  char v6; // [rsp+0h] [rbp-18h]

  if ( (unsigned int)sub_44E20(qword_753F8, (double *)a3, a1, 128, a2, 0, 0, nullptr) )
  {
    *a3 = 0;
    return 0;
  }
  else
  {
    sub_43340(*(_QWORD *)(qword_753F8 + 5512), 2, nullptr, *a3, a1, v4, v6);
    return 1;
  }
}

